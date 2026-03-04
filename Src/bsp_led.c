#include "bsp_led.h"

#include "stm32f1xx_hal.h"
#include "stm32f1xx_hal_gpio.h"

BSP_Status_t BSP_LED_Init(void) {
    return BSP_STATUS_OK;
}

BSP_Status_t BSP_LED_On(void) {
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);

    return BSP_STATUS_OK;
}

BSP_Status_t BSP_LED_Off(void) {
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);

    return BSP_STATUS_OK;
}

BSP_Status_t BSP_LED_Toggle(void) {
    HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);

    return BSP_STATUS_OK;
}
