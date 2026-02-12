// 函数: sub_402b40
// 地址: 0x402b40
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(data_4cd178)
int32_t eax_4
int32_t edx_1
edx_1:eax_4 = sx.q(data_4cd17c)
int32_t ecx_1 = (eax_1 - edx) s>> 1
int32_t eax_8
int32_t edx_2
edx_2:eax_8 = sx.q((0x80 - arg2) * ecx_1)
int32_t ebx_1 = (eax_4 - edx_1) s>> 1
int32_t eax_12
int32_t edx_4
edx_4:eax_12 = sx.q((0x80 - arg2) * ebx_1)
int32_t ecx_2 = *(arg1 + 4)
int32_t ebp_1 = (eax_8 + (edx_2 & 0x7f)) s>> 7
int32_t eax_15 = ecx_1 * 2 - ebp_1
int32_t var_10 = 0
int32_t var_c = 0
int32_t var_8 = data_4cd178
int32_t esi_2 = (eax_12 + (edx_4 & 0x7f)) s>> 7
int32_t ebx_3 = ebx_1 * 2 - esi_2
int32_t var_4 = esi_2
sub_4437c0(&var_10, arg1 + 0x15, ecx_2)
int32_t ecx_3 = *(arg1 + 4)
int32_t var_8_1 = data_4cd178
var_10 = 0
int32_t var_c_1 = ebx_3
int32_t var_4_1 = esi_2
sub_4437c0(&var_10, arg1 + 0x15, ecx_3)
int32_t edx_6 = *(arg1 + 4)
int32_t ecx_5 = data_4cd178 - eax_15
var_10 = eax_15
int32_t ebx_4 = ebx_3 - esi_2
int32_t var_c_2 = esi_2
int32_t var_8_2 = ecx_5
int32_t var_4_2 = ebx_4
sub_4437c0(&var_10, arg1 + 0x15, edx_6)
int32_t ecx_6 = *(arg1 + 4)
var_10 = 0
int32_t var_c_3 = esi_2
int32_t var_8_3 = ebp_1
int32_t var_4_3 = ebx_4
return sub_4437c0(&var_10, arg1 + 0x15, ecx_6)
