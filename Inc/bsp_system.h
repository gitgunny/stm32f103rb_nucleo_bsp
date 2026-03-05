#ifndef __BSP_SYS_H
#define __BSP_SYS_H

#include "bsp_def.h"

Status_t BSP_SYS_Init(void);
Status_t BSP_SYS_Delay(uint32_t ms);
uint32_t BSP_SYS_GetTick(void);

#endif /* __BSP_SYS_H */
