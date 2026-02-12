// 函数: sub_45b950
// 地址: 0x45b950
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx = arg2 + 0xc
void* result = arg1 + 4
int32_t i_1 = 4
int32_t i

do
    result += 0x10
    *(result - 0x14) = fconvert.s(fconvert.t(*(ecx - 0xc)))
    ecx += 0x10
    i = i_1
    i_1 -= 1
    *(result - 0x10) = fconvert.s(fconvert.t(*(arg2 - arg1 + result - 0x10)))
    *(result - 0xc) = fconvert.s(fconvert.t(*(ecx - 0x14)))
    *(result - 8) = fconvert.s(fconvert.t(*(ecx - 0x10)))
while (i != 1)
return result
