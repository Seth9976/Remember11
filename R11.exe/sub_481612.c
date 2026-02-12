// 函数: sub_481612
// 地址: 0x481612
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

arg1[3].b = 0

if (arg2 != 0)
    *arg1 = *arg2
    arg1[1] = arg2[1]
else
    void* eax = __getptd()
    arg1[2] = eax
    *arg1 = *(eax + 0x6c)
    arg1[1] = *(eax + 0x68)
    
    if (*arg1 != data_4cc738 && (*(eax + 0x70) & data_4cc654) == 0)
        *arg1 = sub_487e23()
    
    if (arg1[1] != data_4cc558 && (*(arg1[2] + 0x70) & data_4cc654) == 0)
        arg1[1] = sub_4876c0()
    
    void* eax_5 = arg1[2]
    
    if ((*(eax_5 + 0x70) & 2) == 0)
        *(eax_5 + 0x70) |= 2
        arg1[3].b = 1

return arg1
