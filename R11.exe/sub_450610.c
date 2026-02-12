// 函数: sub_450610
// 地址: 0x450610
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_20c
int32_t eax_1 = __security_cookie ^ &var_20c
data_c77a9c = 0xb

if (arg1 != 0 || arg2 != 0)
    data_c77ef0 = 0xfffffff5
    sub_480cd2(eax_1 ^ &var_20c)
    return 0

sub_4503d0(&var_20c, arg3)
void* eax_3 = sub_481fef(0x30)
void* ecx

if (eax_3 == 0)
    ecx = nullptr
else
    *eax_3 = &CFile::`vftable'
    *(eax_3 + 0x2c) = 0
    *(eax_3 + 4) = 0
    *(eax_3 + 8) = 0
    ecx = eax_3

(&data_c77aa0)[data_c77a98] = ecx
int32_t eax_6
int32_t var_218_1

if (arg4 != 0x200)
    if (arg4 != 1)
        var_218_1 = 2
        goto label_4506e4
    
    bool cond:2_1 = sub_465a90(ecx, &var_20c, 0, 0) == 0
    eax_6 = data_c77a98
    
    if (cond:2_1)
        data_c77ef0 = eax_6
    else
        int32_t* ecx_1 = (&data_c77aa0)[eax_6]
        data_c77ef0 = 0xfffffffc
        
        if (ecx_1 != 0)
            (**ecx_1)(1)
            eax_6 = data_c77a98
            (&data_c77aa0)[eax_6] = 0
else
    var_218_1 = 1
label_4506e4:
    bool cond:3_1 = sub_465a90(ecx, &var_20c, var_218_1, 0) != 0
    eax_6 = data_c77a98
    
    if (cond:3_1)
        int32_t* ecx_2 = (&data_c77aa0)[eax_6]
        data_c77ef0 = 0xfffffffb
        
        if (ecx_2 != 0)
            (**ecx_2)(1)
            eax_6 = data_c77a98
            (&data_c77aa0)[eax_6] = 0
    else
        data_c77ef0 = eax_6
int32_t eax_11 = (eax_6 + 1) & 0x8000000f

if (eax_11 s< 0)
    eax_11 = ((eax_11 - 1) | 0xfffffff0) + 1

data_c77a98 = eax_11
sub_480cd2(eax_1 ^ &var_20c)
return 0
