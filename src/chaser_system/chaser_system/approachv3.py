import sys, time
from math import pi
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from action_msgs.msg import GoalStatus
from rclpy.duration import Duration
from geometry_msgs.msg import Pose, PoseStamped, PoseWithCovarianceStamped,Point, Quaternion, Twist
import csv

from nav2_msgs.action import NavigateToPose

class ApproachNavi(Node):
    def __init__(self):
        super().__init__('approach_navigation')
        
        self.sub = self.create_subscription(PoseStamped, "waypoints",self.callback,10)
        self.count = 0
        
    def callback(self,waypoints):

        pos_x = waypoints.pose.position.x 
        pos_y = waypoints.pose.position.y
        pos_z = waypoints.pose.position.z
        rot_x = waypoints.pose.orientation.x 
        rot_y = waypoints.pose.orientation.y 
        rot_z = waypoints.pose.orientation.z 
        rot_w = waypoints.pose.orientation.w 
        data_row = [pos_x, pos_y, pos_z, rot_x, rot_y,rot_z,rot_w]
        f =open(self.filename, "w",encoding="utf_8")
        writer = csv.writer(f)
        writer.writerow(data_row)
        #print("write data to file")
        f.close()
        
        self.set_waypoint()
        
    def set_waypoint(self):
        
        nav_to_pose_client = ActionClient(self, NavigateToPose, 'navigate_to_pose')
        while not nav_to_pose_client.wait_for_server(timeout_sec= 1.0):
            print("waiting to connect to server")
        CheckPoint_msg = NavigateToPose.Goal()
        waypoint = []
        
        with open('waypoint_data.csv','r') as file:
            reader = csv.reader(file)
            for raw in reader:
                waypoint.append(raw)
            
            for data in waypoint:
                CheckPoint = PoseStamped()
                CheckPoint.header.frame.id = "map"
                CheckPoint.header.stamp = self.get_clock().now().to_msg()
                CheckPoint.pose.position.x = data[0]
                CheckPoint.pose.position.y = data[1]
                CheckPoint.pose.position.z = data[2]
                CheckPoint.pose.orientation.x = data[3]
                CheckPoint.pose.orientation.y = data[4]
                CheckPoint.pose.orientation.z = data[5]
                CheckPoint.pose.orientation.w = data[6]
        
        CheckPoint_msg.pose = CheckPoint
        self.count += 1
        
        send_goal_future = nav_to_pose_client.send_goal_async(CheckPoint_msg,feedback_callback=self.feedback_callback)
        rclpy.spin_until_future_complete(self, send_goal_future)
        self.goal_handle = send_goal_future.result()
        
        self.result_future = self.goal_handle.get_result_async()
        self.result_future.add_done_callback(self.get_result_callback)    

    def feedback_callback(self, msg):
        self.feedback = msg.feedback
        self.get_logger().info("残り{:.2f}[m]".format(self.feedback.distance_remaining))
        
    def get_result_callback(self, future): 
        print("OOXOO")
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