//#include "../include/layer2.h"
//#include "../../common/include/log.h"

#include "layer2.h"
#include "log.h"

void layer2_proc()
{
    printf("start layer2 proc\n");
    char *str ="enter layer2 process\n";
    log_level_t log_level = LAYER_2;
    mac_log(log_level, str);
    return;
}