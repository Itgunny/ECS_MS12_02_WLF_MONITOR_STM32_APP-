/**
  ******************************************************************************
  * @file    Buzzer.h
  * @author  kutelf (kutelf@taeha.co.kr)
  * @version V1.0.0
  * @date    02/22/2013
  * @brief   Buzzer Header
  *
  * Project Name       : WL9F Display APP
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
#ifndef __Buzzer_H
#define __Buzzer_H

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "WL9F_Display_APP.h"	
#include "WL9F_Display_Variable.h"

/* Private typedef -----------------------------------------------------------*/
#define 	BUZZERCMD    	  	0x42   	//	BUZZER - 통신 Command Data
#define 	BUZZERDAT_ON   	  	0x11   	//	BUZZER - 통신 Command Data
#define 	BUZZERDAT_OFF  	  	0x10   	//	BUZZER - 통신 Command Data

/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
struct BUZZER_DATA
{	
	uint16_t Status;
    uint16_t OnTime;
    uint16_t OnCnt;
	uint16_t Current_Status;
};

/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported variables --------------------------------------------------------*/
extern struct BUZZER_DATA   WL9F_BUZZER_DATA;

/* Exported functions ------------------------------------------------------- */
extern void Buzzer_Init(void);
extern void Buzzer_Set(uint16_t OnTime);
extern void Buzzer_On(void);
extern void Buzzer_UnLimitOn(void);
extern void Buzzer_Off(void);
extern void Buzzer_UnLimitOff(void);
extern void Buzzer_SendToSPICA(uint8_t BuzzerValue);

#endif /* __Buzzer_H */

/*********(C) COPYRIGHT 2010 TaeHa Mechatronics Co., Ltd. *****END OF FILE****/
