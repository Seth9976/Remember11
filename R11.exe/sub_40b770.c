// 函数: sub_40b770
// 地址: 0x40b770
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* edi = *(arg1[0x11] + 8)
int32_t eax_1 = sx.d(arg1[4].w)

if (eax_1 == 0)
    if (sub_41c6c0() == 1)
        sub_41c690(3)
    
    arg1[4].w = 1
    goto label_40b7b3

if (eax_1 == 1)
label_40b7b3:
    
    if (sub_41b650() == 0)
        sub_41c6e0(*(edi + 1))
        sub_41c700(1)
        void* eax_7 = arg1[0x11]
        *(eax_7 + 8) += 2
        sub_40a8a0(arg1)
        return 0

*(arg1 + 0xe) = 0
*(arg1 + 0xd) = 0
return 0
