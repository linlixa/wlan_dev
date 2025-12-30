#include "../include/arch.h"
#include "../../layer1/include/layer1.h"
#include "../../layer2/include/layer2.h"
#include "../../layer3/include/layer3.h"

void wlan_main_proc()
{
    //1.初始化wlan dev 内存
    
    //2.运行处理
    printf("start wlan dev\n");
    
    //3.layer1 process 
    phy_msg msg;
    layer1_proc(&msg);
    layer2_proc();
    layer3_proc();
    return;
}

int main(int argc, char* argv[]) {
    // 程序逻辑
    u32 result = 0;
    wlan_main_proc();
    return 0;
}

