import sys, time
from math import pi
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from action_msgs.msg import GoalStatus
from rclpy.duration import Duration
from geometry_msgs.msg import Pose, PoseStamped, PoseWithCovarianceStamped,Point, Quaternion, Twist

from nav2_msgs.action import NavigateToPose

class ApproachNavigation(Node):
    def __init__(self):
        super().__init__('approach_navigation')
        
        self.sub = self.create_subscription(PoseStamped, "waypoints",self.set_waypoint,10)
        self.count = 0
            
    
    def set_waypoint(self, waypoints):
        
        nav_to_pose_client = ActionClient(self, NavigateToPose, 'navigate_to_pose')
        while not nav_to_pose_client.wait_for_server(timeout_sec= 1.0):
            print("waiting to connect to server")
        
        if(self.count > 0):
            #現在のゴール削除　（リクエスト削除）
            self.cancel_goal()
        #新規ゴール生成
        goal_msg = NavigateToPose.Goal()
        goal = PoseStamped()
        goal.header.stamp = self.get_clock().now().to_msg()
        goal.header.frame_id = "map"
        goal.pose.position.x = waypoints.pose.position.x
        goal.pose.position.y = waypoints.pose.position.y
        goal.pose.position.z = 0.00
        goal.pose.orientation.x = waypoints.pose.orientation.x
        goal.pose.orientation.y = waypoints.pose.orientation.y
        goal.pose.orientation.z = waypoints.pose.orientation.z
        goal.pose.orientation.w = waypoints.pose.orientation.w
        
        goal_msg.pose = goal
        self.count += 1
        
        send_goal_future = nav_to_pose_client.send_goal_async(goal_msg,feedback_callback=self.feedback_callback)
        rclpy.spin_until_future_complete(self, send_goal_future)
        self.goal_handle = send_goal_future.result()
        
        self.result_future = self.goal_handle.get_result_async()
        self.result_future.add_done_callback(self.get_result_callback)    

    def cancel_goal(self):
            future = self.goal_handle.cancel_goal_async()
            rclpy.spin_until_future_complete(self, future)

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
        
    node = ApproachNavigation()
        
    rclpy.spin(node)
        
    node.destroy_node()
        
    rclpy.shutdown()
        
if __name__ == "__main__":
    main()