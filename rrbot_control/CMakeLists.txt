cmake_minimum_required(VERSION 2.8.3)
project(rrbot_control)

find_package(catkin REQUIRED COMPONENTS
        genmsg
        roscpp
        std_msgs
        )
catkin_package()

include_directories(${catkin_INCLUDE_DIRS})

add_executable(rrbot_control src/main.cpp)
target_link_libraries(rrbot_control ${catkin_LIBRARIES})