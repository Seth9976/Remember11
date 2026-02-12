// 函数: sub_414880
// 地址: 0x414880
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_4

if (arg1 == 0)
    eax_4 = sub_414720(arg2)
label_4148aa:
    
    if (eax_4 != 0)
        return 1
else if (arg1 != 1 && arg1 != 2)
    eax_4 = arg1
    goto label_4148aa
*(data_e7e648 + 0xbf0bc) = 1
*(data_e7e648 + 0xbf0be) = arg2
*(data_e7e648 + 0xbf0bd) = arg1.b
return 0
