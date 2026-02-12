// 函数: sub_422490
// 地址: 0x422490
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax = data_a5d910
int32_t var_20

if (arg3 == 1)
    int32_t eax_3
    int32_t edx
    edx:eax_3 = sx.q(*(eax + 0x7ad4) << 0xe)
    int32_t eax_8
    int16_t edx_2
    edx_2:eax_8 = sx.q(sub_441360((eax_3 + (edx & 0x7f)) s>> 7) << 7)
    int32_t edx_4 = data_a5d910
    int32_t eax_10 = arg1 * 3
    void* ebp = *(edx_4 + ((arg1 * 3 + 0x1eba) << 2))
    int32_t ecx_1 = (eax_8 + zx.d(edx_2)) s>> 0x10
    int32_t edi_1 = *(edx_4 + (eax_10 << 2) + 0x7aec) s>> 0xc
    int32_t eax_15
    int32_t edx_5
    edx_5:eax_15 = sx.q((zx.d(*(ebp + 8)) - edi_1) * ecx_1)
    int32_t ebx_1 = *(edx_4 + (eax_10 << 2) + 0x7af0) s>> 0xc
    int32_t eax_20
    int32_t edx_7
    edx_7:eax_20 = sx.q((zx.d(*(ebp + 0xa)) - ebx_1) * ecx_1)
    arg3 = *arg2
    arg3:3.b = ecx_1.b
    void* ecx_2 = data_a5d910
    int32_t eax_26
    int32_t edx_13
    edx_13:eax_26 = sx.q(0x70 - edi_1)
    int32_t eax_31
    int32_t edx_15
    edx_15:eax_31 =
        sx.q((((eax_26 - edx_13) s>> 1) + *(ecx_2 + 0x784c) * 0x78 + 0x16) * (0x80 - ecx_1))
    var_20 = (eax_31 + (edx_15 & 0x7f)) s>> 7
    int32_t eax_35
    int32_t edx_17
    edx_17:eax_35 = sx.q(0x54 - ebx_1)
    int32_t eax_40
    int32_t edx_18
    edx_18:eax_40 =
        sx.q((*(ecx_2 + 0x7850) * 0x5a + ((eax_35 - edx_17) s>> 1) + 0x30) * (0x80 - ecx_1))
    int32_t var_1c = (eax_40 + (edx_18 & 0x7f)) s>> 7
    int32_t var_18 = ((eax_15 + (edx_5 & 0x7f)) s>> 7) + edi_1
    int32_t var_14 = ((eax_20 + (edx_7 & 0x7f)) s>> 7) + ebx_1
    sub_442e20()
    void* eax_43 = data_a5d910
    data_c7bbf0 = 1
    sub_440ec0((*(eax_43 + 0x7ac4) << 0x16) + eax_43 + 0x62921c, &var_20, &arg3, 1)
    return sub_442f40()

if (*(eax + 0x7acc) == 0)
    int32_t edx_21 = *(eax + 0x7ae4)
    var_20 = neg.d(*(eax + 0x7ae0))
    int32_t var_1c_1 = neg.d(edx_21)
    void* ecx_10 = *(eax + ((arg1 * 3 + 0x1eba) << 2))
    uint32_t var_18_1 = zx.d(*(ecx_10 + 8))
    uint32_t var_14_1 = zx.d(*(ecx_10 + 0xa))
    return sub_440ec0((arg1 << 0x16) + eax + 0x62921c, &var_20, arg2, 1)

sub_442e20()
int32_t ebx_2 = data_a5d910
void* edi_3 = ebx_2 + arg1 * 0xc
data_c7bbf0 = 1
int32_t ecx_17 = (*(edi_3 + 0x7aec) * 0x280 s/ 0x70) s>> 0xc
int32_t var_18_2 = ecx_17
int32_t eax_49
int32_t edx_31
edx_31:eax_49 = muls.dp.d(0x30c30c31, *(edi_3 + 0x7af0) * 0x1c0)
int32_t edx_32 = edx_31 s>> 4
int32_t eax_54
int32_t edx_33
edx_33:eax_54 = sx.q(0x280 - ecx_17)
var_20 = (eax_54 - edx_33) s>> 1
int32_t edi_5 = ((edx_32 u>> 0x1f) + edx_32) s>> 0xc
int32_t eax_58
int32_t edx_34
edx_34:eax_58 = sx.q(0x1c0 - edi_5)
int32_t var_1c_2 = (eax_58 - edx_34) s>> 1
int32_t var_14_2 = edi_5
sub_440ec0((arg1 << 0x16) + ebx_2 + 0x62921c, &var_20, arg2, 1)
return sub_442f40()
