import os
import argparse
import sys
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    gui_node = Node(
        package="qtros2",
        executable="qtros2",
        name="qtros2",
        output="screen",
    )
    return LaunchDescription([gui_node])