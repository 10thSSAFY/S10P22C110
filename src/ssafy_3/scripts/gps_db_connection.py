#!/usr/bin/env python
# -*- coding: utf-8 -*-

import rospy
import pymysql
from morai_msgs.msg import GPSMessage
from std_msgs.msg import String
import time
import math

class GPSUpload:
    def __init__(self):
        # DB 연결 설정
        self.connection = pymysql.connect(host="stg-yswa-kr-practice-db-master.mariadb.database.azure.com",
                                          user="S10P23C110@stg-yswa-kr-practice-db-master.mariadb.database.azure.com",
                                          password="agmxq5a2TD",
                                          database="S10P23C110",
                                          cursorclass=pymysql.cursors.DictCursor)
        self.cursor = self.connection.cursor()
        self.last_upload_time = 0

        # ROS Subscriber와 Publisher 설정
        rospy.Subscriber("/gps", GPSMessage, self.callback)
        self.distance_publisher = rospy.Publisher("/cp_distance", String, queue_size=10)

        # 환자 GPS 데이터 초기 가져오기
        self.patient_lat = None
        self.patient_lon = None
        self.get_patient_gps_data()

    def callback(self, gps_msg):
        current_time = time.time()
        if current_time - self.last_upload_time >= 1.0:
            car_lat = gps_msg.latitude
            car_lon = gps_msg.longitude

            if self.patient_lat is not None and self.patient_lon is not None:
                distance = self.calculate_distance(car_lat, car_lon, float(self.patient_lat), float(self.patient_lon))
                if distance <= 50:
                    print("Patient is within 50 meters!")
                    self.distance_publisher.publish("near")
                else:
                    print("Patient is more than 50 meters away.")
                    self.distance_publisher.publish("far")

            self.last_upload_time = current_time

    def upload_car_gps_data(self, lat, lon):
        query = "UPDATE car SET lat = %s, lon = %s WHERE id = 1"
        self.cursor.execute(query, (lat, lon))
        self.connection.commit()
        print("GPS data uploaded to MariaDB")

    def get_patient_gps_data(self):
        query = "SELECT * FROM patient WHERE id = 1"  # 쿼리 수정
        self.cursor.execute(query)
        result = self.cursor.fetchone()  # 결과 가져오기
        if result:
            print("Patient GPS Data:", result)
            self.patient_lat = result['lat']
            self.patient_lon = result['lon']
            print(self.patient_lat, self.patient_lon)
        else:
            print("No patient data found.")

    def calculate_distance(self, lat1, lon1, lat2, lon2):
        # 지구 반지름 (미터 단위)
        R = 6371000
    
        # 위도, 경도를 라디안으로 변환
        phi1 = math.radians(lat1)
        phi2 = math.radians(lat2)
        delta_phi = math.radians(lat2 - lat1)
        delta_lambda = math.radians(lon2 - lon1)
    
        # 허브사인 공식 사용
        a = math.sin(delta_phi/2) * math.sin(delta_phi/2) + \
            math.cos(phi1) * math.cos(phi2) * \
            math.sin(delta_lambda/2) * math.sin(delta_lambda/2)
        c = 2 * math.atan2(math.sqrt(a), math.sqrt(1-a))
    
        distance = R * c
        return distance
            
if __name__ == '__main__':
    rospy.init_node('gps_parser', anonymous=True)
    gps = GPSUpload()
    
    rospy.spin()
