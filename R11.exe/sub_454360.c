// 函数: sub_454360
// 地址: 0x454360
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = *(arg1 + 0x30)
int32_t edi = *(arg2 + 0x54)
int32_t edx_2

if (eax != 0)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x66666667, *(arg1 + 0x34) - eax)
    edx_2 = edx_1 s>> 3

if (eax == 0 || edi u>= (edx_2 u>> 0x1f) + edx_2)
    __invalid_parameter_noinfo()

int32_t var_c
int32_t* eax_6 = sub_453750(*(arg1 + 0x30) + edi * 0x14, &var_c, *(arg2 + 0x50))
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_4532d0(eax_6)
*result &= not.d(1 << (eax_6[2]).b)
int32_t temp1 = *(arg1 + 0x3c)
*(arg1 + 0x3c) -= 1

if (temp1 != 1)
    return result

sub_454260(arg1)
return j_sub_4813df(arg1)
