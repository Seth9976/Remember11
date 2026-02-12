// 函数: sub_49779e
// 地址: 0x49779e
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_8 = arg3
sub_4973f8(&var_8, 2)
*(arg4 + 4) = 1

do
    int32_t ecx_2 = *((*(arg4 + 4) << 2) + &data_c7b584)
    
    if (ecx_2 == 0)
        break
    
    if (ecx_2 == arg4)
        break
    
    *(arg4 + 4) += 1
while (*(arg4 + 4) u< 8)

*((*(arg4 + 4) << 2) + &data_c7b584) = arg4
void* eax_1 = *(arg4 + 4)
*(eax_1 + 0xc7b5ac) += 1
return sub_497419(&var_8)
