import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Joy
from geometry_msgs.msg import Twist

class xb_controler(Node):
    
    def __init__(self):
        super().__init__("xb_controler")
        self.pub = self.create_publisher(Twist,'cmd_vel',10)
        self.sub = self.create_subscription(Joy,"joy",self.callback,10)
        
    def callback(self, joy):
        twist = Twist()
        twist.linear.x = 0.75 * joy.axes[1]
        twist.angular.z = 0.75 * joy.axes[0]
        
        if(joy.buttons[1] > 0):
            if(twist.linear.x == 0 and twist.angular.z == 0):
                return
        else:
            twist.angular.x = 0.000000
            twist.linear.z = 0.00000
        self.pub.publish(twist)
        
def main():

    print("GO")
    rclpy.init()

    node = xb_controler()

    rclpy.spin(node)
    
    rclpy.shutdown()
    
    
if __name__ == '__main__':
    main()