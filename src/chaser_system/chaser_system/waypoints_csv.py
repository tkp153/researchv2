import rclpy
from rclpy.node import Node

import csv
from geometry_msgs.msg import Pose

class waypoints_csv(Node):
    def __init__(self):
        super().__init__("waypoints_csv")
        self.sub = self.create_subscription(Pose,"waypoints",self.generate_csv,10)
        
    def generate_csv(self,data):
        
        pos_x = data.position.x
        pos_y = data.position.y
        pos_z = 0.00000
        
        rot_x = data.orientation.x
        rot_y = data.orientation.y
        rot_z = data.orientation.z
        rot_w = data.orientation.w
        
        file = open("waypoints.csv", "w",encoding="utf-8")
        writer = csv.writer(file)
        writer.writerow([pos_x,pos_y,pos_z,rot_x,rot_y,rot_z,rot_w])
        print("Writing......")
        file.close()
        
def main():
    rclpy.init()
    
    node = waypoints_csv()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()