// 函数: sub_4208a0
// 地址: 0x4208a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(*(arg1 + 0x10))

if (eax == 0)
    *(data_e7e648 + 0x2092e) = 0
    *(arg1 + 0x10) = 1
else if (eax != 1)
    return 0

int32_t var_4

if (data_2b5cf14 != 0)
    var_4 = 0
else
    var_4 = 0xff

sub_406780(0, var_4)
void* eax_5 = data_e7e648

if (*(eax_5 + 0x2092e) u< 0x18)
    *(eax_5 + 0x2092e) += 1
    return 0

sub_406780(0, 0)
sub_420760(0, 0, 0)
return 0
