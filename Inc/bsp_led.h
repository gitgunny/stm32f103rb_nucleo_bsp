#ifndef __BSP_LED_H
#define __BSP_LED_H

#include "bsp_def.h"

BSP_Status_t BSP_LED_Init(void);
BSP_Status_t BSP_LED_On(void);
BSP_Status_t BSP_LED_Off(void);
BSP_Status_t BSP_LED_Toggle(void);

#endif /* __BSP_LED_H */