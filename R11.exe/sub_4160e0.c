// 函数: sub_4160e0
// 地址: 0x4160e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t i = 0

if (data_2b5a740 u<= 0)
    return 

do
    if (zx.d(data_2b5a748[i]) == arg1)
        int32_t ecx_3 = i & 0xfff
        int32_t eax_2
        int32_t edx_1
        edx_1:eax_2 = sx.q(ecx_3)
        int32_t ecx_4 = ecx_3 & 0x80000007
        char* eax = ((eax_2 + (edx_1 & 7)) s>> 3) + data_e7e648 + 0x25f0
        
        if (ecx_4 s< 0)
            ecx_4 = ((ecx_4 - 1) | 0xfffffff8) + 1
        
        int32_t edx_3
        edx_3.b = 1
        edx_3.b = 1 << ecx_4.b
        *eax |= edx_3.b
    
    i += 1
while (i u< data_2b5a740)
