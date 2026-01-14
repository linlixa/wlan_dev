#include "../include/arch.h"
#include "../../layer1/include/layer1.h"
#include "../../layer2/include/layer2.h"
#include "../../layer3/include/layer3.h"
#include "memory.h"


void wlan_main_proc()
{
    //1.初始化wlan dev 内存    
    init_memory();
    
    //2.运行处理
    printf("start wlan dev\n");
    
    //3.mac 协议处理
    phy_msg_head *msg_head = (phy_msg_head *)g_memory_pool;
    u8 *msg_buf = g_memory_pool + sizeof(phy_msg_head);

    if (msg_head->msgtype == MAC_MSG_TYPE_LAYER1) {
        layer1_proc(msg_buf);
    } else if (msg_head->msgtype == MAC_MSG_TYPE_LAYER2) {
        layer2_proc(msg_buf);
    } else if (msg_head->msgtype == MAC_MSG_TYEP_LAYER3) {
        layer3_proc(msg_buf);
    } else {
        printf("unknown mac layer message type\n");
    }    
    return;
}

int main(int argc, char* argv[]) {
    // 程序逻辑
    u32 result = 0;
    wlan_main_proc();
    return 0;
}

