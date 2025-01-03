#!/usr/bin/env python
#-*- coding:utf-8 -*-

import rospy
import cv2
import numpy as np
from math import atan2, sqrt

from sensor_msgs.msg import PointCloud2
import sensor_msgs.point_cloud2 as pc2
from geometry_msgs.msg import PoseArray,Pose
from sklearn.cluster import DBSCAN

# lidar_velodyne_cluster 는 LiDAR의 Point들을 물체 단위로 구분하는 Clustering 예제입니다.
# PointCloud Data를 입력받아 DBSCAN Algorithm을 활용하여 Clustering을 수행합니다.
# 교육생분들은 DBSCAN의 Parameter를 조절하여 적절한 Clustering 결과를 얻어내야 합니다.

# 노드 실행 순서
# 1. DBSCAN Parameter 입력
# 2. 각 Cluster를 대표하는 위치 값 계산
# 3. PointCloud Data로부터 Distance, Angle 값 계산

class SCANCluster:
    def __init__(self):

        self.scan_sub = rospy.Subscriber("/lidar3D", PointCloud2, self.callback)
        self.cluster_pub = rospy.Publisher("clusters", PoseArray, queue_size=10)

        self.pc_np = None
        #TODO: (1) DBSCAN Parameter 입력
        '''
        # DBSCAN의 Parameter를 결정하는 영역입니다.
        # sklearn.cluster의 DBSCAN에 대해 조사하여 적절한 Parameter를 입력하기 바랍니다.

        self.dbscan = DBSCAN( , , ...)
        '''
        self.dbscan = DBSCAN(eps=0.5, min_samples=5)
    
    def callback(self, msg):   
        self.pc_np = self.pointcloud2_to_xyz(msg)
        if len(self.pc_np) == 0:
            cluster_msg = PoseArray()
        else:
            pc_xy = self.pc_np[:, :2]
            db = self.dbscan.fit_predict(pc_xy)
            unique_labels = set(db)
            cluster_msg = PoseArray()
            
            for k in unique_labels:
                if k == -1:
                    # '-1'은 잡음을 의미합니다.
                    continue
                class_member_mask = (db == k)
                xy_cluster = pc_xy[class_member_mask]
                centroid = np.mean(xy_cluster, axis=0)
                pose = Pose()
                pose.position.x = centroid[0]
                pose.position.y = centroid[1]
                cluster_msg.poses.append(pose)
                
        self.cluster_pub.publish(cluster_msg)

    def pointcloud2_to_xyz(self, cloud_msg):

        point_list = []
        
        for point in pc2.read_points(cloud_msg, skip_nans=True):
            #TODO: (3) PointCloud Data로부터 Distance, Angle 값 계산
            '''
            # LiDAR의 PointCloud Data로부터 Distance와 Angle 값을 계산하는 영역입니다.
            # 각 Point의 XYZ 값을 활용하여 Distance와 Yaw Angle을 계산합니다.
            # Input : point (X, Y, Z, Intensity)            
            
            dist = 
            angle = 
            '''

            dist = sqrt(point[0]**2 + point[1]**2 + point[2]**2)
            angle = atan2(point[1], point[0])
            
            if point[0] > 0 and point[2] > -1 and point[2] < 1 and 1 < dist:
                point_list.append((point[0], point[1], point[2], point[3], dist, angle))

        point_np = np.array(point_list, np.float32)

        return point_np



if __name__ == '__main__':

    rospy.init_node('velodyne_clustering', anonymous=True)

    scan_cluster = SCANCluster()

    rospy.spin()