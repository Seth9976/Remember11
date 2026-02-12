// 函数: sub_420e60
// 地址: 0x420e60
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax = data_a5d910
void* ecx = eax + 0x7a90
int32_t* result = eax + 0x7884
int32_t i_1 = 0x10
int32_t i

do
    result[-1] = 0xffffffe0
    *result = 0xffffffe0
    result[0x1f] = 0xffffffe0
    result[0x20] = 0xffffffe0
    result[0x3f] = 0xffffffe0
    result[0x40] = 0xffffffe0
    result[0x5f] = 0xffffffe0
    result[0x60] = 0xffffffe0
    *(ecx - 0x10) = 0
    *ecx = 0
    *(ecx + 0x10) = 0
    *(ecx + 0x20) = 0
    result = &result[2]
    ecx += 1
    i = i_1
    i_1 -= 1
while (i != 1)
return result
