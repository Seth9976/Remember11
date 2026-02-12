// 函数: sub_40b480
// 地址: 0x40b480
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(arg1[4].w)
void* ecx = arg1[0x11]
void* edi = *(ecx + 8)

if (eax == 0)
    sub_414cf0(zx.d(*(edi + 2)))
    int32_t eax_6 = sub_414cf0(zx.d(*(edi + 2)))
    sub_419310(arg1[0x11] + 0x3c, eax_6)
    arg1[4].w = 1
label_40b4e7:
    
    if (sub_419330(arg1[0x11] + 0x3c, zx.d(*(edi + 1))) == 1)
        void* eax_9 = arg1[0x11]
        data_e7e648
        *(eax_9 + 8) += 4
        sub_40a8a0(arg1)
        return 0
else
    if (eax == 1)
        goto label_40b4e7
    
    if (eax == 2)
        *(ecx + 8) += 4
        sub_40a8a0(arg1)
        return 0

*(arg1 + 0xe) = 0
*(arg1 + 0xd) = 0
return 0
