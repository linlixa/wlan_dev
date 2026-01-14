#ifndef _TYPEDEF_H_2025_1228
#define _TYPEDEF_H_2025_1228

typedef unsigned char		u8;
typedef unsigned short		u16;
typedef unsigned int		u32;
typedef unsigned long long	u64;
typedef signed char		    s8;
typedef short			    s16;
typedef int			        s32;
typedef long long		    s64;


typedef struct mac_layer_head_tag
{
    unsigned short msgtype; //mac layer message type
    unsigned short msgid;  //mac layer message id
}mac_layer_head;

//mac 消息类型宏定义
#define MAC_MSG_TYPE_LAYER1      0x0001  //mac layer1 消息类型
#define MAC_MSG_TYPE_LAYER2      0x0002  //mac layer2 消息类型  
#define MAC_MSG_TYEP_LAYER3      0x0003  //mac layer3 消息类型

#endif