// 函数: sub_41a9b0
// 地址: 0x41a9b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* result = data_a5d8f8
int32_t ecx = sx.d(*(result + 0x20))
int32_t ecx_4

if (ecx == 2)
    if (arg1 == 1)
        *(result + 0x30) = 0x20
    
    ecx_4 = *(result + 0x30) + 6
    
    if (ecx_4 s< 0x20)
        *(result + 0x30) = ecx_4
        return result
    
    *(result + 0x20) = 1
else if (ecx == 3)
    if (arg1 == 1)
        *(result + 0x30) = 0x20
    
    ecx_4 = *(result + 0x30) + 6
    
    if (ecx_4 s< 0x20)
        *(result + 0x30) = ecx_4
        return result
    
    *(result + 0x20) = 0
    *(result + 0x18) = 4
return result
