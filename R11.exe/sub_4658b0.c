// 函数: sub_4658b0
// 地址: 0x4658b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

GetCurrentDirectoryW(0x104, &data_c78dd0)
sub_48345d(arg1)
PWSTR result = arg1
int16_t i

do
    i = *result
    *(0xc78bc8 - arg1 + result) = i
    result = &result[1]
while (i != 0)
return result
