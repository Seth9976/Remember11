// 函数: sub_43c100
// 地址: 0x43c100
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t i = arg1[0x86]
void* ebx = *arg1
int32_t i_2 = i
int32_t i_3 = i
int32_t esi_1 = zx.d(*(ebx + 6)) + arg1[2]
int32_t i_1 = 0

if (arg1[3] s> 0)
    do
        bool cond:1_1 = arg1[0x86] != 0x1000
        int32_t edx_1 = *(arg2 + 4)
        int32_t var_18 = zx.d(*(ebx + 8)) * i_1 + *arg2
        int32_t var_14_1 = edx_1
        
        if (cond:1_1)
            sub_43bab0(sx.d(*(ebx + 4)) << 0x10 | zx.d(esi_1.w), &var_18, arg3, arg4)
        else
            sub_43ba00(sx.d(*(ebx + 4)) << 0x10 | zx.d(esi_1.w), &var_18, arg3, arg4)
        
        i = i_1 + 1
        esi_1 += 1
        i_1 = i
    while (i s< arg1[3])

return i
