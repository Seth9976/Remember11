// 函数: sub_429170
// 地址: 0x429170
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebp
int32_t var_4 = ebp
void* eax = data_a5dce4
int32_t ecx_1 = *(eax + 0xa14) - 1
int32_t ecx_2 = neg.d(ecx_1)
int32_t var_1c = (sbb.d(ecx_2, ecx_2, ecx_1 != 0) & 0x30) + 0x78
int32_t var_28 = 8
int32_t var_24 = 0x3e
int32_t var_20 = 0x60
int32_t var_18 = 0x20
int32_t var_14 = 0x18
char var_2c = 0x80
char var_2b = 0x80
char var_2a = 0x80
char var_29 = 0x80
sub_445470(eax + 0x143e24, &var_28, &var_2c, 1)
sub_442c30(data_a5dce4 + 0x143e24, 1)
void* ecx_6 = data_a5dce4
int32_t eax_4 = (*(ecx_6 + 0xa2c) + *(ecx_6 + 0xa28)) << 4
var_28 = 0x1e
int32_t var_24_1 = 0x3e
var_2c = 0x80
char var_2b_1 = 0x80
char var_2a_1 = 0x80
char var_29_1 = 0x80
sub_43c370(eax_4 + ecx_6 + 0x60894, &var_28, &var_2c, 1)
void* ecx_7 = eax_4 + data_a5dce4 + 0x61094
var_28 = 0x4a
int32_t var_24_2 = 0x3e
sub_43c1c0(ecx_7, &var_28, &var_2c, 1)
void* ecx_8 = data_a5dce4
int32_t* var_7c
char* var_78_1
void* edx_17

if (*(ecx_8 + 0xa14) == 0 || *(ecx_8 + 0xa34) == 1)
    var_2c = 0x80
    char var_2b_3 = 0x80
    char var_2a_3 = 0x80
    char var_29_3 = 0x80
    var_28 = 0x210
    int32_t var_24_7 = 0x3e
    sub_43c370(ecx_8 + 0x607e4, &var_28, &var_2c, 1)
    void* edx_19 = data_a5dce4 + 0x60884
    var_28 = 0x222
    int32_t var_24_8 = 0x3e
    sub_43c370(edx_19, &var_28, &var_2c, 1)
    void* edx_21 = data_a5dce4 + 0x607e4
    var_28 = 0x234
    int32_t var_24_9 = 0x3e
    sub_43c370(edx_21, &var_28, &var_2c, 1)
    void* edx_22 = data_a5dce4
    int32_t var_74_2 = 1
    var_78_1 = &var_2c
    var_28 = 0x246
    int32_t var_24_10 = 0x3e
    var_7c = &var_28
    edx_17 = edx_22 + 0x607e4
else
    var_2c = 0x80
    char var_2b_2 = 0x80
    char var_2a_2 = 0x80
    char var_29_2 = 0x80
    var_28 = 0x210
    int32_t var_24_3 = 0x3e
    sub_43c370(((*(ecx_8 + 0xa1c) s/ 0xe10) << 4) + ecx_8 + 0x607e4, &var_28, &var_2c, 1)
    void* ecx_11 = data_a5dce4 + 0x60884
    var_28 = 0x222
    int32_t var_24_4 = 0x3e
    sub_43c370(ecx_11, &var_28, &var_2c, 1)
    void* ecx_12 = data_a5dce4
    var_28 = 0x234
    int32_t var_24_5 = 0x3e
    int32_t eax_12
    int32_t edx_6
    edx_6:eax_12 = muls.dp.d(0x1b4e81b5, *(ecx_12 + 0xa1c))
    int32_t edx_7 = edx_6 s>> 6
    sub_43c370((mods.dp.d(sx.q((edx_7 u>> 0x1f) + edx_7), 6) << 4) + ecx_12 + 0x607e4, &var_28, 
        &var_2c, 1)
    int32_t var_74_1 = 1
    var_78_1 = &var_2c
    int32_t var_24_6 = 0x3e
    void* esi_1 = data_a5dce4
    var_7c = &var_28
    var_28 = 0x246
    edx_17 = (mods.dp.d(sx.q(*(esi_1 + 0xa1c) s/ 0x3c), 0xa) << 4) + esi_1 + 0x607e4

sub_43c370(edx_17, var_7c, var_78_1, 1)
__builtin_memcpy(&var_28, 
    "\x20\x00\x00\x00\x44\x00\x00\x00\x40\x02\x00\x00\x0c\x00\x00\x00\x20\x00\x00\x00\x20\x00\x00\x00", 
    0x18)
char var_29_4 = 0x80
char var_2a_4 = 0x80
char var_2b_4 = 0x80
var_2c = 0x80
sub_43d1f0(&var_28, 1)
int32_t edi_2 = 0

for (int32_t i = 0x72; i s< 0x18a; )
    void* eax_24 = data_a5dce4
    var_28 = 0x1e
    int32_t i_1 = i
    var_2c = 0x80
    char var_2b_5 = 0x80
    char var_2a_5 = 0x80
    char var_29_5 = 0x80
    sub_43c370(((*(eax_24 + 0xa2c) + edi_2) << 4) + eax_24 + 0x60894, &var_28, &var_2c, 1)
    void* eax_25 = data_a5dce4
    var_28 = 0x4a
    int32_t i_2 = i
    sub_43c1c0(((*(eax_25 + 0xa2c) + edi_2) << 4) + eax_25 + 0x61094, &var_28, &var_2c, 1)
    void* eax_27 = data_a5dce4
    var_28 = 0x210
    int32_t i_3 = i
    sub_43c370(((*(eax_27 + 0xa2c) + edi_2) << 4) + eax_27 + 0x61894, &var_28, &var_2c, 1)
    i += 0x1c
    edi_2 += 1

void* eax_28 = data_a5dce4
var_28 = 0x20
int32_t var_44 = 1
void* var_24_11 = *(eax_28 + 0xa28) * 0x1c + 0x74
int32_t var_20_1 = 0x240
int32_t var_1c_1 = 0x18
var_2c = 0x40
char var_2b_6 = 0x80
char var_2a_6 = 0x80
char var_29_6 = 0x10
sub_439d90(nullptr, &var_28, &var_2c)
__builtin_memcpy(&var_28, 
    "\x20\x00\x00\x00\x74\x00\x00\x00\x40\x02\x00\x00\x10\x01\x00\x00\x20\x00\x00\x00\x20\x00\x00\x00", 
    0x18)
char var_29_7 = 0x80
char var_2a_7 = 0x80
char var_2b_7 = 0x80
var_2c = 0x80
sub_43d1f0(&var_28, 1)
int16_t* edx_30 = data_a5dce4 + 0x143df8
var_28 = 0xc0
int32_t var_24_12 = 0x10
int32_t var_20_2 = 0
int32_t var_1c_2 = 0x80
int32_t var_18_1 = 0x100
int32_t var_14_1 = 0x20
var_2c = 0x80
char var_2b_8 = 0x80
char var_2a_8 = 0x80
char var_29_8 = 0x80
sub_445470(edx_30, &var_28, &var_2c, 1)
sub_442c30(data_a5dce4 + 0x143df8, 1)
int32_t* result = sub_423a40(data_a5dce4 + 0x143dc8, 1)
var_4
return result
