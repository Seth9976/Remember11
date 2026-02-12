// 函数: sub_492227
// 地址: 0x492227
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t result
int32_t* ecx
int32_t edx

if ((arg2[3].b & 0x40) != 0)
label_4923d6:
    int32_t temp0_1 = arg2[1]
    arg2[1] -= 2
    
    if (temp0_1 - 2 s< 0)
        uint32_t eax_32 = zx.d(arg1)
        result = sub_49647f(eax_32, edx, ecx, eax_32.w, arg2)
    else
        result = arg1.d
        **arg2 = result.w
        *arg2 += 2
else
    int32_t eax_2
    eax_2, edx = sub_48d847(arg2)
    ecx = arg2
    int32_t eax_3
    
    if (eax_2 != 0xffffffff)
        eax_3, edx = sub_48d847(arg2)
        ecx = arg2
    
    void* eax_9
    
    if (eax_2 == 0xffffffff || eax_3 == 0xfffffffe)
        eax_9 = &data_4cc7d8
    else
        void* ebx_1 = &(&data_2b6a8a0)[sub_48d847(arg2) s>> 5]
        int32_t eax_6
        eax_6, edx = sub_48d847(arg2)
        eax_9 = (eax_6 & 0x1f) * 0x38 + *ebx_1
        ecx = arg2
    
    eax_9.b = *(eax_9 + 0x24)
    eax_9.b &= 0x7f
    
    if (eax_9.b == 2)
        goto label_4923d6
    
    bool cond:3_1 = sub_48d847(arg2) == 0xffffffff
    bool cond:4_1
    
    if (not(cond:3_1))
        cond:4_1 = sub_48d847(arg2) == 0xfffffffe
    
    void* eax_17
    
    if (cond:3_1 || cond:4_1)
        eax_17 = &data_4cc7d8
    else
        void* ebx_2 = &(&data_2b6a8a0)[sub_48d847(arg2) s>> 5]
        eax_17 = (sub_48d847(arg2) & 0x1f) * 0x38 + *ebx_2
    
    eax_17.b = *(eax_17 + 0x24)
    eax_17.b &= 0x7f
    
    if (eax_17.b != 1)
        int32_t eax_22
        eax_22, edx = sub_48d847(arg2)
        ecx = arg2
        int32_t eax_23
        
        if (eax_22 != 0xffffffff)
            eax_23, edx = sub_48d847(arg2)
            ecx = arg2
        
        void* eax_29
        
        if (eax_22 == 0xffffffff || eax_23 == 0xfffffffe)
            eax_29 = &data_4cc7d8
        else
            void* ebx_4 = &(&data_2b6a8a0)[sub_48d847(arg2) s>> 5]
            int32_t eax_26
            eax_26, edx = sub_48d847(arg2)
            eax_29 = (eax_26 & 0x1f) * 0x38 + *ebx_4
            ecx = arg2
        
        if ((*(eax_29 + 4) & 0x80) == 0)
            goto label_4923d6
        
        int32_t var_14
        char var_10[0x8]
        void* ecx_10
        result, ecx_10 = sub_48e489(&var_14, &var_10, 5, arg1.d)
        
        if (result != 0)
        label_492301:
            result.w = 0xffff
        else
            int32_t ebx_5 = 0
            
            if (var_14 s> 0)
                do
                    int32_t temp3_1 = arg2[1]
                    arg2[1] -= 1
                    
                    if (temp3_1 - 1 s< 0)
                        int32_t* var_24_13 = arg2
                        result = sub_484495(sx.d(var_10[ebx_5]))
                    else
                        ecx_10.b = var_10[ebx_5]
                        **arg2 = ecx_10.b
                        char* ecx_11 = *arg2
                        result = zx.d(*ecx_11)
                        *arg2 = &ecx_11[1]
                    
                    if (result == 0xffffffff)
                        goto label_492301_2
                    
                    ebx_5 += 1
                while (ebx_5 s< var_14)
            
            result.w = arg1
    else
        int32_t temp1_1 = arg2[1]
        arg2[1] -= 1
        
        if (temp1_1 - 1 s< 0)
            int32_t* var_24_7 = arg2
            result = sub_484495(sx.d(arg1.b))
        else
            **arg2 = arg1.b
            char* ecx_4 = *arg2
            result = zx.d(*ecx_4)
            *arg2 = &ecx_4[1]
        
        if (result != 0xffffffff)
            int32_t temp2_1 = arg2[1]
            arg2[1] -= 1
            
            if (temp2_1 - 1 s< 0)
                int32_t* var_24_8 = arg2
                result = sub_484495(sx.d(arg1:1.b))
            else
                **arg2 = arg1:1.b
                char* ecx_7 = *arg2
                result = zx.d(*ecx_7)
                *arg2 = &ecx_7[1]
            
            if (result == 0xffffffff)
            label_492301_1:
                result.w = 0xffff
            else
                result.w = arg1
        else
        label_492301_2:
            result.w = 0xffff
sub_480cd2(eax_1 ^ &__saved_ebp)
return result
