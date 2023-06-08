#pragma once

#include <AP_HAL/AP_HAL_Boards.h>

#include <GCS_MAVLink/GCS_config.h>
#if HAL_GCS_ENABLED
#include <GCS_MAVLink/GCS_MAVLink.h>
#endif
#include <AP_SerialLED/AP_SerialLED_config.h>

#ifndef AP_NOTIFY_LP5562_ENABLED
#define AP_NOTIFY_LP5562_ENABLED 1
#endif

#ifndef AP_NOTIFY_IS31FL3195_ENABLED
#define AP_NOTIFY_IS31FL3195_ENABLED 1
#endif

#ifndef AP_NOTIFY_MAVLINK_PLAY_TUNE_SUPPORT_ENABLED
#define AP_NOTIFY_MAVLINK_PLAY_TUNE_SUPPORT_ENABLED HAL_GCS_ENABLED
#endif

#ifndef AP_NOTIFY_MAVLINK_LED_CONTROL_SUPPORT_ENABLED
#define AP_NOTIFY_MAVLINK_LED_CONTROL_SUPPORT_ENABLED HAL_GCS_ENABLED
#endif

#ifndef AP_NOTIFY_NCP5623_ENABLED
#define AP_NOTIFY_NCP5623_ENABLED 1
#endif

#ifndef AP_NOTIFY_PCA9685_ENABLED
#define AP_NOTIFY_PCA9685_ENABLED 1
#endif

#ifndef AP_NOTIFY_PROFILED_SPI_ENABLED
#define AP_NOTIFY_PROFILED_SPI_ENABLED 0  // requires hwdef to have SPI line
#endif

#ifndef AP_NOTIFY_SERIALLED_ENABLED
#define AP_NOTIFY_SERIALLED_ENABLED AP_SERIALLED_ENABLED
#endif

#ifndef AP_NOTIFY_TOSHIBALED_ENABLED
#define AP_NOTIFY_TOSHIBALED_ENABLED 1
#endif

#ifndef AP_NOTIFY_OREOLED_ENABLED
#define AP_NOTIFY_OREOLED_ENABLED 0
#endif

// Serial LED backends:
#ifndef AP_NOTIFY_PROFILED_ENABLED
#define AP_NOTIFY_PROFILED_ENABLED AP_NOTIFY_SERIALLED_ENABLED
#endif

#ifndef AP_NOTIFY_NEOPIXEL_ENABLED
#define AP_NOTIFY_NEOPIXEL_ENABLED AP_NOTIFY_SERIALLED_ENABLED
#endif
