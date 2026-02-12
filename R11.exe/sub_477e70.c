// 函数: sub_477e70
// 地址: 0x477e70
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* var_4 = arg1
int32_t i = 0
int32_t i_1 = 0

if (arg1[5] s> 0)
    do
        int32_t ebp_1 = *(arg1[4] + (i << 2))
        int32_t* eax = *arg1
        
        if ((*(*eax + 0x28))(eax, *arg2, arg2[1], arg2[2], 2, 1, ebp_1) s>= 0)
            int32_t* eax_2 = *arg1
            
            if ((*(*eax_2 + 0x30))(eax_2, *arg2, arg2[1], arg2[2], arg2[3], ebp_1) s>= 0
                    && sub_477bd0(&arg2[5], arg2[6] + 1) s>= 0)
                *(arg2[5] + (arg2[6] << 2)) = ebp_1
                arg2[6] += 1
        
        i = i_1 + 1
        i_1 = i
    while (i s< arg1[5])

return i
