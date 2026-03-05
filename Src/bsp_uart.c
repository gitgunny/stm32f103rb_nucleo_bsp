#include "bsp_uart.h"

#include "stm32f1xx_hal.h"
#include "stm32f1xx_hal_uart.h"
#include "stm32f1xx_hal_dma.h"

#define DMA_RX_BUFFER_SIZE 256

extern UART_HandleTypeDef huart2;
extern DMA_HandleTypeDef hdma_usart2_rx;

static uint8_t dma_rx_buffer[DMA_RX_BUFFER_SIZE];
static uint16_t read_pos = 0;

static uint16_t BSP_UART_Available(void) {
    uint16_t write_pos = DMA_RX_BUFFER_SIZE - __HAL_DMA_GET_COUNTER(&hdma_usart2_rx);

    return (write_pos - read_pos + DMA_RX_BUFFER_SIZE) % DMA_RX_BUFFER_SIZE;
}

Status_t BSP_UART_Init(void) {
    if (HAL_UART_Receive_DMA(&huart2, dma_rx_buffer, DMA_RX_BUFFER_SIZE) != HAL_OK) {
        return STATUS_ERROR;
    }

    return STATUS_OK;
}

Status_t BSP_UART_ReadByte(uint8_t* pByte) {
    if (BSP_UART_Available() == 0) {
        return STATUS_EMPTY;
    }

    *pByte = dma_rx_buffer[read_pos];
    read_pos = (read_pos + 1) % DMA_RX_BUFFER_SIZE;

    return STATUS_OK;
}

Status_t BSP_UART_WriteByte(const uint8_t* pByte) {
    if (HAL_UART_Transmit(&huart2, pByte, 1, HAL_MAX_DELAY) != HAL_OK) {
        return STATUS_ERROR;
    }

    return STATUS_OK;
}

Status_t BSP_UART_WriteString(const uint8_t* pStr) {
    if (HAL_UART_Transmit(&huart2, pStr, strlen((char*)pStr), HAL_MAX_DELAY) != HAL_OK) {
        return STATUS_ERROR;
    }

    return STATUS_OK;
}
