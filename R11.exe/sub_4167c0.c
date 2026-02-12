// 函数: sub_4167c0
// 地址: 0x4167c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx_1 = arg1 s>> 1 & 0x7ff
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ecx_1)
char* eax_4 = ((eax_1 + (edx & 7)) s>> 3) + data_e7e648 + 0x25e0
int32_t edx_2

if (arg2 != 0)
    int32_t ecx_6 = ecx_1 & 0x80000007
    
    if (ecx_6 s< 0)
        ecx_6 = ((ecx_6 - 1) | 0xfffffff8) + 1
    
    edx_2.b = 1
    edx_2.b = 1 << ecx_6.b
    *eax_4 |= edx_2.b
    return sub_416740() __tailcall

int32_t ecx_2 = ecx_1 & 0x80000007

if (ecx_2 s< 0)
    ecx_2 = ((ecx_2 - 1) | 0xfffffff8) + 1

edx_2.b = 1
edx_2.b = 1 << ecx_2.b
edx_2.b = not.b(edx_2.b)
*eax_4 &= edx_2.b
return sub_416740() __tailcall
