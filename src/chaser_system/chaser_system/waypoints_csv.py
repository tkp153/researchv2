import rclpy
from rclpy.node import Node

import csv
from geometry_msgs.msg import Pose
import math

class waypoints_csv(Node):
    def __init__(self):
        super().__init__("waypoint_list_csv")
        self.sub = self.create_subscription(Pose,"waypoints",self.generate_csv,10)
        self.x = 0
        self.y = 0
        
    def generate_csv(self,data):
        
        pos_x = data.position.x
        pos_y = data.position.y
        pos_z = 0.00000
        
        rot_x = data.orientation.x
        rot_y = data.orientation.y
        rot_z = data.orientation.z
        rot_w = data.orientation.w
        result = self.distance_calc(pos_x,pos_y,self.x,self.y)
        if result == True:
            file = open("waypoints.csv", "a",encoding="utf-8")
            writer = csv.writer(file)
            writer.writerow([pos_x,pos_y,pos_z,rot_x,rot_y,rot_z,rot_w])
            self.get_logger().info("CSV Writing......")
            file.close()
            self.x = pos_x
            self.y = pos_y
        else:
            self.get_logger().info("Distance is too short not writing into your csv file ....")
        
    def distance_calc(self,x1,y1,pre_x,pre_y):
        meter = math.sqrt((x1-pre_x)**2+(y1-pre_y)**2)
        
        if meter > 0.125:
            return True
        else:
            return False
        
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