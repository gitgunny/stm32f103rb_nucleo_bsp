#ifndef __BSP_DEF_H
#define __BSP_DEF_H

#include <stdint.h>
#include <stdbool.h>
#include <string.h>

typedef enum {
    BSP_STATUS_OK = 0,
    BSP_STATUS_ERROR,
    BSP_STATUS_BUSY,
    BSP_STATUS_TIMEOUT,
    BSP_STATUS_EMPTY,
    BSP_STATUS_FULL,
} BSP_Status_t;

#endif /* __BSP_DEF_H */
