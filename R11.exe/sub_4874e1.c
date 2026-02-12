// 函数: sub_4874e1
// 地址: 0x4874e1
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t i_2 = 0x101
char* ebx = arg1 + 0x1c
sub_480cf0(ebx, 0, 0x101)
*(arg1 + 4) = 0
*(arg1 + 8) = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x10) = 0
void* edi_1 = arg1 + 0x14
*edi_1 = 0
*(edi_1 + 4) = 0
int32_t i

do
    *ebx = *(0x4cc130 - arg1 + ebx)
    ebx = &ebx[1]
    i = i_2
    i_2 -= 1
while (i != 1)
void* ecx_2 = arg1 + 0x11d
int32_t i_3 = 0x100
int32_t i_1

do
    *ecx_2 = *(ecx_2 + 0x4cc130 - arg1)
    ecx_2 += 1
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
return 0x4cc130 - arg1
