// 函数: sub_43bf80
// 地址: 0x43bf80
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ebx = *arg1
void* var_20 = &arg1[4]
int32_t i = arg1[0x86]
int32_t i_2 = i
int32_t i_3 = i
int32_t edi_1 = zx.d(*(ebx + 6)) + arg1[2]
int32_t i_1 = 0

if (arg1[3] s> 0)
    do
        bool cond:1_1 = arg1[0x86] != 0x1000
        int32_t eax_2 = arg2[1]
        int32_t var_18 = *arg2 + *var_20
        int32_t var_14_1 = eax_2
        
        if (cond:1_1)
            sub_43b470(sx.d(*(ebx + 4)) << 0x10 | zx.d(edi_1.w), &var_18, arg3, arg4)
        else
            sub_43b3d0(sx.d(*(ebx + 4)) << 0x10 | zx.d(edi_1.w), &var_18, arg3, arg4)
        
        var_20 += 4
        i = i_1 + 1
        edi_1 += 1
        i_1 = i
    while (i s< arg1[3])

return i
