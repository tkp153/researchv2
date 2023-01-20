import rclpy
from rclpy.node import Node
import numpy as np
from mymsg.msg import Poses,MultiTransform,Transform
import time
import math
import tf_transformations
from tf_transformations import euler_from_quaternion
'''
<Memo>
このプログラムは、openpifpafの3次元のデータのkeypointsのデータをサブスクライバーし、keypointsの重心を求めそれぞれの人の座標を入手するのを加えて人が挙手したらその情報を記録するプログラムである。
'''
timer_previous =time.time()

class person_checker(Node):
    def __init__(self):
        super().__init__("person_checker")
        
        
        #QOSProfile 関連設定
        video_qos = rclpy.qos.QoSProfile(depth = 10)
        video_qos.reliability  = rclpy.qos.QoSReliabilityPolicy.BEST_EFFORT
        
        self.sub = self.create_subscription(Poses,"/poses_analysis",self.status_checker,qos_profile= video_qos)
        # 人の座標情報
        self.pub_1 = self.create_publisher(MultiTransform,"/person_check",10)
        #挙手された人の情報
        self.pub_2 =self.create_publisher(Transform,"raise_hand_info",10)
        
        self.count_L = 0
        self.count_R = 0
        
        self.save_id = "abcdef"
        
        init = Transform()
        init.transform.translation.x = 0.0
        init.transform.translation.y = 0.0
        init.transform.translation.z = 0.0
        init.transform.rotation.x = 0.0
        init.transform.rotation.y = 0.0
        init.transform.rotation.z = 0.0
        init.transform.rotation.w = 1.0
        self.save_pos = init
        
        
        
        
    def status_checker(self,data):
        
        #　人の重心座標（すべて）
        Output0 = MultiTransform()
        #挙手された人の重心座標
        Output2 = Transform()
        timer = time.time()
        
        global timer_previous
        
        # パプリッシュ軽減処理の変数
        Publish_Checker = False
        
        # 手を上げた人のデータ
        data_raise_hand_translation = []
        data_raise_hand_mater = []
        
        
        for person in data.poses:
            
            Output1 = Transform()
            
        
            keypoints = np.array(person.keypoints).reshape(-1,4)
            #keypoints = keypoints[keypoints[:, 3] != 0]
            num_keypoints = 16
            
            #共通部分の変数初期化
            key_num = 0
            
            #重心部分の変数初期化
            x_sum_list= []
            y_sum_list= []
            z_sum_list= []
            key_points_count = 0
            
            #挙手部分の変数初期化
            l_num = 0
            r_num = 0
            L_Raise_Hand = False
            R_Raise_Hand = False
            
            
            #一人の処理↓
            for k in keypoints:
                float_value = np.array(k[:3] / 1050.0,dtype=float)
                #座標抽出
                x_pos,y_pos,z_pos = float_value
                
                #重心のポイント判別
                if( key_num == 5 or key_num == 6 or key_num == 11 or key_num == 12):
                    
                    x_sum_list.append(x_pos)
                    y_sum_list.append(y_pos)
                    z_sum_list.append(z_pos)
                    key_points_count += 1
                    
                    # 外積計算用
                    if(key_num == 5):
                        Point_E = np.array([x_pos,y_pos,z_pos])
                    if(key_num == 6):
                        Point_F = np.array([x_pos,y_pos,z_pos])
                    
                    
                    #重心計算処理条件分岐
                    if(key_num == num_keypoints -1 and key_points_count == 4):
                        '''
                        #重心計算関数実行
                        Result_Of_Center_Gravity = self.CenterOfGravity(x_sum_list, y_sum_list, z_sum_list)
                        
                        print(Result_Of_Center_Gravity)
                        if Result_Of_Center_Gravity is not True:
                            Output1.transform.translation.x,Output1.transform.translation.y,Output1.transform.translation.z = Result_Of_Center_Gravity
                            Output1.transform.rotation.x = 0.0
                            Output1.transform.rotation.y = 0.0
                            Output1.transform.rotation.z = 0.0
                            Output1.transform.rotation.w = 1.0
                        
                            Output0.transforms.append(Output1)
                            #OutPut_Cashes = Output1
                    '''
                #挙手検出エリア
                
                '''
                memo:
                openpifpaf のモデル
                右肘がID8,右肩がID6,右腰がID12である。
                左肘がID7,左肩がID5,左腰がID11である
                '''
                
                #左手の動き処理
                if(key_num == 5 or key_num == 7 or key_num == 11):
                
                    if(key_num == 5):
                        Point_O = np.array([x_pos,y_pos,z_pos])
                        r_num += 1
                    if(key_num == 7):
                        Point_A = np.array([x_pos,y_pos,z_pos])
                        r_num += 1
                    if(key_num == 11):
                        Point_B = Point_O - np.array([0,50,0])
                        r_num += 1
                    if(r_num == 3):
                        L_Raise_theta = self.deg_checker(Point_A, Point_B,Point_O)
                        Hand_Switch = "Left"
                        L_Raise_Hand = self.raise_hand_checker(L_Raise_theta,Point_A,Point_B,Hand_Switch)
                        
                        
                #　右手の動き処理
                if(key_num == 6 or key_num == 8 or key_num == 12):
                    if(key_num == 6):
                        Point_X = np.array([x_pos,y_pos,z_pos])
                        l_num += 1
                    if(key_num == 8):
                        Point_C = np.array([x_pos,y_pos,z_pos])
                        l_num += 1
                    if(key_num == 12):
                        Point_D = Point_X - np.array([0,50,0])
                        l_num += 1
                    if(l_num == 3):
                        R_Raise_theta = self.deg_checker(Point_C,Point_D,Point_X)
                        Hand_Switch ="Right"
                        R_Raise_Hand = self.raise_hand_checker(R_Raise_theta,Point_C,Point_D,Hand_Switch)
                            
                
                #カウント増加
                key_num += 1
                #print(key_num)
                
                #手をあげたのか？
                '''
                メモ；　もし人が手を挙げた場合，その手を挙げた人の重心座標を別でパブリッシュを実施するものをスクリプトで製作する。
                '''
                if(key_num == 17 and key_points_count == 4):
                    #print("OK")
                    #重心計算関数実行
                    Result_Of_Center_Gravity = self.CenterOfGravity(x_sum_list, y_sum_list, z_sum_list)
                        
                    #print(Result_Of_Center_Gravity)
                    if Result_Of_Center_Gravity is not None:
                        Output1.transform.translation.x,Output1.transform.translation.y,Output1.transform.translation.z = Result_Of_Center_Gravity
                        
                        dir= self.center_arrow(Output1.transform.translation.x,Output1.transform.translation.y,Output1.transform.translation.z,Point_E,Point_F)
                        yaw_rotate= self.yaw_calc(dir,Result_Of_Center_Gravity)
                        self.get_logger().info("{}".format(yaw_rotate))
                        q = tf_transformations.quaternion_from_euler(0, 0, yaw_rotate)
                        Output1.transform.rotation.x = q[0]
                        Output1.transform.rotation.y = q[1]
                        Output1.transform.rotation.z = q[2]
                        Output1.transform.rotation.w = q[3]
                        
                        Publish_Checker = True
                        
                        Output0.transforms.append(Output1)
                    
                    
                    #print("timer: {}".format(timer))
                    #print("pre_timer:{}".format(timer_previous) )
                    if(Result_Of_Center_Gravity is not None):
                    
                        if(L_Raise_Hand == True and R_Raise_Hand == True):
                            #self.pub_2.publish(Output1)
                            data_raise_hand_translation.append(Output1)
                            data_raise_hand_mater.append(self.calc_mater(Output1))
                            timer_previous = timer
                        elif(L_Raise_Hand == True):
                            print("You are Raise the Left Hand")
                            #self.pub_2.publish(Output1)
                            data_raise_hand_translation.append(Output1)
                            data_raise_hand_mater.append(self.calc_mater(Output1))
                            timer_previous = timer
                        elif(R_Raise_Hand == True):
                            print("You are Raise the  right Hand")
                            #self.pub_2.publish(Output1)
                            data_raise_hand_translation.append(Output1)
                            data_raise_hand_mater.append(self.calc_mater(Output1))
                            timer_previous = timer

        #全員分↓
                        
        Output0.id = data.id 
        #IDの配列化
        ids = []
        for i in data.id:
            ids.append(i)
        
        #もし前回のIDが含まれた場合優先的にパブリッシュを行う。
        if(self.save_id in data.id):
            #リスト内にそのIDがあるどうか検索にする。
            self.pub_2.publish(self.save_pos)

            id_num = ids.index(self.save_id)
            self.pos = Output0[id_num]
            self.pub_2.publish(self.pos)
        elif(len(data_raise_hand_translation) > 0):
            #ソート実施 -- 一番遠い手を挙げている人
            print(data_raise_hand_mater)
            print(data_raise_hand_translation)
            min_value = min(data_raise_hand_mater)
            max_index = data_raise_hand_mater.index(min_value)
            self.pub_2.publish(data_raise_hand_translation[max_index])
            
            #self.pub_2.publish(data_raise_hand_translation(data_raise_hand_mater.index(max(data_raise_hand_mater))))
        
            #キャッシュ生成
            self.save_id = data.id[max_index]
            self.save_pos = data_raise_hand_translation[max_index]
        
        # パブリッシュ軽減処理
        if(Publish_Checker == True):    
            #人の重心座標パブリッシュ
            self.pub_1.publish(Output0)
            
        else:
            pass       
                
    #重心計算メゾット
    def CenterOfGravity(self,x_sum,y_sum,z_sum):
        X_data = x_sum
        Y_data = y_sum
        Z_data = z_sum 
        #print("CH")
        #キーポイント検索（キーポイント未検出があるかどうか）
        # 含まれていなかったらTRUEを返す。
        #X_data_result = 0.0 not in X_data
        #Y_data_result = 0.0 not in Y_data
        #Z_data_result = 0.0 not in Z_data
        
        X_data_result = True
        Y_data_result = True
        Z_data_result = True
        
        if(X_data_result == True and Y_data_result == True and Z_data_result == True):
            #print("MJ")
            #重心計算
            X_Center = sum(X_data) / 4 
            Y_Center = sum(Y_data) / 4
            Z_Center = sum(Z_data) / 4
            
            CenterOfGravity = np.array([X_Center, Y_Center, Z_Center])
            #if CenterOfGravity is None:
            
            return CenterOfGravity
    
    '''角度計算メゾット'''
    #TODO: ３次元の場合正しく計算されているか確認する必要がある。
    def deg_checker(self,Point1,Point2,Origin):
        
        # ベクトル生成
        Vector1 = Point1 - Origin
        Vector2 = Point2 - Origin
        
        #ベクトル長さ
        Length1 = np.linalg.norm(Vector1)
        Length2 = np.linalg.norm(Vector2)
        
        #内積の計算
        Dot = np.dot(Vector1,Vector2)
        
        #COSθを計算
        COS_Theta = Dot / (Length1 * Length2)
        Theta = np.arccos(COS_Theta) * 180 / np.pi
        #print(Theta)
        if Theta is None:
            Theta = 180
            #print("Object is None")
        #print(Theta)
        return Theta
    
    def raise_hand_checker(self,Theta,Point1,Point2,hand_switch):
        
        #手を挙げた場合０度付近になる。
        #TODO: ３次元での場合でもうまく動作ができるの確認する必要がある。
        
        #左手のチェック実施
        if(hand_switch == "Left"):
            if( Theta < 50 
                and Point1[0] != 0.0 and Point1[1] != 0.0 and Point1[2] != 0.0 
                and Point2[0] != 0.0 and Point2[1] != 0.0 and Point2[2] != 0.0 ):

                self.count_L  += 1
                
                #４フレーム以上カウントされていた場合；Output　-> 挙手（左手）
                #TODO フレーム調整する必要あるかも...
                if(self.count_L > 2):
                    return True
                else:
                    return False
        
        #右手チェック
        elif(hand_switch == "Right"):
            if(Theta < 50
                and Point1[0] != 0.0 and Point1[1] != 0.0 and Point1[2] != 0.0
                and Point2[0] != 0.0 and Point2[1] != 0.0 and Point2[2] != 0.0):
                
                self.count_R += 1
                
                if(self.count_R > 2):
                    return True
                else:
                    return False
        else:
            self.get_logger().error(" out of range !!! 変数の中身確認！！！")
            
    def calc_mater(self,data):
        
        x = data.transform.translation.x
        y = data.transform.translation.y
        z = data.transform.translation.z
        
        #ｷｮﾘ計算（原点からの）
        mater = math.sqrt(x * x + y * y + z * z)
        
        return mater
    #　重心から向きベクトル算出計算関数
    def center_arrow(self,pos_x,pos_y,pos_z,point_a,point_b):
        
        # 点 O,A,B生成
        O = np.array([pos_x, pos_y, pos_z])
        A = point_a
        B = point_b
        # ベクトルOA,ベクトルOB
        Vector_OA = A - O
        Vector_OB = B - O
        
        arrow = np.cross(Vector_OB,Vector_OA)
        arrow = arrow.T
        return arrow
    
    def yaw_calc(self,dir,center):
        dir_x = dir[0]
        dir_y = dir[1]
        dir_z = dir[2]
        center_x = center[0]
        center_y = center[1]
        center_z = center[2]
        
        #H の　Y座標を重心座標に変換した点
        G = np.array([dir_x, dir_y,dir_z])
        Vector_OG = G
        #　基準線
        Z = np.array([-50, 0, 0])
        Vector_OZ = Z
        
        #ベクトル長さ
        Length3 = np.linalg.norm(Vector_OG)
        Length4 = np.linalg.norm(Vector_OZ)
        
        #内積の計算
        Dot = np.dot(Vector_OG,Vector_OZ)
        
        #COSθを計算
        COS_Theta = Dot / (Length3 * Length4)
        Theta = np.arccos(COS_Theta) * 180 / np.pi
        #print(Theta)
        if Theta is None:
            Theta = 180
        if math.isnan(Theta):
            Theta = 90
        return Theta
        
        
            
def main():
    
    rclpy.init()
    
    node = person_checker()
    
    rclpy.spin(node)
    
    rclpy.shutdown()
    
if __name__ == "__main__":
    main()    