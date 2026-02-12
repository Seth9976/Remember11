// 函数: sub_46b510
// 地址: 0x46b510
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* eax_3 = *(arg1 + 4)

if (eax_3 != 0)
    (*(*eax_3 + 8))(eax_3)
    *(arg1 + 4) = 0

int32_t result = Ordinal_DSOUND_11(0, arg1 + 4, 0)

if (result s< 0)
    return result

int32_t* esi_1 = *(arg1 + 4)
int32_t eax_2 = (*(*esi_1 + 0x18))(esi_1, arg2, arg3)
int32_t ecx_2
ecx_2.b = eax_2 s>= 0
return eax_2 & (ecx_2 - 1)
