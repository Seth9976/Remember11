// 函数: sub_48a535
// 地址: 0x48a535
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax = *(arg1 + 4)

if (eax != 0 && *(eax + 8) != 0)
    void* ecx_1 = *(arg2 + 4)
    
    if (eax != ecx_1)
        if (sub_48a480(eax + 8, ecx_1 + 8) != 0 || ((*arg2 & 2) != 0 && (*arg1 & 8) == 0))
            return 0
    else if ((*arg2 & 2) != 0 && (*arg1 & 8) == 0)
        return 0
    
    char eax_3 = (*arg3).b
    
    if ((eax_3 & 1) != 0 && (*arg1 & 1) == 0)
        return 0
    
    if ((eax_3 & 2) != 0 && (*arg1 & 2) == 0)
        return 0

return 1
