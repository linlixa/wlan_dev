//#include "../include/layer2.h"
//#include "../../common/include/log.h"

#include "layer2.h"
#include "log.h"

void layer2_proc(u8 *buf)
{
    printf("start layer2 proc\n");
    char *str ="enter layer2 process\n";
    log_level_t log_level = LAYER_2;
    mac_log(log_level, str);

    if (NULL == buf) return;

    layer2_msg_head *msg_head = (layer2_msg_head *)buf;
    if (msg_head->msgtype == LAYER2_MSG_TYPE_UL_DATA) {
        printf("layer2 receive uplink data\n");

    } else if (msg_head->msgtype == LAYER2_MSG_TYPE_DL_DATA) {
        printf("layer2 send downlink data\n");
    } else {
        printf("layer2 unknown message type\n");
    }
    return;
}