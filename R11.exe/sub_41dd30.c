// 函数: sub_41dd30
// 地址: 0x41dd30
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(*(arg1 + 0x10))

if (eax == 0)
    *(arg1 + 0x10) = 1
else if (eax != 1)
    return 0

void* eax_6 = data_e7e648

switch (sx.d(*(eax_6 + 0x20996)))
    case 0
        *(eax_6 + 0x28dc) = 0
    case 1
        if (*(eax_6 + 0x28dc) == 0xffffffff)
            *(data_e7e648 + 0x28dc) = sub_4091c0(0)
            eax_6 = data_e7e648
        
        if (*(eax_6 + 0x289c) == 1)
            sub_4090d0(0)
            *(data_e7e648 + 0x20996) = 0
    case 2
        if (*(eax_6 + 0x289c) != 0)
            *(eax_6 + 0x20996) = 0
            return 0
        
        int32_t var_4 = 1
        sub_409100(0, zx.d(*(eax_6 + 0x20992)))
        sub_409010(0, zx.w(*(data_e7e648 + 0x20994)))
        *(data_e7e648 + 0x20996) = 1
    case 3
        sub_4090d0(0)
        *(data_e7e648 + 0x20996) = 0

return 0
