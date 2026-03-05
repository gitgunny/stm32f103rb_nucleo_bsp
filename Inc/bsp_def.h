#ifndef __BSP_DEF_H
#define __BSP_DEF_H

#include <stdint.h>
#include <stdbool.h>
#include <string.h>

typedef enum {
    STATUS_OK = 0,
    STATUS_ERROR,
    STATUS_BUSY,
    STATUS_TIMEOUT,
    STATUS_EMPTY,
    STATUS_FULL,
} Status_t;

#endif /* __BSP_DEF_H */
