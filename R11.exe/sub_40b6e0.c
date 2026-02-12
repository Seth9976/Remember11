// 函数: sub_40b6e0
// 地址: 0x40b6e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_1 = sx.d(arg1[4].w)

if (eax_1 == 0)
    uint32_t eax_5 = zx.d(*(*(arg1[0x11] + 8) + 1))
    
    switch (eax_5)
        case 0, 1
            sub_41c690(eax_5.b)
        case 2
            if (sub_41c6c0() == 0)
                sub_41c690(2)
        case 3
            if (sub_41c6c0() == 1)
                sub_41c690(3)
    
    arg1[4].w = 1
    goto label_40b741

if (eax_1 == 1)
label_40b741:
    
    if (sub_41b650() == 0)
        void* eax_9 = arg1[0x11]
        *(eax_9 + 8) += 2
        sub_40a8a0(arg1)
        return 0

*(arg1 + 0xe) = 0
*(arg1 + 0xd) = 0
return 0
