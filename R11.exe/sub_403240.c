// 函数: sub_403240
// 地址: 0x403240
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(arg1 * 0xc8)
int32_t eax_3 = (eax_1 + (edx & 0x7f)) s>> 7
int32_t eax_5
int32_t edx_2
edx_2:eax_5 = sx.q(data_4cd178)
int32_t eax_8
int32_t edx_3
edx_3:eax_8 = sx.q(data_4cd17c)
int32_t ebx_1 = (eax_5 - edx_2) s>> 1
int32_t ebp_1 = (eax_8 - edx_3) s>> 1
int32_t* result

for (int32_t i = 0; i s< 0xb400; i += 0x168)
    int32_t eax_11
    int32_t edx_4
    edx_4:eax_11 = sx.q(i)
    int32_t esi_3 = ((eax_11 + (edx_4 & 0x7f)) s>> 7 << 0x10) s/ 0x168
    int32_t eax_16
    int32_t edx_9
    edx_9:eax_16 = muls.dp.d(0x66666667, ((sub_441360(esi_3) * eax_3) s>> 0x10) * (ebx_1 + 0x20))
    int32_t edx_10 = edx_9 s>> 6
    int32_t var_20 = (edx_10 u>> 0x1f) + edx_10 + ebx_1
    int32_t eax_25
    int32_t edx_14
    edx_14:eax_25 = sx.q(i + 0x168)
    int32_t var_1c_1 = ((sub_441380(esi_3) * eax_3) s>> 0x10) * (ebp_1 + 0x20) s/ 0x78 + ebp_1
    int32_t edi_2 = ((eax_25 + (edx_14 & 0x7f)) s>> 7 << 0x10) s/ 0x168
    int32_t eax_30
    int32_t edx_19
    edx_19:eax_30 = muls.dp.d(0x66666667, ((sub_441360(edi_2) * eax_3) s>> 0x10) * (ebx_1 + 0x20))
    int32_t edx_20 = edx_19 s>> 6
    int32_t var_18_1 = (edx_20 u>> 0x1f) + edx_20 + ebx_1
    int32_t var_14_1 = ((sub_441380(edi_2) * eax_3) s>> 0x10) * (ebp_1 + 0x20) s/ 0x78 + ebp_1
    int32_t eax_40
    int32_t edx_24
    edx_24:eax_40 = muls.dp.d(0x66666667, ((sub_441360(esi_3) * 0xc8) s>> 0x10) * (ebx_1 + 0x20))
    int32_t edx_25 = edx_24 s>> 6
    int32_t var_10_1 = (edx_25 u>> 0x1f) + edx_25 + ebx_1
    int32_t var_c_1 = ((sub_441380(esi_3) * 0xc8) s>> 0x10) * (ebp_1 + 0x20) s/ 0x78 + ebp_1
    int32_t eax_49
    int32_t edx_29
    edx_29:eax_49 = muls.dp.d(0x66666667, ((sub_441360(edi_2) * 0xc8) s>> 0x10) * (ebx_1 + 0x20))
    int32_t edx_30 = edx_29 s>> 6
    int32_t var_8_1 = (edx_30 u>> 0x1f) + edx_30 + ebx_1
    int32_t var_4_1 = ((sub_441380(edi_2) * 0xc8) s>> 0x10) * (ebp_1 + 0x20) s/ 0x78 + ebp_1
    result = sub_443dd0(&var_20, arg2 + 0x15, *(arg2 + 4))

return result
