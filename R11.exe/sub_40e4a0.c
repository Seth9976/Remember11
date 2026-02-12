// 函数: sub_40e4a0
// 地址: 0x40e4a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (sub_405130() == 1)
    void* eax = arg1[0x11]
    *(eax + 8) += 2
    sub_40a8a0(arg1)
    return 0

void* eax_2 = data_e7e648

if (*(eax_2 + 0x289c) == 1)
    char var_8_1
    
    switch (zx.d(*(eax_2 + 0x1f5d8)) - 1)
        case 0, 2
            int32_t var_4_2 = 0x80
            var_8_1 = 1
        case 3, 5
            int32_t var_4_3 = 0x80
            var_8_1 = 4
        case 7, 9, 0xb, 0xd, 0xf, 0x14
            int32_t var_4_4 = 0x80
            var_8_1 = 0x13
        default
            int32_t var_4_5 = 0x80
            var_8_1 = 0
    
    sub_4050d0(var_8_1, 0x80)

*(arg1 + 0xe) = 0
*(arg1 + 0xd) = 0
return 0
