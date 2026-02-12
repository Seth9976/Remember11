// 函数: sub_402160
// 地址: 0x402160
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx_1 = arg1 s>> 1 & 0x7ff
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ecx_1)
int32_t edx_1

if (arg2 != 0)
    int32_t ecx_5 = ecx_1 & 0x80000007
    
    if (ecx_5 s< 0)
        ecx_5 = ((ecx_5 - 1) | 0xfffffff8) + 1
    
    edx_1.b = 1
    edx_1.b = 1 << ecx_5.b
    *(((eax_1 + (edx & 7)) s>> 3) + &data_2b5ceb1) |= edx_1.b
    return ((eax_1 + (edx & 7)) s>> 3) + &data_2b5ceb1

int32_t ecx_2 = ecx_1 & 0x80000007

if (ecx_2 s< 0)
    ecx_2 = ((ecx_2 - 1) | 0xfffffff8) + 1

edx_1.b = 1
edx_1.b = 1 << ecx_2.b
edx_1.b = not.b(edx_1.b)
*(((eax_1 + (edx & 7)) s>> 3) + &data_2b5ceb1) &= edx_1.b
return ((eax_1 + (edx & 7)) s>> 3) + &data_2b5ceb1
