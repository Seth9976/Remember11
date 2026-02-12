// 函数: sub_478a50
// 地址: 0x478a50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_c = 1
int32_t var_8 = 3
int32_t var_4 = 2

for (int32_t i = 0; i u< 3; i += 1)
    void* eax_1 = sub_481fef(0x144)
    
    if (eax_1 == 0)
        return 0x8007000e
    
    int32_t eax_2 = (&var_c)[i]
    *(eax_1 + 0x138) = 0
    *(eax_1 + 0x13c) = 0
    *(eax_1 + 0x140) = 0
    *(eax_1 + 4) = eax_2
    int32_t* ecx_1 = *arg1
    int32_t eax_4 = (*(*ecx_1 + 0x38))(ecx_1, *arg2, eax_2, eax_1 + 8)
    int32_t eax_5
    
    if (eax_4 s>= 0)
        eax_5 = sub_478720(arg1, arg2, eax_1, arg3)
    
    if (eax_4 s< 0 || eax_5 s< 0 || *(eax_1 + 0x13c) s<= 0)
        sub_478650(eax_1)
        j_sub_4813df(eax_1)
    else if (sub_477bd0(&arg2[0x197], arg2[0x198] + 1) s>= 0)
        *(arg2[0x197] + (arg2[0x198] << 2)) = eax_1
        arg2[0x198] += 1

return 0
