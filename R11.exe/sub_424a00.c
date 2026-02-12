// 函数: sub_424a00
// 地址: 0x424a00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx = arg1[1]
int32_t var_30 = *arg1
int32_t var_2c = ecx
int32_t var_18
__builtin_memcpy(&var_18, 
    "\x30\x00\x00\x00\x38\x00\x00\x00\x20\x02\x00\x00\x76\x00\x00\x00\x20\x00\x00\x00\x20\x00\x00\x00", 
    0x18)
var_30 = 0x40
int32_t var_2c_1 = 0x38
sub_4241e0(&var_30)
int32_t ecx_1 = arg1[1]
var_30 = *arg1 + 0x40
int32_t var_2c_2 = ecx_1 + 0x30
sub_43c220(data_4b1de0 + 0xc5c8, &var_30, &data_4b1cf8, 1)
void* ecx_3 = data_4b1de0

if (*ecx_3 == 1)
    int32_t eax_18 = arg1[1]
    var_30 = *arg1 + 0x34
    int32_t var_2c_8 = eax_18 + 0x4e
    sub_43c220(ecx_3 + 0xc758, &var_30, &data_4b1cf8, 1)
else if (*(ecx_3 + 0x18) == 0xffffffff)
    int32_t eax_14
    int32_t edx_8
    edx_8:eax_14 = sx.q(0x15e - *(ecx_3 + 0xeb48))
    int32_t edx_10 = arg1[1]
    var_30 = ((eax_14 - edx_8) s>> 1) + *arg1 + 0x40
    int32_t var_2c_7 = edx_10 + 0x68
    sub_43c220(ecx_3 + 0xc758, &var_30, &data_4b1cf8, 1)
else
    int32_t eax_5 = arg1[1]
    var_30 = *arg1 + 0x38
    int32_t var_2c_3 = eax_5 + 0x46
    sub_43c220(ecx_3 + 0xc758, &var_30, &data_4b1cf8, 1)
    int32_t ecx_5 = arg1[1]
    var_30 = *arg1 + 0x4a
    int32_t var_2c_4 = ecx_5 + 0x67
    sub_43c220(data_4b1de0 + 0xc768, &var_30, &data_4b1cf8, 1)
    int32_t edx_2 = arg1[1]
    var_30 = *arg1 + 0x3c
    int32_t var_2c_5 = edx_2 + 0x8a
    int32_t var_28_1 = 0xb33
    int32_t var_24_1 = 0xb33
    sub_43c4c0(data_4b1de0 + 0xc5e8, &var_30, &data_4b1cf8, 1)
    int32_t eax_11 = arg1[1]
    var_30 = *arg1 + 0x3c
    int32_t var_2c_6 = eax_11 + 0x9e
    int32_t var_28_2 = 0xb33
    int32_t var_24_2 = 0xb33
    sub_43c4c0(data_4b1de0 + 0xc5d8, &var_30, &data_4b1cf8, 1)

int32_t eax_20 = var_18
var_30 = eax_20
int32_t var_14
int32_t var_2c_9 = var_14
int32_t ecx_13 = var_14 + arg1[1]
var_18 = eax_20 + *arg1
int32_t var_14_1 = ecx_13
return sub_43d1f0(&var_18, 1)
