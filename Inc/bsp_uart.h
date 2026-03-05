#ifndef __BSP_UART_H
#define __BSP_UART_H

#include "bsp_def.h"

Status_t BSP_UART_Init(void);
Status_t BSP_UART_ReadByte(uint8_t* pByte);
Status_t BSP_UART_WriteByte(const uint8_t* pByte);
Status_t BSP_UART_WriteString(const uint8_t* pStr);

#endif /* __BSP_UART_H */
