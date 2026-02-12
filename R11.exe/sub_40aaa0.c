// 函数: sub_40aaa0
// 地址: 0x40aaa0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(*(arg1 + 0x10))

if (eax == 0)
    sub_40a8e0()
    sub_4050d0(2, 0xa)
    *(arg1 + 0x10) = 1
label_40aadf:
    
    if (sub_405130() == 1)
        sub_446b50(*(data_e7e648 + 0x30b8), 0)
        *(arg1 + 0x10) = 2
else
    if (eax == 1)
        goto label_40aadf
    
    if (eax == 2)
        void* eax_4 = data_e7e648
        *(eax_4 + 0x13220) += 1

return 0
