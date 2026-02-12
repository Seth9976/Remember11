// 函数: sub_4040a0
// 地址: 0x4040a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edx = *(arg1 + 4)
int32_t var_28 = *(arg1 + 0x15)
int32_t entry_ebx
var_28:3.b = 0x80 - entry_ebx.b
sub_4437c0(&data_4cd170, &var_28, edx)
sub_442e20()
int32_t ebp = data_4cd178
int32_t var_20 = 0
int32_t var_1c = 0
int32_t edi = data_4cd17c
int32_t eax_3
int32_t edx_1
edx_1:eax_3 = sx.q(ebp * entry_ebx)
int32_t eax_7
int32_t edx_3
edx_3:eax_7 = sx.q(edi * entry_ebx)
int32_t var_14 = edi
int32_t ecx_2 = (eax_3 + (edx_1 & 0x7f)) s>> 7
int32_t eax_11
int32_t edx_5
edx_5:eax_11 = sx.q(ebp - ecx_2)
int32_t var_10 = (eax_11 - edx_5) s>> 1
int32_t edi_2 = (eax_7 + (edx_3 & 0x7f)) s>> 7
int32_t eax_16
int32_t edx_6
edx_6:eax_16 = sx.q(data_4cd17c - edi_2)
int32_t var_8 = ecx_2
data_c7bbf0 = 1
data_c7bbe0 = 3
data_c7bbe4 = 0x80
int32_t var_c = (eax_16 - edx_6) s>> 1
int32_t var_18 = ebp
int32_t var_4 = edi_2
sub_445790(*data_c7bbc0 + 0x58, &var_20, 0, *(arg1 + 4))
sub_442d00(*data_c7bbc0 + 0x58, *(arg1 + 4))
int32_t eax_21 = data_2b603b0
int32_t eax_22 = neg.d(eax_21)
int32_t var_58 = *(arg1 + 4)
sub_409b40(sbb.d(eax_22, eax_22, eax_21 != 0) + 1, 0x900)
int32_t ecx_8 = *(arg1 + 4)
int32_t var_38_1 = ecx_8
int80_t result =
    sub_43e6f0(nullptr, fconvert.s(float.t(0x80 - entry_ebx) * fconvert.t(0.0234375f)), ecx_8)
sub_442f40()
return result
