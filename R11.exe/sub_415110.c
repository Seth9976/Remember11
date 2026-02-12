// 函数: sub_415110
// 地址: 0x415110
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t i_2 = arg1
char* result
int32_t ecx

if (arg2 s< 0)
    ecx = 0xfffffffe - arg2
    
    if (i_2 s> 0)
        int32_t eax_6 = data_2b55e84 + 8
        int32_t i
        
        do
            ecx += *eax_6
            eax_6 += 0xc
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t eax_8
    int32_t edx_3
    edx_3:eax_8 = sx.q(ecx)
    result = ((eax_8 + (edx_3 & 7)) s>> 3) + data_e7e648 + 0x2220
else
    ecx = arg2
    
    if (i_2 s> 0)
        int32_t eax = data_2b55e84
        int32_t i_1
        
        do
            ecx += *eax
            eax += 0xc
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(ecx)
    result = ((eax_2 + (edx & 7)) s>> 3) + data_e7e648 + 0x220

int32_t ecx_3 = ecx & 0x80000007

if (ecx_3 s< 0)
    ecx_3 = ((ecx_3 - 1) | 0xfffffff8) + 1

int32_t edx_2
edx_2.b = 1
edx_2.b = 1 << ecx_3.b
*result |= edx_2.b
return result
