// 函数: sub_4519d0
// 地址: 0x4519d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* esi = *arg2
int32_t* eax = *arg1

if (eax == esi)
    return eax

if (esi != 0)
    (*(*esi + 4))(esi)

int32_t* eax_1 = *arg1

if (eax_1 != 0)
    (*(*eax_1 + 8))(eax_1)

*arg1 = esi
return esi
