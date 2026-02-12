// 函数: sub_4015a0
// 地址: 0x4015a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(arg1)
int32_t edx_1

if (arg2 != 0)
    int32_t ecx_3 = arg1 & 0x80000007
    
    if (ecx_3 s< 0)
        ecx_3 = ((ecx_3 - 1) | 0xfffffff8) + 1
    
    edx_1.b = 1
    edx_1.b = 1 << ecx_3.b
    *(((eax_1 + (edx & 7)) s>> 3) + 0x2b60324) |= edx_1.b
    return ((eax_1 + (edx & 7)) s>> 3) + 0x2b60324

int32_t ecx = arg1 & 0x80000007

if (ecx s< 0)
    ecx = ((ecx - 1) | 0xfffffff8) + 1

edx_1.b = 1
edx_1.b = 1 << ecx.b
edx_1.b = not.b(edx_1.b)
*(((eax_1 + (edx & 7)) s>> 3) + 0x2b60324) &= edx_1.b
return ((eax_1 + (edx & 7)) s>> 3) + 0x2b60324
