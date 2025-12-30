#ifndef _LOG_H_2025_1228
#define _LOG_H_2025_1228
#include "typedef.h"
typedef enum log_level_tag
{
    LAYER_1,
    LAYER_2,
    LAYER_3
}log_level_t;

u32 mac_log(log_level_t log_level, char *log);

#endif
