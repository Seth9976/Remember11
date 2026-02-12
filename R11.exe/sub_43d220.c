// 函数: sub_43d220
// 地址: 0x43d220
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t result = sub_43c280(arg2, arg3, arg4, arg5)
int32_t eax_1 = sub_43bdf0(&arg1[0x2b], arg2, arg6)
int32_t i = 0
*arg1 = arg2
arg1[1] = eax_1
arg1[0xa] = 0
arg1[2] = 0
arg1[3] = 0

if (eax_1 s> 0)
    void* eax_2 = &arg1[0xaf]
    void* edi_1 = &arg1[0xb]
    
    do
        *edi_1 = arg1[3]
        int32_t edx_2 = *(eax_2 - 0x204)
        
        if (arg1[0xa] s< edx_2)
            arg1[0xa] = edx_2
        
        int32_t edx_3 = *eax_2
        
        if (arg1[2] s< edx_3)
            arg1[2] = edx_3
        
        arg1[3] += *(eax_2 + 4)
        i += 1
        eax_2 += 0x21c
        edi_1 += 4
    while (i s< arg1[1])

sub_439b80(&arg1[0x110b])
return result
