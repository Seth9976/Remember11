// 函数: sub_480000
// 地址: 0x480000
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

DeleteCriticalSection(arg1 + 0x1c)
void* ecx

if (arg1 == 0)
    ecx = nullptr
else
    ecx = arg1 + 4

sub_47fd00(ecx)

if ((arg2 & 1) != 0)
    j_sub_4813df(arg1)

return arg1
