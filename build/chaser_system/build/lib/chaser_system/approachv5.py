import sys, time
from math import pi
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from action_msgs.msg import GoalStatus
from rclpy.duration import Duration
from nav2_msgs.action import NavigateToPose
from geometry_msgs.msg import PoseStamped

import csv
import pandas as pd

class ApproachV5(Node):
    def __init__(self):
        super().__init__("ApproachV5")
        
        timer_period = 10.0
        
        self.timer = self.create_timer(timer_period,self.get_waypoints)
        
        self.nav_to_pose_client = ActionClient(self, NavigateToPose, 'navigate_to_pose')
        while not self.nav_to_pose_client.wait_for_server(timeout_sec= 1.0):
            print("waiting to connect to server")
        
    def get_waypoints(self):
        
        rows = []
        
        file = csv.reader("waypoints.csv")
        reader = csv.reader(file)
        pandas_data = pd.read_csv("waypoints.csv")
        
        #全リスト読み込み
        for row in reader:
            rows.append(row)
        #最後尾のみ抽出    
        num = len(rows)
        data = rows[num -1]
        self.set_waypoints(data)
        #使わないデータ削除
        if(num > 1):
            for i in range(num -1):
                pandas_data = pandas_data.drop(i,axis = 0)
        elif (num == 0):
            print("データがありません")
        else:
            print("BAG")
            
    def set_waypoints(self,data):
        
        goal_msg = NavigateToPose.Goal()
        goal = PoseStamped()
        goal.header.stamp = self.get_clock().now().to_msg()
        goal.header.frame_id = "map"
        goal.pose.position.x =data[0]
        goal.pose.position.y = data[1]
        goal.pose.position.z = data[2]
        goal.pose.orientation.x = data[3]
        goal.pose.orientation.y = data[4]
        goal.pose.orientation.z = data[5]
        goal.pose.orientation.w = data[6]
        
        goal_msg.pose = goal
        
        send_goal_future = self.nav_to_pose_client.send_goal_async(goal_msg,feedback_callback=self.feedback_callback)
        rclpy.spin_until_future_complete(self, send_goal_future)
        self.goal_handle = send_goal_future.result()
        
        self.result_future = self.goal_handle.get_result_async()
        self.result_future.add_done_callback(self.get_result_callback)
        
    def feedback_callback(self, msg):
        self.feedback = msg.feedback
        self.get_logger().info("残り{:.2f}[m]".format(self.feedback.distance_remaining))
        
    def get_result_callback(self, future): 
        print("OOOXOOO")
        if future.result().status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info("GOAL POINT SUCCEEDED")
        elif future.result().status == GoalStatus.STATUS_CANCELED:
            self.get_logger().info("GOAL POINT CANCELED")

def main():
    rclpy.init()
        
    node = ApproachV5()
        
    rclpy.spin(node)
        
    node.destroy_node()
        
    rclpy.shutdown()
        
if __name__ == "__main__":
    main()   