# How to navigation (Kobuki)
1. run 4 bash
    1. Go to researchv2 directory 
    ```
    cd researchv2
    ```
    2. run each .bash file and .sh file 
    ```
    bash camera.bash
    bash tf.sh
    bash test.sh * May be not need ....
    bash navi2.sh
    ```
    3. ros2 run 1 file
    ```
    ros2 run chaser_system pose_tf2
    ```
2. launch urg_node
```
ros2 launch urg_node urg_node_launch.py 
```
3. launch kobuki
```
ros2 launch kobuki_node kobuki_node-launch.py
```
4. launch navigation
```
ros2 launch chaser_system first_navigation.launch.py use_sim_time:=False
```
