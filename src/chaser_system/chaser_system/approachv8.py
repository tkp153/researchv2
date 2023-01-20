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

class ApproachV8(Node):
    def __init__(self,client_cb_group,timer_cb_group_1,timer_cb_group_2):
        super().__init__("ApproachV8")
        timer_period1 = 10.00
        timer_period2 = 9.95
        self.timer1 = self.create_timer(timer_period1 ,self.warmup_navigation,callback_group= timer_cb_group_1)
        self.timer2 = self.create_timer(timer_period2,self.timer,callback_group= timer_cb_group_2)
        self.nav_to_pose_client = ActionClient(self, NavigateToPose, 'navigate_to_pose',callback_group =client_cb_group)
            
    def timer(self):
        self.get_logger().info("タイマー起動しています。")
        self.get_waypoints()
    def get_waypoints(self):
        self.get_logger().info("data received")
        self.data = np.loadtxt("waypoints.csv",delimiter=",",dtype= float)
        return self.data 
    def warmup_navigation(self):
        self.get_logger().info("ナビゲーション２システム準備中....")
        self.navigation_system()
    def navigation_system(self):
        self.get_logger().info("ナビゲーション2システム起動.....")
        while not self.nav_to_pose_client.wait_for_server(timeout_sec= 1.0):
            print("waiting to connect to server")
        goal_msg = NavigateToPose.Goal()
        goal = PoseStamped()
        goal.header.stamp = self.get_clock().now().to_msg()
        goal.header.frame_id = "map"
        goal.pose.position.x = self.data[0]
        goal.pose.position.y = self.data[1]
        goal.pose.position.z = 0.00
        goal.pose.orientation.x = self.data[3]
        goal.pose.orientation.y = self.data[4]
        goal.pose.orientation.z = self.data[5]
        goal.pose.orientation.w = self.data[6]
        
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
        
                                            
def main(client_cb_group, timer_cb_group_1,timer_cb_group_2):
    
    rclpy.init()
    node = ApproachV8(client_cb_group = client_cb_group,timer_cb_group_1=timer_cb_group_1,timer_cb_group_2=timer_cb_group_2)
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    try:
        print("")
        node.get_logger().info("起動中 ----> 終了する場合はCTRL-Cを押してください。")
        executor.spin()
    except KeyboardInterrupt:
        node.get_logger().info("KeyBoardinterrupted, シャットダウン中")
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    
    group_1 = MutuallyExclusiveCallbackGroup()
    group_2 = MutuallyExclusiveCallbackGroup()
    group_3 = MutuallyExclusiveCallbackGroup()
    
    main(client_cb_group= group_1,timer_cb_group_1= group_2,timer_cb_group_2= group_3)
    