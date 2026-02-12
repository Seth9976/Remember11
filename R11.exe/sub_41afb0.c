// 函数: sub_41afb0
// 地址: 0x41afb0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

bool cond:0 = *(arg2 + 0x1c) != 1
char var_24 = 0x80
char var_23 = 0x80
char var_22 = 0x80
char var_21 = 0x80
void* result
int32_t var_20

if (cond:0)
    *(arg2 + 0x59ec) = *arg1
    *(arg2 + 0x59f0) = arg1[1] - 0x35
    int32_t ecx_3 = *(arg2 + 8)
    
    if (ecx_3 s< 0x4e)
        int32_t eax_4
        int32_t edx_2
        edx_2:eax_4 = sx.q(0x4e - ecx_3)
        *(arg2 + 0x59ec) += (eax_4 - edx_2) s>> 1
    
    int32_t ecx_4 = arg1[1]
    int32_t i = 0
    void* esi_2 = arg2 + 0x59fc
    
    if (*(arg2 + 0x74) s> 0)
        do
            int32_t eax_7 = *esi_2
            *(esi_2 + 0x10) = ecx_4
            
            if (eax_7 == 0)
                *(esi_2 + 0xc) = *arg1
            else if (eax_7 == 1)
                int32_t eax_13
                int32_t edx_6
                edx_6:eax_13 = sx.q(*(arg2 + 0x20) - *(esi_2 + 0x14))
                *(esi_2 + 0xc) = ((eax_13 - edx_6) s>> 1) + *arg1
            else if (eax_7 == 2)
                *(esi_2 + 0xc) = *(arg2 + 0x20) - *(esi_2 + 0x14) + *arg1
            
            ecx_4 += *(esi_2 + 0x18)
            i += 1
            esi_2 += 0x1c
        while (i s< *(arg2 + 0x74))
    
    int32_t eax_17 = sx.d(*(arg2 + 4))
    
    if (eax_17 == 1)
        int32_t ebp_1 = arg3
        sub_41ab40(arg2, ebp_1)
        void* eax_28 = data_a5d8f8
        
        if (*(eax_28 + 0x18) == 1 && *(eax_28 + 0x14) == 0)
            int32_t edx_19 = *(esi_2 - 0x10)
            void* ecx_9 = *(esi_2 - 0xc)
            int32_t ebp_2 = *(arg2 + 0x44)
            int32_t eax_30 = *(esi_2 - 8) + edx_19
            var_20 = eax_30
            void* var_1c_4 = ecx_9
            
            if (eax_30 - *arg1 + 0x10 s> ebp_2)
                ecx_9 += *(esi_2 - 4)
                var_20 = edx_19
                void* var_1c_5 = ecx_9
            
            int32_t eax_34 = arg1[1] + *(arg2 + 0x48)
            
            if (ecx_9 s> eax_34 - 1)
                var_20 = *arg1 + ebp_2 - 8
                int32_t var_1c_6 = eax_34 - 0x10
            
            ebp_1 = arg3
            int32_t var_38_4 = ebp_1
            sub_43a840(data_2b603ac, &var_20)
        
        int32_t eax_37 = *(arg2 + 8)
        
        if (eax_37 != 0)
            int32_t var_18_3 = 0x4e
            
            if (eax_37 s>= 0x4e)
                int32_t var_18_4 = eax_37
            
            int32_t var_1c_7 = arg1[1] - 0x32
            int32_t edx_26 = (*(arg2 + 0x10) + 3) * 0x2c
            int32_t eax_38 = data_c7bbc0
            var_20 = *arg1
            int32_t var_14_3 = 0x12
            int32_t var_10_3 = 0x20
            int32_t var_c_3 = 0x20
            sub_43c620(edx_26 + *eax_38, &var_20, &var_24, ebp_1.b)
        
        int32_t edx_28 = arg1[1]
        int32_t eax_39 = *(arg2 + 0x44)
        var_20 = *arg1
        int32_t var_14_4 = *(arg2 + 0x48)
        int32_t var_1c_8 = edx_28
        int32_t var_18_5 = eax_39
        int32_t var_10_4 = 0x20
        int32_t var_c_4 = 0x20
        return sub_43c620((*(arg2 + 0x10) + 3) * 0x2c + *data_c7bbc0, &var_20, &var_24, ebp_1.b)
    
    if (eax_17 == 2)
        int32_t var_1c_3 = arg1[1]
        int32_t var_18_2 = *(arg2 + 0x44)
        int32_t edx_17 = (*(arg2 + 0x10) + 3) * 0x2c
        int32_t eax_25 = *(arg2 + 0x14)
        int32_t var_10_2 = eax_25
        int32_t var_c_2 = eax_25
        var_20 = *arg1
        int32_t var_14_2 = *(arg2 + 0x48)
        return sub_43c620(edx_17 + *data_c7bbc0, &var_20, &var_24, arg3.b)
    
    result = eax_17 - 3
    
    if (eax_17 == 3)
        int32_t var_1c_2 = arg1[1]
        int32_t var_18_1 = *(arg2 + 0x44)
        int32_t edx_11 = (*(arg2 + 0x10) + 3) * 0x2c
        int32_t eax_21 = 0x20 - *(arg2 + 0x14)
        var_20 = *arg1
        int32_t var_10_1 = eax_21
        int32_t var_c_1 = eax_21
        int32_t var_14_1 = *(arg2 + 0x48)
        return sub_43c620(edx_11 + *data_c7bbc0, &var_20, &var_24, arg3.b)
else
    result = data_a5d8f8
    
    if (*(result + 0x18) == 1 && *(result + 0x14) == 0)
        int32_t* edx_1 = data_2b603ac
        int32_t __saved_ebx = arg3
        var_20 = 0x240
        int32_t var_1c_1 = 0x180
        return sub_43a840(edx_1, &var_20)
return result
