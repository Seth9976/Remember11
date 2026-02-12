// 函数: sub_4865ad
// 地址: 0x4865ad
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

enum HEAP_FLAGS flOptions
flOptions.b = arg1 == 0
HANDLE eax
int32_t ecx
eax, ecx = HeapCreate(flOptions, 0x1000, 0)
data_c7ada4 = eax

if (eax != 0)
    int32_t eax_2 = sub_486552(ecx)
    data_2b6a9b8 = eax_2
    bool cond:3_1
    
    if (eax_2 == 3)
        cond:3_1 = sub_4867ae(0x3f8) != 0
    
    if (eax_2 != 3 || cond:3_1)
        return 1
    
    HeapDestroy(data_c7ada4)
    data_c7ada4 = 0

return 0
