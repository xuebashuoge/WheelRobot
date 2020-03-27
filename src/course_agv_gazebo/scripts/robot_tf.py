#! /usr/bin/env python
import rospy
import tf
from gazebo_msgs.msg import ModelStates
import math

def handle_map_robot(data):
    # print(data.pose[1].position)
    # print(data.pose)
    """
    data.pose is a list containing 2 data, pose[0] and pose[1]
    each is a msg type. pose[0].position.x and pose[0].orientation.x
    """
    pose_x = data.pose[1].position.x
    pose_y = data.pose[1].position.y
    orien_x = data.pose[1].orientation.x
    orien_y = data.pose[1].orientation.y
    orien_z = data.pose[1].orientation.z
    orien_w = data.pose[1].orientation.w

    position = (pose_x, pose_y, 0)
    orientation = (orien_x, orien_y, orien_z, orien_w)

    br = tf.TransformBroadcaster()
    br.sendTransform(position, orientation,
                    rospy.Time.now(),
                    'robot_base',
                    'map')

    # # rate = rospy.Rate(100)
    # # rate.sleep()


if __name__ == '__main__':
    rospy.init_node('map_and_robot')

    rospy.Subscriber('/gazebo/model_states', 
        ModelStates, 
        handle_map_robot)

    rospy.spin()