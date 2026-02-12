// 函数: sub_454f80
// 地址: 0x454f80
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax_2 = *(arg1 + ((arg2 u>> 5 & 0x3fff) << 2) + 0x14)
*arg3 = eax_2

if (eax_2 == 0)
    sub_465480(".\texture.cpp", 0x200)
else
    int16_t ecx_1 = *(eax_2 + 0xc)
    
    if (ecx_1 != 0 && ecx_1 != 0x13 && ecx_1 != 0x14)
        void* var_4 = eax_2
        sub_4653f0("pTexMem = %p\n")
        sub_465480(".\texture.cpp", 0x1fd)

return 0
