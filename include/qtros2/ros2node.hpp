#include <rclcpp/rclcpp.hpp>

class Ros2Node : public rclcpp::Node
{
	public:
		Ros2Node()
		: Node("ros2_node") {}
};