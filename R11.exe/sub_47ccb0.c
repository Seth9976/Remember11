// 函数: sub_47ccb0
// 地址: 0x47ccb0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* eax_2 = *(arg1 + 0x44)

if (eax_2 == 0)
    return 0x80004001

void* ecx

if (arg2 != 1)
    ecx = arg4
else
    ecx = arg1 + 0xc

return (*(*eax_2 + 0xc))(eax_2, arg2, arg3, ecx)
