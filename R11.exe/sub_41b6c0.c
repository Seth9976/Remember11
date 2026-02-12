// 函数: sub_41b6c0
// 地址: 0x41b6c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* eax = data_a5d8f8
void* result = &eax[*eax * 0x1704 + 7]
int32_t ecx_2 = *(result + 0x2c)

if (ecx_2 != 0xffffffff)
    int32_t edx_1 = *(result + 0x30)
    *(result + 0x44) = ecx_2
    *(result + 0x48) = edx_1
else
    int32_t ecx_4 = *(result + 0x74) * 0x1a
    *(result + 0x44) = arg1
    *(result + 0x48) = ecx_4

int32_t ecx_5 = *(result + 0x24)

if (ecx_5 != 0xffffffff)
    *(result + 0x3c) = ecx_5
    *(result + 0x40) = *(result + 0x28)
else
    if (*(result + 0x3c) s< 0x20)
        *(result + 0x3c) = 0x20
    
    int32_t ecx_6 = *(result + 0x44)
    
    if (*(result + 0x3c) + ecx_6 s> 0x260)
        *(result + 0x3c) = 0x260 - ecx_6

int32_t ecx_8 = *(result + 0x34)

if (ecx_8 == 0xffffffff)
    *(result + 0x4c) = 0
    *(result + 0x50) = 0x1e0
    return result

int32_t edx_5 = *(result + 0x38)
*(result + 0x4c) = ecx_8
*(result + 0x50) = edx_5
return result
