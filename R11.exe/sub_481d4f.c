// 函数: sub_481d4f
// 地址: 0x481d4f
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg4 != 0)
    if (arg1 == 0)
    label_481d6d:
        *__errno() = 0x16
        sub_481d1b(0, 0, 0, 0, 0)
        return 0x16
    
    if (arg3 == 0 || arg2 u< arg4)
        sub_480cf0(arg1, 0, arg2)
        
        if (arg3 == 0)
            goto label_481d6d
        
        if (arg2 u>= arg4)
            return 0x16
        
        *__errno() = 0x22
        sub_481d1b(0, 0, 0, 0, 0)
        return 0x22
    
    sub_480ea0(arg1, arg3, arg4)

return 0
