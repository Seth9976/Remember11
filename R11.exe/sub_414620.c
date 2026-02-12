// 函数: sub_414620
// 地址: 0x414620
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(*(arg1 + 0x10))

if (eax == 0)
    *(data_e7e648 + 0x2082e) = 0
    *(arg1 + 0x10) = 1
else if (eax != 1)
    return 0

void* eax_5 = data_e7e648

if (*(eax_5 + 0x2082a) != 0)
    int32_t eax_7 = zx.d(*(eax_5 + 0x2082e)) & 0x8000007f
    
    if (eax_7 s< 0)
        eax_7 = ((eax_7 - 1) | 0xffffff80) + 1
    
    int32_t eax_11
    char edx_1
    edx_1:eax_11 = sx.q(eax_7 << 0x10)
    int32_t eax_16
    int16_t edx_3
    edx_3:eax_16 = sx.q(sub_441360((eax_11 + zx.d(edx_1)) s>> 8) << 6)
    data_a59b37 = ((eax_16 + zx.d(edx_3)) s>> 0x10).b + 0x20
else
    data_a59b37 = 0x80

sub_4437c0(0x4b10c0, 0xa59b34, 3)
void* eax_19 = data_e7e648
*(eax_19 + 0x2082e) += *(eax_19 + 0x2082a)
return 0
