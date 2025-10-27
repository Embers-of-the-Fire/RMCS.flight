#include <algorithm>
#include <cmath>
#include <cstdint>

#include <rmcs_msgs/game_stage.hpp>
#include <rclcpp/node.hpp>
#include <rclcpp/node_options.hpp>
#include <rmcs_executor/component.hpp>
#include <rmcs_msgs/mouse.hpp>

#include "referee/app/ui/shape/shape.hpp"
#include "referee/app/ui/widget/crosshair.hpp"
#include "referee/app/ui/widget/status_ring.hpp"

// amespace rmcs_core::referee::app::ui {
// sing namespace std::chrono_literals;

// class Flight
//     : public rmcs_executor::Component
//     , public rclcpp::Node {
// public:
//     Flight()
//         : Node{get_component_name(),
//         rclcpp::NodeOptions{}.automatically_declare_parameters_from_overrides(true)}
//         ,

//     };
// }
