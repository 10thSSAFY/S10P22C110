sudo apt-get update
sudo apt-get install wget ca-certificates
code .
cd ~
ls
pwd
sudo apt update
sudo apt upgrade
exit
cd ~
ls
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'
sudo apt-get install curl
curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | sudo apt-key add -
sudo apt-get update
sudo apt-get upgrade
sudo apt install ros-melodic-desktop-full
sudo apt-get install ros-melodic-rqt*
sudo apt-get install ros-melodic-velodyne
sudo apt-get install git
sudo apt-get install net-tools
sudo apt-get install python-pip
pip install scikit-learn
source /opt/ros/melodic/setup.bash
echo "source /opt/ros/melodic/setup.bash" >> ~/.bashrc
source ~/.bashrc
sudo apt install python-rosdep python-rosinstall python-rosinstall-generator python-wstool build-essential
sudo apt install python-rosdep
sudo rosdep init
rosdep update
cd /mnt/c/ubuntu1804
mkdir -p ./catkin_ws/src
ls
cd ./catkin_ws/src
catkin_init_workspace
cd /mnt/c/ubuntu1804/catkin_ws/
catkin_make
echo "source ~/catkin_ws/devel/setup.bash" >> ~/.bashrc
source ~/.bashrc
vi /etc/passwd
su -
sudo passwd root
su -
exit
cd
pwd
ls
exit
cd ~
pwd
ls
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc ) main" > /etc/apt/sources.list.d/ros-latest.list'
mkdir -p ~/catkin_ws/src
cd ~/catkin_ws/src
catkin_init_workspace
cd ~/catkin_ws/
catkin_make
cd ~/ 
cd catkin_ws/src
catkin_create_pkg beginner_tutorials rospy std_msgs
cd beginner_tutorials && mkdir scripts
cd ~/catkin_ws
catkin_make
source /opt/ros/melodic/setup.bash
echo "source /opt/ros/melodic/setup.bash" >> ~/.bashrc
source ~/.bashrc
sudo apt install python-rosdep python-rosinstall python-rosinstall-generator python-wstool build-essential
sudo rosdep init
rosdep update
mkdir -p ~/catkin_ws/src
cd ~/catkin_ws/src
catkin_init_workspace
cd ~/catkin_ws/
catkin_make
cd ~/ 
cd catkin_ws/src
catkin_create_pkg beginner_tutorials rospy std_msgs
cd beginner_tutorials && mkdir scripts
cd ~/catkin_ws
catkin_make
echo "source ~/catkin_ws/devel/setup.bash" >> ~/.bashrc
source ~/.bashrc
cd ~/catkin_ws/src
git clone https://github.com/MORAI-Autonomous/MORAI-DriveExample_ROS.git
git clone https://github.com/MORAI-Autonomous/MORAI-ROS_morai_msgs
git clone https://github.com/MORAI-Autonomous/MORAI-SensorExample.git 
cd ..
catkin_make
source ~/catkin_ws/devel/setup.bash
rospack profile
roslaunch rosbridge_server rosbridge_websocket.launch
roscd beginner_tutorials
cd script
chmod +x s_drive.py
cd ~/ 
cd catkin_ws/src
catkin_create_pkg beginner_tutorials rospy std_msgs
cd beginner_tutorials && mkdir scripts
cd ~/catkin_ws
catkin_make
ls
cd src
ls
cd beginner_tutorials
ls
cd scripts
ls
cd ~
explorer.exe .
exit
roscore
rosrun ssafy_1 my_name_talker.py
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc ) main" > /etc/apt/sources.list.d/ros-latest.list'
sudo apt-get install curl -y
curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | sudo apt-key add -
sudo apt-get update
sudo apt-get upgrade -y
sudo apt install ros-melodic-desktop-full -y
sudo apt-get install ros-melodic-rqt* -y
sudo apt-get install ros-melodic-velodyne -y
sudo apt-get install git -y
sudo apt-get install net-tools -y
sudo apt-get install python-pip -y
sudo apt-get install python-rosdep -y
pip install scikit-learn -y
sudo rosdep init
pip install scikit-learn
sudo rosdep init
rosdep update
sudo apt install python-rosinstall python-rosinstall-generator -y
sudo apt install libvulkan1 -y
sudo apt-get install ros-melodic-rosbridge-server -y
sudo apt install terminator -y
pip install pyproj
cd ~/catkin_ws/
catkin_make
echo "source ~/catkin_ws/devel/setup.bash" >> ~/.bashrc
source ~/.bashrc
catkin_make
source ~/catkin_ws/devel/setup.bash
rospack profile
chmod +x my_name_talker.py
ls
cd src
ls
cd ssafy_1
ls
cd scripts
ls
chmod +x my_name_talker.py
rosrun ssafy_1 my_name_talker.py
rosrun ssafy_1 my_name_listener.py
ls
cd catkin_ws
ls
cd src
ls
cd ssafy_1
ls
cd scrpits
ls
cd scripts
ls
chmod +x *.py
ls
rosrun ssafy_1 my_name_listener.py
rosrun ssafy_1 server.py
roscore
ls
cd catkin_w
cd catkin_ws
ls
cd src
ls
rm -r ssafy_1
ls
cd ssafy_1
ls
cd scripts
ls
chmod my_name_talker.py
chmod +x my_name_talker.py
rosrun ssafy_1 my_name_talker.py
rosrun ssafy_1 get_collision_status.py
roslaunch ssafy_1 talker_listener_2.launch
rosrun ssafy_1 client.py
roscore
roslaunch rosbridge_server rosbridge_websocket.launch
rosrun ssafy_1 get_collision_status.py
explorer.exe .
rosrun ssafy_1 get_collision_status.py
ls
cd catkin_ws
ls
cd src
ls
rosrun ssafy_1 get_collision_status.py
echo "source ~/catkin_ws/devel/setup.bash" >> ~/.bashrc
source ~/.bashrc
cd ~/catkin_ws/src
cd ..
catkin_make
source ~/catkin_ws/devel/setup.bash
rospack profile
roslaunch rosbridge_server rosbridge_websocket.launch
ls
cd catkin_ws
ls
cd src
ls
cd ssafy_1
ls
cd scrpits
cd scripts
ls
rosrun ssafy_1 get_collision_status.py
rosrun ssafy_1 get_obj_status.py
rosrun ssafy_1 get_collision_status.py
rosrun ssafy_1 get_obj_status.py
rosrun ssafy_1 get_traffic_status.py
rosrun ssafy_1 get_ego_status.py
rosrun ssafy_1 set_ctrl_cmd.py
roslaunch rosbridge_server rosbridge_websocket.launch
rosrun ssafy_1 srv_event_cmd.py
rosrun ssafy_1 set_ctrl_cmd.py
rosrun ssafy_1 srv_event_cmd.py
rosrun ssafy_1 srv_scenario_load.py
rosrun ssafy_1 get_camera.py
rosrun ssafy_1 get_imu.py
roslaunch rosbridge_server rosbridge_websocket.launch
ls
cd
cd catkin_ws
ls
cd build
ls
cd MORAI-ROS_morai_msgs
ls
cd cmake
ls
cd ..
ls
cd ..
ls
cd src
ls
cd MORAI-ROS_morai_msgs
ls
cd msg
ls
cd ..
ls
cd srv
ls
cd ..
ls
cd msg
roscd sensor.msgs
roscd sensor_msgs/
ls
cd msg
ls
vi Imu.msg
rosrun ssafy_1 get_gps.py
ls
vi Imu.msg
