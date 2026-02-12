// 函数: sub_4029b0
// 地址: 0x4029b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t i = 0

if (data_4cd178 s<= 0)
    return 

int32_t edi_2 = data_4cd180

do
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = sx.q(edi_2 * arg2)
    int32_t eax_6
    int32_t edx_3
    edx_3:eax_6 = sx.q(i)
    int32_t ecx_2 = (eax_3 + (edx_1 & 0x3f)) s>> 6
    int32_t eax_8 = (eax_6 + (edx_3 & 0x1f)) s>> 5
    int32_t ecx_3 = ecx_2 - eax_8
    
    if (ecx_2 - eax_8 s< 0)
        ecx_3 = 0
    
    if (ecx_3 s> edi_2)
        ecx_3 = edi_2
    
    int32_t eax_9 = data_4cd17c
    int32_t var_8_1 = ecx_3
    int32_t ecx_4 = *(arg1 + 4)
    int32_t i_1 = i
    int32_t var_c_1 = 0
    int32_t var_4_1 = eax_9
    sub_4437c0(&i_1, arg1 + 0x15, ecx_4)
    edi_2 = data_4cd180
    i += edi_2
while (i s< data_4cd178)
