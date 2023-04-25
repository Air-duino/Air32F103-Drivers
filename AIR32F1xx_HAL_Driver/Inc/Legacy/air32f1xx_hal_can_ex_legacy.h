/**
  ******************************************************************************
  * @file    air32f1xx_hal_can_ex_legacy.h
  * @author  MCD Application Team
  * @brief   Header file of CAN HAL Extension module.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2016 AirM2M.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */ 

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __AIR32F1xx_HAL_CAN_EX_LEGACY_H
#define __AIR32F1xx_HAL_CAN_EX_LEGACY_H

#ifdef __cplusplus
 extern "C" {
#endif

#if defined(AIR32F103x6) || defined(AIR32F103xB) || defined(AIR32F103xE) || \
    defined(AIR32F103xG) || defined(AIR32F105xC) || defined(AIR32F107xC)

/* Includes ------------------------------------------------------------------*/
#include "air32f1xx_hal_def.h"

/** @addtogroup AIR32F1xx_HAL_Driver
  * @{
  */

/** @defgroup CANEx CANEx
  * @{
  */ 

/* Exported types ------------------------------------------------------------*/

/** 
  * @brief  CAN filter configuration structure definition
  */
/* CAN filter banks differences over AIR32F1 devices:                         */
/* - AIR32F1 Connectivity line: 28 filter banks shared between CAN1 and CAN2  */
/* - Other AIR32F10x devices:   14 filter banks                               */

typedef struct
{
  uint32_t FilterIdHigh;          /*!< Specifies the filter identification number (MSBs for a 32-bit
                                       configuration, first one for a 16-bit configuration).
                                       This parameter must be a number between Min_Data = 0x0000 and Max_Data = 0xFFFF. */ 
                                              
  uint32_t FilterIdLow;           /*!< Specifies the filter identification number (LSBs for a 32-bit
                                       configuration, second one for a 16-bit configuration).
                                       This parameter must be a number between Min_Data = 0x0000 and Max_Data = 0xFFFF. */ 

  uint32_t FilterMaskIdHigh;      /*!< Specifies the filter mask number or identification number,
                                       according to the mode (MSBs for a 32-bit configuration,
                                       first one for a 16-bit configuration).
                                       This parameter must be a number between Min_Data = 0x0000 and Max_Data = 0xFFFF. */ 

  uint32_t FilterMaskIdLow;       /*!< Specifies the filter mask number or identification number,
                                       according to the mode (LSBs for a 32-bit configuration,
                                       second one for a 16-bit configuration).
                                       This parameter must be a number between Min_Data = 0x0000 and Max_Data = 0xFFFF. */ 

  uint32_t FilterFIFOAssignment;  /*!< Specifies the FIFO (0 or 1) which will be assigned to the filter.
                                       This parameter can be a value of @ref CAN_filter_FIFO */
#if defined(AIR32F105xC) || defined(AIR32F107xC)
  uint32_t FilterNumber;          /*!< Specifies the filter which will be initialized. 
                                       This parameter must be a number between Min_Data = 0 and Max_Data = 27. */
#else
  uint32_t FilterNumber;          /*!< Specifies the filter which will be initialized. 
                                       This parameter must be a number between Min_Data = 0 and Max_Data = 13. */
#endif /* AIR32F105xC || AIR32F107xC */
  uint32_t FilterMode;            /*!< Specifies the filter mode to be initialized.
                                       This parameter can be a value of @ref CAN_filter_mode */

  uint32_t FilterScale;           /*!< Specifies the filter scale.
                                       This parameter can be a value of @ref CAN_filter_scale */

  uint32_t FilterActivation;      /*!< Enable or disable the filter.
                                       This parameter can be set to ENABLE or DISABLE. */
                                       
  uint32_t BankNumber;            /*!< Select the start slave bank filter
                                       This parameter must be a number between Min_Data = 0 and Max_Data = 28. */ 
  
}CAN_FilterConfTypeDef;

/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/

/** @defgroup CANEx_Private_Macros CAN Extended Private Macros
  * @{
  */
#if defined(AIR32F105xC) || defined(AIR32F107xC)
#define IS_CAN_FILTER_NUMBER(NUMBER) ((NUMBER) <= 27U)
#else
#define IS_CAN_FILTER_NUMBER(NUMBER) ((NUMBER) <= 13U)
#endif /* AIR32F105xC || AIR32F107xC */

/**
  * @}
  */


/**
  * @}
  */ 

/**
  * @}
  */

#endif /* AIR32F103x6) || AIR32F103xB || AIR32F103xE || AIR32F103xG) || AIR32F105xC || AIR32F107xC    */

#ifdef __cplusplus
}
#endif

#endif /* __AIR32F1xx_HAL_CAN_EX_LEGACY_H */

/************************ (C) COPYRIGHT AirM2M *****END OF FILE****/
