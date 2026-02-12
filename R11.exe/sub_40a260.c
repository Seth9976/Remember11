// 函数: sub_40a260
// 地址: 0x40a260
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_10 = 0
int32_t var_c = 0
int32_t var_8 = 0x18
int32_t var_4 = 0x34
int32_t var_18 = 0x1b3
int32_t var_14 = 0xdc
int32_t result = sub_414cf0(0x600a)

if (result.w == 0xff)
    return result

int32_t eax
int32_t edx_1
edx_1:eax = muls.dp.d(0x66666667, result)
int32_t edx_2 = edx_1 s>> 2

if (edx_2 u>> 0x1f != neg.d(edx_2))
    int32_t var_10_1 = result s/ 0xa * 0x18
    sub_445470(data_e7e648 + 0x10f2f0, &var_18, 0, 2)
    var_18 += 0x20

int32_t var_10_2 = result s% 0xa * 0x18
sub_445470(data_e7e648 + 0x10f2f0, &var_18, 0, 2)
void* edx_5 = data_e7e648
var_18 += 0x20
int32_t var_10_3 = 0xf0
sub_445470(edx_5 + 0x10f2f0, &var_18, 0, 2)
var_18 += 0x20
int32_t eax_9 = sub_414cf0(0x600b)
int32_t eax_10
int32_t edx_7
edx_7:eax_10 = muls.dp.d(0x66666667, eax_9)
int32_t edx_8 = edx_7 s>> 2

if (edx_8 u>> 0x1f != neg.d(edx_8))
    int32_t var_10_4 = eax_9 s/ 0xa * 0x18
    sub_445470(data_e7e648 + 0x10f2f0, &var_18, 0, 2)
    var_18 += 0x2e

int32_t var_10_5 = eax_9 s% 0xa * 0x18
sub_445470(data_e7e648 + 0x10f2f0, &var_18, 0, 2)
void* ecx_9 = data_e7e648
var_18 += 0x20
return sub_442c30(ecx_9 + 0x10f2f0, 2)
