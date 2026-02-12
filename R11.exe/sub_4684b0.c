// 函数: sub_4684b0
// 地址: 0x4684b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* var_4 = arg1
void* esi = **(arg1 + 0x24)
int32_t* result = arg2
*result = esi
sub_4973f8(&arg2, 0)
int32_t eax_1 = *(esi + 4)

if (eax_1 u< 0xffffffff)
    *(esi + 4) = eax_1 + 1

sub_497419(&arg2)
return result
