// 函数: sub_498218
// 地址: 0x498218
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* result = arg1
bool cond:1_1

if (arg1[0x13] != 0)
    if (sub_497ddb(arg1) == 0)
        result = nullptr
    
    cond:1_1 = sub_483a9a(arg1[0x13]) == 0

if (arg1[0x13] == 0 || not(cond:1_1))
    result = nullptr

arg1[0x12].b = 0
*(arg1 + 0x41) = 0
sub_468610(arg1)
arg1[0x13] = 0
arg1[0x11] = data_c7b5b8
arg1[0xf] = 0
return result
