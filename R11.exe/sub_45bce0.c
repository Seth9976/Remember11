// 函数: sub_45bce0
// 地址: 0x45bce0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax = arg1 + 0x10
int32_t i_1 = 4
void* ecx_1 = arg2 + 0x30
int32_t i

do
    eax += 4
    *(eax - 0x14) = fconvert.s(fconvert.t(*(ecx_1 - 0x30)))
    ecx_1 += 4
    i = i_1
    i_1 -= 1
    *(eax - 4) = fconvert.s(fconvert.t(*(arg2 - arg1 + eax - 4)))
    *(eax + 0xc) = fconvert.s(fconvert.t(*(ecx_1 - 0x14)))
    *(eax + 0x1c) = fconvert.s(fconvert.t(*(ecx_1 - 4)))
while (i != 1)
*(arg1 + 0x30) = fconvert.s(fconvert.t(*(arg2 + 0x30)) + fconvert.t(*arg3))
*(arg1 + 0x34) = fconvert.s(fconvert.t(*(arg2 + 0x34)) + fconvert.t(arg3[1]))
*(arg1 + 0x38) = fconvert.s(fconvert.t(*(arg2 + 0x38)) + fconvert.t(arg3[2]))
return arg3
