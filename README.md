# How to Navigation（Kobuki)  新バージョン

## 新バージョンと旧バージョン何が変わった？
> 開くターミナルの数を大幅に削減　（14 →　４個）

毎回ターミナルを開くのめんどくさい....　かつ　source install/local_setup.bash 打つのもめんどくさい

## 動作確認済み　ROS　バージョン

> Foxy <br>
> Galatic

### セットアップ
```
cd researchv2
colcon build
```

### 実行手順<br>
>１つ目のターミナル
```
cd researchv2
source install/local_setup.bash
ros2 launch chaser_system my_scripts.launch.py
```

>２つ目のターミナル
```
source install/local_setup.bash
ros2 launch urg_node urg_node_launch.py
```

>3つめのターミナル<br>
```
source install/local_setup.bash
ros2 launch kobuki_node kobuki_node-launch.py
```

>４つ目のターミナル
```
ros2 launch chaser_system first_navigation.launch.py use_sim_time:=False
```
※　注意；Galaticを用いる場合は、*kobuki_node_launch.py*をいじる必要がある　誤：node_executable →　正：executable

# How to navigation (Kobuki)　旧バージョン
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
3. launch kobuki ※　Go to sirius/sirius_ws directory
```
ros2 launch kobuki_node kobuki_node-launch.py
```
4. launch navigation
```
ros2 launch chaser_system first_navigation.launch.py use_sim_time:=False
```
