// 函数: sub_44b870
// 地址: 0x44b870
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_8
void* esi_1

if ((arg2 & 1) == 0)
    esi_1 = arg1 + 0x50
    var_8 = (*(arg1 + 0x50) & 0x7fff) + 1
else
    esi_1 = arg1 + 0x1c0
    var_8 = (*(arg1 + 0x1c0) & 0x7fff) + 1

sub_44b670(0xc5f2a8, var_8)
sub_44b670(0xc5f298, esi_1)
sub_44b670(0xc5f288, 0x101)
return 0
