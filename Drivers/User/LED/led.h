
/**
 *!
 * \file        led.h
 * \brief       
 * \version     
 * \date        2019/12/12
 * \author      notrynohigh
 * Last modified by notrynohigh 2019/12/12
 * Copyright (c) 2019 by NOTRYNOHIGH. All Rights Reserved.
 */
   
/*Includes ----------------------------------------------*/
#include "main.h"
/**\defgroup LED_Exported_TypesDefinitions
 * \{
 */
   
/**
 * \}
 */
   
/**\defgroup LED_Exported_Defines
 * \{
 */
#define LED_ON			0
#define LED_OFF			1

#define LED_1_ON()						HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET);
#define LED_2_ON()						HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_RESET);
#define LED_3_ON()						HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_RESET);

#define LED_1_OFF()						HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET);
#define LED_2_OFF()						HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_SET);
#define LED_3_OFF()						HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_SET);
/**
 * \}
 */
   
/**\defgroup LED_Exported_Macros
 * \{
 */
   
/**
 * \}
 */
   
/**\defgroup LED_Exported_Variables
 * \{
 */
   
/**
 * \}
 */
   
/**\defgroup LED_Exported_Functions
 * \{
 */
void LED_Control(uint8_t status);
/**
 * \}
 */
  
/************************ (C) COPYRIGHT NOTRYNOHIGH *****END OF FILE****/

