// 函数: sub_46ce70
// 地址: 0x46ce70
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (sub_46cd00() != 0)
    return data_c79d70(arg1, arg2)

if ((arg2.b & 3) != 0)
    return 0x12340042

var_10
BOOL eax_5
WINDOWPLACEMENT lpwndpl

if (IsIconic(arg1) == 0)
    eax_5 = GetWindowRect(arg1, &var_10)
else
    eax_5 = GetWindowPlacement(arg1, &lpwndpl)

if (eax_5 == 0)
    return 0

return sub_46ce20(&var_10, arg2)
