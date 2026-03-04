#ifndef __BSP_HAL_H
#define __BSP_HAL_H

#include "bsp_def.h"

BSP_Status_t BSP_Hal_Init(void);
BSP_Status_t BSP_Delay(uint32_t ms);
uint32_t BSP_GetTick(void);

#endif /* __BSP_HAL_H */