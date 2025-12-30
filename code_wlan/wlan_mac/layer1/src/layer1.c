//#include "../include/layer1.h"
#include "layer1.h"
#include "log.h"

void layer1_proc(phy_msg *phy_msg)
{
    printf("start layer1 proc\n");

    char *str ="enter layer1 process\n";
    log_level_t log_level = LAYER_1;
    mac_log(log_level, str);


    
}