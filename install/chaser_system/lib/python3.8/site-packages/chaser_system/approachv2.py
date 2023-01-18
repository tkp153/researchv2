import sys, time
from math import pi
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from action_msgs.msg import GoalStatus
from rclpy.duration import Duration
from geometry_msgs.msg import Pose, PoseStamped, PoseWithCovarianceStamped,Point, Quaternion, Twist
from rclpy.qos import QoSDurabilityPolicy, QoSHistoryPolicy
from rclpy.qos import QoSProfile, QoSReliabilityPolicy

from nav2_msgs.action import NavigateToPose

class ApproachNavi(Node):
    def __init__(self):
        super().__init__('approach_navigation')
        #video_qos = rclpy.qos.QoSPresetProfiles.SERVICES_DEFAULT.value
        navi_qos = QoSProfile(
                        durability=QoSDurabilityPolicy.TRANSIENT_LOCAL,
                        reliability=QoSReliabilityPolicy.RELIABLE,
                        history=QoSHistoryPolicy.KEEP_LAST,
                        depth=1)
        self.sub = self.create_subscription(Pose, "waypoints",self.callback,navi_qos)
        self.count = 0
        
    def callback(self,waypoints):

        self.x= waypoints.position.x
        self.y= waypoints.position.y
        self.z= 0.00
        self.r_x = waypoints.orientation.x
        self.r_y= waypoints.orientation.y
        self.r_z= waypoints.orientation.z
        self.r_w = waypoints.orientation.w
        
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
        self.count += 1
        
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