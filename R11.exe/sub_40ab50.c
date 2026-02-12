// 函数: sub_40ab50
// 地址: 0x40ab50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* edi = *(*(arg1 + 0x44) + 8)

if (*(arg1 + 0x10) != 0)
    *(arg1 + 0xe) = 0
    *(arg1 + 0xd) = 0
    return 0

sub_415460()
uint32_t eax_2 = zx.d(*(edi + 1))

if (eax_2 == 1)
    *(data_e7e648 + 0x2899) = 3
label_40abab:
    *(data_e7e648 + 0x28c0) = 2
    void* edx_1
    edx_1.b = *(edi + 1)
    *(data_e7e648 + 0x2898) = edx_1.b
else if (eax_2 == 2)
    *(data_e7e648 + 0x2899) = 4
    goto label_40abab

void* eax_7 = *(arg1 + 0x44)
*(arg1 + 0xd) = 0
*(eax_7 + 8) += 2
return 1
