/**
  ******************************************************************************
  * @file    system_air32f10x.h
  * @author  MCD Application Team
  * @brief   CMSIS Cortex-M3 Device Peripheral Access Layer System Header File.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2017 AirM2M.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by AirM2M under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */

/** @addtogroup CMSIS
  * @{
  */

/** @addtogroup air32f10x_system
  * @{
  */

/**
  * @brief Define to prevent recursive inclusion
  */
#ifndef __SYSTEM_AIR32F10X_H
#define __SYSTEM_AIR32F10X_H

#ifdef __cplusplus
 extern "C" {
#endif

/** @addtogroup AIR32F10x_System_Includes
  * @{
  */

/**
  * @}
  */


/** @addtogroup AIR32F10x_System_Exported_types
  * @{
  */

extern uint32_t SystemCoreClock;          /*!< System Clock Frequency (Core Clock) */
extern const uint8_t  AHBPrescTable[16U];  /*!< AHB prescalers table values */
extern const uint8_t  APBPrescTable[8U];   /*!< APB prescalers table values */

/**
  * @}
  */

/** @addtogroup AIR32F10x_System_Exported_Constants
  * @{
  */

/**
  * @}
  */

/** @addtogroup AIR32F10x_System_Exported_Macros
  * @{
  */

/**
  * @}
  */

/** @addtogroup AIR32F10x_System_Exported_Functions
  * @{
  */

extern void SystemInit(void);
extern void SystemCoreClockUpdate(void);
/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /*__SYSTEM_AIR32F10X_H */

/**
  * @}
  */

/**
  * @}
  */
<<<<<<< Updated upstream
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
=======
/************************ (C) COPYRIGHT AirM2M *****END OF FILE****/
>>>>>>> Stashed changes
