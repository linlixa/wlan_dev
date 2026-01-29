//#include "../include/layer1.h"
#include "layer1.h"
#include "log.h"



void layer1_proc(u8 *buf)
{
    printf("start layer1 proc\n");
    if (NULL == buf) return;
   

    char *str ="enter layer1 process\n";
    log_level_t log_level = LAYER_1;
    mac_log(log_level, str);
    return;    
}