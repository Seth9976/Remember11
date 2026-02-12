// 函数: sub_4854c1
// 地址: 0x4854c1
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(arg1)
int32_t edi_5 = ((((eax_1 ^ edx) - edx) & 0xf) ^ edx) - edx

if (edi_5 != 0)
    __builtin_memset(arg1, 0, neg.d(edi_5) + 0x10)
    sub_4854c1(arg1 + neg.d(edi_5) + 0x10, 0, arg2 - (neg.d(edi_5) + 0x10), neg.d(edi_5) + 0x10)
    return arg1

int32_t count_1 = arg2 & 0x7f
int32_t count = count_1

if (arg2 != count_1)
    sub_48546a(eax_1, arg2 - count_1)
    eax_1 = arg1
    count_1 = count

if (count_1 == 0)
    return eax_1

__builtin_memset(eax_1 + arg2 - count_1, 0, count)
return arg1
