#ifndef _LAYER1_H_2025_1228
#define _LAYER1_H_2025_1228

#include <stdio.h>
//#include "../../common/include/typedef.h"
//#include "../../../public_interfac/include/phy_to_mac_interface.h"

#include "typedef.h"
#include "phy_to_mac_interface.h"

#define LAYER1_MSG_TYPE_UL_DATA         0x1001  //phy 接收消息类型
#define LAYER1_MSG_TYPE_DL_DATA         0x1002  //phy 发送消息类型
#define LAYER1_MSG_TYPE_CONFIG          (u8)0x01  //phy 配置消息类型

typedef  struct layer1_msg_Head_tag
{
    u8  direction;  //消息方向    
    u8  isconfig;   //保留字节
}layer1_msg_head;

void layer1_proc(u8 *buf);


#endif