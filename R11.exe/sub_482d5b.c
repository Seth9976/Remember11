// 函数: sub_482d5b
// 地址: 0x482d5b
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg3 == 0)
    return 0

int16_t* edx = arg2
int16_t* ecx = arg1

while (true)
    int32_t temp0_1 = arg3
    arg3 -= 1
    int16_t eax_2
    
    if (temp0_1 != 1)
        eax_2 = *ecx
    
    if (temp0_1 == 1 || eax_2 == 0 || eax_2 != *edx)
        return zx.d(*ecx) - zx.d(*edx)
    
    ecx = &ecx[1]
    edx = &edx[1]
