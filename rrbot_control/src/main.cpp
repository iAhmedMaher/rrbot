#include <ros/ros.h>
#include <ros/console.h>
#include <iostream>
#include <gazebo_msgs/ApplyJointEffort.h>

int main(int argc, char **argv) {
    ros::init(argc, argv, "rrbot_control");
    ros::NodeHandle* n = new ros::NodeHandle();;
    ros::ServiceClient client_joints  = n->serviceClient<gazebo_msgs::ApplyJointEffort>(
            "/gazebo/apply_joint_effort");

    gazebo_msgs::ApplyJointEffort p;
    p.request.joint_name = "joint1";
    p.request.effort = 13.0f;
    p.request.start_time = ros::Time::now();
    p.request.duration = ros::Duration(5.0f);
    client_joints.call(p);

    std::cout << "Done\n";
}
