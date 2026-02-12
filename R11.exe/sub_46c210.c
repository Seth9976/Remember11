// 函数: sub_46c210
// 地址: 0x46c210
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax = arg1[1]
*arg1 = &CWaveFileADX::`vftable'{for `CWaveFile'}

if (eax != 0)
    j_sub_4813df(eax)
    arg1[1] = 0

*arg1 = &IWaveFile::`vftable'

if ((arg2 & 1) != 0)
    j_sub_4813df(arg1)

return arg1
