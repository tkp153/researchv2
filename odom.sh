cd ~/researchv2/
source install/local_setup.bash
ros2 run tf2_ros static_transform_publisher 0 0 0 0 0 0 "odom" "base_footprint"