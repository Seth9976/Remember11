// 函数: sub_4025e0
// 地址: 0x4025e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edx = sx.d(*(arg1 + 0x10))
char* ecx = *(arg1 + 0x44)

if (edx == 0)
    int32_t edx_4 = *(ecx + 8)
    int32_t edi_1 = *(ecx + 0x10)
    
    if (edi_1 s>= edx_4)
        *(ecx + 0x10) = edx_4
        *(arg1 + 0x10) = 1
    else
        *(ecx + 0x10) = edi_1 + 1
else if (edx == 1)
    *(ecx + 0xc) = 0
    *ecx = 0
    ecx[1] = 0
    *(ecx + 0x10) = 0
    *(ecx + 0x2c) = 0
    *(ecx + 8) = 1
    *(ecx + 0x60) = ecx
    *(ecx + 0x1c) = data_4af580
    return 1

int32_t esi_1 = *(ecx + 8)

if (esi_1 s<= 0)
    esi_1 = 1

*(ecx + 0xc) = divs.dp.d(sx.q(*(ecx + 0x10) << 7), esi_1)
return 0
