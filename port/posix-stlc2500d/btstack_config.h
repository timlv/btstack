//
// btstack_config.h for POSIX STLC25000d port
//

#ifndef __BTSTACK_CONFIG
#define __BTSTACK_CONFIG

// Port related features
#define HAVE_BZERO
#define HAVE_MALLOC
#define HAVE_SCO
// #define HAVE_SCO_OVER_HCI
#define HAVE_SO_NOSIGPIPE
#define HAVE_TIME

// BTstack features that can be enabled
#define ENABLE_BLE
#define ENABLE_LOG_ERROR
#define ENABLE_LOG_INFO 
#define ENABLE_LOG_INTO_HCI_DUMP
#define ENABLE_RFCOMM
#define ENABLE_SDP
#define ENABLE_SDP_DES_DUMP

// BTstack configuration. buffers, sizes, ...
#define HCI_INCOMING_PRE_BUFFER_SIZE 14 // sizeof benep heade, avoid memcpy
#define HCI_ACL_PAYLOAD_SIZE (1691 + 4)

#endif
