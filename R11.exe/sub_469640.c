// 函数: sub_469640
// 地址: 0x469640
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* var_4 = arg1
*(arg1 + 0x24) = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x10) = 0x201
*(arg1 + 0x14) = 6
*(arg1 + 0x18) = 0
*(arg1 + 0x1c) = 0
*(arg1 + 0x20) = 0
sub_4694f0(arg1, 0, 0)
void* eax = sub_481fef(4)

if (eax == 0)
    *(arg1 + 0x24) = 0
    return eax

*eax = sub_497652()
void* eax_2 = sub_497486()
sub_4973f8(&var_4, 0)
int32_t eax_3 = *(eax_2 + 4)

if (eax_3 u< 0xffffffff)
    *(eax_2 + 4) = eax_3 + 1

int32_t eax_5 = sub_497419(&var_4)
*(arg1 + 0x24) = eax
return eax_5
