// 函数: sub_40e420
// 地址: 0x40e420
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx = *(arg1[0x11] + 8)
*(data_e7e648 + 0x1f5d8) = zx.w(*(ecx + 2))
char var_c
uint32_t var_8

if (*(data_e7e648 + 0x289c) != 0)
    var_8 = 0x80
    var_c = *(ecx + 2)
else
    uint32_t eax_2 = zx.d(*(ecx + 3))
    
    if (eax_2 != 0)
        if (eax_2 s>= 0x80)
            eax_2 = 0x80
        
        var_8 = eax_2
        var_c = *(ecx + 2)
    else
        var_8 = 1
        var_c = *(ecx + 2)

sub_4050d0(var_c, var_8)
void* eax_5 = arg1[0x11]
*(eax_5 + 8) += 4
sub_40a8a0(arg1)
return 0
