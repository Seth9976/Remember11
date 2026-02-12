// 函数: sub_42f670
// 地址: 0x42f670
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_434
int32_t eax_1 = __security_cookie ^ &var_434
int32_t edx = data_2b60328
void* ebx = data_a5dd08
var_434 = edx
int32_t eax_2
int32_t edx_1
edx_1:eax_2 = muls.dp.d(0x9b583739, edx)
int32_t edx_3 = (edx_1 + var_434) s>> 0x11
char* esi
char* edi_1
edi_1, esi = __builtin_memcpy(ebx + 0x491898, 0x4a0778, 0x18)
*edi_1 = *esi
void var_410
sub_4414c0(mods.dp.d(sx.q((edx_3 u>> 0x1f) + edx_3), 0x64), &var_410, "%2d")
void* eax_8 = &var_410
char i

do
    i = *eax_8
    eax_8 += 1
while (i != 0)

int32_t eax_9 = eax_8 - &var_410
void* edi_4 = ebx + 0x491897

do
    i = *(edi_4 + 1)
    edi_4 += 1
while (i != 0)

int32_t esi_2
int32_t edi_5
edi_5, esi_2 = __builtin_memcpy(edi_4, &var_410, eax_9 u>> 2 << 2)
__builtin_memcpy(edi_5, esi_2, eax_9 & 3)
void* eax_11 = ebx + 0x491897
char i_1

do
    i_1 = *(eax_11 + 1)
    eax_11 += 1
while (i_1 != 0)
*eax_11 = 0xd48a9e8e
*(eax_11 + 4) = 0
sub_4414c0(mods.dp.d(sx.q(var_434 s/ 0xe10), 0x3c), &var_410, "%02d")
void* eax_18 = &var_410
char i_2

do
    i_2 = *eax_18
    eax_18 += 1
while (i_2 != 0)

int32_t eax_19 = eax_18 - &var_410
void* edi_7 = ebx + 0x491897

do
    i_2 = *(edi_7 + 1)
    edi_7 += 1
while (i_2 != 0)

int32_t esi_3
int32_t edi_8
edi_8, esi_3 = __builtin_memcpy(edi_7, &var_410, eax_19 u>> 2 << 2)
__builtin_memcpy(edi_8, esi_3, eax_19 & 3)
void* ebx_2 = ebx + 0x491897

do
    eax_19.b = *(ebx_2 + 1)
    ebx_2 += 1
while (eax_19.b != 0)

*ebx_2 = 0xaa95
*(ebx_2 + 2) = 0
void* eax_20 = data_a5dd08
sub_43c280(eax_20 + 0x6d3988, 1, zx.d(*(eax_20 + 0x6d398e)), 0x18)
int32_t var_428 = 0x1c0
int32_t var_424 = 0xb
int32_t var_420 = 0x20
int32_t var_41c = 0x20
int32_t edi_9 = 0x52
int32_t result

for (void* i_3 = nullptr; i_3 u< 0x20; )
    int32_t var_42c_1 = edi_9 - 6
    void* eax_22 = (*(i_3 + 0x4bf500) << 4) + data_a5dd08 + 0x6d3898
    int32_t var_430 = 0x58
    sub_43c3e0(eax_22, &var_430, nullptr, 1)
    var_430 = 0x60
    int32_t var_42c_2 = edi_9
    result = sub_43d1f0(&var_430, 1)
    i_3 += 4
    edi_9 += 0x2d

sub_480cd2(eax_1 ^ &var_434)
return result
