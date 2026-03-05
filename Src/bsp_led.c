#include "bsp_led.h"

#include "stm32f1xx_hal.h"
#include "stm32f1xx_hal_gpio.h"

Status_t BSP_LED_Init(void) {
    return STATUS_OK;
}

Status_t BSP_LED_On(void) {
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);

    return STATUS_OK;
}

Status_t BSP_LED_Off(void) {
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);

    return STATUS_OK;
}

Status_t BSP_LED_Toggle(void) {
    HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);

    return STATUS_OK;
}
