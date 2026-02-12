// 函数: sub_415090
// 地址: 0x415090
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t i_2 = arg1

if (arg2 s< 0)
    int32_t ecx_2 = 0xfffffffe - arg2
    
    if (i_2 s> 0)
        int32_t eax_7 = data_2b55e84 + 8
        int32_t i
        
        do
            ecx_2 += *eax_7
            eax_7 += 0xc
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    return zx.d(*((ecx_2 u>> 3) + data_e7e648 + 0x2220)) u>> (ecx_2.b & 7) & 1

int32_t ecx = arg2

if (i_2 s> 0)
    int32_t eax = data_2b55e84
    int32_t i_1
    
    do
        ecx += *eax
        eax += 0xc
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return zx.d(*((ecx u>> 3) + data_e7e648 + 0x220)) u>> (ecx.b & 7) & 1
