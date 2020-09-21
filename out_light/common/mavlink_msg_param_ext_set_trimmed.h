#pragma once
// MESSAGE PARAM_EXT_SET_TRIMMED PACKING

#define MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED 326

MAVPACKED(
typedef struct __mavlink_param_ext_set_trimmed_t {
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
 uint8_t param_type; /*<  Parameter type.*/
 char param_id[16]; /*<  Parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string*/
 char param_value[128]; /*<  Parameter value (zeros get trimmed)*/
}) mavlink_param_ext_set_trimmed_t;

#define MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_LEN 147
#define MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_MIN_LEN 147
#define MAVLINK_MSG_ID_326_LEN 147
#define MAVLINK_MSG_ID_326_MIN_LEN 147

#define MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_CRC 120
#define MAVLINK_MSG_ID_326_CRC 120

#define MAVLINK_MSG_PARAM_EXT_SET_TRIMMED_FIELD_PARAM_ID_LEN 16
#define MAVLINK_MSG_PARAM_EXT_SET_TRIMMED_FIELD_PARAM_VALUE_LEN 128

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_PARAM_EXT_SET_TRIMMED { \
    326, \
    "PARAM_EXT_SET_TRIMMED", \
    5, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_param_ext_set_trimmed_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_param_ext_set_trimmed_t, target_component) }, \
         { "param_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_param_ext_set_trimmed_t, param_type) }, \
         { "param_id", NULL, MAVLINK_TYPE_CHAR, 16, 3, offsetof(mavlink_param_ext_set_trimmed_t, param_id) }, \
         { "param_value", NULL, MAVLINK_TYPE_CHAR, 128, 19, offsetof(mavlink_param_ext_set_trimmed_t, param_value) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_PARAM_EXT_SET_TRIMMED { \
    "PARAM_EXT_SET_TRIMMED", \
    5, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_param_ext_set_trimmed_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_param_ext_set_trimmed_t, target_component) }, \
         { "param_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_param_ext_set_trimmed_t, param_type) }, \
         { "param_id", NULL, MAVLINK_TYPE_CHAR, 16, 3, offsetof(mavlink_param_ext_set_trimmed_t, param_id) }, \
         { "param_value", NULL, MAVLINK_TYPE_CHAR, 128, 19, offsetof(mavlink_param_ext_set_trimmed_t, param_value) }, \
         } \
}
#endif

//OW
/**
 * @brief Pack a param_ext_set_trimmed message into a transmit buffer
 * @param mav_txbuf The transmit buffer
 * @param mav_status The parsing status buffer
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 *
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param param_type  Parameter type.
 * @param param_id  Parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_value  Parameter value (zeros get trimmed)
 * @return length of the complete message in bytes in the transmit buffer
 */
static inline uint16_t mavlink_msg_param_ext_set_trimmed_pack_txbuf(char* mav_txbuf, mavlink_status_t* mav_status, uint8_t system_id, uint8_t component_id,
                                   uint8_t target_system, uint8_t target_component, uint8_t param_type, const char *param_id, const char *param_value)
{
    uint8_t header_len;
    if (mav_status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
        header_len = MAVLINK_CORE_HEADER_MAVLINK1_LEN+1;
    } else {
        header_len = MAVLINK_CORE_HEADER_LEN+1;
    }

#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char* buf = (char*)(&mav_txbuf[header_len]);
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, param_type);
    _mav_put_char_array(buf, 3, param_id, 16);
    _mav_put_char_array(buf, 19, param_value, 128);
#else
    mavlink_param_ext_set_trimmed_t* packet = (mavlink_param_ext_set_trimmed_t*)(&mav_txbuf[header_len]);
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->param_type = param_type;
    mav_array_memcpy(packet->param_id, param_id, sizeof(char)*16);
    mav_array_memcpy(packet->param_value, param_value, sizeof(char)*128);
#endif

    return mavlink_finalize_message_txbuf(mav_txbuf, mav_status, system_id, component_id,
                                          MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_MIN_LEN, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_LEN, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_CRC);
}
//OWEND

#ifdef MAVLINK_USE_CHAN_FUNCTIONS //OW
/**
 * @brief Pack a param_ext_set_trimmed message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param param_type  Parameter type.
 * @param param_id  Parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_value  Parameter value (zeros get trimmed)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_param_ext_set_trimmed_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint8_t param_type, const char *param_id, const char *param_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, param_type);
    _mav_put_char_array(buf, 3, param_id, 16);
    _mav_put_char_array(buf, 19, param_value, 128);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_LEN);
#else
    mavlink_param_ext_set_trimmed_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.param_type = param_type;
    mav_array_memcpy(packet.param_id, param_id, sizeof(char)*16);
    mav_array_memcpy(packet.param_value, param_value, sizeof(char)*128);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_MIN_LEN, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_LEN, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_CRC);
}

/**
 * @brief Pack a param_ext_set_trimmed message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param param_type  Parameter type.
 * @param param_id  Parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_value  Parameter value (zeros get trimmed)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_param_ext_set_trimmed_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint8_t param_type,const char *param_id,const char *param_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, param_type);
    _mav_put_char_array(buf, 3, param_id, 16);
    _mav_put_char_array(buf, 19, param_value, 128);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_LEN);
#else
    mavlink_param_ext_set_trimmed_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.param_type = param_type;
    mav_array_memcpy(packet.param_id, param_id, sizeof(char)*16);
    mav_array_memcpy(packet.param_value, param_value, sizeof(char)*128);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_MIN_LEN, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_LEN, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_CRC);
}

/**
 * @brief Encode a param_ext_set_trimmed struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param param_ext_set_trimmed C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_param_ext_set_trimmed_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_param_ext_set_trimmed_t* param_ext_set_trimmed)
{
    return mavlink_msg_param_ext_set_trimmed_pack(system_id, component_id, msg, param_ext_set_trimmed->target_system, param_ext_set_trimmed->target_component, param_ext_set_trimmed->param_type, param_ext_set_trimmed->param_id, param_ext_set_trimmed->param_value);
}

/**
 * @brief Encode a param_ext_set_trimmed struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param param_ext_set_trimmed C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_param_ext_set_trimmed_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_param_ext_set_trimmed_t* param_ext_set_trimmed)
{
    return mavlink_msg_param_ext_set_trimmed_pack_chan(system_id, component_id, chan, msg, param_ext_set_trimmed->target_system, param_ext_set_trimmed->target_component, param_ext_set_trimmed->param_type, param_ext_set_trimmed->param_id, param_ext_set_trimmed->param_value);
}

#endif //OW

/**
 * @brief Send a param_ext_set_trimmed message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param param_type  Parameter type.
 * @param param_id  Parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_value  Parameter value (zeros get trimmed)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_param_ext_set_trimmed_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint8_t param_type, const char *param_id, const char *param_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, param_type);
    _mav_put_char_array(buf, 3, param_id, 16);
    _mav_put_char_array(buf, 19, param_value, 128);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED, buf, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_MIN_LEN, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_LEN, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_CRC);
#else
    mavlink_param_ext_set_trimmed_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.param_type = param_type;
    mav_array_memcpy(packet.param_id, param_id, sizeof(char)*16);
    mav_array_memcpy(packet.param_value, param_value, sizeof(char)*128);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED, (const char *)&packet, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_MIN_LEN, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_LEN, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_CRC);
#endif
}

/**
 * @brief Send a param_ext_set_trimmed message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_param_ext_set_trimmed_send_struct(mavlink_channel_t chan, const mavlink_param_ext_set_trimmed_t* param_ext_set_trimmed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_param_ext_set_trimmed_send(chan, param_ext_set_trimmed->target_system, param_ext_set_trimmed->target_component, param_ext_set_trimmed->param_type, param_ext_set_trimmed->param_id, param_ext_set_trimmed->param_value);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED, (const char *)param_ext_set_trimmed, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_MIN_LEN, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_LEN, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_CRC);
#endif
}

#if MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_param_ext_set_trimmed_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, uint8_t param_type, const char *param_id, const char *param_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, param_type);
    _mav_put_char_array(buf, 3, param_id, 16);
    _mav_put_char_array(buf, 19, param_value, 128);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED, buf, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_MIN_LEN, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_LEN, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_CRC);
#else
    mavlink_param_ext_set_trimmed_t *packet = (mavlink_param_ext_set_trimmed_t *)msgbuf;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->param_type = param_type;
    mav_array_memcpy(packet->param_id, param_id, sizeof(char)*16);
    mav_array_memcpy(packet->param_value, param_value, sizeof(char)*128);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED, (const char *)packet, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_MIN_LEN, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_LEN, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_CRC);
#endif
}
#endif

#endif

// MESSAGE PARAM_EXT_SET_TRIMMED UNPACKING


/**
 * @brief Get field target_system from param_ext_set_trimmed message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_param_ext_set_trimmed_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field target_component from param_ext_set_trimmed message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_param_ext_set_trimmed_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field param_type from param_ext_set_trimmed message
 *
 * @return  Parameter type.
 */
static inline uint8_t mavlink_msg_param_ext_set_trimmed_get_param_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field param_id from param_ext_set_trimmed message
 *
 * @return  Parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 */
static inline uint16_t mavlink_msg_param_ext_set_trimmed_get_param_id(const mavlink_message_t* msg, char *param_id)
{
    return _MAV_RETURN_char_array(msg, param_id, 16,  3);
}

/**
 * @brief Get field param_value from param_ext_set_trimmed message
 *
 * @return  Parameter value (zeros get trimmed)
 */
static inline uint16_t mavlink_msg_param_ext_set_trimmed_get_param_value(const mavlink_message_t* msg, char *param_value)
{
    return _MAV_RETURN_char_array(msg, param_value, 128,  19);
}

/**
 * @brief Decode a param_ext_set_trimmed message into a struct
 *
 * @param msg The message to decode
 * @param param_ext_set_trimmed C-struct to decode the message contents into
 */
static inline void mavlink_msg_param_ext_set_trimmed_decode(const mavlink_message_t* msg, mavlink_param_ext_set_trimmed_t* param_ext_set_trimmed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    param_ext_set_trimmed->target_system = mavlink_msg_param_ext_set_trimmed_get_target_system(msg);
    param_ext_set_trimmed->target_component = mavlink_msg_param_ext_set_trimmed_get_target_component(msg);
    param_ext_set_trimmed->param_type = mavlink_msg_param_ext_set_trimmed_get_param_type(msg);
    mavlink_msg_param_ext_set_trimmed_get_param_id(msg, param_ext_set_trimmed->param_id);
    mavlink_msg_param_ext_set_trimmed_get_param_value(msg, param_ext_set_trimmed->param_value);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_LEN? msg->len : MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_LEN;
        memset(param_ext_set_trimmed, 0, MAVLINK_MSG_ID_PARAM_EXT_SET_TRIMMED_LEN);
    memcpy(param_ext_set_trimmed, _MAV_PAYLOAD(msg), len);
#endif
}