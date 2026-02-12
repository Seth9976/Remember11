// 函数: sub_465a20
// 地址: 0x465a20
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg3 == 0)
    *(arg1 + 0x48) = arg2
else
    if (arg3 == 1)
        *(arg1 + 0x48) += arg2
        return 0
    
    if (arg3 == 2)
        *(arg1 + 0x48) = *(arg1 + 0x44) + arg2

return 0
