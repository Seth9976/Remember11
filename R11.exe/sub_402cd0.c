// 函数: sub_402cd0
// 地址: 0x402cd0
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
        edx_1:eax_3 = sx.q((0x80 - arg2) << 0xe)
        int32_t eax_5 = (eax_3 + (edx_1 & 0x7f)) s>> 7
        int32_t var_38_1 = eax_5
        
        while (true)
            int32_t eax_9
            int16_t edx_3
            edx_3:eax_9 = sx.q(sub_441360(eax_5) * 0x30)
            int32_t eax_13
            int32_t edx_5
            edx_5:eax_13 = sx.q(data_4cd178 - esi_1)
            int32_t eax_17
            int32_t edx_7
            edx_7:eax_17 = sx.q(data_4cd17c - i)
            int32_t ecx_3 = ((eax_9 + zx.d(edx_3)) s>> 0x10)
                + neg.d((eax_17 + (edx_7 & 0x1f)) s>> 5) - ((eax_13 + (edx_5 & 0x3f)) s>> 6)
            
            if (ecx_3 s<= 0xd)
                if (ecx_3 s< 0)
                    ecx_3 = 0
                
                int32_t ebx_4 = i + ecx_3
                int32_t eax_30 = data_4cd178 * ecx_3 s/ 0x168
                int32_t edx_13 = eax_30 + esi_1
                int32_t eax_33 = data_4cd18c - ecx_3 + i
                int32_t eax_34 = data_4cd188 + esi_1
                int32_t ecx_7 = data_4cd18c + i
                int32_t var_18_1 = eax_34
                int32_t ecx_8 = *(arg1 + 4)
                int32_t var_10_1 = edx_13
                int32_t var_c_1 = ebx_4
                int32_t ebx_7 = data_4cd188 - eax_30 + esi_1
                int32_t var_20 = esi_1
                int32_t i_2 = i
                int32_t i_5 = i
                sub_443b90(&var_20, arg1 + 0x15, ecx_8)
                int32_t var_1c_1 = ecx_7
                int32_t var_c_2 = ecx_7
                int32_t var_14_1 = eax_33
                int32_t ecx_10 = *(arg1 + 4)
                int32_t var_10_2 = eax_34
                var_20 = esi_1
                int32_t var_18_2 = ebx_7
                sub_443b90(&var_20, arg1 + 0x15, ecx_10)
                int32_t var_18_3 = ebx_7
                var_20 = eax_34
                int32_t var_10_3 = eax_34
                int32_t var_14_2 = eax_33
                int32_t i_3 = i
                int32_t var_c_3 = ecx_7
                sub_443b90(&var_20, arg1 + 0x15, *(arg1 + 4))
                var_20 = esi_1
                int32_t i_4 = i
                int32_t var_18_4 = edx_13
                int32_t var_14_3 = ebx_4
                int32_t var_c_4 = ecx_7
                int32_t var_10_4 = esi_1
                sub_443b90(&var_20, arg1 + 0x15, *(arg1 + 4))
            else
                int32_t ecx_4 = data_4cd18c
                int32_t var_28_1 = data_4cd188
                int32_t edx_9 = *(arg1 + 4)
                int32_t var_30 = esi_1
                int32_t i_1 = i
                int32_t var_24_1 = ecx_4
                sub_4437c0(&var_30, arg1 + 0x15, edx_9)
            
            esi_1 += data_4cd188
            eax = data_4cd178
            
            if (esi_1 s>= eax)
                break
            
            eax_5 = var_38_1
    
    i += data_4cd18c
while (i s< data_4cd17c)
