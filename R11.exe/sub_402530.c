// 函数: sub_402530
// 地址: 0x402530
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_8 = sx.d(*(arg2 + 0x10))
char* esi = *(arg2 + 0x44)

if (eax_8 == 0)
    int32_t eax_5 = *(esi + 8)
    int32_t ecx_1 = *(esi + 0xc)
    
    if (ecx_1 s< 0x80 - eax_5)
        *(esi + 0xc) = ecx_1 + eax_5
        return 0
    
    *(esi + 0xc) = 0x80
    *(arg2 + 0x10) = 1
else if (eax_8 == 1)
    char eax_1 = esi[1]
    
    if (eax_1 == 3)
        *(esi + 0xc) = 0
        *esi = 0
        esi[1] = 1
        *(esi + 8) = 0x80
        *(esi + 0x10) = 0
        *(esi + 0x2c) = 0
        *(esi + 0x60) = esi
        *(esi + 0x1c) = data_4af58c
    else if (eax_1 == 6)
        sub_4023e0(esi, 4, 0x80)
    else
        sub_4023e0(esi, 0x13, 0x80)
    
    (*(esi + 0x1c))(&esi[0x1c])
    return 1

return 0
