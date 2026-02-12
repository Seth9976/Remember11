// 函数: sub_49252f
// 地址: 0x49252f
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = data_c7b410
int32_t edi
int32_t var_18 = edi
int32_t result

if (eax_2 != 0)
label_492581:
    
    if (eax_2 == 1)
        result = GetLocaleInfoW(arg2, arg3, arg4, arg5)
    else if (eax_2 == 2 || eax_2 == 0)
        int32_t result_1 = 0
        
        if (arg6 == 0)
            arg6 = *(*arg1 + 4)
        
        int32_t cchData = GetLocaleInfoA(arg2, arg3, nullptr, 0)
        
        if (cchData == 0)
            result = 0
        else
            uint8_t* esi_1
            
            if (cchData s<= 0 || divu.dp.d(0:0xffffffe0, cchData) u< 1)
                esi_1 = nullptr
            label_49261a:
                
                if (esi_1 == 0)
                    result = 0
                else
                    if (GetLocaleInfoA(arg2, arg3, esi_1, cchData) != 0)
                        wchar16* lpWideCharStr
                        int32_t cchWideChar
                        
                        if (arg5 != 0)
                            cchWideChar = arg5
                            lpWideCharStr = arg4
                        else
                            cchWideChar = 0
                            lpWideCharStr = nullptr
                        
                        result_1 = MultiByteToWideChar(arg6, MB_PRECOMPOSED, esi_1, 0xffffffff, 
                            lpWideCharStr, cchWideChar)
                    
                    sub_489126(esi_1)
                    result = result_1
            else
                if (cchData + 8 u> 0x400)
                    void* eax_11 = sub_4814bc(cchData + 8)
                    
                    if (eax_11 != 0)
                        *eax_11 = 0xdddd
                        eax_11 += 8
                    
                    esi_1 = eax_11
                    goto label_49261a
                
                __alloca_probe_16(cchData + 8)
                
                if (&var_18 != 0)
                    var_18 = 0xcccc
                    int32_t __saved_ebx
                    esi_1 = &__saved_ebx
                    goto label_49261a
                
                result = 0
    else
        result = 0
else
    if (GetLocaleInfoW(0, 1, nullptr, 0) == 0)
        if (GetLastError() != ERROR_CALL_NOT_IMPLEMENTED)
            eax_2 = data_c7b410
        else
            eax_2 = 2
            data_c7b410 = 2
        
        goto label_492581
    
    data_c7b410 = 1
    result = GetLocaleInfoW(arg2, arg3, arg4, arg5)

sub_480cd2(eax_1 ^ &__saved_ebp)
return result
