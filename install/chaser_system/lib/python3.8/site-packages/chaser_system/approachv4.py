import sys, time
from math import pi
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from action_msgs.msg import GoalStatus
from rclpy.duration import Duration
from geometry_msgs.msg import Pose, PoseStamped, PoseWithCovarianceStamped,Point, Quaternion, Twist

from nav2_msgs.action import NavigateToPose

class ApproachNavi(Node):
    def __init__(self):
        super().__init__('approach_navigation')
        
        time.sleep(30)
        self.get_logger().info("Starting navigation")
        self.callback()
        time.sleep(20)
        self.get_logger().info("Starting navigation to goal 2")
        #time.sleep(20)
        self.callback2()
        self.get_logger().info("Starting navigation to goal 3")
        time.sleep(20)
        self.callback3()
        self.count = 0
        
    def callback(self):

        self.x= 8.70
        self.y= 1.00
        self.z= 0.00
        self.r_x = 0.0
        self.r_y= 0.0
        self.r_z= 0.0
        self.r_w = 1.00
        
        self.set_waypoint()
        
    def callback2(self):
    
        self.x= 0.70
        self.y= 0.80
        self.z= 0.00
        self.r_x = 0.0
        self.r_y= 0.0
        self.r_z= 0.0
        self.r_w = 1.00
        
        self.set_waypoint()
        
    def callback3(self):
    
        self.x= 15.00
        self.y= -3.00
        self.z= 0.00
        self.r_x = 0.0
        self.r_y= 0.0
        self.r_z= 0.0
        self.r_w = 1.00
        
        self.set_waypoint()
        
    
        
    def set_waypoint(self):
        
        nav_to_pose_client = ActionClient(self, NavigateToPose, 'navigate_to_pose')
        while not nav_to_pose_client.wait_for_server(timeout_sec= 1.0):
            print("waiting to connect to server")
        goal_msg = NavigateToPose.Goal()
        goal = PoseStamped()
        goal.header.stamp = self.get_clock().now().to_msg()
        goal.header.frame_id = "map"
        goal.pose.position.x =self.x
        goal.pose.position.y = self.y
        goal.pose.position.z = 0.00
        goal.pose.orientation.x = self.r_x
        goal.pose.orientation.y = self.r_y
        goal.pose.orientation.z = self.r_z
        goal.pose.orientation.w = self.r_w
        
        goal_msg.pose = goal
        
        send_goal_future = nav_to_pose_client.send_goal_async(goal_msg,feedback_callback=self.feedback_callback)
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
        
    node = ApproachNavi()
        
    rclpy.spin(node)
        
    node.destroy_node()
        
    rclpy.shutdown()
        
if __name__ == "__main__":
    main()