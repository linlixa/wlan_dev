#ifndef _MEMORRY_H_2026_0111
#define _MEMORRY_H_2026_0111

#include "typedef.h"

#define MEMORY_POOL_SIZE (1*1024*1024) // 1G 内存池大小



extern u8  g_memory_pool[MEMORY_POOL_SIZE]; // 1GB 内存池

void init_memory(void);

#endif