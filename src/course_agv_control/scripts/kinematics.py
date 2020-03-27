#!/usr/bin/env python

import rospy
from pynput.keyboard import Key, Listener
import geometry_msgs.msg
from std_msgs.msg import Float64

wheel_radius = 0.08
wheel_thickness = wheel_radius/3
width = 0.2
l = width+wheel_thickness

def velocity_factor(data):
    v1 = data.linear.x - data.angular.z*l # / wheel_radius
    v2 = data.linear.x + data.angular.z*l # / wheel_radius
    pub_left = rospy.Publisher('/course_agv/left_wheel_velocity_controller/command', Float64, queue_size=1)
    pub_right = rospy.Publisher('/course_agv/right_wheel_velocity_controller/command', Float64, queue_size=1)
    rate = rospy.Rate(60) #15Hz
    print("left: %.2f right: %.2f"%(v1,v2))
    pub_left.publish(v1)
    pub_right.publish(v2)
    rate.sleep()

def listener():
    rospy.init_node('listen_to_keyboard', anonymous=True)
    rospy.Subscriber('/course_agv/velocity', geometry_msgs.msg.Twist, velocity_factor)
    rospy.spin()

def main():
    listener()


if __name__ == '__main__':
    main()