/** @file
 *  @brief MAVLink message entries generated from common.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_MSG_ENTRIES_H
#define MAVLINK_MSG_ENTRIES_H

/**
 * The values of msg_entry_t for all messages in the dialect.
 */
#define MAVLINK_MSG_HEARTBEAT_ENTRY {0, 50, 9, 9, 0, 0, 0}
#define MAVLINK_MSG_SYS_STATUS_ENTRY {1, 124, 31, 31, 0, 0, 0}
#define MAVLINK_MSG_SYSTEM_TIME_ENTRY {2, 137, 12, 12, 0, 0, 0}
#define MAVLINK_MSG_PING_ENTRY {4, 237, 14, 14, 3, 12, 13}
#define MAVLINK_MSG_CHANGE_OPERATOR_CONTROL_ENTRY {5, 217, 28, 28, 1, 0, 0}
#define MAVLINK_MSG_CHANGE_OPERATOR_CONTROL_ACK_ENTRY {6, 104, 3, 3, 0, 0, 0}
#define MAVLINK_MSG_AUTH_KEY_ENTRY {7, 119, 32, 32, 0, 0, 0}
#define MAVLINK_MSG_LINK_NODE_STATUS_ENTRY {8, 117, 36, 36, 0, 0, 0}
#define MAVLINK_MSG_SET_MODE_ENTRY {11, 89, 6, 6, 1, 4, 0}
#define MAVLINK_MSG_PARAM_ACK_TRANSACTION_ENTRY {19, 137, 24, 24, 3, 4, 5}
#define MAVLINK_MSG_PARAM_REQUEST_READ_ENTRY {20, 214, 20, 20, 3, 2, 3}
#define MAVLINK_MSG_PARAM_REQUEST_LIST_ENTRY {21, 159, 2, 2, 3, 0, 1}
#define MAVLINK_MSG_PARAM_VALUE_ENTRY {22, 220, 25, 25, 0, 0, 0}
#define MAVLINK_MSG_PARAM_SET_ENTRY {23, 168, 23, 23, 3, 4, 5}
#define MAVLINK_MSG_GPS_RAW_INT_ENTRY {24, 24, 30, 52, 0, 0, 0}
#define MAVLINK_MSG_GPS_STATUS_ENTRY {25, 23, 101, 101, 0, 0, 0}
#define MAVLINK_MSG_SCALED_IMU_ENTRY {26, 170, 22, 24, 0, 0, 0}
#define MAVLINK_MSG_RAW_IMU_ENTRY {27, 144, 26, 29, 0, 0, 0}
#define MAVLINK_MSG_RAW_PRESSURE_ENTRY {28, 67, 16, 16, 0, 0, 0}
#define MAVLINK_MSG_SCALED_PRESSURE_ENTRY {29, 115, 14, 16, 0, 0, 0}
#define MAVLINK_MSG_ATTITUDE_ENTRY {30, 39, 28, 28, 0, 0, 0}
#define MAVLINK_MSG_ATTITUDE_QUATERNION_ENTRY {31, 246, 32, 48, 0, 0, 0}
#define MAVLINK_MSG_LOCAL_POSITION_NED_ENTRY {32, 185, 28, 28, 0, 0, 0}
#define MAVLINK_MSG_GLOBAL_POSITION_INT_ENTRY {33, 104, 28, 28, 0, 0, 0}
#define MAVLINK_MSG_RC_CHANNELS_SCALED_ENTRY {34, 237, 22, 22, 0, 0, 0}
#define MAVLINK_MSG_RC_CHANNELS_RAW_ENTRY {35, 244, 22, 22, 0, 0, 0}
#define MAVLINK_MSG_SERVO_OUTPUT_RAW_ENTRY {36, 222, 21, 37, 0, 0, 0}
#define MAVLINK_MSG_MISSION_REQUEST_PARTIAL_LIST_ENTRY {37, 212, 6, 7, 3, 4, 5}
#define MAVLINK_MSG_MISSION_WRITE_PARTIAL_LIST_ENTRY {38, 9, 6, 7, 3, 4, 5}
#define MAVLINK_MSG_MISSION_ITEM_ENTRY {39, 254, 37, 38, 3, 32, 33}
#define MAVLINK_MSG_MISSION_REQUEST_ENTRY {40, 230, 4, 5, 3, 2, 3}
#define MAVLINK_MSG_MISSION_SET_CURRENT_ENTRY {41, 28, 4, 4, 3, 2, 3}
#define MAVLINK_MSG_MISSION_CURRENT_ENTRY {42, 28, 2, 2, 0, 0, 0}
#define MAVLINK_MSG_MISSION_REQUEST_LIST_ENTRY {43, 132, 2, 3, 3, 0, 1}
#define MAVLINK_MSG_MISSION_COUNT_ENTRY {44, 221, 4, 5, 3, 2, 3}
#define MAVLINK_MSG_MISSION_CLEAR_ALL_ENTRY {45, 232, 2, 3, 3, 0, 1}
#define MAVLINK_MSG_MISSION_ITEM_REACHED_ENTRY {46, 11, 2, 2, 0, 0, 0}
#define MAVLINK_MSG_MISSION_ACK_ENTRY {47, 153, 3, 4, 3, 0, 1}
#define MAVLINK_MSG_SET_GPS_GLOBAL_ORIGIN_ENTRY {48, 41, 13, 21, 1, 12, 0}
#define MAVLINK_MSG_GPS_GLOBAL_ORIGIN_ENTRY {49, 39, 12, 20, 0, 0, 0}
#define MAVLINK_MSG_PARAM_MAP_RC_ENTRY {50, 78, 37, 37, 3, 18, 19}
#define MAVLINK_MSG_MISSION_REQUEST_INT_ENTRY {51, 196, 4, 5, 3, 2, 3}
#define MAVLINK_MSG_MISSION_CHANGED_ENTRY {52, 132, 7, 7, 0, 0, 0}
#define MAVLINK_MSG_SAFETY_SET_ALLOWED_AREA_ENTRY {54, 15, 27, 27, 3, 24, 25}
#define MAVLINK_MSG_SAFETY_ALLOWED_AREA_ENTRY {55, 3, 25, 25, 0, 0, 0}
#define MAVLINK_MSG_ATTITUDE_QUATERNION_COV_ENTRY {61, 167, 72, 72, 0, 0, 0}
#define MAVLINK_MSG_NAV_CONTROLLER_OUTPUT_ENTRY {62, 183, 26, 26, 0, 0, 0}
#define MAVLINK_MSG_GLOBAL_POSITION_INT_COV_ENTRY {63, 119, 181, 181, 0, 0, 0}
#define MAVLINK_MSG_LOCAL_POSITION_NED_COV_ENTRY {64, 191, 225, 225, 0, 0, 0}
#define MAVLINK_MSG_RC_CHANNELS_ENTRY {65, 118, 42, 42, 0, 0, 0}
#define MAVLINK_MSG_REQUEST_DATA_STREAM_ENTRY {66, 148, 6, 6, 3, 2, 3}
#define MAVLINK_MSG_DATA_STREAM_ENTRY {67, 21, 4, 4, 0, 0, 0}
#define MAVLINK_MSG_MANUAL_CONTROL_ENTRY {69, 243, 11, 11, 1, 10, 0}
#define MAVLINK_MSG_RC_CHANNELS_OVERRIDE_ENTRY {70, 124, 18, 38, 3, 16, 17}
#define MAVLINK_MSG_MISSION_ITEM_INT_ENTRY {73, 38, 37, 38, 3, 32, 33}
#define MAVLINK_MSG_VFR_HUD_ENTRY {74, 20, 20, 20, 0, 0, 0}
#define MAVLINK_MSG_COMMAND_INT_ENTRY {75, 158, 35, 35, 3, 30, 31}
#define MAVLINK_MSG_COMMAND_LONG_ENTRY {76, 152, 33, 33, 3, 30, 31}
#define MAVLINK_MSG_COMMAND_ACK_ENTRY {77, 143, 3, 10, 3, 8, 9}
#define MAVLINK_MSG_COMMAND_CANCEL_ENTRY {80, 14, 4, 4, 3, 2, 3}
#define MAVLINK_MSG_MANUAL_SETPOINT_ENTRY {81, 106, 22, 22, 0, 0, 0}
#define MAVLINK_MSG_SET_ATTITUDE_TARGET_ENTRY {82, 49, 39, 39, 3, 36, 37}
#define MAVLINK_MSG_ATTITUDE_TARGET_ENTRY {83, 22, 37, 37, 0, 0, 0}
#define MAVLINK_MSG_SET_POSITION_TARGET_LOCAL_NED_ENTRY {84, 143, 53, 53, 3, 50, 51}
#define MAVLINK_MSG_POSITION_TARGET_LOCAL_NED_ENTRY {85, 140, 51, 51, 0, 0, 0}
#define MAVLINK_MSG_SET_POSITION_TARGET_GLOBAL_INT_ENTRY {86, 5, 53, 53, 3, 50, 51}
#define MAVLINK_MSG_POSITION_TARGET_GLOBAL_INT_ENTRY {87, 150, 51, 51, 0, 0, 0}
#define MAVLINK_MSG_LOCAL_POSITION_NED_SYSTEM_GLOBAL_OFFSET_ENTRY {89, 231, 28, 28, 0, 0, 0}
#define MAVLINK_MSG_HIL_STATE_ENTRY {90, 183, 56, 56, 0, 0, 0}
#define MAVLINK_MSG_HIL_CONTROLS_ENTRY {91, 63, 42, 42, 0, 0, 0}
#define MAVLINK_MSG_HIL_RC_INPUTS_RAW_ENTRY {92, 54, 33, 33, 0, 0, 0}
#define MAVLINK_MSG_HIL_ACTUATOR_CONTROLS_ENTRY {93, 47, 81, 81, 0, 0, 0}
#define MAVLINK_MSG_OPTICAL_FLOW_ENTRY {100, 175, 26, 34, 0, 0, 0}
#define MAVLINK_MSG_GLOBAL_VISION_POSITION_ESTIMATE_ENTRY {101, 102, 32, 117, 0, 0, 0}
#define MAVLINK_MSG_VISION_POSITION_ESTIMATE_ENTRY {102, 158, 32, 117, 0, 0, 0}
#define MAVLINK_MSG_VISION_SPEED_ESTIMATE_ENTRY {103, 208, 20, 57, 0, 0, 0}
#define MAVLINK_MSG_VICON_POSITION_ESTIMATE_ENTRY {104, 56, 32, 116, 0, 0, 0}
#define MAVLINK_MSG_HIGHRES_IMU_ENTRY {105, 93, 62, 63, 0, 0, 0}
#define MAVLINK_MSG_OPTICAL_FLOW_RAD_ENTRY {106, 138, 44, 44, 0, 0, 0}
#define MAVLINK_MSG_HIL_SENSOR_ENTRY {107, 108, 64, 64, 0, 0, 0}
#define MAVLINK_MSG_SIM_STATE_ENTRY {108, 32, 84, 84, 0, 0, 0}
#define MAVLINK_MSG_RADIO_STATUS_ENTRY {109, 185, 9, 9, 0, 0, 0}
#define MAVLINK_MSG_FILE_TRANSFER_PROTOCOL_ENTRY {110, 84, 254, 254, 3, 1, 2}
#define MAVLINK_MSG_TIMESYNC_ENTRY {111, 34, 16, 16, 0, 0, 0}
#define MAVLINK_MSG_CAMERA_TRIGGER_ENTRY {112, 174, 12, 12, 0, 0, 0}
#define MAVLINK_MSG_HIL_GPS_ENTRY {113, 124, 36, 37, 0, 0, 0}
#define MAVLINK_MSG_HIL_OPTICAL_FLOW_ENTRY {114, 237, 44, 44, 0, 0, 0}
#define MAVLINK_MSG_HIL_STATE_QUATERNION_ENTRY {115, 4, 64, 64, 0, 0, 0}
#define MAVLINK_MSG_SCALED_IMU2_ENTRY {116, 76, 22, 24, 0, 0, 0}
#define MAVLINK_MSG_LOG_REQUEST_LIST_ENTRY {117, 128, 6, 6, 3, 4, 5}
#define MAVLINK_MSG_LOG_ENTRY_ENTRY {118, 56, 14, 14, 0, 0, 0}
#define MAVLINK_MSG_LOG_REQUEST_DATA_ENTRY {119, 116, 12, 12, 3, 10, 11}
#define MAVLINK_MSG_LOG_DATA_ENTRY {120, 134, 97, 97, 0, 0, 0}
#define MAVLINK_MSG_LOG_ERASE_ENTRY {121, 237, 2, 2, 3, 0, 1}
#define MAVLINK_MSG_LOG_REQUEST_END_ENTRY {122, 203, 2, 2, 3, 0, 1}
#define MAVLINK_MSG_GPS_INJECT_DATA_ENTRY {123, 250, 113, 113, 3, 0, 1}
#define MAVLINK_MSG_GPS2_RAW_ENTRY {124, 87, 35, 37, 0, 0, 0}
#define MAVLINK_MSG_POWER_STATUS_ENTRY {125, 203, 6, 6, 0, 0, 0}
#define MAVLINK_MSG_SERIAL_CONTROL_ENTRY {126, 220, 79, 79, 0, 0, 0}
#define MAVLINK_MSG_GPS_RTK_ENTRY {127, 25, 35, 35, 0, 0, 0}
#define MAVLINK_MSG_GPS2_RTK_ENTRY {128, 226, 35, 35, 0, 0, 0}
#define MAVLINK_MSG_SCALED_IMU3_ENTRY {129, 46, 22, 24, 0, 0, 0}
#define MAVLINK_MSG_DATA_TRANSMISSION_HANDSHAKE_ENTRY {130, 29, 13, 13, 0, 0, 0}
#define MAVLINK_MSG_ENCAPSULATED_DATA_ENTRY {131, 223, 255, 255, 0, 0, 0}
#define MAVLINK_MSG_DISTANCE_SENSOR_ENTRY {132, 85, 14, 39, 0, 0, 0}
#define MAVLINK_MSG_TERRAIN_REQUEST_ENTRY {133, 6, 18, 18, 0, 0, 0}
#define MAVLINK_MSG_TERRAIN_DATA_ENTRY {134, 229, 43, 43, 0, 0, 0}
#define MAVLINK_MSG_TERRAIN_CHECK_ENTRY {135, 203, 8, 8, 0, 0, 0}
#define MAVLINK_MSG_TERRAIN_REPORT_ENTRY {136, 1, 22, 22, 0, 0, 0}
#define MAVLINK_MSG_SCALED_PRESSURE2_ENTRY {137, 195, 14, 16, 0, 0, 0}
#define MAVLINK_MSG_ATT_POS_MOCAP_ENTRY {138, 109, 36, 120, 0, 0, 0}
#define MAVLINK_MSG_SET_ACTUATOR_CONTROL_TARGET_ENTRY {139, 168, 43, 43, 3, 41, 42}
#define MAVLINK_MSG_ACTUATOR_CONTROL_TARGET_ENTRY {140, 181, 41, 41, 0, 0, 0}
#define MAVLINK_MSG_ALTITUDE_ENTRY {141, 47, 32, 32, 0, 0, 0}
#define MAVLINK_MSG_RESOURCE_REQUEST_ENTRY {142, 72, 243, 243, 0, 0, 0}
#define MAVLINK_MSG_SCALED_PRESSURE3_ENTRY {143, 131, 14, 16, 0, 0, 0}
#define MAVLINK_MSG_FOLLOW_TARGET_ENTRY {144, 127, 93, 93, 0, 0, 0}
#define MAVLINK_MSG_CONTROL_SYSTEM_STATE_ENTRY {146, 103, 100, 100, 0, 0, 0}
#define MAVLINK_MSG_BATTERY_STATUS_ENTRY {147, 154, 36, 49, 0, 0, 0}
#define MAVLINK_MSG_AUTOPILOT_VERSION_ENTRY {148, 178, 60, 78, 0, 0, 0}
#define MAVLINK_MSG_LANDING_TARGET_ENTRY {149, 200, 30, 60, 0, 0, 0}
#define MAVLINK_MSG_FENCE_STATUS_ENTRY {162, 189, 8, 9, 0, 0, 0}
#define MAVLINK_MSG_ESTIMATOR_STATUS_ENTRY {230, 163, 42, 42, 0, 0, 0}
#define MAVLINK_MSG_WIND_COV_ENTRY {231, 105, 40, 40, 0, 0, 0}
#define MAVLINK_MSG_GPS_INPUT_ENTRY {232, 151, 63, 65, 0, 0, 0}
#define MAVLINK_MSG_GPS_RTCM_DATA_ENTRY {233, 35, 182, 182, 0, 0, 0}
#define MAVLINK_MSG_HIGH_LATENCY_ENTRY {234, 150, 40, 40, 0, 0, 0}
#define MAVLINK_MSG_HIGH_LATENCY2_ENTRY {235, 179, 42, 42, 0, 0, 0}
#define MAVLINK_MSG_VIBRATION_ENTRY {241, 90, 32, 32, 0, 0, 0}
#define MAVLINK_MSG_HOME_POSITION_ENTRY {242, 104, 52, 60, 0, 0, 0}
#define MAVLINK_MSG_SET_HOME_POSITION_ENTRY {243, 85, 53, 61, 1, 52, 0}
#define MAVLINK_MSG_MESSAGE_INTERVAL_ENTRY {244, 95, 6, 6, 0, 0, 0}
#define MAVLINK_MSG_EXTENDED_SYS_STATE_ENTRY {245, 130, 2, 2, 0, 0, 0}
#define MAVLINK_MSG_ADSB_VEHICLE_ENTRY {246, 184, 38, 38, 0, 0, 0}
#define MAVLINK_MSG_COLLISION_ENTRY {247, 81, 19, 19, 0, 0, 0}
#define MAVLINK_MSG_V2_EXTENSION_ENTRY {248, 8, 254, 254, 3, 3, 4}
#define MAVLINK_MSG_MEMORY_VECT_ENTRY {249, 204, 36, 36, 0, 0, 0}
#define MAVLINK_MSG_DEBUG_VECT_ENTRY {250, 49, 30, 30, 0, 0, 0}
#define MAVLINK_MSG_NAMED_VALUE_FLOAT_ENTRY {251, 170, 18, 18, 0, 0, 0}
#define MAVLINK_MSG_NAMED_VALUE_INT_ENTRY {252, 44, 18, 18, 0, 0, 0}
#define MAVLINK_MSG_STATUSTEXT_ENTRY {253, 83, 51, 54, 0, 0, 0}
#define MAVLINK_MSG_DEBUG_ENTRY {254, 46, 9, 9, 0, 0, 0}
#define MAVLINK_MSG_SETUP_SIGNING_ENTRY {256, 71, 42, 42, 3, 8, 9}
#define MAVLINK_MSG_BUTTON_CHANGE_ENTRY {257, 131, 9, 9, 0, 0, 0}
#define MAVLINK_MSG_PLAY_TUNE_ENTRY {258, 187, 32, 232, 3, 0, 1}
#define MAVLINK_MSG_CAMERA_INFORMATION_ENTRY {259, 92, 235, 235, 0, 0, 0}
#define MAVLINK_MSG_CAMERA_SETTINGS_ENTRY {260, 146, 5, 13, 0, 0, 0}
#define MAVLINK_MSG_STORAGE_INFORMATION_ENTRY {261, 179, 27, 27, 0, 0, 0}
#define MAVLINK_MSG_CAMERA_CAPTURE_STATUS_ENTRY {262, 12, 18, 22, 0, 0, 0}
#define MAVLINK_MSG_CAMERA_IMAGE_CAPTURED_ENTRY {263, 133, 255, 255, 0, 0, 0}
#define MAVLINK_MSG_FLIGHT_INFORMATION_ENTRY {264, 49, 28, 28, 0, 0, 0}
#define MAVLINK_MSG_MOUNT_ORIENTATION_ENTRY {265, 26, 16, 20, 0, 0, 0}
#define MAVLINK_MSG_LOGGING_DATA_ENTRY {266, 193, 255, 255, 3, 2, 3}
#define MAVLINK_MSG_LOGGING_DATA_ACKED_ENTRY {267, 35, 255, 255, 3, 2, 3}
#define MAVLINK_MSG_LOGGING_ACK_ENTRY {268, 14, 4, 4, 3, 2, 3}
#define MAVLINK_MSG_VIDEO_STREAM_INFORMATION_ENTRY {269, 109, 213, 213, 0, 0, 0}
#define MAVLINK_MSG_VIDEO_STREAM_STATUS_ENTRY {270, 59, 19, 19, 0, 0, 0}
#define MAVLINK_MSG_CAMERA_FOV_STATUS_ENTRY {271, 22, 52, 52, 0, 0, 0}
#define MAVLINK_MSG_CAMERA_TRACKING_IMAGE_STATUS_ENTRY {275, 126, 31, 31, 0, 0, 0}
#define MAVLINK_MSG_CAMERA_TRACKING_GEO_STATUS_ENTRY {276, 18, 49, 49, 0, 0, 0}
#define MAVLINK_MSG_GIMBAL_MANAGER_INFORMATION_ENTRY {280, 166, 33, 33, 0, 0, 0}
#define MAVLINK_MSG_GIMBAL_MANAGER_STATUS_ENTRY {281, 0, 9, 9, 0, 0, 0}
#define MAVLINK_MSG_GIMBAL_MANAGER_SET_ATTITUDE_ENTRY {282, 123, 35, 35, 3, 32, 33}
#define MAVLINK_MSG_GIMBAL_DEVICE_INFORMATION_ENTRY {283, 247, 98, 98, 0, 0, 0}
#define MAVLINK_MSG_GIMBAL_DEVICE_SET_ATTITUDE_ENTRY {284, 99, 32, 32, 3, 30, 31}
#define MAVLINK_MSG_GIMBAL_DEVICE_ATTITUDE_STATUS_ENTRY {285, 137, 40, 40, 3, 38, 39}
#define MAVLINK_MSG_AUTOPILOT_STATE_FOR_GIMBAL_DEVICE_ENTRY {286, 210, 53, 53, 3, 50, 51}
#define MAVLINK_MSG_GIMBAL_MANAGER_SET_TILTPAN_ENTRY {287, 74, 23, 23, 3, 20, 21}
#define MAVLINK_MSG_ESC_INFO_ENTRY {290, 221, 42, 42, 0, 0, 0}
#define MAVLINK_MSG_ESC_STATUS_ENTRY {291, 10, 57, 57, 0, 0, 0}
#define MAVLINK_MSG_WIFI_CONFIG_AP_ENTRY {299, 19, 96, 98, 0, 0, 0}
#define MAVLINK_MSG_PROTOCOL_VERSION_ENTRY {300, 217, 22, 22, 0, 0, 0}
#define MAVLINK_MSG_AIS_VESSEL_ENTRY {301, 243, 58, 58, 0, 0, 0}
#define MAVLINK_MSG_UAVCAN_NODE_STATUS_ENTRY {310, 28, 17, 17, 0, 0, 0}
#define MAVLINK_MSG_UAVCAN_NODE_INFO_ENTRY {311, 95, 116, 116, 0, 0, 0}
#define MAVLINK_MSG_PARAM_EXT_REQUEST_READ_ENTRY {320, 243, 20, 21, 3, 2, 3}
#define MAVLINK_MSG_PARAM_EXT_REQUEST_LIST_ENTRY {321, 88, 2, 3, 3, 0, 1}
#define MAVLINK_MSG_PARAM_EXT_VALUE_ENTRY {322, 243, 149, 149, 0, 0, 0}
#define MAVLINK_MSG_PARAM_EXT_SET_ENTRY {323, 78, 147, 147, 3, 0, 1}
#define MAVLINK_MSG_PARAM_EXT_ACK_ENTRY {324, 132, 146, 146, 0, 0, 0}
#define MAVLINK_MSG_PARAM_EXT_VALUE_TRIMMED_ENTRY {325, 132, 149, 149, 0, 0, 0}
#define MAVLINK_MSG_PARAM_EXT_SET_TRIMMED_ENTRY {326, 120, 147, 147, 3, 0, 1}
#define MAVLINK_MSG_PARAM_EXT_ACK_TRIMMED_ENTRY {327, 129, 146, 146, 0, 0, 0}
#define MAVLINK_MSG_PARAM_START_TRANSACTION_ENTRY {328, 160, 6, 6, 3, 2, 3}
#define MAVLINK_MSG_PARAM_COMMIT_TRANSACTION_ENTRY {329, 121, 6, 6, 3, 2, 3}
#define MAVLINK_MSG_OBSTACLE_DISTANCE_ENTRY {330, 23, 158, 167, 0, 0, 0}
#define MAVLINK_MSG_ODOMETRY_ENTRY {331, 91, 230, 232, 0, 0, 0}
#define MAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_ENTRY {332, 236, 239, 239, 0, 0, 0}
#define MAVLINK_MSG_TRAJECTORY_REPRESENTATION_BEZIER_ENTRY {333, 231, 109, 109, 0, 0, 0}
#define MAVLINK_MSG_CELLULAR_STATUS_ENTRY {334, 72, 10, 10, 0, 0, 0}
#define MAVLINK_MSG_ISBD_LINK_STATUS_ENTRY {335, 225, 24, 24, 0, 0, 0}
#define MAVLINK_MSG_CELLULAR_CONFIG_ENTRY {336, 245, 84, 84, 0, 0, 0}
#define MAVLINK_MSG_RAW_RPM_ENTRY {339, 199, 5, 5, 0, 0, 0}
#define MAVLINK_MSG_UTM_GLOBAL_POSITION_ENTRY {340, 99, 70, 70, 0, 0, 0}
#define MAVLINK_MSG_DEBUG_FLOAT_ARRAY_ENTRY {350, 232, 20, 252, 0, 0, 0}
#define MAVLINK_MSG_ORBIT_EXECUTION_STATUS_ENTRY {360, 11, 25, 25, 0, 0, 0}
#define MAVLINK_MSG_SMART_BATTERY_INFO_ENTRY {370, 98, 73, 73, 0, 0, 0}
#define MAVLINK_MSG_SMART_BATTERY_STATUS_ENTRY {371, 161, 50, 50, 0, 0, 0}
#define MAVLINK_MSG_GENERATOR_STATUS_ENTRY {373, 117, 42, 42, 0, 0, 0}
#define MAVLINK_MSG_ACTUATOR_OUTPUT_STATUS_ENTRY {375, 251, 140, 140, 0, 0, 0}
#define MAVLINK_MSG_TIME_ESTIMATE_TO_TARGET_ENTRY {380, 232, 20, 20, 0, 0, 0}
#define MAVLINK_MSG_TUNNEL_ENTRY {385, 147, 133, 133, 3, 2, 3}
#define MAVLINK_MSG_ONBOARD_COMPUTER_STATUS_ENTRY {390, 156, 238, 238, 0, 0, 0}
#define MAVLINK_MSG_COMPONENT_INFORMATION_ENTRY {395, 163, 156, 156, 0, 0, 0}
#define MAVLINK_MSG_PLAY_TUNE_V2_ENTRY {400, 110, 254, 254, 3, 4, 5}
#define MAVLINK_MSG_SUPPORTED_TUNES_ENTRY {401, 183, 6, 6, 3, 4, 5}
#define MAVLINK_MSG_WHEEL_DISTANCE_ENTRY {9000, 113, 137, 137, 0, 0, 0}
#define MAVLINK_MSG_WINCH_STATUS_ENTRY {9005, 117, 34, 34, 0, 0, 0}
#define MAVLINK_MSG_OPEN_DRONE_ID_BASIC_ID_ENTRY {12900, 114, 44, 44, 3, 0, 1}
#define MAVLINK_MSG_OPEN_DRONE_ID_LOCATION_ENTRY {12901, 254, 59, 59, 3, 30, 31}
#define MAVLINK_MSG_OPEN_DRONE_ID_AUTHENTICATION_ENTRY {12902, 49, 53, 53, 3, 4, 5}
#define MAVLINK_MSG_OPEN_DRONE_ID_SELF_ID_ENTRY {12903, 249, 46, 46, 3, 0, 1}
#define MAVLINK_MSG_OPEN_DRONE_ID_SYSTEM_ENTRY {12904, 203, 46, 46, 3, 20, 21}
#define MAVLINK_MSG_OPEN_DRONE_ID_OPERATOR_ID_ENTRY {12905, 49, 43, 43, 3, 0, 1}
#define MAVLINK_MSG_OPEN_DRONE_ID_MESSAGE_PACK_ENTRY {12915, 62, 254, 254, 3, 0, 1}

/**
 * If only relatively few MAVLink messages are used, efficiency can
 * be much improved, both memory and computational time wise, by
 * commenting out all those which are not used, and to write in code
 *
 * #define MAVLINK_MESSAGE_CRCS  MAVLINK_MESSAGE_ENTRIES 
 *
 * Alternatively, the above defines can be used to define one's own
 * MAVLINK_MESSAGE_CRCS. It is then MOST important to keep the sequence
 * since otherwise the default binary search will fail. E.g.:
 * 
 * #include "mavlink/v2.0/thedialect/message_entries.h"
 * #define MAVLINK_MESSAGE_CRCS { MAVLINK_MSG_PARAM_REQUEST_READ_ENTRY,\
 *                                MAVLINK_MSG_PARAM_REQUEST_LIST_ENTRY,\
 *                                MAVLINK_MSG_PARAM_SET_ENTRY,\
 *                                MAVLINK_MSG_COMMAND_LONG_ENTRY,\
 *                                MAVLINK_MSG_AUTOPILOT_VERSION_REQUEST_ENTRY }
 */ 
#define MAVLINK_MESSAGE_ENTRIES {\
    MAVLINK_MSG_HEARTBEAT_ENTRY,\
    MAVLINK_MSG_SYS_STATUS_ENTRY,\
    MAVLINK_MSG_SYSTEM_TIME_ENTRY,\
    MAVLINK_MSG_PING_ENTRY,\
    MAVLINK_MSG_CHANGE_OPERATOR_CONTROL_ENTRY,\
    MAVLINK_MSG_CHANGE_OPERATOR_CONTROL_ACK_ENTRY,\
    MAVLINK_MSG_AUTH_KEY_ENTRY,\
    MAVLINK_MSG_LINK_NODE_STATUS_ENTRY,\
    MAVLINK_MSG_SET_MODE_ENTRY,\
    MAVLINK_MSG_PARAM_ACK_TRANSACTION_ENTRY,\
    MAVLINK_MSG_PARAM_REQUEST_READ_ENTRY,\
    MAVLINK_MSG_PARAM_REQUEST_LIST_ENTRY,\
    MAVLINK_MSG_PARAM_VALUE_ENTRY,\
    MAVLINK_MSG_PARAM_SET_ENTRY,\
    MAVLINK_MSG_GPS_RAW_INT_ENTRY,\
    MAVLINK_MSG_GPS_STATUS_ENTRY,\
    MAVLINK_MSG_SCALED_IMU_ENTRY,\
    MAVLINK_MSG_RAW_IMU_ENTRY,\
    MAVLINK_MSG_RAW_PRESSURE_ENTRY,\
    MAVLINK_MSG_SCALED_PRESSURE_ENTRY,\
    MAVLINK_MSG_ATTITUDE_ENTRY,\
    MAVLINK_MSG_ATTITUDE_QUATERNION_ENTRY,\
    MAVLINK_MSG_LOCAL_POSITION_NED_ENTRY,\
    MAVLINK_MSG_GLOBAL_POSITION_INT_ENTRY,\
    MAVLINK_MSG_RC_CHANNELS_SCALED_ENTRY,\
    MAVLINK_MSG_RC_CHANNELS_RAW_ENTRY,\
    MAVLINK_MSG_SERVO_OUTPUT_RAW_ENTRY,\
    MAVLINK_MSG_MISSION_REQUEST_PARTIAL_LIST_ENTRY,\
    MAVLINK_MSG_MISSION_WRITE_PARTIAL_LIST_ENTRY,\
    MAVLINK_MSG_MISSION_ITEM_ENTRY,\
    MAVLINK_MSG_MISSION_REQUEST_ENTRY,\
    MAVLINK_MSG_MISSION_SET_CURRENT_ENTRY,\
    MAVLINK_MSG_MISSION_CURRENT_ENTRY,\
    MAVLINK_MSG_MISSION_REQUEST_LIST_ENTRY,\
    MAVLINK_MSG_MISSION_COUNT_ENTRY,\
    MAVLINK_MSG_MISSION_CLEAR_ALL_ENTRY,\
    MAVLINK_MSG_MISSION_ITEM_REACHED_ENTRY,\
    MAVLINK_MSG_MISSION_ACK_ENTRY,\
    MAVLINK_MSG_SET_GPS_GLOBAL_ORIGIN_ENTRY,\
    MAVLINK_MSG_GPS_GLOBAL_ORIGIN_ENTRY,\
    MAVLINK_MSG_PARAM_MAP_RC_ENTRY,\
    MAVLINK_MSG_MISSION_REQUEST_INT_ENTRY,\
    MAVLINK_MSG_MISSION_CHANGED_ENTRY,\
    MAVLINK_MSG_SAFETY_SET_ALLOWED_AREA_ENTRY,\
    MAVLINK_MSG_SAFETY_ALLOWED_AREA_ENTRY,\
    MAVLINK_MSG_ATTITUDE_QUATERNION_COV_ENTRY,\
    MAVLINK_MSG_NAV_CONTROLLER_OUTPUT_ENTRY,\
    MAVLINK_MSG_GLOBAL_POSITION_INT_COV_ENTRY,\
    MAVLINK_MSG_LOCAL_POSITION_NED_COV_ENTRY,\
    MAVLINK_MSG_RC_CHANNELS_ENTRY,\
    MAVLINK_MSG_REQUEST_DATA_STREAM_ENTRY,\
    MAVLINK_MSG_DATA_STREAM_ENTRY,\
    MAVLINK_MSG_MANUAL_CONTROL_ENTRY,\
    MAVLINK_MSG_RC_CHANNELS_OVERRIDE_ENTRY,\
    MAVLINK_MSG_MISSION_ITEM_INT_ENTRY,\
    MAVLINK_MSG_VFR_HUD_ENTRY,\
    MAVLINK_MSG_COMMAND_INT_ENTRY,\
    MAVLINK_MSG_COMMAND_LONG_ENTRY,\
    MAVLINK_MSG_COMMAND_ACK_ENTRY,\
    MAVLINK_MSG_COMMAND_CANCEL_ENTRY,\
    MAVLINK_MSG_MANUAL_SETPOINT_ENTRY,\
    MAVLINK_MSG_SET_ATTITUDE_TARGET_ENTRY,\
    MAVLINK_MSG_ATTITUDE_TARGET_ENTRY,\
    MAVLINK_MSG_SET_POSITION_TARGET_LOCAL_NED_ENTRY,\
    MAVLINK_MSG_POSITION_TARGET_LOCAL_NED_ENTRY,\
    MAVLINK_MSG_SET_POSITION_TARGET_GLOBAL_INT_ENTRY,\
    MAVLINK_MSG_POSITION_TARGET_GLOBAL_INT_ENTRY,\
    MAVLINK_MSG_LOCAL_POSITION_NED_SYSTEM_GLOBAL_OFFSET_ENTRY,\
    MAVLINK_MSG_HIL_STATE_ENTRY,\
    MAVLINK_MSG_HIL_CONTROLS_ENTRY,\
    MAVLINK_MSG_HIL_RC_INPUTS_RAW_ENTRY,\
    MAVLINK_MSG_HIL_ACTUATOR_CONTROLS_ENTRY,\
    MAVLINK_MSG_OPTICAL_FLOW_ENTRY,\
    MAVLINK_MSG_GLOBAL_VISION_POSITION_ESTIMATE_ENTRY,\
    MAVLINK_MSG_VISION_POSITION_ESTIMATE_ENTRY,\
    MAVLINK_MSG_VISION_SPEED_ESTIMATE_ENTRY,\
    MAVLINK_MSG_VICON_POSITION_ESTIMATE_ENTRY,\
    MAVLINK_MSG_HIGHRES_IMU_ENTRY,\
    MAVLINK_MSG_OPTICAL_FLOW_RAD_ENTRY,\
    MAVLINK_MSG_HIL_SENSOR_ENTRY,\
    MAVLINK_MSG_SIM_STATE_ENTRY,\
    MAVLINK_MSG_RADIO_STATUS_ENTRY,\
    MAVLINK_MSG_FILE_TRANSFER_PROTOCOL_ENTRY,\
    MAVLINK_MSG_TIMESYNC_ENTRY,\
    MAVLINK_MSG_CAMERA_TRIGGER_ENTRY,\
    MAVLINK_MSG_HIL_GPS_ENTRY,\
    MAVLINK_MSG_HIL_OPTICAL_FLOW_ENTRY,\
    MAVLINK_MSG_HIL_STATE_QUATERNION_ENTRY,\
    MAVLINK_MSG_SCALED_IMU2_ENTRY,\
    MAVLINK_MSG_LOG_REQUEST_LIST_ENTRY,\
    MAVLINK_MSG_LOG_ENTRY_ENTRY,\
    MAVLINK_MSG_LOG_REQUEST_DATA_ENTRY,\
    MAVLINK_MSG_LOG_DATA_ENTRY,\
    MAVLINK_MSG_LOG_ERASE_ENTRY,\
    MAVLINK_MSG_LOG_REQUEST_END_ENTRY,\
    MAVLINK_MSG_GPS_INJECT_DATA_ENTRY,\
    MAVLINK_MSG_GPS2_RAW_ENTRY,\
    MAVLINK_MSG_POWER_STATUS_ENTRY,\
    MAVLINK_MSG_SERIAL_CONTROL_ENTRY,\
    MAVLINK_MSG_GPS_RTK_ENTRY,\
    MAVLINK_MSG_GPS2_RTK_ENTRY,\
    MAVLINK_MSG_SCALED_IMU3_ENTRY,\
    MAVLINK_MSG_DATA_TRANSMISSION_HANDSHAKE_ENTRY,\
    MAVLINK_MSG_ENCAPSULATED_DATA_ENTRY,\
    MAVLINK_MSG_DISTANCE_SENSOR_ENTRY,\
    MAVLINK_MSG_TERRAIN_REQUEST_ENTRY,\
    MAVLINK_MSG_TERRAIN_DATA_ENTRY,\
    MAVLINK_MSG_TERRAIN_CHECK_ENTRY,\
    MAVLINK_MSG_TERRAIN_REPORT_ENTRY,\
    MAVLINK_MSG_SCALED_PRESSURE2_ENTRY,\
    MAVLINK_MSG_ATT_POS_MOCAP_ENTRY,\
    MAVLINK_MSG_SET_ACTUATOR_CONTROL_TARGET_ENTRY,\
    MAVLINK_MSG_ACTUATOR_CONTROL_TARGET_ENTRY,\
    MAVLINK_MSG_ALTITUDE_ENTRY,\
    MAVLINK_MSG_RESOURCE_REQUEST_ENTRY,\
    MAVLINK_MSG_SCALED_PRESSURE3_ENTRY,\
    MAVLINK_MSG_FOLLOW_TARGET_ENTRY,\
    MAVLINK_MSG_CONTROL_SYSTEM_STATE_ENTRY,\
    MAVLINK_MSG_BATTERY_STATUS_ENTRY,\
    MAVLINK_MSG_AUTOPILOT_VERSION_ENTRY,\
    MAVLINK_MSG_LANDING_TARGET_ENTRY,\
    MAVLINK_MSG_FENCE_STATUS_ENTRY,\
    MAVLINK_MSG_ESTIMATOR_STATUS_ENTRY,\
    MAVLINK_MSG_WIND_COV_ENTRY,\
    MAVLINK_MSG_GPS_INPUT_ENTRY,\
    MAVLINK_MSG_GPS_RTCM_DATA_ENTRY,\
    MAVLINK_MSG_HIGH_LATENCY_ENTRY,\
    MAVLINK_MSG_HIGH_LATENCY2_ENTRY,\
    MAVLINK_MSG_VIBRATION_ENTRY,\
    MAVLINK_MSG_HOME_POSITION_ENTRY,\
    MAVLINK_MSG_SET_HOME_POSITION_ENTRY,\
    MAVLINK_MSG_MESSAGE_INTERVAL_ENTRY,\
    MAVLINK_MSG_EXTENDED_SYS_STATE_ENTRY,\
    MAVLINK_MSG_ADSB_VEHICLE_ENTRY,\
    MAVLINK_MSG_COLLISION_ENTRY,\
    MAVLINK_MSG_V2_EXTENSION_ENTRY,\
    MAVLINK_MSG_MEMORY_VECT_ENTRY,\
    MAVLINK_MSG_DEBUG_VECT_ENTRY,\
    MAVLINK_MSG_NAMED_VALUE_FLOAT_ENTRY,\
    MAVLINK_MSG_NAMED_VALUE_INT_ENTRY,\
    MAVLINK_MSG_STATUSTEXT_ENTRY,\
    MAVLINK_MSG_DEBUG_ENTRY,\
    MAVLINK_MSG_SETUP_SIGNING_ENTRY,\
    MAVLINK_MSG_BUTTON_CHANGE_ENTRY,\
    MAVLINK_MSG_PLAY_TUNE_ENTRY,\
    MAVLINK_MSG_CAMERA_INFORMATION_ENTRY,\
    MAVLINK_MSG_CAMERA_SETTINGS_ENTRY,\
    MAVLINK_MSG_STORAGE_INFORMATION_ENTRY,\
    MAVLINK_MSG_CAMERA_CAPTURE_STATUS_ENTRY,\
    MAVLINK_MSG_CAMERA_IMAGE_CAPTURED_ENTRY,\
    MAVLINK_MSG_FLIGHT_INFORMATION_ENTRY,\
    MAVLINK_MSG_MOUNT_ORIENTATION_ENTRY,\
    MAVLINK_MSG_LOGGING_DATA_ENTRY,\
    MAVLINK_MSG_LOGGING_DATA_ACKED_ENTRY,\
    MAVLINK_MSG_LOGGING_ACK_ENTRY,\
    MAVLINK_MSG_VIDEO_STREAM_INFORMATION_ENTRY,\
    MAVLINK_MSG_VIDEO_STREAM_STATUS_ENTRY,\
    MAVLINK_MSG_CAMERA_FOV_STATUS_ENTRY,\
    MAVLINK_MSG_CAMERA_TRACKING_IMAGE_STATUS_ENTRY,\
    MAVLINK_MSG_CAMERA_TRACKING_GEO_STATUS_ENTRY,\
    MAVLINK_MSG_GIMBAL_MANAGER_INFORMATION_ENTRY,\
    MAVLINK_MSG_GIMBAL_MANAGER_STATUS_ENTRY,\
    MAVLINK_MSG_GIMBAL_MANAGER_SET_ATTITUDE_ENTRY,\
    MAVLINK_MSG_GIMBAL_DEVICE_INFORMATION_ENTRY,\
    MAVLINK_MSG_GIMBAL_DEVICE_SET_ATTITUDE_ENTRY,\
    MAVLINK_MSG_GIMBAL_DEVICE_ATTITUDE_STATUS_ENTRY,\
    MAVLINK_MSG_AUTOPILOT_STATE_FOR_GIMBAL_DEVICE_ENTRY,\
    MAVLINK_MSG_GIMBAL_MANAGER_SET_TILTPAN_ENTRY,\
    MAVLINK_MSG_ESC_INFO_ENTRY,\
    MAVLINK_MSG_ESC_STATUS_ENTRY,\
    MAVLINK_MSG_WIFI_CONFIG_AP_ENTRY,\
    MAVLINK_MSG_PROTOCOL_VERSION_ENTRY,\
    MAVLINK_MSG_AIS_VESSEL_ENTRY,\
    MAVLINK_MSG_UAVCAN_NODE_STATUS_ENTRY,\
    MAVLINK_MSG_UAVCAN_NODE_INFO_ENTRY,\
    MAVLINK_MSG_PARAM_EXT_REQUEST_READ_ENTRY,\
    MAVLINK_MSG_PARAM_EXT_REQUEST_LIST_ENTRY,\
    MAVLINK_MSG_PARAM_EXT_VALUE_ENTRY,\
    MAVLINK_MSG_PARAM_EXT_SET_ENTRY,\
    MAVLINK_MSG_PARAM_EXT_ACK_ENTRY,\
    MAVLINK_MSG_PARAM_EXT_VALUE_TRIMMED_ENTRY,\
    MAVLINK_MSG_PARAM_EXT_SET_TRIMMED_ENTRY,\
    MAVLINK_MSG_PARAM_EXT_ACK_TRIMMED_ENTRY,\
    MAVLINK_MSG_PARAM_START_TRANSACTION_ENTRY,\
    MAVLINK_MSG_PARAM_COMMIT_TRANSACTION_ENTRY,\
    MAVLINK_MSG_OBSTACLE_DISTANCE_ENTRY,\
    MAVLINK_MSG_ODOMETRY_ENTRY,\
    MAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_ENTRY,\
    MAVLINK_MSG_TRAJECTORY_REPRESENTATION_BEZIER_ENTRY,\
    MAVLINK_MSG_CELLULAR_STATUS_ENTRY,\
    MAVLINK_MSG_ISBD_LINK_STATUS_ENTRY,\
    MAVLINK_MSG_CELLULAR_CONFIG_ENTRY,\
    MAVLINK_MSG_RAW_RPM_ENTRY,\
    MAVLINK_MSG_UTM_GLOBAL_POSITION_ENTRY,\
    MAVLINK_MSG_DEBUG_FLOAT_ARRAY_ENTRY,\
    MAVLINK_MSG_ORBIT_EXECUTION_STATUS_ENTRY,\
    MAVLINK_MSG_SMART_BATTERY_INFO_ENTRY,\
    MAVLINK_MSG_SMART_BATTERY_STATUS_ENTRY,\
    MAVLINK_MSG_GENERATOR_STATUS_ENTRY,\
    MAVLINK_MSG_ACTUATOR_OUTPUT_STATUS_ENTRY,\
    MAVLINK_MSG_TIME_ESTIMATE_TO_TARGET_ENTRY,\
    MAVLINK_MSG_TUNNEL_ENTRY,\
    MAVLINK_MSG_ONBOARD_COMPUTER_STATUS_ENTRY,\
    MAVLINK_MSG_COMPONENT_INFORMATION_ENTRY,\
    MAVLINK_MSG_PLAY_TUNE_V2_ENTRY,\
    MAVLINK_MSG_SUPPORTED_TUNES_ENTRY,\
    MAVLINK_MSG_WHEEL_DISTANCE_ENTRY,\
    MAVLINK_MSG_WINCH_STATUS_ENTRY,\
    MAVLINK_MSG_OPEN_DRONE_ID_BASIC_ID_ENTRY,\
    MAVLINK_MSG_OPEN_DRONE_ID_LOCATION_ENTRY,\
    MAVLINK_MSG_OPEN_DRONE_ID_AUTHENTICATION_ENTRY,\
    MAVLINK_MSG_OPEN_DRONE_ID_SELF_ID_ENTRY,\
    MAVLINK_MSG_OPEN_DRONE_ID_SYSTEM_ENTRY,\
    MAVLINK_MSG_OPEN_DRONE_ID_OPERATOR_ID_ENTRY,\
    MAVLINK_MSG_OPEN_DRONE_ID_MESSAGE_PACK_ENTRY,\
}

#endif // MAVLINK_MSG_ENTRIES_H
