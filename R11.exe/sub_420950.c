// 函数: sub_420950
// 地址: 0x420950
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void** eax = sub_446760(*(data_e7e648 + 0x20934))
eax[4].w = 0
*eax = data_4b1b18
char* ecx_1 = data_4b1b1c
void* edx_1 = &eax[5]

do
    eax.b = *ecx_1
    *edx_1 = eax.b
    ecx_1 = &ecx_1[1]
    edx_1 += 1
while (eax.b != 0)

void* result = data_e7e648
*(result + 0x20938) = 0
*(data_e7e648 + 0x2093c) = 0
*(data_e7e648 + 0x20940) = 0
return result
