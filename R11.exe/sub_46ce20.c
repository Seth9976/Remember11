// 函数: sub_46ce20
// 地址: 0x46ce20
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (sub_46cd00() != 0)
    jump(data_c79d74)

if ((arg2 & 3) == 0)
    if (arg1[2] s<= 0 || arg1[3] s<= 0)
        return 0
    
    int32_t eax = GetSystemMetrics(SM_CXSCREEN)
    
    if (*arg1 s>= eax)
        return 0
    
    int32_t eax_1 = GetSystemMetrics(SM_CYSCREEN)
    
    if (arg1[1] s>= eax_1)
        return 0

return 0x12340042
