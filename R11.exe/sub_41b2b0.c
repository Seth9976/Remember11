// 函数: sub_41b2b0
// 地址: 0x41b2b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*(arg2 + 0x59ec) = 0
*(arg2 + 0x59f0) = 0
void* esi_1 = arg2 + 0x59fc
int32_t i = 0

if (*(arg2 + 0x74) s> 0)
    int32_t ecx_2 = arg1[1] + 8
    
    do
        int32_t eax_1 = *esi_1
        *(esi_1 + 0x10) = ecx_2
        
        if (eax_1 == 0)
            *(esi_1 + 0xc) = *arg1
        else if (eax_1 == 1)
            int32_t eax_10
            int32_t edx_1
            edx_1:eax_10 = sx.q(*(arg2 + 0x44) - *(esi_1 + 0x14))
            *(esi_1 + 0xc) = ((eax_10 - edx_1) s>> 1) + *arg1
        else if (eax_1 == 2)
            *(esi_1 + 0xc) = *(arg2 + 0x44) - *(esi_1 + 0x14) + *arg1
        
        int32_t eax_13 = *(esi_1 + 0x18)
        i += 1
        esi_1 += 0x1c
        ecx_2 = ecx_2 + eax_13 + 4
    while (i s< *(arg2 + 0x74))

int32_t eax_14 = sx.d(*(arg2 + 4))
int32_t* result = eax_14 - 1
int32_t var_10 = 0
int32_t var_c = 0
int32_t var_8 = 0x280
int32_t var_4 = 0x1c0

if (eax_14 == 1)
    sub_41ab40(arg2, arg3)
    result = data_a5d8f8
    
    if (result[6] == 1 && result[5] == 0)
        int32_t ecx_3 = *(esi_1 - 0x10)
        int32_t edx_2 = *(esi_1 - 0xc)
        int32_t eax_16 = *(esi_1 - 8) + ecx_3
        var_10 = eax_16
        int32_t var_c_1 = edx_2
        
        if (eax_16 - *arg1 + 0x10 s> *(arg2 + 0x44))
            var_10 = ecx_3
            int32_t var_c_2 = *(esi_1 - 4) + edx_2
        
        int32_t var_24_2 = arg3
        return sub_43a840(data_2b603ac, &var_10)

return result
