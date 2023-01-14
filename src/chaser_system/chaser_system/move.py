import rclpy
from nav2_simple_commander.robot_navigator import BasicNavigator,TaskResult
from rclpy.node import Node
from geometry_msgs.msg import Pose, PoseStamped, PoseWithCovarianceStamped,Point, Quaternion, Twist

class BasicNavigator(Node):
    def __init__(self):
        rclpy.init()
        self.sub = self.create_subscription(PoseStamped, "waypoints",self.set_waypoint,10)
        
    def set_waypoint(self,waypoints):
        navigator = BasicNavigator()
        navigator.waitUntilNav2Active()
        
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
        
        navigator.goToPose(goal)
        while not navigator.isTaskComplete():
            feedback = navigator.getFeedback()
            if feedback.navigation_duration > 600:
                navigator.cancelTask()
                
        result = navigator.getResult()
        if result == TaskResult.SUCCEEDED:
            print('Goal succeeded!')
        elif result == TaskResult.CANCELED:
            print('Goal was canceled!')
        elif result == TaskResult.FAILED:
            print('Goal failed!')
            
def main():
    
    rclpy.init()
        
    node = BasicNavigator()
        
    rclpy.spin(node)
        
    node.destroy_node()
        
    rclpy.shutdown()
    
if __name__ == "__main__":
    main()