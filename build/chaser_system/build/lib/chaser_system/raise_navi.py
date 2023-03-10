import sys, time
from math import pi
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from action_msgs.msg import GoalStatus
from rclpy.duration import Duration
from geometry_msgs.msg import Pose, PoseStamped, PoseWithCovarianceStamped,Point, Quaternion, Twist

from mymsg.srv import Waypoints

from nav2_msgs.action import NavigateToPose

class Raise_navi(Node):
    def __init__(self):
        super().__init__('raise_navi')
        self.init_pos = [0.0, 0.0]
        self.mission = True
        
        self.nav_to_pose_client = ActionClient(self, NavigateToPose, 'navigate_to_pose')
    
        self.create_service(Waypoints,"raise_navi",self.send_goal)
        
    def send_goal(self,request,response):
        while not self.nav_to_pose_client.wait_for_server(timeout_sec= 1.0):
            print("waiting to connect to server")
        goal_msg = NavigateToPose.Goal()
        
        # Request　処理
        goal = PoseStamped()
        goal.header.stamp = self.get_clock().now().to_msg()
        goal.header.frame_id = "map"
        goal.pose.position.x = request.waypoints.pose.position.x
        goal.pose.position.y = request.waypoints.pose.position.y
        goal.pose.position.z = 0.00
        goal.pose.orientation.x = request.waypoints.pose.orientation.x
        goal.pose.orientation.y = request.waypoints.pose.orientation.y
        goal.pose.orientation.z = request.waypoints.pose.orientation.z
        goal.pose.orientation.w = request.waypoints.pose.orientation.w
        
        goal_msg.pose = goal
        
        send_goal_future = self.nav_to_pose_client.send_goal_async(goal_msg,self.feedback_callback)
        rclpy.spin_until_future_complete(self, send_goal_future)
        self.goal_handle = send_goal_future.result()
        
        if not self.goal_handle.accepted:
            return
        
        self.result_future = self.goal_handle.get_result_async()
        print(self.result_future)
        self.result_future.add_done_callback(self.get_result_callback)
        response.complete = self.mission
        print(response.complete)
        return response
        
    def get_result_callback(self, future): 
        if future.result().status == GoalStatus.STATUS_SUCCEEDED:
            self.mission = True 
        elif future.result().status == GoalStatus.STATUS_CANCELED:
            self.mission = False
        
    def feedback_callback(self, msg):
        self.feedback = msg.feedback
        self.get_logger().info("残り{:.2f}[m]".format(self.feedback.distance_remaining))
        
    def cancel_goal(self):
        self.get_logger().info('No.{}をキャンセルします．'.format(self.wp_num+1))
        if self.result_future:
            future = self.goal_handle.cancel_goal_async()
            rclpy.spin_until_future_complete(self, future)
            
def main():
    rclpy.init()
    node = Raise_navi()
    
    rclpy.spin(node)
    
    node.destroy_node()
    
    rclpy.shutdown()
    
if __name__ == "__main__":
    main()