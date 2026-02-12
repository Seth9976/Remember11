// 函数: sub_4658f0
// 地址: 0x4658f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t* edx = arg2
int16_t* result = arg1

while (*edx != 0)
    int16_t ecx_1 = *edx
    
    if (ecx_1 == 0x2f)
        *result = 0x5c
    else
        *result = ecx_1
    
    edx = &edx[1]
    result = &result[1]

*result = 0
return result
