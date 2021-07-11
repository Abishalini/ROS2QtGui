#pragma once
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
class Ros2Node : public rclcpp::Node
{
	public:
		Ros2Node();
		void publish_message(std::string message);

	private:
		rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
};