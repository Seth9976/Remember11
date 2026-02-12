// 函数: sub_41f8f0
// 地址: 0x41f8f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t entry_ebx
int32_t eax = sub_402220(entry_ebx, 0)
void* ecx = data_e7e648
int32_t var_14 = *(ecx + 0xbf024)
int32_t var_18 = arg1 + 1
int32_t var_1c = eax
sub_480b92(ecx + 0xbecac, 0x49eea0)
char* eax_1 = sub_402220(entry_ebx, arg1 + 1)
void* ecx_2 = ecx + 0xbecac
void* edi_2 = ecx_2 + 1
char i

do
    i = *ecx_2
    ecx_2 += 1
while (i != 0)
void* esi_1 = ecx + 0xbecac + ecx_2 - edi_2
void* ecx_3
ecx_3.b = *eax_1

while (ecx_3.b != 0)
    eax_1 = &eax_1[1]
    *esi_1 = ecx_3.b
    ecx_3.b = *eax_1
    esi_1 += 1

*esi_1 = 0
sub_41a5a0(data_e7e648 + 0xb47a0)
sub_41c9c0()
sub_41c770(0)
sub_41c690(2)
sub_41c6e0(3)
sub_41c710(0x30, 0x48)
sub_41c7c0(0x220)
sub_41a850(0x13, 0x14, 0x1b8)
sub_41b800(data_e7e648 + 0xbecac, 1, 0, 0, 0, 0, 0, 0)
sub_41a5a0(data_e7e648 + 0x13238)
return 0
