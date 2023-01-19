from setuptools import setup
import os
from glob import glob

package_name = 'chaser_system'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*.launch.py')),
        (os.path.join('share', package_name, 'urdf'), glob('urdf/*')),
        (os.path.join('share', package_name, 'rviz'), glob('rviz/*')),
        (os.path.join('share', package_name, 'config'), glob('config/*')),
        (os.path.join('share', package_name, 'world'), glob('world/*')),
        (os.path.join('share', package_name, 'map'), glob('map/*')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='root',
    maintainer_email='sunqiantian@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'image_inputer = chaser_system.image_inputer:main',
            'three_d_pose_analysis = chaser_system.three_d_pose_analysis:main',
            'pose_tf2 = chaser_system.pose_tf2:main',
            'rgbd_generator = chaser_system.rgbd_generator:main',
            'person_check = chaser_system.person_check:main',
            'xbox = chaser_system.xbox:main',
            'raise_navi = chaser_system.raise_navi:main',
            'approach_navi = chaser_system.approach_navi:main',
            'approachv2 = chaser_system.approachv2:main',
            'approachv3 = chaser_system.approachv3:main',
            'approachv4 = chaser_system.approachv4:main',
            'waypoints_csv = chaser_system.waypoints_csv:main',
            'approachv5 = chaser_system.approachv5:main',
            'approachv6 = chaser_system.approachv6:main',
            'approachv7 = chaser_system.approachv7:main',
            
        ],
    },
)
