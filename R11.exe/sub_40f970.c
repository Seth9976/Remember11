// 函数: sub_40f970
// 地址: 0x40f970
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_104
int32_t eax_1 = __security_cookie ^ &var_104
*(data_e7e648 + 0xb4464) = 0xf0
*(data_e7e648 + 0xb4468) = arg1
*(data_e7e648 + 0xb446c) = arg2
*(data_e7e648 + 0xb4470) = arg3
sub_4414c0(arg1, data_e7e648 + 0xb4474, "%d")
void* eax_5 = data_e7e648 + 0xb4473
char i

do
    i = *(eax_5 + 1)
    eax_5 += 1
while (i != 0)
*eax_5 = 0x8e8c
*(eax_5 + 2) = 0
sub_4414c0(arg2, &var_104, "%d")
void* eax_6 = &var_104
char i_1

do
    i_1 = *eax_6
    eax_6 += 1
while (i_1 != 0)
int32_t eax_7 = eax_6 - &var_104
void* edi_1 = data_e7e648 + 0xb4473
void* ecx_2

do
    ecx_2.b = *(edi_1 + 1)
    edi_1 += 1
while (ecx_2.b != 0)
int32_t esi_1
int32_t edi_2
edi_2, esi_1 = __builtin_memcpy(edi_1, &var_104, eax_7 u>> 2 << 2)
__builtin_memcpy(edi_2, esi_1, eax_7 & 3)
void* eax_9 = data_e7e648 + 0xb4473
char i_2

do
    i_2 = *(eax_9 + 1)
    eax_9 += 1
while (i_2 != 0)
*eax_9 = 0xfa93
void* edx_3
edx_3.b = 0
*(eax_9 + 2) = 0
char* eax_10 = *((arg3 << 2) + &data_4b0a80)
char* ecx_8 = eax_10

do
    edx_3.b = *eax_10
    eax_10 = &eax_10[1]
while (edx_3.b != 0)

void* eax_11 = eax_10 - ecx_8
void* edi_4 = data_e7e648 + 0xb4473
void* ecx_9

do
    ecx_9.b = *(edi_4 + 1)
    edi_4 += 1
while (ecx_9.b != 0)
int32_t esi_3
int32_t edi_5
edi_5, esi_3 = __builtin_memcpy(edi_4, ecx_8, eax_11 u>> 2 << 2)
__builtin_memcpy(edi_5, esi_3, eax_11 & 3)
void* eax_12 = data_e7e648
*(eax_12 + 0xb4574) = eax_12 + 0xb4474
sub_43c280(data_e7e648 + 0xb4574, 0x15, 0, 0x1a)
void* eax_15 = data_e7e648
int32_t result = sub_43bdf0(eax_15 + 0xb4584, eax_15 + 0xb4574, 0x1000)
sub_480cd2(eax_1 ^ &var_104)
return result
