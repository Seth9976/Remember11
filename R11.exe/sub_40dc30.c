// 函数: sub_40dc30
// 地址: 0x40dc30
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(arg1[4].w)

if (eax == 0)
    void* eax_4 = data_e7e648
    int32_t var_8_1 = *(eax_4 + 0xbf0c0)
    sub_41d620((*(eax_4 + 0xbf0be)).b)
    void* eax_5 = data_e7e648
    sub_409ac0(eax_5 + 0x20958, *(eax_5 + 0xbf0c0), 0x2f0000)
    arg1[4].w = 1
label_40dc9c:
    
    if (sub_408f90(data_e7e648 + 0x20958) == 1)
        void* eax_8 = arg1[0x11]
        *(eax_8 + 8) += 2
        sub_40a8a0(arg1)
        return 0
else if (eax == 1)
    goto label_40dc9c

*(arg1 + 0xe) = 0
*(arg1 + 0xd) = 0
return 0
