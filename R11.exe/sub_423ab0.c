// 函数: sub_423ab0
// 地址: 0x423ab0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (sub_4015f0(*(data_4b1de0 + 8)) != 1)
    sub_4015a0(*(data_4b1de0 + 8), 1)
    int32_t edi_1 = 0
    
    for (int32_t i = 0; i s< 0x1e; i += 1)
        int32_t eax_3 = sub_4015f0(i)
        
        if (eax_3 == 1)
            edi_1 += eax_3
    
    if (edi_1 s> 0x1d)
        sub_4015a0(*(data_4b1de0 + 8), 0)
        return 0
else
    sub_4015a0(*(data_4b1de0 + 8), 0)

return 1
