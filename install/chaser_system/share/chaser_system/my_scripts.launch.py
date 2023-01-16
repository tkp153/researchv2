from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
        package='chaser_system',
        executable='image_inputer',
        output='screen',
        parameters=[{'use_sim_time':True}]
        ),
        Node(
        package='chaser_system',
        executable='rgbd_generator',
        output='screen',
        parameters=[{'use_sim_time':True}]
        ),
        Node(
        package='chaser_system',
        executable='person_check',
        output='screen'
        ),
        Node(
        package='chaser_system',
        executable='pose_tf2',
        ),
        Node(
        package='chaser_system',
        executable='approachv3',
        output='screen'
        ),
        Node(
        package='tf2_ros',
        namespace='camera',
        executable='static_transform_publisher',
        output='screen',
        arguments = ["0", "0", "0", "0", "0", "0", "base_link", "camera"],
        ),
        Node(
        package='tf2_ros',
        namespace='navi2',
        executable='static_transform_publisher',
        output='screen',
        arguments = ["0", "0", "0", "0", "0", "0", "map", "odom"],
        ),
        Node(
        package='tf2_ros',
        namespace='odom',
        executable='static_transform_publisher',
        output='screen',
        arguments = ["0", "0", "0", "0", "0", "0", "odom", "base_footprint"],
        ),
        Node(
        package='tf2_ros',
        namespace='test',
        executable='static_transform_publisher',
        output='screen',
        arguments = ["0", "0", "0", "0", "0", "0", "base_link", "scan"],
        ),
        Node(
        package='tf2_ros',
        namespace='tf',
        executable='static_transform_publisher',
        output='screen',
        arguments = ["0", "0", "0", "0", "0", "0", "base_link", "laser"],
        )
    ])