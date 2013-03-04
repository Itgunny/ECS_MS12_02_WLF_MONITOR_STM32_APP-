/**
  ******************************************************************************
  * @file    WL9F_Display_Common.h
  * @author  kutelf (kutelf@taeha.co.kr)
  * @version V1.0.0
  * @date    02/22/2013
  * @brief   Main Header
  *
  * Project Name       : WL9F Display Common
  * Project Enviroment : IAREmbedded Workbench for ARM 6.5x 
  *                      STM32F407ZGT6 Firmware Library
  * Project Workspace  : WL9F_Display_APP
  * MCU Type           : STM32F407ZGT6
  *
  * TAEHA MECHATRONICS Co., Ltd (http://www.taeha.co.kr)				
  * ECS Division R&D Center. / Author by Young-Min Han (kutelf@taeha.co.kr)
  * 
  ******************************************************************************
  */ 

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __WL9F_Display_Common_H
#define __WL9F_Display_Common_H

/* Includes ------------------------------------------------------------------*/
#include <stdio.h>
#include <string.h>

#include "stm32f4xx.h"
#include "stm324xg_eval.h"

#include "System_Init.h"
#include "System_Debug.h"
#include "FM31X4.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
struct TIME_DATA
{	
	unsigned long  Cnt_1mSec;
	unsigned short Flag_1mSec;
	unsigned short Flag_10mSec;
	unsigned short Flag_100mSec;        
	unsigned short Flag_200mSec;        
	unsigned short Flag_300mSec;        
	unsigned short Flag_400mSec;        
	unsigned short Flag_500mSec;        
	unsigned short Flag_1Sec;
};

/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported variables --------------------------------------------------------*/
extern struct TIME_DATA WL9F_TIME_DATA;

/* Exported functions ------------------------------------------------------- */
//  WL9F_Monitor_APP.c define
extern void WL9F_Monitor_APP(void);
extern void WL9F_1mSecOperationFunc(void);
extern void WL9F_10mSecOperationFunc(void);
extern void WL9F_100mSecOperationFunc(void);
extern void WL9F_1SecOperationFunc(void);

extern void TimeDelay_usec(uint32_t nCount);
extern void TimeDelay_msec(uint32_t nCount);

//	System_Init.c define
extern void System_Variable_Init(void);
extern void WL9F_System_Init_Start(void);

#endif /* __WL9F_Display_Common_H */
