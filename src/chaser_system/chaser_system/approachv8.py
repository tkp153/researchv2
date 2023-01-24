from threading import Thread
from time import sleep
import rclpy
from rclpy.executors import  MultiThreadedExecutor
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup, ReentrantCallbackGroup
from rclpy.node import Node

from nav2_msgs.action import NavigateToPose
from rclpy.action import ActionClient
from action_msgs.msg import GoalStatus
from geometry_msgs.msg import PoseStamped
import numpy as np
import os

from gtts import gTTS
from pygame import mixer

class ApproachV8(Node):
    def __init__(self,executor):
        super().__init__("ApproachV8")
        self.executor = executor
        timer_period1 = 5.00
        self.timer1 = self.create_timer(timer_period1,self.navigation_system,callback_group= ReentrantCallbackGroup())
        self.nav_to_pose_client = ActionClient(self,
                                            NavigateToPose, 'navigate_to_pose',
                                            callback_group=ReentrantCallbackGroup())
            
    def get_waypoints(self):
        self.get_logger().info("CSVデータ検索中")
        path = "waypoints.csv"
        #CSV file あるかどうか？
        if os.path.isfile(path):
            self.get_logger().info("CSVデータ読み込み...")
            data = np.loadtxt("waypoints.csv",delimiter=",",dtype= float)
            return data
        else:
            self.get_logger().info("データが存在しません....")
            data = "データが存在しません"
            return data
    
    async def navigation_system(self):
        self.get_logger().info("ナビゲーション2システム起動.....")
        self.nav_to_pose_client.wait_for_server()
        self.get_logger().info("ナビゲーション２システム準備中....")
        goal_msg = NavigateToPose.Goal()
        goal = PoseStamped()
        
        data = self.get_waypoints()
        if data != "データが存在しません":
            goal.header.stamp = self.get_clock().now().to_msg()
            goal.header.frame_id = "map"
            goal.pose.position.x = data[0]
            goal.pose.position.y = data[1]
            goal.pose.position.z = 0.00
            goal.pose.orientation.x = data[3]
            goal.pose.orientation.y = data[4]
            goal.pose.orientation.z = data[5]
            goal.pose.orientation.w = data[6]
            os.remove('waypoints.csv')
            self.get_logger().info("CSVデータのキャッシュ削除完了....")
            #self.text_generation('Robot is going to {}{}'.format(goal.pose.position.x,goal.pose.position.y))
            goal_msg.pose = goal
            goal_result = self.nav_to_pose_client.send_goal(goal_msg)
            self.get_logger().info('ウェイポイント承認.....ナビゲーション２システム実行中.....')
            status = goal_result.status
            if status == GoalStatus.STATUS_SUCCEEDED:
                self.get_logger().info("GOAL POINT SUCCEEDED")
                #self.text_generation('Kobuki has reached the waypoint')
            elif status == GoalStatus.STATUS_CANCELED:
                self.get_logger().info("GOAL POINT CANCELED")
                self.text_generation('Kobuki has canceled the waypoint')
    
    def text_generation(self,word):
        tts = gTTS(word,lang='en')
        tts.save('text_2.mp3')
        mixer.init()
        mixer.music.load('text_2.mp3')
        mixer.music.play()
        os.remove('text_2.mp3')
        
                                            
def main():
    
    rclpy.init()
    executor = MultiThreadedExecutor()
    node = ApproachV8(executor)
    executor.add_node(node)
    try:
        print("")
        node.get_logger().info("起動中 ----> 終了する場合はCTRL-Cを押してください。")
        '''
        tts = gTTS('navigation System launching',lang='en')
        tts.save('launch.mp3')
        mixer.init()
        mixer.music.load('launch.mp3')
        mixer.music.play()
        os.remove('launch.mp3')
        '''
        
        executor.spin()
    except KeyboardInterrupt:
        node.get_logger().info("KeyBoardinterrupted, シャットダウン中")
        node.destroy_node()
        rclpy.shutdown()
        

if __name__ == "__main__":
    main()
    