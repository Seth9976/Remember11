// 函数: sub_4044d0
// 地址: 0x4044d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edx = *(arg2 + 4)
int32_t var_3c = *(arg2 + 0x15)
var_3c:3.b = 0x80 - arg1.b
sub_4437c0(&data_4cd170, &var_3c, edx)
sub_442e20()
data_c7bbe4 = 0x80
int32_t i_1 = 3
data_c7bbf0 = 1
data_c7bbe0 = 3
int32_t ecx_1 = *(arg2 + 4)
int32_t var_50_1 = ecx_1
int80_t result =
    sub_43e6f0(nullptr, fconvert.s(float.t(0x80 - arg1) * fconvert.t(0.0234375f)), ecx_1)
int32_t esi_1 = data_2b603b0
int32_t eax_3
int32_t edx_1
edx_1:eax_3 = sx.q((0x80 - arg1) << 7)
int32_t edx_3 = data_c7bbc0
int32_t esi_2 = neg.d(esi_1)
data_c7bbe4 = (eax_3 + (edx_1 & 0x7f)) s>> 7
int32_t var_24 = 0xe0
data_c7bbe0 = 3
int32_t var_28 = 0x140
int32_t var_20 = 0
int32_t var_1c = 0
int32_t var_18
__builtin_memcpy(&var_18, 
    "\x80\x02\x00\x00\xc0\x01\x00\x00\x40\x01\x00\x00\xe0\x00\x00\x00\x00\x00\x01\x00\x00\x00\x01\x00", 
    0x18)
int32_t var_30 = 0
int32_t var_34 = 0
int32_t var_2c = 0x200
int16_t* esi_6 = (sbb.d(esi_2, esi_2, esi_1 != 0) + 1) * 0x2c + *edx_3
int32_t i

do
    sub_445ff0(esi_6, &var_28, &var_34, 0, *(arg2 + 4))
    sub_442d00(esi_6, *(arg2 + 4))
    i = i_1
    i_1 -= 1
while (i != 1)
sub_442f40()
return result
