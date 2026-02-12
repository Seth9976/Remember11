// 函数: sub_43f5d0
// 地址: 0x43f5d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_4 = ecx
void* eax = &data_c7e620

if (arg2 s<= 0)
    return 

long double x87_r6_1 = fconvert.t(16f)
int32_t edi_1 = 0
int32_t i

do
    if (arg1 s> 0)
        long double x87_r5_1 = float.t(edi_1 << 4)
        int32_t ecx_4 = 0
        int32_t j_1 = arg1
        int32_t j
        
        do
            var_4 = ecx_4 << 4
            eax += 0x10
            ecx_4 += arg3
            j = j_1
            j_1 -= 1
            *(eax - 0x10) = fconvert.s(float.t(var_4))
            *(eax - 0xc) = fconvert.s(x87_r5_1)
            *(eax - 8) = fconvert.s(float.t(0))
            *(eax - 4) = fconvert.s(x87_r6_1)
        while (j != 1)
        x87_r6_1 = x87_r5_1
    
    edi_1 += arg4
    i = arg2
    arg2 -= 1
while (i != 1)
