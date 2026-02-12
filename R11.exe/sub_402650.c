// 函数: sub_402650
// 地址: 0x402650
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_11 = sx.d(*(arg1 + 0x10))
char* esi = *(arg1 + 0x44)

if (eax_11 == 0)
    int32_t edx_1 = *(esi + 0x10)
    int32_t eax_5 = *(esi + 8)
    
    if (edx_1 s>= eax_5)
        *(esi + 0x10) = eax_5
        *(arg1 + 0x10) = 1
    else
        *(esi + 0x10) = edx_1 + 1
else if (eax_11 == 1)
    char eax_1 = esi[1]
    
    if (eax_1 == 3)
        *(esi + 0xc) = 0
        *esi = 0
        esi[1] = 1
        *(esi + 8) = 1
        *(esi + 0x10) = 0
        *(esi + 0x2c) = 0
        *(esi + 0x60) = esi
        *(esi + 0x1c) = data_4af58c
    else if (eax_1 == 6)
        sub_4023e0(esi, 4, 1)
    else
        sub_4023e0(esi, 0x13, 1)
    
    (*(esi + 0x1c))(&esi[0x1c])
    return 1

int32_t ecx_1 = *(esi + 8)

if (ecx_1 s<= 0)
    ecx_1 = 1

*(esi + 0xc) = divs.dp.d(sx.q(*(esi + 0x10) << 7), ecx_1)
return 0
