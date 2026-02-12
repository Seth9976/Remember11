// 函数: sub_40f420
// 地址: 0x40f420
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

switch (sx.d(arg1[4].w))
    case 0
        if (sub_41c6c0() == 1)
            sub_41c690(3)
        
        arg1[4].w = 1
        goto label_40f44f
    case 1
    label_40f44f:
        int32_t eax_2 = sub_41b650()
        
        if (eax_2 == 0)
            if (data_2b5cf15 != eax_2.b)
                goto label_40f4a0
            
            sub_420550()
            sub_419310(arg1[0x11] + 0x3c, 0x78)
            arg1[4].w = 2
    case 2
        if (sub_419330(arg1[0x11] + 0x3c, 0) == 1)
        label_40f4a0:
            arg1[4].w = 3
            *(arg1 + 0xe) = 0
            *(arg1 + 0xd) = 0
            return 0
    case 3
        void* eax_8 = arg1[0x11]
        *(eax_8 + 8) += 2
        sub_40a8a0(arg1)
        return 0

*(arg1 + 0xe) = 0
*(arg1 + 0xd) = 0
return 0
