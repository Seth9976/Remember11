// 函数: sub_41d820
// 地址: 0x41d820
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx_1 = data_e7e648 + arg1 * 0xa
int32_t eax_1 = sx.d(*(ecx_1 + 0x20979))

if (eax_1 != 0)
    if (eax_1 != 1)
        return 1
    
    if ((zx.d(*(ecx_1 + 0x20974)) & 0xfff)[data_2b55f00] == 0
            && sub_409160(*((arg1 << 2) + &data_4b17e0)) != 0)
        return 1

return 0
