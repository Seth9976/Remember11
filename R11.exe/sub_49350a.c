// 函数: sub_49350a
// 地址: 0x49350a
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg1 == 0xfffffffe)
    *___doserrno() = 0
    *__errno() = 9
    return 0xffffffff

if (arg1 s>= 0 && arg1 u< data_2b6a888)
    int32_t* eax_5 = (arg1 & 0x1f) * 0x38 + (&data_2b6a8a0)[arg1 s>> 5]
    
    if ((eax_5[1].b & 1) != 0)
        return *eax_5

*___doserrno() = 0
*__errno() = 9
sub_481d1b(0, 0, 0, 0, 0)
return 0xffffffff
