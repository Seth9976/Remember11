// 函数: sub_478080
// 地址: 0x478080
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t i = 0

if (*(arg1 + 0x2c) s<= 0)
    return 

do
    int32_t edi_1 = *(*(arg1 + 0x28) + (i << 2))
    
    if (*(arg3 + 0x10) == 0)
    label_4780af:
        
        if ((edi_1 == 0 || (*(arg2 + 0x1c) & edi_1) != 0)
                && sub_477bd0(arg3 + 0x38, *(arg3 + 0x3c) + 1) s>= 0)
            *(*(arg3 + 0x38) + (*(arg3 + 0x3c) << 2)) = edi_1
            *(arg3 + 0x3c) += 1
    else if (edi_1 != 2 && edi_1 != 4 && edi_1 != 8)
        goto label_4780af
    
    i += 1
while (i s< *(arg1 + 0x2c))
