#ifndef _LAYER3_H_2025_1228
#define _LAYER3_H_2025_1228

#include <stdio.h>
//#include "../../common/include/typedef.h"
#include "typedef.h"

typedef enum {
    LAYER3_MSG_TYPE_UL_DATA = 1,
    LAYER3_MSG_TYPE_DL_DATA = 2,
} layer3_msg_type_t;

typedef struct {
    u8 msgtype;
    u16 length;
} layer3_msg_head;

void layer3_proc(u8 *buf);

#endif