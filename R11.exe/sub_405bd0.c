// 函数: sub_405bd0
// 地址: 0x405bd0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edx = arg1
int32_t ecx

if (edx != 0xffffffff)
    ecx = edx + 1
else
    edx = 0
    ecx = 0xa

int32_t esi = 0

if (edx s< ecx)
    int16_t* eax_3 = edx * 0x16c + 0x2b697d6
    int32_t i_1 = ecx - edx
    int32_t i
    
    do
        if (*(eax_3 - 0x12) == 0)
            if (*eax_3 != 0)
                *(eax_3 - 5) = 0
        else if (*eax_3 != 0)
            *(eax_3 - 5) = 0
        else
            esi += 1
        
        eax_3 = &eax_3[0xb6]
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if (esi != 0)
        return 0

return 1
