/* Copyright (c) 2017, United States Government, as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * 
 * All rights reserved.
 * 
 * The Astrobee platform is licensed under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with the
 * License. You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */

#ifndef FF_UTIL_FF_NAMES_H_
#define FF_UTIL_FF_NAMES_H_

// Global topics (shared between ALL platforms)

#define TOPIC_CLOCK                                 "/clock"
#define TOPIC_DIAGNOSTICS                           "/diagnostics"
#define TOPIC_TF_DYNAMIC                            "/tf"
#define TOPIC_TF_STATIC                             "/tf_static"

#define FRAME_NAME_WORLD                            "world"
#define FRAME_NAME_BODY                             "body"
#define FRAME_NAME_TRUTH                            "truth"

////////////
// SHARED //
////////////

#define PRIVATE_PREFIX                              "cfg/"

#define TOPIC_COMMAND                               "command"
#define TOPIC_HEARTBEAT                             "heartbeat"
#define TOPIC_PERFORMANCE                           "performance"
#define TOPIC_TRIGGER                               "trigger"

///////////
// COMMS //
///////////

#define SUBSYSTEM_COMMUNICATIONS                    "comm"

#define NODE_DDS_ROS_BRIDGE                         "dds_ros_bridge"

#define TOPIC_COMMUNICATIONS_DDS_COMMAND            "comm/dds/command"
#define TOPIC_COMMUNICATIONS_DDS_PLAN               "comm/dds/plan"
#define TOPIC_COMMUNICATIONS_DDS_ZONES              "comm/dds/zones"

/////////
// GNC //
/////////

#define SUBSYSTEM_GNC                               "gnc"

#define NODE_GNC                                    "gnc"
#define NODE_SIM_WRAPPER                            "sim_wrapper"

#define ACTION_GNC_CTL_CONTROL                      "gnc/control"

#define TOPIC_GNC_EKF                               "gnc/ekf"
#define TOPIC_GNC_EKF_FEATURES                      "gnc/ekf/features"
#define TOPIC_GNC_CTL_SHAPER                        "gnc/ctl/shaper"
#define TOPIC_GNC_CTL_TRAJ                          "gnc/ctl/traj"
#define TOPIC_GNC_CTL_SEGMENT                       "gnc/ctl/segment"
#define TOPIC_GNC_CTL_PROGRESS                      "gnc/ctl/progress"
#define TOPIC_GNC_CTL_COMMAND                       "gnc/ctl/command"

#define SERVICE_GNC_EKF_RESET                       "gnc/ekf/reset"
#define SERVICE_GNC_EKF_INIT_BIAS                   "gnc/ekf/init_bias"
#define SERVICE_GNC_EKF_SET_INPUT                   "gnc/ekf/set_input"
#define SERVICE_GNC_CTL_ENABLE                      "gnc/ctl/enable"
#define SERVICE_GNC_SET_INERTIA                     "gnc/ctl/set_inertia"

///////////////////
// GUEST SCIENCE //
///////////////////

#define SUBSYSTEM_GUEST_SCIENCE                     "gs"

#define NODE_GUEST_SCIENCE_MANAGER                  "gs_manager"

#define TOPIC_GUEST_SCIENCE_DATA                    "gs/data"
#define TOPIC_GUEST_SCIENCE_MANAGER_ACK             "gs/gs_manager/ack"
#define TOPIC_GUEST_SCIENCE_MANAGER_CONFIG          "gs/gs_manager/config"
#define TOPIC_GUEST_SCIENCE_MANAGER_STATE           "gs/gs_manager/state"


///////////////
// MANGEMENT //
///////////////

#define SUBSYSTEM_MANAGEMENT                        "mgt"

#define NODE_ACCESS_CONTROL                         "access_control"
#define NODE_EXECUTIVE                              "executive"
#define NODE_SYS_MONITOR                            "sys_monitor"
#define NODE_IMG_SAMPLER                            "image_sampler"

#define TOPIC_MANAGEMENT_ACK                        "mgt/ack"
#define TOPIC_MANAGEMENT_ACCESS_CONTROL_STATE       "mgt/access_control/state"
#define TOPIC_MANAGEMENT_CPU_MONITOR_STATE          "mgt/cpu_monitor/state"
#define TOPIC_MANAGEMENT_DISK_MONITOR_STATE         "mgt/disk_monitor/state"
#define TOPIC_MANAGEMENT_EXEC_AGENT_STATE           "mgt/executive/agent_state"
#define TOPIC_MANAGEMENT_EXEC_CF_ACK                "mgt/executive/cf_ack"
#define TOPIC_MANAGEMENT_EXEC_COMMAND               "mgt/executive/command"
#define TOPIC_MANAGEMENT_EXEC_PLAN                  "mgt/executive/plan"
#define TOPIC_MANAGEMENT_EXEC_PLAN_STATUS           "mgt/executive/plan_status"
#define TOPIC_MANAGEMENT_SYS_MONITOR_CONFIG         "mgt/sys_monitor/config"
#define TOPIC_MANAGEMENT_SYS_MONITOR_STATE          "mgt/sys_monitor/state"
#define TOPIC_MANAGEMENT_CAMERA_STATE               "mgt/camera_state"
#define TOPIC_MANAGEMENT_IMG_SAMPLER_NAV_CAM_RECORD  "mgt/img_sampler/nav_cam/image_record"
#define TOPIC_MANAGEMENT_IMG_SAMPLER_NAV_CAM_STREAM  "mgt/img_sampler/nav_cam/image_stream"
#define TOPIC_MANAGEMENT_IMG_SAMPLER_DOCK_CAM_RECORD "mgt/img_sampler/dock_cam/image_record"
#define TOPIC_MANAGEMENT_IMG_SAMPLER_DOCK_CAM_STREAM "mgt/img_sampler/dock_cam/image_stream"

#define SERVICE_MANAGEMENT_IMG_SAMPLER_CONFIG_NAV   "mgt/img_sampler/nav_cam/configure"
#define SERVICE_MANAGEMENT_IMG_SAMPLER_CONFIG_DOCK  "mgt/img_sampler/dock_cam/configure"
#define SERVICE_MANAGEMENT_IMG_SAMPLER_ENABLE_NAV   "mgt/img_sampler/nav_cam/enable"
#define SERVICE_MANAGEMENT_IMG_SAMPLER_ENABLE_DOCK  "mgt/img_sampler/dock_cam/enable"

//////////////
// MOBILITY //
//////////////

#define SUBSYSTEM_MOBILITY                          "mob"

#define NODE_CHOREOGRAPHER                          "choreographer"
#define NODE_MAPPER                                 "mapper"
#define NODE_SENTINEL                               "sentinel"
#define NODE_DOCKER                                 "docker"
#define NODE_PERCHER                                "percher"

// Exposed to peer nodes

#define ACTION_MOBILITY_MOVE                        "mob/move"
#define ACTION_MOBILITY_EXECUTE                     "mob/execute"
#define ACTION_MOBILITY_STOP                        "mob/stop"
#define ACTION_MOBILITY_IDLE                        "mob/idle"
#define ACTION_MOBILITY_DOCK                        "mob/dock"
#define ACTION_MOBILITY_UNDOCK                      "mob/undock"
#define ACTION_MOBILITY_PERCH                       "mob/perch"
#define ACTION_MOBILITY_UNPERCH                     "mob/unperch"

#define ACTION_MOBILITY_PLAN                        "mob/plan"
#define ACTION_MOBILITY_VALIDATE                    "mob/validate"

#define SERVICE_MOBILITY_SET_ZONES                  "mob/set_zones"
#define SERVICE_MOBILITY_GET_ZONES                  "mob/get_zones"

// Used internally or for rviz plotting

#define SERVICE_MOBILITY_PLANNER_REGISTER           "mob/planner/register"

#define PREFIX_MOBILITY_PLANNER_PRIVATE             "planner_"
#define PREFIX_MOBILITY_PLANNER                     "mob/planner_"
#define SUFFIX_MOBILITY_PLANNER                     "/plan"

#define TOPIC_MOBILITY_SEGMENT                      "mob/choreographer/segment"
#define TOPIC_MOBILITY_COLLISIONS                   "mob/sentinel/collisions"
#define TOPIC_MOBILITY_ZONES                        "mob/mapper/zones"
#define TOPIC_MOBILITY_DOCKING_STATE                "mob/dock/state"
#define TOPIC_MOBILITY_PERCHING_STATE               "mob/perch/state"

//////////////////
// LOCALIZATION //
//////////////////

#define SUBSYSTEM_LOCALIZATION                      "loc"

#define NODE_HANDRAIL_DETECT                        "handrail_detect"
#define NODE_OPTICAL_FLOW                           "of"
#define NODE_LOCALIZATION_MANAGER                   "localization_manager"
#define NODE_AR_TAGS                                "ar_tags"
#define NODE_MAPPED_LANDMARKS                       "ml"

#define TOPIC_LOCALIZATION_TRUTH                    "loc/truth"
#define TOPIC_LOCALIZATION_OVERHEAD_IMAGE           "loc/overhead"

#define TOPIC_LOCALIZATION_MANAGER_STATUS           "loc/manager/status"

#define ACTION_LOCALIZATION_MANAGER_SWITCH          "loc/manager/switch"
#define ACTION_LOCALIZATION_MANAGER_RESET           "loc/manager/reset"

#define PREFIX_LOCALIZATION_MANAGER_ML              "loc/manager/ml"
#define PREFIX_LOCALIZATION_MANAGER_AR              "loc/manager/ar"
#define PREFIX_LOCALIZATION_MANAGER_OF              "loc/manager/of"
#define PREFIX_LOCALIZATION_MANAGER_HR              "loc/manager/hr"

#define TOPIC_LOCALIZATION_ML_FEATURES              "loc/ml/features"
#define TOPIC_LOCALIZATION_ML_REGISTRATION          "loc/ml/registration"
#define TOPIC_LOCALIZATION_AR_FEATURES              "loc/ar/features"
#define TOPIC_LOCALIZATION_AR_REGISTRATION          "loc/ar/registration"
#define TOPIC_LOCALIZATION_OF_FEATURES              "loc/of/features"
#define TOPIC_LOCALIZATION_OF_REGISTRATION          "loc/of/registration"
#define TOPIC_LOCALIZATION_HR_FEATURES              "loc/hr/features"
#define TOPIC_LOCALIZATION_HR_REGISTRATION          "loc/hr/registration"
#define TOPIC_LOCALIZATION_HR_IMAGE                 "loc/hr/image"
#define TOPIC_LOCALIZATION_HR_CLOUD                 "loc/hr/cloud"
#define TOPIC_LOCALIZATION_HR_MARKER                "loc/hr/marker"

#define TOPIC_LOCALIZATION_OF_DEBUG                 "loc/of/debug_img"

#define SERVICE_LOCALIZATION_OF_ENABLE              "loc/of/enable"
#define SERVICE_LOCALIZATION_AR_ENABLE              "loc/ar/enable"
#define SERVICE_LOCALIZATION_ML_ENABLE              "loc/ml/enable"
#define SERVICE_LOCALIZATION_HR_ENABLE              "loc/hr/enable"

//////////////
// HARDWARE //
//////////////

#define SUBSYSTEM_HARDWARE                          "hw"

#define NODE_FRAMESTORE                             "framestore"
#define NODE_EPSON_IMU                              "epson_imu"
#define NODE_EPS_DRIVER                             "eps_driver"
#define NODE_PMC_ACTUATOR                           "pmc_actuator"
#define NODE_LASER                                  "node_laser"
#define NODE_FLASHLIGHTS                            "flashlights"
#define NODE_PERCHING_ARM                           "perching_arm"
#define NODE_SPEED_CAM                              "speed_cam"
#define NODE_TEMP_MONITOR                           "temp_monitor"
#define NODE_NAV_CAM                                "nav_cam"
#define NODE_DOCK_CAM                               "dock_cam"
#define NODE_PERCH_CAM                              "perch_cam"
#define NODE_HAZ_CAM                                "haz_cam"

#define TOPIC_HARDWARE_PMC_COMMAND                  "hw/pmc/command"
#define TOPIC_HARDWARE_PMC_TELEMETRY                "hw/pmc/telemetry"
#define TOPIC_HARDWARE_IMU                          "hw/imu"
#define TOPIC_HARDWARE_NAV_CAM                      "hw/cam_nav"
#define TOPIC_HARDWARE_DOCK_CAM                     "hw/cam_dock"
#define TOPIC_HARDWARE_SCI_CAM                      "hw/cam_sci"
#define TOPIC_HARDWARE_LIGHT_FRONT                  "hw/light_front"
#define TOPIC_HARDWARE_LIGHT_AFT                    "hw/light_aft"
#define TOPIC_HARDWARE_LASER                        "hw/laser"
#define TOPIC_HARDWARE_LASER_RVIZ                   "hw/laser/rviz"
#define TOPIC_HARDWARE_LIGHTS_RVIZ                  "hw/lights/rviz"
#define TOPIC_HARDWARE_EPS_CHANNELS                 "hw/eps/channels"
#define TOPIC_HARDWARE_EPS_BATTERY_STATE_TL         "hw/eps/battery/top_left/state"
#define TOPIC_HARDWARE_EPS_BATTERY_STATE_TR         "hw/eps/battery/top_right/state"
#define TOPIC_HARDWARE_EPS_BATTERY_STATE_BL         "hw/eps/battery/bottom_left/state"
#define TOPIC_HARDWARE_EPS_BATTERY_STATE_BR         "hw/eps/battery/bottom_right/state"
#define TOPIC_HARDWARE_EPS_BATTERY_TEMP_TL          "hw/eps/battery/top_left/temp"
#define TOPIC_HARDWARE_EPS_BATTERY_TEMP_TR          "hw/eps/battery/top_right/temp"
#define TOPIC_HARDWARE_EPS_BATTERY_TEMP_BL          "hw/eps/battery/bottom_left/temp"
#define TOPIC_HARDWARE_EPS_BATTERY_TEMP_BR          "hw/eps/battery/bottom_right/temp"
#define TOPIC_HARDWARE_PERCHING_ARM_STATE           "hw/arm/state"
#define TOPIC_HARDWARE_PERCHING_ARM_JOINT_SAMPLE    "hw/arm/joints"
#define TOPIC_HARDWARE_PICOFLEXX_PREFIX             "hw/depth_"
#define TOPIC_HARDWARE_PICOFLEXX_SUFFIX             "/points"
#define TOPIC_HARDWARE_PICOFLEXX_SUFFIX_EXTENDED    "/extended"
#define TOPIC_HARDWARE_PICOFLEXX_SUFFIX_DEPTH_IMAGE "/depth_image"
#define TOPIC_HARDWARE_NAME_HAZ_CAM                 "haz"
#define TOPIC_HARDWARE_NAME_PERCH_CAM               "perch"
#define TOPIC_HARDWARE_SPEED_CAM_CAMERA_IMAGE       "hw/speed_cam/camera_image"
#define TOPIC_HARDWARE_SPEED_CAM_OPTICAL_FLOW       "hw/speed_cam/optical_flow"
#define TOPIC_HARDWARE_SPEED_CAM_IMU                "hw/speed_cam/imu"
#define TOPIC_HARDWARE_SPEED_CAM_SPEED              "hw/speed_cam/speed"
#define TOPIC_HARDWARE_TEMP_MONITOR_PREFIX          "hw/temp_monitor/"

#define ACTION_HARDWARE_PERCHING_ARM                "hw/arm"

#define SERVICE_HARDWARE_EPS_RESET                  "hw/eps/reset"
#define SERVICE_HARDWARE_EPS_CONF_LED_STATE         "hw/eps/configure_led_state"
#define SERVICE_HARDWARE_EPS_CONF_PAYLOAD_POWER     "hw/eps/configure_payload_power"
#define SERVICE_HARDWARE_EPS_RING_BUZZER            "hw/eps/ring_buzzer"
#define SERVICE_HARDWARE_EPS_ENABLE_PMCS            "hw/eps/enable_pmcs"
#define SERVICE_HARDWARE_EPS_GET_BATTERY_STATUS     "hw/eps/get_battery_status"
#define SERVICE_HARDWARE_EPS_GET_TEMPERATURES       "hw/eps/get_temperatures"

#define SERVICE_HARDWARE_LIGHT_FRONT_CONTROL        "hw/light_front/control"
#define SERVICE_HARDWARE_LIGHT_AFT_CONTROL          "hw/light_aft/control"
#define SERVICE_HARDWARE_LASER_ENABLE               "hw/laser/enable"
#define SERVICE_HARDWARE_PMC_ENABLE                 "hw/pmc/enable"

#endif  // FF_UTIL_FF_NAMES_H_
