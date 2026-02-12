// 函数: sub_402900
// 地址: 0x402900
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebx = data_4cd178
int32_t esi = 0

if (ebx s<= 0)
    return 

int32_t edi_1 = data_4cd180

do
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = sx.q((0x80 - arg2) * edi_1)
    int32_t eax_7
    int32_t edx_3
    edx_3:eax_7 = sx.q(ebx - esi)
    int32_t ecx_2 = (eax_3 + (edx_1 & 0x3f)) s>> 6
    int32_t eax_9 = (eax_7 + (edx_3 & 0x1f)) s>> 5
    int32_t ecx_3 = ecx_2 - eax_9
    
    if (ecx_2 - eax_9 s< 0)
        ecx_3 = 0
    else if (ecx_3 s> 0x20)
        ecx_3 = 0x20
    
    int32_t var_4_1 = data_4cd17c
    int32_t var_8_1 = ecx_3
    int32_t ecx_4 = *(arg1 + 4)
    int32_t var_10 = edi_1 - ecx_3 + esi
    int32_t var_c_1 = 0
    sub_4437c0(&var_10, arg1 + 0x15, ecx_4)
    edi_1 = data_4cd180
    ebx = data_4cd178
    esi += edi_1
while (esi s< ebx)
