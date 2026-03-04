# STM32F103RB_NUCLEO_BSP

STM32F103RB Nucleo 보드용 BSP (Board Support Package)

## Overview

추후 개인 프로젝트를 위해 STM32F103RB Nucleo 보드의 하드웨어를 추상화한 BSP 라이브러리입니다.
HAL을 직접 사용하지 않고 BSP 함수를 통해 하드웨어를 제어합니다.

## Support Board

- STM32F103RB-NUCLEO

## Dev Environment

- IDE: VSCode + STM32CubeIDE for VSCode
- MCU: STM32F103RB
- FW: STM32CubeF1 v1.8.7
- BUILD: CMake + Ninja

## Clone
```Bash
mkdir ./Bsp
cd ./Bsp
git clone --recurse-submodules https://github.com/gitgunny/stm32f103rb_nucleo_bsp.git
```

## Support Function

- hal_def.h (Common)
  - `typedef enum BSP_Status_t`

- bsp_hal.h
  - `void BSP_Delay(uint32_t ms)`
  - `uint32_t BSP_GetTick(void)`

- bsp_led.h
  - `BSP_Status_t BSP_LED_Init(void)`
  - `BSP_Status_t BSP_LED_On(void)`
  - `BSP_Status_t BSP_LED_Off(void)`
  - `BSP_Status_t BSP_LED_Toggle(void)`

## Example

### Before
```C
// led_control.c

#include "stm32f1xx_hal_gpio.h"

void Led_On(void) {
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);
}

void Led_Off(void) {
...
```

### After
```C
// led_control.c

#include "bsp_led.h"

void Led_On(void) {
    BSP_LED_On();
}

void Led_Off(void) {
...
```

## Used By Projects

- A 프로젝트
  - bsp_led
  - bsp_uart
- B 프로젝트
  - bsp_i2c

## License

MIT License - [LICENSE](LICENSE)
