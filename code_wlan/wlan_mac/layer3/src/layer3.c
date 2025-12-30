#include "../include/layer3.h"
#include "log.h"

void layer3_proc()
{
    printf("start layer3 proc\n");
    char *str ="enter layer3 process\n";
    log_level_t log_level = LAYER_2;
    mac_log(log_level, str);
}