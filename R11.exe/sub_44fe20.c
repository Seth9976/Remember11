// 函数: sub_44fe20
// 地址: 0x44fe20
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

HANDLE hFindFile = *arg1

if (hFindFile != 0)
    FindClose(hFindFile)

*arg1 = 0
sub_480cf0(&arg1[2], 0, 0x250)
return 0
