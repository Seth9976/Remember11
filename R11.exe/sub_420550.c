// 函数: sub_420550
// 地址: 0x420550
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax = data_e7e648
char* ecx_1 = *(data_2b55e88 + (zx.d(*(eax + 0x2856)) << 3) + 4)
char* edx_1 = eax + 0xb41ec

do
    eax.b = *ecx_1
    *edx_1 = eax.b
    ecx_1 = &ecx_1[1]
    edx_1 = &edx_1[1]
while (eax.b != 0)

void* eax_1 = data_e7e648
*(eax_1 + 0xb422c) = eax_1 + 0xb41ec
sub_43c280(data_e7e648 + 0xb422c, 0x15, 0, 0x1a)
void* eax_2 = data_e7e648
int32_t result = sub_43bdf0(eax_2 + 0xb423c, eax_2 + 0xb422c, 0x1000)
*(data_e7e648 + 0xb41e8) = 0xf0
return result
