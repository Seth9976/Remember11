// 函数: sub_497859
// 地址: 0x497859
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t* esi = arg2
uint32_t var_10
int32_t eax_2

if (esi != 0)
    var_10 = *esi
    eax_2 = esi[1]
else
    var_10 = *(sub_48ff3e() + 8)
    eax_2 = sub_48ff18()

if (var_10 == 0)
    if (arg1 - 0x61 u> 0x19)
        return arg1
    
    return arg1 - 0x20

if (arg1 u>= 0x100)
label_4978d0:
    char var_c_2
    int32_t eax_9
    
    if (esi != 0)
        var_c_2 = (arg1 s>> 8).b
        eax_9 = zx.d(*(esi[2] + (zx.d(var_c_2) << 1))) u>> 0xf & 1
    else
    label_4978d5:
        var_c_2 = (arg1 s>> 8).b
        eax_9 = zx.d(*(sub_48efe9() + (zx.d(var_c_2) << 1))) & 0x8000
    
    PSTR eax_14
    
    if (eax_9 == 0)
        arg2.b = arg1.b
        arg2:1.b = 0
        eax_14 = 1
    else
        eax_9.b = var_c_2
        arg2.b = eax_9.b
        arg2:1.b = arg1.b
        arg2:2.b = 0
        eax_14 = 2
    
    char var_8
    int32_t eax_15 = sub_4894e3(nullptr, var_10, 0x200, &arg2, eax_14, &var_8, 3, eax_2, 1)
    
    if (eax_15 != 0)
        if (eax_15 == 1)
            return zx.d(var_8)
        
        int32_t eax_16
        eax_16:1.b = var_8
        char var_7
        return eax_16 | zx.d(var_7)
else if (esi == 0)
    if (sub_48e664(arg1) != 0)
        goto label_4978d5
else if ((*(esi[2] + (arg1 << 1)) & 2) != 0)
    goto label_4978d0

return arg1
