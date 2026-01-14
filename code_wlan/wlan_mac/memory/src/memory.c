#include "memory.h"
#include <string.h>
u8  g_memory_pool[MEMORY_POOL_SIZE]; // 1MB 内存池


void init_memory(void)
{
    //内存初始化操作
    memset(g_memory_pool, 0, sizeof(g_memory_pool));
}