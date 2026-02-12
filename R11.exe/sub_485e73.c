// 函数: sub_485e73
// 地址: 0x485e73
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_44 = 0x16
void var_20
void* var_48 = &var_20
int32_t var_34
sub_48e9c9(*arg1, arg1[1], &var_34)
int32_t result

if (arg2 != 0 && arg3 u> 0)
    void* eax_6
    eax_6.b = var_34 == 0x2d
    char* edi_1 = eax_6 + arg2
    void* ecx_2
    
    if (arg3 != 0xffffffff)
        ecx_2 = arg3 - eax_6
    else
        ecx_2 = arg3
    
    int32_t ecx_3
    int32_t edx_1
    result, ecx_3, edx_1 = sub_48e851(edi_1, ecx_2, arg4, &var_34)
    
    if (result == 0)
        int32_t var_30
        ecx_3.b = var_30 - 1 s< var_30 - 1
        
        if (var_30 - 1 s< 0xfffffffc || var_30 - 1 s>= arg4)
            int32_t* var_44_3 = arg6
            int32_t var_48_2 = 1
            result = sub_4856fb(arg2, edx_1, ecx_3, arg3, arg4, arg5, &var_34)
        else
            if (ecx_3.b != 0)
                int32_t eax_8
                
                do
                    eax_8.b = *edi_1
                    edi_1 = &edi_1[1]
                while (eax_8.b != 0)
                edi_1[0xfffffffe] = 0
            
            result = sub_485cc5(&var_34, edx_1, arg2, arg3, arg4, 1, arg6)
    else
        *arg2 = 0
else
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    result = 0x16

sub_480cd2(eax_1 ^ &__saved_ebp)
return result
