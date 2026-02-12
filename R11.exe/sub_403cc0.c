// 函数: sub_403cc0
// 地址: 0x403cc0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ebp = *(arg1 + 0x44)
int32_t eax

if (*(ebp + 2) != 0)
    eax = sub_4025e0(arg1)
else
    eax = sub_4024c0(arg1)

if (eax == 0)
    sub_442e20()
    int32_t i = 0
    bool cond:1_1 = data_4cd178 s<= 0
    data_c7bbf0 = 1
    data_c7bbe0 = 3
    data_c7bbe4 = 0x80
    
    if (not(cond:1_1))
        int32_t edi_1 = data_4cd180
        
        do
            int32_t eax_3
            int32_t edx_1
            edx_1:eax_3 = sx.q(*(ebp + 0xc) * edi_1)
            int32_t eax_6
            int32_t edx_3
            edx_3:eax_6 = sx.q(i)
            int32_t ecx_2 = (eax_3 + (edx_1 & 0x3f)) s>> 6
            int32_t eax_8 = (eax_6 + (edx_3 & 0x1f)) s>> 5
            int32_t ecx_3 = ecx_2 - eax_8
            
            if (ecx_2 - eax_8 s< 0)
                ecx_3 = 0
            
            if (ecx_3 s> edi_1)
                ecx_3 = edi_1
            
            int32_t var_10_1 = ecx_3
            int32_t var_c_1 = data_4cd17c
            int32_t* eax_10 = data_c7bbc0
            int32_t i_1 = i
            int32_t var_1c_1 = 0
            int32_t i_2 = i
            int32_t var_14_1 = 0
            sub_445470(*eax_10 + 0x58, &i_1, 0, *(ebp + 4))
            edi_1 = data_4cd180
            i += edi_1
        while (i s< data_4cd178)
    
    sub_442d00(*data_c7bbc0 + 0x58, *(ebp + 4))
    int32_t eax_12 = data_2b603b0
    int32_t eax_13 = neg.d(eax_12)
    sub_442c30((sbb.d(eax_13, eax_13, eax_12 != 0) + 1) * 0x2c + *data_c7bbc0, *(ebp + 4))
    int32_t eax_18 = data_2b603b0
    int32_t eax_19 = neg.d(eax_18)
    int32_t var_40_2 = *(ebp + 4)
    sub_409b40(sbb.d(eax_19, eax_19, eax_18 != 0) + 1, 0x900)
    sub_442f40()

return 0
