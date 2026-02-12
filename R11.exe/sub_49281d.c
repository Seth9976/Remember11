// 函数: sub_49281d
// 地址: 0x49281d
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char* ebx = nullptr
bool cond:0 = data_c7b418 != 0
int32_t edi
int32_t var_20 = edi

if (not(cond:0))
    if (LCMapStringW(0, 0x100, &data_4a68ac, 1, nullptr, 0) == 0)
        if (GetLastError() == ERROR_CALL_NOT_IMPLEMENTED)
            data_c7b418 = 2
    else
        data_c7b418 = 1

if (arg7 s> 0)
    int32_t ecx = arg7
    int16_t* eax_4 = arg6
    
    while (true)
        ecx -= 1
        
        if (*eax_4 == 0)
            break
        
        eax_4 = &eax_4[1]
        
        if (ecx == 0)
            ecx = 0xffffffff
            break
    
    arg7 += 0xffffffff - ecx

int32_t eax_7 = data_c7b418
int32_t result

if (eax_7 == 1)
    result = LCMapStringW(arg4, arg5, arg6, arg7, arg8, arg9)
else if (eax_7 == 2 || eax_7 == 0)
    int32_t result_1 = 0
    
    if (arg4 == 0)
        arg4 = *(*arg3 + 0x14)
    
    if (arg10 == 0)
        arg10 = *(*arg3 + 4)
    
    int32_t eax_12 = sub_491d90(arg4)
    
    if (arg10 != eax_12 && eax_12 != 0xffffffff)
        arg10 = eax_12
    
    int32_t eax_13 = WideCharToMultiByte(arg10, 0, arg6, arg7, nullptr, 0, nullptr, nullptr)
    
    if (eax_13 != 0)
        int32_t* var_c_1
        
        if (eax_13 s<= 0 || divu.dp.d(0:0xffffffe0, eax_13) u< 1)
            var_c_1 = nullptr
        else
            int32_t* eax_17
            
            if (eax_13 + 8 u> 0x400)
                eax_17 = sub_4814bc(eax_13 + 8)
                
                if (eax_17 != 0)
                    *eax_17 = 0xdddd
                    eax_17 = &eax_17[2]
            else
                __alloca_probe_16(eax_13 + 8)
                eax_17 = &var_20
                
                if (&var_20 != 0)
                    var_20 = 0xcccc
                    eax_17 = &eax_17[2]
            
            var_c_1 = eax_17
        
        if (var_c_1 == 0)
            result = 0
        else
            if (WideCharToMultiByte(arg10, 0, arg6, arg7, var_c_1, eax_13, nullptr, nullptr) != 0)
                int32_t result_2 = LCMapStringA(arg4, arg5, var_c_1, eax_13, nullptr, 0)
                
                if (result_2 != 0)
                    if (result_2 s> 0 && divu.dp.d(0:0xffffffe0, result_2) u>= 1)
                        int32_t* eax_23
                        
                        if (result_2 + 8 u> 0x400)
                            eax_23 = sub_4814bc(result_2 + 8)
                            
                            if (eax_23 != 0)
                                *eax_23 = 0xdddd
                                eax_23 = &eax_23[2]
                        else
                            __alloca_probe_16(result_2 + 8)
                            eax_23 = &var_20
                            
                            if (&var_20 != 0)
                                var_20 = 0xcccc
                                eax_23 = &eax_23[2]
                        
                        ebx = eax_23
                    
                    if (ebx != 0)
                        if (LCMapStringA(arg4, arg5, var_c_1, eax_13, ebx, result_2) != 0)
                            if ((arg5.w & 0x400) == 0)
                                wchar16* lpWideCharStr
                                int32_t cchWideChar
                                
                                if (arg9 != 0)
                                    cchWideChar = arg9
                                    lpWideCharStr = arg8
                                else
                                    cchWideChar = 0
                                    lpWideCharStr = nullptr
                                
                                result_1 = MultiByteToWideChar(arg10, MB_PRECOMPOSED, ebx, 
                                    result_2, lpWideCharStr, cchWideChar)
                            else
                                result_1 = result_2
                                
                                if (arg9 != 0)
                                    if (arg9 s<= result_2)
                                        result_2 = arg9 - 1
                                    
                                    if (sub_48ecf8(arg8, arg9, ebx, result_2) != 0)
                                        int32_t var_34_6
                                        __builtin_memset(&var_34_6, 0, 0x14)
                                        sub_481c1f()
                                        noreturn
                        
                        sub_489126(ebx)
            
            sub_489126(var_c_1)
            result = result_1
    else
        result = 0
else
    result = 0

sub_480cd2(eax_1 ^ &__saved_ebp)
return result
