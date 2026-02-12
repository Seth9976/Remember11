// 函数: sub_45f130
// 地址: 0x45f130
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (data_c78676 == 0)
    sub_4709d0(1, 1)

data_c78676 = 1

if (sub_46ec30() == 0)
    ShowWindow(data_c788a8, SW_HIDE)
    bool cond:0_1 = data_c78676 != 1
    data_c788ac = 0
    
    if (not(cond:0_1))
        sub_4709d0(0, 0)
    
    data_c78676 = 0

sub_4753c0()

if (data_c78676 == 1)
    sub_4709d0(0, 0)

data_c78676 = 0
return 0
