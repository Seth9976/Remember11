// 函数: sub_49809e
// 地址: 0x49809e
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t var_c = arg1

if (**(arg1 + 0x20) == arg1 + 0x40 && arg4 == FILE_CURRENT && *(arg1 + 0x3c) == 0)
    arg3 -= 1

int32_t* result

if (*(arg1 + 0x4c) == 0)
label_49813b:
    result = arg2
    *result = 0xffffffff
    result[2] = 0
    result[3] = 0
    result[4] = 0
else
    if (sub_497ddb(arg1) == 0)
        goto label_49813b
    
    if ((arg3 != 0 || arg4 != FILE_CURRENT) && sub_49914f(*(arg1 + 0x4c), arg3, arg4) != 0)
        goto label_49813b
    
    if (sub_49905d(*(arg1 + 0x4c), &var_c) != 0)
        goto label_49813b
    
    if (**(arg1 + 0x20) == arg1 + 0x40)
        **(arg1 + 0x10) = arg1 + 0x40
        **(arg1 + 0x20) = arg1 + 0x41
        **(arg1 + 0x30) = 0
    
    result = arg2
    result[2] = var_c
    result[3] = arg1
    int32_t ecx_8 = *(arg1 + 0x44)
    *result = 0
    result[4] = ecx_8

return result
