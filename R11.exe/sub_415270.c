// 函数: sub_415270
// 地址: 0x415270
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t i_1 = arg1
int32_t ecx = arg2

if (i_1 s> 0)
    int32_t eax_2 = data_2b55e84 + 4
    int32_t i
    
    do
        ecx += *eax_2
        eax_2 += 0xc
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(ecx)
int32_t ecx_1 = ecx & 0x80000007
char* eax_7 = ((eax_4 + (edx & 7)) s>> 3) + data_e7e648 + 0x2420

if (ecx_1 s< 0)
    ecx_1 = ((ecx_1 - 1) | 0xfffffff8) + 1

int32_t edx_2
edx_2.b = 1
edx_2.b = 1 << ecx_1.b
*eax_7 |= edx_2.b
return sub_4151a0() __tailcall
