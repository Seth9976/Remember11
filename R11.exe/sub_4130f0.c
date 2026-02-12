// 函数: sub_4130f0
// 地址: 0x4130f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(*(arg1 + 0x10))

if (eax == 0)
    *(data_e7e648 + 0x2082e) = 0
    *(arg1 + 0x10) = 1
else if (eax != 1)
    return 0

void* eax_5 = data_e7e648
*(eax_5 + 0x1f5d0) = zx.d(*(eax_5 + 0x2082a)) * *((zx.d(*(eax_5 + 0x2082e)) << 3) + &data_4b0f00)
void* eax_6 = data_e7e648
*(eax_6 + 0x1f5d4) = zx.d(*(eax_6 + 0x2082c)) * *((zx.d(*(eax_6 + 0x2082e)) << 3) + &data_4b0f04)
void* eax_7 = data_e7e648

if (*(eax_7 + 0x2082e) u< 8)
    *(eax_7 + 0x2082e) += 1
    return 0

*(eax_7 + 0x1f5d0) = 0
*(data_e7e648 + 0x1f5d4) = 0
sub_412f90(0, 0, 0)
return 0
