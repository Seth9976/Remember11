// 函数: sub_4851d0
// 地址: 0x4851d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* esi_1 = *(arg2 + 8) ^ __security_cookie
int32_t eax = *esi_1
char var_11 = 0
int32_t result = 1

if (eax != 0xfffffffe)
    sub_480cd2((esi_1[1] + arg2 + 0x10) ^ *(eax + arg2 + 0x10))

sub_480cd2((esi_1[3] + arg2 + 0x10) ^ *(esi_1[2] + arg2 + 0x10))

if ((arg1[1].b & 0x66) == 0)
    int32_t i_1 = *(arg2 + 0xc)
    int32_t* var_8 = arg1
    int32_t var_4_1 = arg3
    *(arg2 - 4) = &var_8
    
    if (i_1 != 0xfffffffe)
        int32_t i
        
        do
            int32_t eax_3 = i_1 * 3
            i = esi_1[eax_3 + 4]
            
            if (esi_1[eax_3 + 5] != 0)
                int32_t eax_4 = @_EH4_CallFilterFunc@8()
                var_11 = 1
                
                if (eax_4 s< 0)
                    result = 0
                    goto label_48527b
                
                if (eax_4 s> 0)
                    if (*arg1 == 0xe06d7363 && __IsNonwritableInCurrentImage(&data_4a68b0) != 0)
                        int32_t var_28_1 = 1
                        sub_48a6fb(arg1)
                    
                    sub_48dca6(arg2)
                    void* eax_9 = arg2
                    
                    if (*(eax_9 + 0xc) != i_1)
                        @_EH4_LocalUnwind@16(eax_9, i_1, arg2 + 0x10, &__security_cookie)
                        eax_9 = arg2
                    
                    *(eax_9 + 0xc) = i
                    int32_t eax_10 = *esi_1
                    
                    if (eax_10 != 0xfffffffe)
                        sub_480cd2((esi_1[1] + arg2 + 0x10) ^ *(eax_10 + arg2 + 0x10))
                    
                    sub_480cd2((esi_1[3] + arg2 + 0x10) ^ *(esi_1[2] + arg2 + 0x10))
                    int32_t ecx_25 = esi_1[eax_3 + 6]
                    __NLG_Notify(ecx_25, arg2 + 0x10, 1)
                    jump(ecx_25)
            
            i_1 = i
        while (i != 0xfffffffe)
        
        if (var_11 != 0)
            goto label_48527b
else if (*(arg2 + 0xc) != 0xfffffffe)
    @_EH4_LocalUnwind@16(arg2, 0xfffffffe, arg2 + 0x10, &__security_cookie)
label_48527b:
    int32_t eax_5 = *esi_1
    
    if (eax_5 != 0xfffffffe)
        sub_480cd2((esi_1[1] + arg2 + 0x10) ^ *(eax_5 + arg2 + 0x10))
    
    sub_480cd2((esi_1[3] + arg2 + 0x10) ^ *(esi_1[2] + arg2 + 0x10))

return result
