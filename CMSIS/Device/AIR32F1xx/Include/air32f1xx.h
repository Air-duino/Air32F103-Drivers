/**
  ******************************************************************************
  * @file    air32f1xx.h
  * @author  MCD Application Team
  * @brief   CMSIS AIR32F1xx Device Peripheral Access Layer Header File. 
  *
  *          The file is the unique include file that the application programmer
  *          is using in the C source code, usually in main.c. This file contains:
  *            - Configuration section that allows to select:
  *              - The AIR32F1xx device used in the target application
  *              - To use or not the peripheral�s drivers in application code(i.e. 
  *                code will be based on direct access to peripheral�s registers 
  *                rather than drivers API), this option is controlled by 
  *                "#define USE_HAL_DRIVER"
  *  
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2017 AirM2M.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */

/** @addtogroup CMSIS
  * @{
  */

/** @addtogroup air32f1xx
  * @{
  */
    
#ifndef __AIR32F1XX_H
#define __AIR32F1XX_H

#ifdef __cplusplus
 extern "C" {
#endif /* __cplusplus */
  
/** @addtogroup Library_configuration_section
  * @{
  */

/**
  * @brief AirMCU Family
  */
#if !defined (AIR32F1)
#define AIR32F1
#endif /* AIR32F1 */

/* Uncomment the line below according to the target AirMCUL device used in your 
   application 
  */

#if !defined (AIR32F100xB) && !defined (AIR32F100xE) && !defined (AIR32F101x6) && \
    !defined (AIR32F101xB) && !defined (AIR32F101xE) && !defined (AIR32F101xG) && !defined (AIR32F102x6) && !defined (AIR32F102xB) && !defined (AIR32F103x6) && \
    !defined (AIR32F103xB) && !defined (AIR32F103xE) && !defined (AIR32F103xG) && !defined (AIR32F105xC) && !defined (AIR32F107xC)
  /* #define AIR32F100xB  */   /*!< AIR32F100C4, AIR32F100R4, AIR32F100C6, AIR32F100R6, AIR32F100C8, AIR32F100R8, AIR32F100V8, AIR32F100CB, AIR32F100RB and AIR32F100VB */
  /* #define AIR32F100xE */    /*!< AIR32F100RC, AIR32F100VC, AIR32F100ZC, AIR32F100RD, AIR32F100VD, AIR32F100ZD, AIR32F100RE, AIR32F100VE and AIR32F100ZE */
  /* #define AIR32F101x6  */   /*!< AIR32F101C4, AIR32F101R4, AIR32F101T4, AIR32F101C6, AIR32F101R6 and AIR32F101T6 Devices */
  /* #define AIR32F101xB  */   /*!< AIR32F101C8, AIR32F101R8, AIR32F101T8, AIR32F101V8, AIR32F101CB, AIR32F101RB, AIR32F101TB and AIR32F101VB */
  /* #define AIR32F101xE */    /*!< AIR32F101RC, AIR32F101VC, AIR32F101ZC, AIR32F101RD, AIR32F101VD, AIR32F101ZD, AIR32F101RE, AIR32F101VE and AIR32F101ZE */ 
  /* #define AIR32F101xG  */   /*!< AIR32F101RF, AIR32F101VF, AIR32F101ZF, AIR32F101RG, AIR32F101VG and AIR32F101ZG */
  /* #define AIR32F102x6 */    /*!< AIR32F102C4, AIR32F102R4, AIR32F102C6 and AIR32F102R6 */
  /* #define AIR32F102xB  */   /*!< AIR32F102C8, AIR32F102R8, AIR32F102CB and AIR32F102RB */
  /* #define AIR32F103x6  */   /*!< AIR32F103C4, AIR32F103R4, AIR32F103T4, AIR32F103C6, AIR32F103R6 and AIR32F103T6 */
  /* #define AIR32F103xB  */   /*!< AIR32F103C8, AIR32F103R8, AIR32F103T8, AIR32F103V8, AIR32F103CB, AIR32F103RB, AIR32F103TB and AIR32F103VB */
  /* #define AIR32F103xE */    /*!< AIR32F103RC, AIR32F103VC, AIR32F103ZC, AIR32F103RD, AIR32F103VD, AIR32F103ZD, AIR32F103RE, AIR32F103VE and AIR32F103ZE */
  /* #define AIR32F103xG  */   /*!< AIR32F103RF, AIR32F103VF, AIR32F103ZF, AIR32F103RG, AIR32F103VG and AIR32F103ZG */
  /* #define AIR32F105xC */    /*!< AIR32F105R8, AIR32F105V8, AIR32F105RB, AIR32F105VB, AIR32F105RC and AIR32F105VC */
  /* #define AIR32F107xC  */   /*!< AIR32F107RB, AIR32F107VB, AIR32F107RC and AIR32F107VC */  
#endif

/*  Tip: To avoid modifying this file each time you need to switch between these
        devices, you can define the device in your toolchain compiler preprocessor.
  */
  
#if !defined  (USE_HAL_DRIVER)
/**
 * @brief Comment the line below if you will not use the peripherals drivers.
   In this case, these drivers will not be included and the application code will 
   be based on direct access to peripherals registers 
   */
  /*#define USE_HAL_DRIVER */
#endif /* USE_HAL_DRIVER */

/**
  * @brief CMSIS Device version number V4.3.3
  */
#define __AIR32F1_CMSIS_VERSION_MAIN   (0x04) /*!< [31:24] main version */
#define __AIR32F1_CMSIS_VERSION_SUB1   (0x03) /*!< [23:16] sub1 version */
#define __AIR32F1_CMSIS_VERSION_SUB2   (0x03) /*!< [15:8]  sub2 version */
#define __AIR32F1_CMSIS_VERSION_RC     (0x00) /*!< [7:0]  release candidate */ 
#define __AIR32F1_CMSIS_VERSION        ((__AIR32F1_CMSIS_VERSION_MAIN << 24)\
                                       |(__AIR32F1_CMSIS_VERSION_SUB1 << 16)\
                                       |(__AIR32F1_CMSIS_VERSION_SUB2 << 8 )\
                                       |(__AIR32F1_CMSIS_VERSION_RC))

/**
  * @}
  */

/** @addtogroup Device_Included
  * @{
  */

#if defined(AIR32F103xB)
  #include "air32f103xb.h"
#elif defined(AIR32F103xE)
  #include "air32f103xe.h"
#elif defined(AIR32F103xG)
  #include "air32f103xg.h"
#else
 #error "Please select first the target AIR32F1xx device used in your application (in air32f1xx.h file)"
#endif

/**
  * @}
  */

/** @addtogroup Exported_types
  * @{
  */  
typedef enum 
{
  RESET = 0, 
  SET = !RESET
} FlagStatus, ITStatus;

typedef enum 
{
  DISABLE = 0, 
  ENABLE = !DISABLE
} FunctionalState;
#define IS_FUNCTIONAL_STATE(STATE) (((STATE) == DISABLE) || ((STATE) == ENABLE))

typedef enum
{
  SUCCESS = 0U,
  ERROR = !SUCCESS
} ErrorStatus;

/**
  * @}
  */


/** @addtogroup Exported_macros
  * @{
  */
#define SET_BIT(REG, BIT)     ((REG) |= (BIT))

#define CLEAR_BIT(REG, BIT)   ((REG) &= ~(BIT))

#define READ_BIT(REG, BIT)    ((REG) & (BIT))

#define CLEAR_REG(REG)        ((REG) = (0x0))

#define WRITE_REG(REG, VAL)   ((REG) = (VAL))

#define READ_REG(REG)         ((REG))

#define MODIFY_REG(REG, CLEARMASK, SETMASK)  WRITE_REG((REG), (((READ_REG(REG)) & (~(CLEARMASK))) | (SETMASK)))

#define POSITION_VAL(VAL)     (__CLZ(__RBIT(VAL))) 

/* Use of CMSIS compiler intrinsics for register exclusive access */
/* Atomic 32-bit register access macro to set one or several bits */
#define ATOMIC_SET_BIT(REG, BIT)                             \
  do {                                                       \
    uint32_t val;                                            \
    do {                                                     \
      val = __LDREXW((__IO uint32_t *)&(REG)) | (BIT);       \
    } while ((__STREXW(val,(__IO uint32_t *)&(REG))) != 0U); \
  } while(0)

/* Atomic 32-bit register access macro to clear one or several bits */
#define ATOMIC_CLEAR_BIT(REG, BIT)                           \
  do {                                                       \
    uint32_t val;                                            \
    do {                                                     \
      val = __LDREXW((__IO uint32_t *)&(REG)) & ~(BIT);      \
    } while ((__STREXW(val,(__IO uint32_t *)&(REG))) != 0U); \
  } while(0)

/* Atomic 32-bit register access macro to clear and set one or several bits */
#define ATOMIC_MODIFY_REG(REG, CLEARMSK, SETMASK)                          \
  do {                                                                     \
    uint32_t val;                                                          \
    do {                                                                   \
      val = (__LDREXW((__IO uint32_t *)&(REG)) & ~(CLEARMSK)) | (SETMASK); \
    } while ((__STREXW(val,(__IO uint32_t *)&(REG))) != 0U);               \
  } while(0)

/* Atomic 16-bit register access macro to set one or several bits */
#define ATOMIC_SETH_BIT(REG, BIT)                            \
  do {                                                       \
    uint16_t val;                                            \
    do {                                                     \
      val = __LDREXH((__IO uint16_t *)&(REG)) | (BIT);       \
    } while ((__STREXH(val,(__IO uint16_t *)&(REG))) != 0U); \
  } while(0)

/* Atomic 16-bit register access macro to clear one or several bits */
#define ATOMIC_CLEARH_BIT(REG, BIT)                          \
  do {                                                       \
    uint16_t val;                                            \
    do {                                                     \
      val = __LDREXH((__IO uint16_t *)&(REG)) & ~(BIT);      \
    } while ((__STREXH(val,(__IO uint16_t *)&(REG))) != 0U); \
  } while(0)

/* Atomic 16-bit register access macro to clear and set one or several bits */
#define ATOMIC_MODIFYH_REG(REG, CLEARMSK, SETMASK)                         \
  do {                                                                     \
    uint16_t val;                                                          \
    do {                                                                   \
      val = (__LDREXH((__IO uint16_t *)&(REG)) & ~(CLEARMSK)) | (SETMASK); \
    } while ((__STREXH(val,(__IO uint16_t *)&(REG))) != 0U);               \
  } while(0)


/**
  * @}
  */

#if defined (USE_HAL_DRIVER)
 #include "air32f1xx_hal.h"
#endif /* USE_HAL_DRIVER */


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __AIR32F1xx_H */
/**
  * @}
  */

/**
  * @}
  */
  



/************************ (C) COPYRIGHT AirM2M *****END OF FILE****/
