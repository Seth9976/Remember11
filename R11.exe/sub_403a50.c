// 函数: sub_403a50
// 地址: 0x403a50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* edi = *(arg1 + 0x44)
int32_t eax

if (*(edi + 2) != 0)
    eax = sub_4025e0(arg1)
else
    eax = sub_4024c0(arg1)

if (eax == 0)
    sub_442e20()
    data_c7bbf0 = 1
    data_c7bbe0 = 3
    data_c7bbe4 = 0x80
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = sx.q(*(edi + 0xc) * 0x1c0)
    int32_t ecx_2 = (eax_3 + (edx_1 & 0x7f)) s>> 7
    int32_t eax_6
    int32_t edx_3
    edx_3:eax_6 = sx.q(0x1c0 - ecx_2)
    int32_t* edx_4 = data_c7bbc0
    int32_t var_14_1 = (eax_6 - edx_3) s>> 1
    int32_t var_c_1 = ecx_2
    int32_t var_18 = 0
    int32_t var_10_1 = 0x280
    sub_444420(*edx_4 + 0x58, &var_18, nullptr, *(edi + 4))
    sub_442d00(*data_c7bbc0 + 0x58, *(edi + 4))
    int32_t edx_6 = data_2b603b0
    int32_t edx_7 = neg.d(edx_6)
    sub_442c30((sbb.d(edx_7, edx_7, edx_6 != 0) + 1) * 0x2c + *data_c7bbc0, *(edi + 4))
    int32_t edx_12 = data_2b603b0
    int32_t edx_13 = neg.d(edx_12)
    int32_t var_40_1 = *(edi + 4)
    sub_409b40(sbb.d(edx_13, edx_13, edx_12 != 0) + 1, 0x900)
    sub_442f40()

return 0
