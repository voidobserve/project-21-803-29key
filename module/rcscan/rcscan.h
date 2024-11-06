/****************************************************************************
@FILENAME:	rcscan.h
@FUNCTION:	key scan by rc
@AUTHOR:	flege.zhang
@DATE:		2020.05.04
*****************************************************************************/

#ifndef _RCSCAN__H_
#define _RCSCAN__H_


#include "app_cfg.h"
#include "hal_gpio.h"
#include "timer_mgt.h"


#if((PRODUCT_SELECTION&RCSCAN) == RCSCAN)
#define GNDB										(1<<20)
	
#if(HW_DETECT_TYPE == RC_SCAN_28KEY_TYPE)			
#define INPUT_GPIO_BITS								(BIT3|BIT4|BIT5|BIT6)
#define OTPUT_GPIO_BITS								(BIT0|BIT1|BIT2|BIT7|BIT9|BIT10|GNDB)
#elif(HW_DETECT_TYPE == RC_SCAN_25KEY_TYPE)			
#define INPUT_GPIO_BITS								(BIT4|BIT5|BIT6|BIT7|BIT8)
#define OTPUT_GPIO_BITS								(GNDB|BIT9|BIT2|BIT0|BIT3)
#elif(HW_DETECT_TYPE == RC_SCAN_07KEY_TYPE)			
#define INPUT_GPIO_BITS								(BIT3|BIT4|BIT5|BIT6)
#define OTPUT_GPIO_BITS								(BIT0|BIT7|BIT8|BIT9|GNDB)

// 下面这个不是矩阵键盘的扫描
#elif(HW_DETECT_TYPE == RC_SCAN_12KEY_TYPE)			
#define INPUT_GPIO_BITS								(BIT3|BIT4|BIT5|BIT6|BIT7)
#define OTPUT_GPIO_BITS								(BIT0|BIT1|BIT2|BIT9|BIT10|GNDB)
// #define INPUT_GPIO_BITS								(BIT0|BIT1|BIT2|BIT9|BIT10)
// #define OTPUT_GPIO_BITS								(BIT3|BIT4|BIT5|BIT6|BIT7|GNDB)


#elif(HW_DETECT_TYPE == RC_SCAN_19KEY_TYPE)			
#define INPUT_GPIO_BITS								(BIT5|BIT6|BIT7|BIT9)
#define OTPUT_GPIO_BITS								(BIT0|BIT1|BIT4)
#endif



#define WAKEUP_IO									INPUT_GPIO_BITS
#define UNUSED_IO								  	(~INPUT_GPIO_BITS)


void 		rcscan_init(void);
uint32_t 	rcscan_scan(void);

#endif
#endif
