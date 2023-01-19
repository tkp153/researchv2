import rclpy
from rclpy.node import Node
import sys
import time
from rclpy.action import ActionClient
from action_msgs.msg import GoalStatus
from rclpy.duration import Duration
from geometry_msgs.msg import Pose, PoseStamped, PoseWithCovarianceStamped, \
Point, Quaternion, Twist
from nav2_msgs.action import NavigateToPose
import numpy as np
import csv

class ApprroachV6(Node):
    def __init__(self):
        super().__init__("ApprroachV6")
        self.nav_to_pose_client = ActionClient(self, NavigateToPose, 'navigate_to_pose')
        self.initial_pose_pub = self.create_publisher(PoseWithCovarianceStamped,
        'initialpose',10)
        
    def send_goal(self,pose):
        print("setting goal function")
        while not self.nav_to_pose_client.wait_for_server(timeout_sec= 1.0):
            self.get_logger().info("Action server launching .....")
            
        goal_msg = NavigateToPose.Goal()
        goal_msg.pose = pose
        
        send_goal_future = self.nav_to_pose_client.send_goal_async(
            goal_msg,feedback_callback= self.feedback_callback
        ) 
        rclpy.spin_until_future_complete(self,send_goal_future)
        self.goal_handle = send_goal_future.result()
        
        if not self.get_handle.accepted():
            self.get_logger().error('No.{}は否認されました．'.format(self.wp_num+1))
            return
        self.get_logger().info('No.{}は承認されました．'.format(self.wp_num+1))
        self.result_future = self.goal_handle.get_result_async()
        self.result_future.add_done_callback(self.get_result_callback)  
        
    def get_result_callback(self, future): 
        if future.result().status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info('No.{xx}に着きました．')
        elif future.result().status == GoalStatus.STATUS_CANCELED:
            self.get_logger().info('NO.{xx}  canceled')
            
    def feedback_callback(self, msg):
        self.feedback = msg.feedback
        self.get_logger().info("残り{:.2f}[m]".format(self.feedback.distance_remaining))
        
    def set_pose(self,wp_pose):
        print("Setting... Point....")
        pose = PoseStamped()
        pose.header.stamp = self.get_clock().now().to_msg()
        pose.header.frame_id = "map"
        pose.pose.position.x = wp_pose[0]
        pose.pose.position.y = wp_pose[1]
        pose.pose.orientation.x = wp_pose[3]
        pose.pose.orientation.y = wp_pose[4]
        pose.pose.orientation.z = wp_pose[5]
        pose.pose.orientation.w = wp_pose[6]
        self.send_goal(pose)
    
    def debug(self):
        self.get_logger().info("Debugging..... read file")
    
def main():
    rclpy.init()
    
    node = ApprroachV6()
    
    rclpy.spin(node)
    
    try:
        while(True):
            time.sleep(11)
            node.debug()
            file = np.array([0,0,0])
            data = np.loadtxt("waypoints.csv",delimiter=",",dtype= float)
            node.set_pose(file,data)
        rclpy.shutdown()
    except KeyboardInterrupt:    
        rclpy.shutdown()