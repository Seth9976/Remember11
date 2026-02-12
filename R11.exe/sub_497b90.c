// 函数: sub_497b90
// 地址: 0x497b90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* eax = *(arg1 + 0x4c)
int32_t ecx = 0

if (eax != 0)
    if (arg2 == 0 && arg3 == 0)
        ecx = 4
    
    if (sub_498d7e(eax, arg2, ecx, arg3) == 0)
        sub_4979cc(arg1, *(arg1 + 0x4c), 1)
        return arg1

return nullptr
