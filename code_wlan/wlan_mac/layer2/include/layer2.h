#ifndef _LAYER2_H_2025_1228
#define _LAYER2_H_2025_1228

#include <stdio.h>
#include "../../common/include/typedef.h"


typedef enum {
    LAYER2_MSG_TYPE_UL_DATA = 1,
    LAYER2_MSG_TYPE_DL_DATA = 2,
} layer2_msg_type_t;

typedef struct {
    u8 msgtype;
    u16 length;
} layer2_msg_head;

void layer2_proc(u8 *buf);


#endif