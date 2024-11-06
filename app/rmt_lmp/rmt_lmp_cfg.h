/****************************************************************************
@FILENAME:	remoter_lmp_cfg.h
@FUNCTION:	remoter for lmp define
@AUTHOR:	flege.zhang
@DATE:		2020.05.09
@COPYRIGHT(C) ZXW 2020
*****************************************************************************/

#ifndef _REMOTER_LMP_CFG__H_
#define _REMOTER_LMP_CFG__H_

#include "app_select.h"



/*////////////////////////////BLE REMOTER FOR LMP\\\\\\\\\\\\\\\\\\\\\\\\\\\*/
#if(PRODUCT_SELECTION == RMT_LMP_PUBLIC_KEY_VALUE_28KEY)
#define HW_DETECT_TYPE								RC_SCAN_28KEY_TYPE
#define GROUP_INDEX_MAX								(0x04)
#define KEYS_FUNCTION_NUM							(28)
#define SINGLE_LED_GPIO_INDEX						(0x08)
//#define SYSTEM_NOT_SLEEP
#elif(PRODUCT_SELECTION == RMT_LMP_PUBLIC_KEY_VALUE_25KEY)
#define HW_DETECT_TYPE								RC_SCAN_25KEY_TYPE
#define GROUP_INDEX_MAX								(0x04)
#define KEYS_FUNCTION_NUM							(25)
#define SINGLE_LED_GPIO_INDEX						(0x01)
//#define SYSTEM_NOT_SLEEP
#elif(PRODUCT_SELECTION == RMT_LMP_PUBLIC_KEY_VALUE_07KEY)
#define HW_DETECT_TYPE								RC_SCAN_07KEY_TYPE
#define GROUP_INDEX_MAX								(0x04)
#define KEYS_FUNCTION_NUM							(25)
#define SINGLE_LED_GPIO_INDEX						(0x01)
// #define SYSTEM_NOT_SLEEP


#elif(PRODUCT_SELECTION == RMT_LMP_PUBLIC_KEY_VALUE_12KEY)
#define HW_DETECT_TYPE								RC_SCAN_12KEY_TYPE
#define GROUP_INDEX_MAX								(0x04)
#define KEYS_FUNCTION_NUM							(12)
#define SINGLE_LED_GPIO_INDEX						(0x08)
// #define SYSTEM_NOT_SLEEP


#elif(PRODUCT_SELECTION == RMT_LMP_PUBLIC_19KEY)
#define HW_DETECT_TYPE								RC_SCAN_19KEY_TYPE
#define GROUP_INDEX_MAX								(0x04)
#define KEYS_FUNCTION_NUM							(19)
#define SINGLE_LED_GPIO_INDEX						(0x09)
//#define SYSTEM_NOT_SLEEP
#endif

#endif

