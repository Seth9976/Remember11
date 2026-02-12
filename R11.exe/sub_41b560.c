// 函数: sub_41b560
// 地址: 0x41b560
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* eax = data_a5d8f8
void* ecx_2 = &eax[*eax * 0x1704 + 0x27]
int32_t result = 0
int32_t i_1 = 0x58
int32_t i

do
    int32_t edx_1 = *ecx_2
    
    if (edx_1 s> 0)
        result += 1
    else if (edx_1 == 0)
        if (*(ecx_2 + 4) != 0)
            if (*(ecx_2 + 8) s> 0)
                result += 1
        else if (*(ecx_2 + 8) s< 0x80)
            result += 1
    
    int32_t edx_2 = *(ecx_2 + 0x34)
    
    if (edx_2 s> 0)
        result += 1
    else if (edx_2 == 0)
        if (*(ecx_2 + 0x38) != 0)
            if (*(ecx_2 + 0x3c) s> 0)
                result += 1
        else if (*(ecx_2 + 0x3c) s< 0x80)
            result += 1
    
    int32_t edx_3 = *(ecx_2 + 0x68)
    
    if (edx_3 s> 0)
        result += 1
    else if (edx_3 == 0)
        if (*(ecx_2 + 0x6c) != 0)
            if (*(ecx_2 + 0x70) s> 0)
                result += 1
        else if (*(ecx_2 + 0x70) s< 0x80)
            result += 1
    
    int32_t edx_4 = *(ecx_2 + 0x9c)
    
    if (edx_4 s> 0)
        result += 1
    else if (edx_4 == 0)
        if (*(ecx_2 + 0xa0) != 0)
            if (*(ecx_2 + 0xa4) s> 0)
                result += 1
        else if (*(ecx_2 + 0xa4) s< 0x80)
            result += 1
    
    int32_t edx_5 = *(ecx_2 + 0xd0)
    
    if (edx_5 s> 0)
        result += 1
    else if (edx_5 == 0)
        if (*(ecx_2 + 0xd4) != 0)
            if (*(ecx_2 + 0xd8) s> 0)
                result += 1
        else if (*(ecx_2 + 0xd8) s< 0x80)
            result += 1
    
    ecx_2 += 0x104
    i = i_1
    i_1 -= 1
while (i != 1)
return result
