// 函数: sub_4151a0
// 地址: 0x4151a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* edi = data_e7e648
int32_t ecx = 0
char* edx = edi + 0x2420
int32_t i_1 = 0x100
int32_t i

do
    uint32_t eax_1 = zx.d(*edx)
    int32_t ebx_8 = (eax_1 u>> 6 & 1) + (eax_1 u>> 5 & 1) + (eax_1 u>> 4 & 1) + (eax_1 u>> 3 & 1)
        + (eax_1 u>> 2 & 1) + (eax_1 u>> 1 & 1)
    edx = &edx[1]
    i = i_1
    i_1 -= 1
    ecx = (eax_1 & 1) + ecx + ebx_8 + (eax_1 u>> 7)
while (i != 1)

if (ecx u< *(data_2b55e84 + 0x808))
    return 0

*(edi + 0x203) |= 0x80
return i_1 + 1
