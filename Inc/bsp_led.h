#ifndef __BSP_LED_H
#define __BSP_LED_H

#include "bsp_def.h"

Status_t BSP_LED_Init(void);
Status_t BSP_LED_On(void);
Status_t BSP_LED_Off(void);
Status_t BSP_LED_Toggle(void);

#endif /* __BSP_LED_H */
