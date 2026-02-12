// 函数: sub_48c05f
// 地址: 0x48c05f
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_68
int32_t eax_1 = __security_cookie ^ &var_68
int32_t result

if (arg2 == 1)
    uint8_t var_88[0x20]
    uint8_t (* edi_1)[0x20] = &var_88
    int32_t var_8c_1 = 0
    int32_t esi_1 = sub_4927e2(arg1, arg3, arg4, &var_88, 0x80, 0)
    
    if (esi_1 != 0)
    label_48c10d:
        void* eax_8 = sub_48b2bc(esi_1, 1)
        *arg5 = eax_8
        
        if (eax_8 != 0)
            if (sub_48ecf8(eax_8, esi_1, edi_1, esi_1 - 1) != 0)
                int32_t var_b8_4
                __builtin_memset(&var_b8_4, 0, 0x14)
                sub_481c1f()
                noreturn
            
            if (var_8c_1 != 0)
                sub_4813df(edi_1)
            
            result = 0
        else if (var_8c_1 == 0)
            result = 0xffffffff
        else
            sub_4813df(edi_1)
            result = 0xffffffff
    else if (GetLastError() != ERROR_INSUFFICIENT_BUFFER)
        result = 0xffffffff
    else
        int32_t eax_5 = sub_4927e2(arg1, arg3, arg4, nullptr, 0, 0)
        
        if (eax_5 == 0)
            result = 0xffffffff
        else
            edi_1 = sub_48b2bc(eax_5, 1)
            
            if (edi_1 == 0)
                result = 0xffffffff
            else
                var_8c_1 = 1
                esi_1 = sub_4927e2(arg1, arg3, arg4, edi_1, eax_5, 0)
                
                if (esi_1 != 0)
                    goto label_48c10d
                
                sub_4813df(edi_1)
                result = 0xffffffff
else if (arg2 != 0)
    result = 0xffffffff
else
    void* i = &data_c7b3a4
    
    if (sub_49266a(arg1, arg3, arg4, &data_c7b3a4, 4, 0) == 0)
        result = 0xffffffff
    else
        *arg5 = nullptr
        
        do
            char ebx_1 = *i
            
            if (sub_48e6dc(zx.d(ebx_1)) == 0)
                break
            
            int32_t eax_12
            eax_12.b = *arg5
            eax_12.w = muls.dp.b(eax_12.b, 0xa)
            eax_12.b += ebx_1
            eax_12.b -= 0x30
            i += 2
            *arg5 = eax_12.b
        while (i s< &data_c7b3ac)
        
        result = 0

sub_480cd2(eax_1 ^ &var_68)
return result
