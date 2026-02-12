// 函数: sub_44f8b0
// 地址: 0x44f8b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax
int32_t edx
edx:eax = muls.dp.d(0xef9db22d, arg2 * 0xffffd8f0)
int32_t edx_1 = edx s>> 6
int32_t eax_3 = (edx_1 u>> 0x1f) + edx_1
int32_t esi

if (eax_3 s< 0xffffd8f0)
    esi = 0xffffd8f0
else if (eax_3 s> 0)
    esi = 0
else if (eax_3 s>= 0xffffd8f0)
    esi = eax_3
else
    esi = 0xffffd8f0

int32_t edx_2 = sx.d(*(arg1 + 0xae))
*(arg1 + 0x40) = esi.w
int32_t result = (*(*data_c7865c + 8))(edx_2)

if (result == 0)
    return result

return (*(*(*(*data_c7865c + 8))(sx.d(*(arg1 + 0xae))) + 0x30))(esi)
