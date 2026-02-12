// 函数: sub_4985b2
// 地址: 0x4985b2
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_1c = edi

if (arg1 == 0)
    goto label_4985ce

int32_t result
int32_t result_1
void* eax_2

if (sub_497081(arg1, arg2) u< arg2)
    void* eax_4 = *arg3
    uint32_t ecx_2 = *(eax_4 + 0x14)
    
    if (ecx_2 != 0)
        int32_t ecx_4 = sub_4894e3(arg3, ecx_2, 0x100, arg1, 0xffffffff, 0, 0, *(eax_4 + 4), 1)
        
        if (ecx_4 != 0)
            if (arg2 u< ecx_4)
                *arg1 = 0
                eax_2 = __errno()
                result_1 = 0x22
                goto label_4985d5
            
            int32_t var_c_1
            
            if (ecx_4 s<= 0 || divu.dp.d(0:0xffffffe0, ecx_4) u< 1)
                var_c_1 = 0
            else
                int32_t eax_11
                
                if (ecx_4 + 8 u> 0x400)
                    eax_11 = sub_4814bc(ecx_4 + 8)
                    
                    if (eax_11 != 0)
                        *eax_11 = 0xdddd
                        eax_11 += 8
                else
                    __alloca_probe_16(ecx_4 + 8)
                    eax_11 = &var_1c
                    
                    if (&var_1c != 0)
                        var_1c = 0xcccc
                        eax_11 += 8
                
                var_c_1 = eax_11
            
            if (var_c_1 != 0)
                void* eax_13 = *arg3
                int32_t result_2
                
                if (sub_4894e3(arg3, *(eax_13 + 0x14), 0x100, arg1, 0xffffffff, var_c_1, ecx_4, 
                        *(eax_13 + 4), 1) == 0)
                    *__errno() = 0x2a
                    result_2 = 0x2a
                else
                    result_2 = sub_48a315(arg1, arg2, var_c_1)
                
                sub_489126(var_c_1)
                result = result_2
            else
                *__errno() = 0xc
                result = *__errno()
        else
            *__errno() = 0x2a
            result = *__errno()
    else
        char* ecx_3 = arg1
        
        if (*arg1 != 0)
            do
                eax_4.b = *ecx_3
                
                if (eax_4.b s>= 0x41 && eax_4.b s<= 0x5a)
                    eax_4.b += 0x20
                    *ecx_3 = eax_4.b
                
                ecx_3 = &ecx_3[1]
            while (*ecx_3 != 0)
        
        result = 0
else
    *arg1 = 0
label_4985ce:
    eax_2 = __errno()
    result_1 = 0x16
label_4985d5:
    *eax_2 = result_1
    sub_481d1b(0, 0, 0, 0, 0)
    result = result_1
sub_480cd2(eax_1 ^ &__saved_ebp)
return result
