// 函数: sub_44c930
// 地址: 0x44c930
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg1 == 0)
    sub_44c8f0(0x80070057)
    noreturn

if (arg2 s< 0)
    sub_44c8f0(0x80070057)
    noreturn

if (arg3 == 0)
    sub_44c8f0(0x80070057)
    noreturn

void* result = *arg1

if (result == arg3)
    if (arg2 s<= arg4)
        *arg1 = arg3
    else
        int32_t edx
        result = sub_4826be(result, edx, arg2, arg2, 2)
        *arg1 = result
else if (arg2 s<= arg4)
    result = sub_4813df(result)
    *arg1 = arg3
else
    result = sub_482918(result, arg2, 2)
    
    if (result == 0)
        sub_44c8f0(0x8007000e)
        noreturn
    
    *arg1 = result

if (*arg1 != 0)
    return result

sub_44c8f0(0x8007000e)
noreturn
