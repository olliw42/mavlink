/** @file
 *  @brief MAVLink message entries generated from minimal.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_MSG_ENTRIES_H
#define MAVLINK_MSG_ENTRIES_H

/**
 * The values of msg_entry_t for all messages in the dialect.
 */
#define MAVLINK_MSG_HEARTBEAT_ENTRY {0, 50, 9, 9, 0, 0, 0}
#define MAVLINK_MSG_PROTOCOL_VERSION_ENTRY {300, 217, 22, 22, 0, 0, 0}

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
    MAVLINK_MSG_PROTOCOL_VERSION_ENTRY,\
}

#endif // MAVLINK_MSG_ENTRIES_H
