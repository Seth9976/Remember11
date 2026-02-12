// 函数: sub_486b35
// 地址: 0x486b35
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_7 = data_2b6a9b0
int32_t esi = data_2b6a9a0

if (esi != eax_7)
    goto label_486b7f

int32_t eax_2 = HeapReAlloc(data_c7ada4, HEAP_NONE, data_2b6a9a4, (eax_7 + 0x10) * 0x14)

if (eax_2 != 0)
    data_2b6a9b0 += 0x10
    esi = data_2b6a9a0
    data_2b6a9a4 = eax_2
label_486b7f:
    int32_t* result = esi * 0x14 + data_2b6a9a4
    int32_t eax_3 = HeapAlloc(data_c7ada4, HEAP_ZERO_MEMORY, 0x41c4)
    result[4] = eax_3
    
    if (eax_3 != 0)
        int32_t eax_4 = VirtualAlloc(nullptr, 0x100000, MEM_RESERVE, PAGE_READWRITE)
        result[3] = eax_4
        
        if (eax_4 != 0)
            result[2] = 0xffffffff
            *result = 0
            result[1] = 0
            data_2b6a9a0 += 1
            *result[4] = 0xffffffff
            return result
        
        HeapFree(data_c7ada4, HEAP_NONE, result[4])

return nullptr
