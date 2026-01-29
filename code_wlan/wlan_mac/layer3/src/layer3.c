#include "../include/layer3.h"
#include "log.h"


void layer3_proc(u8 *buf)
{
    printf("start layer3 proc\n");
    char *str ="enter layer3 process\n";
    log_level_t log_level = LAYER_3;
    mac_log(log_level, str);

    if (NULL == buf) return;

    layer3_msg_head *msg_head = (layer3_msg_head *)buf;
    if (msg_head->msgtype == LAYER3_MSG_TYPE_UL_DATA) {
        printf("layer3 receive uplink data\n");

    } else if (msg_head->msgtype == LAYER3_MSG_TYPE_DL_DATA) {
        printf("layer3 send downlink data\n");
    } else {
        printf("layer3 unknown message type\n");
    }
    return;
}