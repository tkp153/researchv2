import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from action_msgs.msg import GoalStatus
from rclpy.duration import Duration
from geometry_msgs.msg import Pose, PoseStamped, PoseWithCovarianceStamped,Point, Quaternion, Twist
from rclpy.qos import QoSDurabilityPolicy, QoSHistoryPolicy
from rclpy.qos import QoSProfile, QoSReliabilityPolicy

from nav2_msgs.action import NavigateToPose
import time
from rclpy.executors import SingleThreadedExecutor
import numpy as np

class ApproachV7(Node):
    def __init__(self):
        super().__init__('approach_navigation')
        while(True):
            time.sleep(10)
            self.waypoint_set()
            
            
    def waypoint_set(self):
        nav_to_pose_client = ActionClient(self,NavigateToPose,'navigate_to_pose')
        goal_msg = NavigateToPose.Goal()
        goal = PoseStamped()
        goal.header.stamp = self.get_clock().now().to_msg()
        goal.header.frame_id = "map"
        goal.pose.position.x =0.00
        goal.pose.position.y = 1.00
        goal.pose.position.z = 0.00
        goal.pose.orientation.x = 1.00
        goal.pose.orientation.y = 0.00
        goal.pose.orientation.z = 1.00
        goal.pose.orientation.w = 1.00
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
            
    
class Goal_receiver(Node):
    def __init__(self):
        super().__init__("Goal_receiver")
        self.sub = self.create_subscription(Pose, "waypoints",self.callback,1)
        
    def callback(self,waypoints):
        #self.get_logger().info("waypoints:{}".format(waypoints))
        print(waypoints)
        np.a
        
        x= waypoints.position.x
        y= waypoints.position.y
        z= 0.00
        r_x = waypoints.orientation.x
        r_y= waypoints.orientation.y
        r_z= waypoints.orientation.z
        r_w = waypoints.orientation.w
        
        data = np.array([x,y,z,r_x,r_y,r_z,r_w],dtype= float)
        
        return data
    
def main():
    
        rclpy.init()
        node1 = ApproachV7()
        node2 = Goal_receiver()
        rclpy.spin(node1)
        rclpy.spin(node2)
        rclpy.shutdown()
        
if __name__ == "__main__":
    main()