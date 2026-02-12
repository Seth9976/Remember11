// 函数: sub_48db55
// 地址: 0x48db55
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char result = (arg1[3]).b

if ((result & 0x83) != 0 && (result & 8) != 0)
    sub_4813df(arg1[2])
    arg1[3] &= 0xfffffbf7
    result = 0
    *arg1 = 0
    arg1[2] = 0
    arg1[1] = 0

return result
