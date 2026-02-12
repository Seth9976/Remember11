// 函数: sub_402020
// 地址: 0x402020
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx = arg1 & 0xfff
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ecx)
int32_t edx_1

if (arg2 != 0)
    int32_t ecx_4 = ecx & 0x80000007
    
    if (ecx_4 s< 0)
        ecx_4 = ((ecx_4 - 1) | 0xfffffff8) + 1
    
    edx_1.b = 1
    edx_1.b = 1 << ecx_4.b
    *(((eax_1 + (edx & 7)) s>> 3) + 0x2b5aa71) |= edx_1.b
    return ((eax_1 + (edx & 7)) s>> 3) + 0x2b5aa71

int32_t ecx_1 = ecx & 0x80000007

if (ecx_1 s< 0)
    ecx_1 = ((ecx_1 - 1) | 0xfffffff8) + 1

edx_1.b = 1
edx_1.b = 1 << ecx_1.b
edx_1.b = not.b(edx_1.b)
*(((eax_1 + (edx & 7)) s>> 3) + 0x2b5aa71) &= edx_1.b
return ((eax_1 + (edx & 7)) s>> 3) + 0x2b5aa71
