// 函数: sub_498156
// 地址: 0x498156
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* var_8 = arg1
int32_t* var_c = arg1
var_c = arg4
int32_t* result

if (arg1[0x13] == 0)
label_4981fe:
    result = arg2
    *result = 0xffffffff
    result[2] = 0
    result[3] = 0
    result[4] = 0
else
    if (sub_497ddb(arg1) == 0)
        goto label_4981fe
    
    if (sub_4991d4(arg1[0x13], &var_c) != 0)
        goto label_4981fe
    
    if (arg3 != 0 && sub_49914f(arg1[0x13], arg3, FILE_CURRENT) != 0)
        goto label_4981fe
    
    if (sub_49905d(arg1[0x13], &var_c) != 0)
        goto label_4981fe
    
    arg1[0x11] = arg6
    
    if (*arg1[8] == &arg1[0x10])
        *arg1[4] = &arg1[0x10]
        *arg1[8] = arg1 + 0x41
        *arg1[0xc] = 0
    
    result = arg2
    result[2] = var_c
    result[3] = arg5
    int32_t ecx_9 = arg1[0x11]
    *result = 0
    result[4] = ecx_9

return result
