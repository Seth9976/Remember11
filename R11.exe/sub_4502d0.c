// 函数: sub_4502d0
// 地址: 0x4502d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

bool cond:0 = (&data_c77aa0)[arg1] != 0
data_c77a9c = 4

if (not(cond:0) && data_4ca19f == 1)
    sub_464790(".\libmc.cpp", 0x138)
    data_4ca19f = 0

(*(*(&data_c77aa0)[arg1] + 0x2c))(arg2, 0)

if (arg3 != 0 && data_4ca19e == 1)
    sub_464790(".\libmc.cpp", 0x13c)
    data_4ca19e = 0

(*(*(&data_c77aa0)[arg1] + 0x2c))(arg2, 0)
data_c77ef0 = arg2
return 0
