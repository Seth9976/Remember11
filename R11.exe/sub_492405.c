// 函数: sub_492405
// 地址: 0x492405
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg2 != 0 && arg3 != 0)
    if (*arg2 != 0)
        void* var_14
        sub_481612(&var_14, arg4)
        void* var_c
        char var_8
        
        if (*(var_14 + 0x14) != 0)
            if (sub_489526(*arg2, &var_14) != 0)
                void* eax_7 = var_14
                int32_t cbMultiByte = *(eax_7 + 0xac)
                
                if (cbMultiByte s<= 1 || arg3 s< cbMultiByte)
                label_4924aa:
                    
                    if (arg3 u>= *(eax_7 + 0xac) && arg2[1] != 0)
                        goto label_4924ba
                    
                    goto label_4924d7
                
                int32_t cchWideChar_1
                cchWideChar_1.b = arg1 != 0
                bool cond:1_1 = MultiByteToWideChar(*(eax_7 + 4), 
                    MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, arg2, cbMultiByte, arg1, cchWideChar_1) != 0
                eax_7 = var_14
                
                if (not(cond:1_1))
                    goto label_4924aa
                
            label_4924ba:
                int32_t result = *(eax_7 + 0xac)
                
                if (var_8 != 0)
                    *(var_c + 0x70) &= 0xfffffffd
                
                return result
            
            int32_t cchWideChar
            cchWideChar.b = arg1 != 0
            
            if (MultiByteToWideChar(*(var_14 + 4), MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, arg2, 1, 
                arg1, cchWideChar) == 0)
            label_4924d7:
                *__errno() = 0x2a
                
                if (var_8 != 0)
                    *(var_c + 0x70) &= 0xfffffffd
                
                return 0xffffffff
        else if (arg1 != 0)
            *arg1 = zx.w(*arg2)
        
        if (var_8 != 0)
            *(var_c + 0x70) &= 0xfffffffd
        
        return 1
    
    if (arg1 != 0)
        *arg1 = 0

return 0
