// 函数: sub_403950
// 地址: 0x403950
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* edi = *(arg1 + 0x44)
int32_t eax

if (*(edi + 2) != 0)
    eax = sub_4025e0(arg1)
else
    eax = sub_4024c0(arg1)

if (eax == 0)
    sub_442e20()
    int32_t esi_2 = data_4cd178
    data_c7bbf0 = 1
    data_c7bbe0 = 3
    data_c7bbe4 = 0x80
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = sx.q(*(edi + 0xc) * esi_2)
    int32_t ecx_2 = (eax_3 + (edx_1 & 0x7f)) s>> 7
    int32_t eax_7
    int32_t edx_3
    edx_3:eax_7 = sx.q(esi_2 - ecx_2)
    int32_t var_18 = (eax_7 - edx_3) s>> 1
    int32_t var_10_1 = ecx_2
    int32_t var_c_1 = data_4cd17c
    int32_t var_14_1 = 0
    sub_444420(*data_c7bbc0 + 0x58, &var_18, nullptr, *(edi + 4))
    sub_442d00(*data_c7bbc0 + 0x58, *(edi + 4))
    int32_t eax_13 = data_2b603b0
    int32_t eax_14 = neg.d(eax_13)
    sub_442c30((sbb.d(eax_14, eax_14, eax_13 != 0) + 1) * 0x2c + *data_c7bbc0, *(edi + 4))
    int32_t eax_19 = data_2b603b0
    int32_t eax_20 = neg.d(eax_19)
    int32_t var_44_1 = *(edi + 4)
    sub_409b40(sbb.d(eax_20, eax_20, eax_19 != 0) + 1, 0x900)
    sub_442f40()

return 0
