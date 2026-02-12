// 函数: sub_44f850
// 地址: 0x44f850
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char eax = *(arg1 + 1)

if (eax == 0 || eax == 5)
    return sx.d(eax)

int32_t eax_3 = (*(*data_c7865c + 8))(sx.d(*(arg1 + 0xae)))
int32_t eax_7

if (eax_3 != 0)
    eax_7 = (*(*(*(*data_c7865c + 8))(sx.d(*(arg1 + 0xae))) + 0x34))()

if (eax_3 == 0 || eax_7 == 0)
    *(arg1 + 1) = 5

return sx.d(*(arg1 + 1))
