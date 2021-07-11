#include "qtros2/ros2node.hpp"

Ros2Node::Ros2Node()
  : rclcpp::Node("ros2_node")
{
  publisher_ = this->create_publisher<std_msgs::msg::String>("publish_topic", 10);
}

void Ros2Node::publish_message(std::string message)
{
  std_msgs::msg::String ros2_message;
  ros2_message.data = message;
  publisher_->publish(ros2_message);
}