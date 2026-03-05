#include "bsp_system.h"

#include "stm32f1xx_hal.h"

BSP_Status_t BSP_SYS_Init(void) {
    return BSP_STATUS_OK;
}

BSP_Status_t BSP_SYS_Delay(uint32_t ms) {
    HAL_Delay(ms);

    return BSP_STATUS_OK;
}

uint32_t BSP_SYS_GetTick(void) {
    return HAL_GetTick();
}
