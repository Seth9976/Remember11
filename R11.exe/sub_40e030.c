// 函数: sub_40e030
// 地址: 0x40e030
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ebp = *(arg1[0x11] + 8)
int32_t edi = 0
int32_t eax_1 = sub_41dd00()

if (eax_1 == 0)
    edi = eax_1 + 1

if (*(ebp + 1) != 1)
label_40e066:
    
    if (edi != 1)
        *(arg1 + 0xe) = 0
        *(arg1 + 0xd) = 0
        return 0
else if ((data_2b53608 & 0x2100) == 0 && sub_45c4e0() == 0)
    goto label_40e066

void* eax_3 = arg1[0x11]
*(eax_3 + 8) += 2
sub_40a8a0(arg1)
return 0
