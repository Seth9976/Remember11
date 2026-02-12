// 函数: sub_4024c0
// 地址: 0x4024c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx_4 = sx.d(*(arg1 + 0x10))
char* eax = *(arg1 + 0x44)

if (ecx_4 == 0)
    int32_t ecx_3 = *(eax + 8)
    int32_t edx_1 = *(eax + 0xc)
    
    if (edx_1 s< 0x80 - ecx_3)
        *(eax + 0xc) = edx_1 + ecx_3
        return 0
    
    *(eax + 0xc) = 0x80
    *(arg1 + 0x10) = 1
else if (ecx_4 == 1)
    *(eax + 0xc) = 0
    *eax = 0
    eax[1] = 0
    *(eax + 8) = 0x80
    *(eax + 0x10) = 0
    *(eax + 0x2c) = 0
    *(eax + 0x60) = eax
    *(eax + 0x1c) = data_4af580
    return 1

return 0
