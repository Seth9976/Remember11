// 函数: sub_403b60
// 地址: 0x403b60
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ebx = *(arg1 + 0x44)
int32_t eax

if (*(ebx + 2) != 0)
    eax = sub_4025e0(arg1)
else
    eax = sub_4024c0(arg1)

if (eax == 0)
    sub_442e20()
    int32_t ebp_1 = data_4cd178
    int32_t edi_1 = 0
    data_c7bbf0 = 1
    data_c7bbe0 = 3
    data_c7bbe4 = 0x80
    
    if (ebp_1 s> 0)
        int32_t esi_2 = data_4cd180
        
        do
            int32_t eax_3
            int32_t edx_1
            edx_1:eax_3 = sx.q(*(ebx + 0xc) * esi_2)
            int32_t eax_7
            int32_t edx_3
            edx_3:eax_7 = sx.q(ebp_1 - edi_1)
            int32_t ecx_2 = (eax_3 + (edx_1 & 0x3f)) s>> 6
            int32_t eax_9 = (eax_7 + (edx_3 & 0x1f)) s>> 5
            int32_t ecx_3 = ecx_2 - eax_9
            
            if (ecx_2 - eax_9 s< 0)
                ecx_3 = 0
            else if (ecx_3 s> 0x20)
                ecx_3 = 0x20
            
            int32_t esi_3 = esi_2 - ecx_3
            int32_t esi_4 = esi_3 + edi_1
            int32_t var_20 = esi_4
            
            if (esi_3 + edi_1 s< 0)
                esi_4 = 0
                var_20 = 0
            
            int32_t var_10_1 = ecx_3
            int32_t var_1c_1 = 0
            int32_t var_14_1 = 0
            int32_t var_c_1 = data_4cd17c
            int32_t var_18_1 = esi_4
            sub_445470(*data_c7bbc0 + 0x58, &var_20, 0, *(ebx + 4))
            esi_2 = data_4cd180
            ebp_1 = data_4cd178
            edi_1 += esi_2
        while (edi_1 s< ebp_1)
    
    sub_442d00(*data_c7bbc0 + 0x58, *(ebx + 4))
    int32_t ecx_7 = data_2b603b0
    int32_t ecx_8 = neg.d(ecx_7)
    sub_442c30((sbb.d(ecx_8, ecx_8, ecx_7 != 0) + 1) * 0x2c + *data_c7bbc0, *(ebx + 4))
    int32_t ecx_13 = data_2b603b0
    int32_t ecx_14 = neg.d(ecx_13)
    int32_t var_44_1 = *(ebx + 4)
    sub_409b40(sbb.d(ecx_14, ecx_14, ecx_13 != 0) + 1, 0x900)
    sub_442f40()

return 0
