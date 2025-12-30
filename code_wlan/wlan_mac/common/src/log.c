#include <stdio.h>
#include "log.h"

u32 mac_log(log_level_t log_level, char *log)
{
    char *log_level_str[] = {"LAYER_1_LOG", "LAYER_2_LOG", "LAYER_3_LOG"};
    printf("%s: %s", log_level_str[log_level], log);
}






