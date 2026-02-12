// 函数: sub_4166e0
// 地址: 0x4166e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx = arg1 & 0xfff
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ecx)
char* eax_4 = ((eax_1 + (edx & 7)) s>> 3) + data_e7e648 + 0x25a0
int32_t edx_2

if (arg2 != 0)
    int32_t ecx_5 = ecx & 0x80000007
    
    if (ecx_5 s< 0)
        ecx_5 = ((ecx_5 - 1) | 0xfffffff8) + 1
    
    edx_2.b = 1
    edx_2.b = 1 << ecx_5.b
    *eax_4 |= edx_2.b
    return sub_416550() __tailcall

int32_t ecx_1 = ecx & 0x80000007

if (ecx_1 s< 0)
    ecx_1 = ((ecx_1 - 1) | 0xfffffff8) + 1

edx_2.b = 1
edx_2.b = 1 << ecx_1.b
edx_2.b = not.b(edx_2.b)
*eax_4 &= edx_2.b
return sub_416550() __tailcall
