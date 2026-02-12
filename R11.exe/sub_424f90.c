// 函数: sub_424f90
// 地址: 0x424f90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_214
int32_t eax_1 = __security_cookie ^ &var_214
char var_204[0xff]
sub_4414c0(data_2b60364, &var_204, "%04d")
int32_t eax_2 = 0
char var_104[0x100]
char i

do
    i = var_204[eax_2]
    var_104[eax_2] = i
    eax_2 += 1
while (i != 0)

void var_105
void* eax_3 = &var_105

do
    i = *(eax_3 + 1)
    eax_3 += 1
while (i != 0)

*eax_3 = 0x5e81
*(eax_3 + 2) = 0
sub_4414c0(data_2b60360, &var_204, "%2d")
char (* eax_5)[0xff] = &var_204
char i_1

do
    i_1 = *eax_5
    eax_5 = &(*eax_5)[1]
while (i_1 != 0)
int32_t eax_6 = eax_5 - &var_204
void* edi = &var_105
char i_2

do
    i_2 = *(edi + 1)
    edi += 1
while (i_2 != 0)
int32_t esi
int32_t edi_1
edi_1, esi = __builtin_memcpy(edi, &var_204, eax_6 u>> 2 << 2)
__builtin_memcpy(edi_1, esi, eax_6 & 3)
void* eax_7 = &var_105
char i_3

do
    i_3 = *(eax_7 + 1)
    eax_7 += 1
while (i_3 != 0)
*eax_7 = 0x5e81
int32_t ecx_5 = data_2b6035c
*(eax_7 + 2) = 0
sub_4414c0(ecx_5, &var_204, "%2d")
char (* eax_8)[0xff] = &var_204
char i_4

do
    i_4 = *eax_8
    eax_8 = &(*eax_8)[1]
while (i_4 != 0)
int32_t eax_9 = eax_8 - &var_204
void* edi_4 = &var_105
char i_5

do
    i_5 = *(edi_4 + 1)
    edi_4 += 1
while (i_5 != 0)
int32_t esi_1
int32_t edi_5
edi_5, esi_1 = __builtin_memcpy(edi_4, &var_204, eax_9 u>> 2 << 2)
__builtin_memcpy(edi_5, esi_1, eax_9 & 3)
void* eax_10 = &var_105
char i_6

do
    i_6 = *(eax_10 + 1)
    eax_10 += 1
while (i_6 != 0)
*eax_10 = 0x4081
*(eax_10 + 2) = 0
sub_4414c0(data_2b60358, &var_204, "%2d")
char (* eax_12)[0xff] = &var_204
char i_7

do
    i_7 = *eax_12
    eax_12 = &(*eax_12)[1]
while (i_7 != 0)
int32_t eax_13 = eax_12 - &var_204
void* edi_6 = &var_105
char i_8

do
    i_8 = *(edi_6 + 1)
    edi_6 += 1
while (i_8 != 0)
int32_t esi_2
int32_t edi_7
edi_7, esi_2 = __builtin_memcpy(edi_6, &var_204, eax_13 u>> 2 << 2)
__builtin_memcpy(edi_7, esi_2, eax_13 & 3)
void* eax_14 = &var_105
char i_9

do
    i_9 = *(eax_14 + 1)
    eax_14 += 1
while (i_9 != 0)
*eax_14 = 0x4681
int32_t ecx_14 = data_2b60354
*(eax_14 + 2) = 0
sub_4414c0(ecx_14, &var_204, "%02d")
char (* eax_15)[0xff] = &var_204
char i_10

do
    i_10 = *eax_15
    eax_15 = &(*eax_15)[1]
while (i_10 != 0)
int32_t eax_16 = eax_15 - &var_204
void* edi_8 = &var_105
char i_11

do
    i_11 = *(edi_8 + 1)
    edi_8 += 1
while (i_11 != 0)
int32_t esi_3
int32_t edi_9
edi_9, esi_3 = __builtin_memcpy(edi_8, &var_204, eax_16 u>> 2 << 2)
__builtin_memcpy(edi_9, esi_3, eax_16 & 3)
void* eax_17 = &var_105
char i_12

do
    i_12 = *(eax_17 + 1)
    eax_17 += 1
while (i_12 != 0)
*eax_17 = 0x4681
*(eax_17 + 2) = 0
sub_4414c0(data_2b60350, &var_204, "%02d")
char (* eax_19)[0xff] = &var_204
char i_13

do
    i_13 = *eax_19
    eax_19 = &(*eax_19)[1]
while (i_13 != 0)
int32_t eax_20 = eax_19 - &var_204
void* edi_10 = &var_105
char i_14

do
    i_14 = *(edi_10 + 1)
    edi_10 += 1
while (i_14 != 0)
int32_t esi_4
int32_t edi_11
edi_11, esi_4 = __builtin_memcpy(edi_10, &var_204, eax_20 u>> 2 << 2)
void* eax_22 = data_4b1de0 + 0xc5f8
__builtin_memcpy(edi_11, esi_4, eax_20 & 3)
uint32_t edx_1 = zx.d(*(eax_22 + 6))
*eax_22 = &var_104
sub_43c280(eax_22, 2, edx_1, 0x11)
void* ecx_24 = data_4b1de0 + 0xc5f8
var_214 = 0x138
int32_t var_210 = 0x14
int32_t var_20c = 0x999
int32_t var_208 = 0xb33
int32_t* result = sub_43c4c0(ecx_24, &var_214, &data_4b1cf8, 1)
sub_480cd2(eax_1 ^ &var_214)
return result
