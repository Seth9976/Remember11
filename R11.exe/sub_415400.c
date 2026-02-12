// 函数: sub_415400
// 地址: 0x415400
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx = arg1 & 0xfff
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ecx)
char* result = ((eax_1 + (edx & 7)) s>> 3) + data_e7e648 + 0x2610
int32_t edx_2

if (arg2 != 0)
    int32_t ecx_4 = ecx & 0x80000007
    
    if (ecx_4 s< 0)
        ecx_4 = ((ecx_4 - 1) | 0xfffffff8) + 1
    
    edx_2.b = 1
    edx_2.b = 1 << ecx_4.b
    *result |= edx_2.b
    return result

int32_t ecx_1 = ecx & 0x80000007

if (ecx_1 s< 0)
    ecx_1 = ((ecx_1 - 1) | 0xfffffff8) + 1

edx_2.b = 1
edx_2.b = 1 << ecx_1.b
edx_2.b = not.b(edx_2.b)
*result &= edx_2.b
return result
