// 函数: sub_48dd9d
// 地址: 0x48dd9d
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t var_8

if (arg1 == 0xffff)
    var_8 = 0
else if (arg1 u>= 0x100)
    void* var_18
    sub_481612(&var_18, arg3)
    void* eax_3 = var_18
    BOOL eax_4 = ___crtGetStringTypeA(&var_18, 1, &arg1, 1, &var_8, *(eax_3 + 4), *(eax_3 + 0x14))
    
    if (eax_4 == 0)
        var_8 &= eax_4
    
    char var_c
    void* var_10
    
    if (var_c != 0)
        *(var_10 + 0x70) &= 0xfffffffd
else
    uint32_t eax_1
    eax_1.w = (*data_4cc874)[zx.d(arg1)]
    eax_1.w &= arg2
    var_8 = zx.d(eax_1.w)

return zx.d(var_8.w) & zx.d(arg2)
