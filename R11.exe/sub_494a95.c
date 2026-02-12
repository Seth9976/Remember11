// 函数: sub_494a95
// 地址: 0x494a95
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_20 = edi
BOOL result

if (arg4 s>= 0xffffffff)
    int32_t eax_2 = data_c7b420
    int32_t* lpSrcStr_1
    
    if (eax_2 != 0)
    label_494afc:
        
        if (eax_2 == 1)
            result = GetStringTypeW(arg2, arg3, arg4, arg5)
        else if (eax_2 == 2 || eax_2 == 0)
            BOOL result_1 = 0
            
            if (arg7 == 0)
                arg7 = *(*arg1 + 0x14)
            
            if (arg6 == 0)
                arg6 = *(*arg1 + 4)
            
            int32_t eax_11 = sub_491d90(arg7)
            
            if (arg6 != eax_11 && eax_11 != 0xffffffff)
                arg6 = eax_11
            
            int32_t eax_12 = WideCharToMultiByte(arg6, 0, arg3, arg4, nullptr, 0, nullptr, nullptr)
            
            if (eax_12 == 0)
                result = 0
            else
                if (eax_12 s<= 0 || eax_12 u> 0xffffffe0)
                    lpSrcStr_1 = nullptr
                else
                    int32_t* lpSrcStr_2
                    
                    if (eax_12 + 8 u> 0x400)
                        lpSrcStr_2 = sub_4814bc(eax_12 + 8)
                        
                        if (lpSrcStr_2 != 0)
                            *lpSrcStr_2 = 0xdddd
                            lpSrcStr_2 = &lpSrcStr_2[2]
                    else
                        __alloca_probe_16(eax_12 + 8)
                        lpSrcStr_2 = &var_20
                        
                        if (&var_20 != 0)
                            var_20 = 0xcccc
                            lpSrcStr_2 = &lpSrcStr_2[2]
                    
                    lpSrcStr_1 = lpSrcStr_2
                
                if (lpSrcStr_1 == 0)
                    result = 0
                else
                    sub_480cf0(lpSrcStr_1, 0, eax_12)
                    
                    if (WideCharToMultiByte(arg6, 0, arg3, arg4, lpSrcStr_1, eax_12, nullptr, 
                            nullptr) != 0)
                        uint16_t* lpCharType
                        
                        if (eax_12 + 1 s<= 0 || eax_12 + 1 u> 0x7ffffff0)
                            lpCharType = nullptr
                        label_494c35:
                            
                            if (lpCharType != 0)
                                if (arg7 == 0)
                                    arg7 = *(*arg1 + 0x14)
                                
                                uint8_t* lpSrcStr = lpSrcStr_1
                                void* esi_2 = &lpCharType[arg4]
                                *esi_2 = 0xffff
                                *(esi_2 - 2) = 0xffff
                                result_1 = GetStringTypeA(arg7, arg2, lpSrcStr, eax_12, lpCharType)
                                
                                if (*(esi_2 - 2) == 0xffff || *esi_2 != 0xffff)
                                    result_1 = 0
                                else
                                    sub_489fb0(arg5, lpCharType, arg4 * 2)
                                
                                sub_489126(lpCharType)
                        else
                            if (eax_12 * 2 + 0xa u> 0x400)
                                void* lpCharType_1 = sub_4814bc(eax_12 * 2 + 0xa)
                                
                                if (lpCharType_1 != 0)
                                    *lpCharType_1 = 0xdddd
                                    lpCharType_1 += 8
                                
                                lpCharType = lpCharType_1
                                goto label_494c35
                            
                            __alloca_probe_16(eax_12 * 2 + 0xa)
                            
                            if (&var_20 != 0)
                                var_20 = 0xcccc
                                int32_t __saved_ebx
                                lpCharType = &__saved_ebx
                                goto label_494c35
                    
                    sub_489126(lpSrcStr_1)
                    result = result_1
        else
            result = 0
    else
        if (GetStringTypeW(1, &data_4a68ac, 1, &lpSrcStr_1) == 0)
            if (GetLastError() != ERROR_CALL_NOT_IMPLEMENTED)
                eax_2 = data_c7b420
            else
                eax_2 = 2
                data_c7b420 = 2
            
            goto label_494afc
        
        data_c7b420 = 1
        result = GetStringTypeW(arg2, arg3, arg4, arg5)
else
    result = 0

sub_480cd2(eax_1 ^ &__saved_ebp)
return result
