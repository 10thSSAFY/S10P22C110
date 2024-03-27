#!/usr/bin/env python
# -*- coding: utf-8 -*-

import rospy
import pymysql
from morai_msgs.msg import GPSMessage
import time

class GPSUpload:
    def __init__(self):
        self.connection = pymysql.connect(host="stg-yswa-kr-practice-db-master.mariadb.database.azure.com",
                             user="S10P23C110@stg-yswa-kr-practice-db-master.mariadb.database.azure.com",
                             password="agmxq5a2TD",
                             database="S10P23C110",
                             cursorclass=pymysql.cursors.DictCursor)
        self.cursor = self.connection.cursor()
        self.last_upload_time = 0  # 마지막 업로드 시간을 0으로 초기화

        self.gps_sub = rospy.Subscriber("/gps", GPSMessage, self.callback)
        
    def callback(self, gps_msg):
        current_time = time.time()  # 현재 시간을 초 단위로 받아옴
        if current_time - self.last_upload_time >= 1.0:  # 마지막 업로드 이후 1초가 지났는지 확인
            lat = gps_msg.latitude
            lon = gps_msg.longitude

            self.lat_str = str(lat)
            self.lon_str = str(lon)

            print('lat : {}'.format(lat))
            print('lon : {}'.format(lon))

            self.upload_gps_data(lat, lon)
            self.last_upload_time = current_time  # 마지막 업로드 시간을 현재 시간으로 업데이트

    def upload_gps_data(self, lat, lon):
        query = "UPDATE car SET lat = %s, lon = %s WHERE id = 1"
        self.cursor.execute(query, (self.lat_str, self.lon_str))
        self.connection.commit()
        print("GPS data uploaded to MariaDB")

if __name__ == '__main__':
    rospy.init_node('gps_parser', anonymous=True)
    gps = GPSUpload()
    
    rospy.spin()
