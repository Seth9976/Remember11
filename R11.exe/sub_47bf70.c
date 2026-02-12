// 函数: sub_47bf70
// 地址: 0x47bf70
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg1[5] != 0)
    bool cond:0_1 = arg1[0x1b] != 0
    arg1[0x1c] = 1
    
    if (not(cond:0_1))
        SetEvent(arg1[0x17])
        
        if (arg1[0x19] != 0)
            (*(*arg1 + 0x60))()

return 0
