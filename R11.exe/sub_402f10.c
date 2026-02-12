// 函数: sub_402f10
// 地址: 0x402f10
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t i = 0

if (data_4cd17c s<= 0)
    return 

int32_t eax = data_4cd178

do
    int32_t esi_1 = 0
    
    if (eax s> 0)
        int32_t eax_3
        int32_t edx_1
        edx_1:eax_3 = sx.q(arg2 << 0xe)
        int32_t eax_6
        int32_t edx_3
        edx_3:eax_6 = sx.q(i)
        int32_t ebx_2 = (eax_3 + (edx_1 & 0x7f)) s>> 7
        int32_t var_34_1 = ebx_2
        
        do
            int32_t eax_13
            int16_t edx_5
            edx_5:eax_13 = sx.q(sub_441360(ebx_2) * 0x30)
            int32_t eax_16
            int32_t edx_7
            edx_7:eax_16 = sx.q(esi_1)
            int32_t ecx_4 = ((eax_13 + zx.d(edx_5)) s>> 0x10) - ((eax_16 + (edx_7 & 0x3f)) s>> 6)
                + neg.d((eax_6 + (edx_3 & 0x1f)) s>> 5)
            
            if (ecx_4 s<= 0xd)
                if (ecx_4 s< 0)
                    ecx_4 = 0
                
                int32_t ebx_5 = i + ecx_4
                int32_t eax_25 = data_4cd178 * ecx_4 s/ 0x168
                int32_t edx_13 = eax_25 + esi_1
                int32_t eax_28 = data_4cd18c - ecx_4 + i
                int32_t eax_29 = data_4cd188 + esi_1
                int32_t ecx_8 = data_4cd18c + i
                int32_t var_18_1 = eax_29
                int32_t ecx_9 = *(arg1 + 4)
                int32_t var_10_1 = edx_13
                int32_t var_c_1 = ebx_5
                int32_t ebx_8 = data_4cd188 - eax_25 + esi_1
                int32_t var_20 = esi_1
                int32_t i_2 = i
                int32_t i_5 = i
                sub_443b90(&var_20, arg1 + 0x15, ecx_9)
                int32_t var_1c_1 = ecx_8
                int32_t var_c_2 = ecx_8
                int32_t var_14_1 = eax_28
                int32_t ecx_11 = *(arg1 + 4)
                int32_t var_10_2 = eax_29
                var_20 = esi_1
                int32_t var_18_2 = ebx_8
                sub_443b90(&var_20, arg1 + 0x15, ecx_11)
                int32_t var_18_3 = ebx_8
                var_20 = eax_29
                int32_t var_10_3 = eax_29
                int32_t var_14_2 = eax_28
                int32_t i_3 = i
                int32_t var_c_3 = ecx_8
                sub_443b90(&var_20, arg1 + 0x15, *(arg1 + 4))
                var_20 = esi_1
                int32_t i_4 = i
                int32_t var_18_4 = edx_13
                int32_t var_14_3 = ebx_5
                int32_t var_c_4 = ecx_8
                int32_t var_10_4 = esi_1
                sub_443b90(&var_20, arg1 + 0x15, *(arg1 + 4))
                ebx_2 = var_34_1
            else
                int32_t ecx_5 = data_4cd18c
                int32_t var_28_1 = data_4cd188
                int32_t edx_9 = *(arg1 + 4)
                int32_t var_30 = esi_1
                int32_t i_1 = i
                int32_t var_24_1 = ecx_5
                sub_4437c0(&var_30, arg1 + 0x15, edx_9)
            
            esi_1 += data_4cd188
            eax = data_4cd178
        while (esi_1 s< eax)
    
    i += data_4cd18c
while (i s< data_4cd17c)
