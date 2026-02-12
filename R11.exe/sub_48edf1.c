// 函数: sub_48edf1
// 地址: 0x48edf1
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* var_8 = arg3
int32_t* charType = arg3
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = data_c7b3d0
int32_t* ebx = nullptr
int32_t edi
int32_t var_18 = edi
int32_t* result
int32_t arg_c

if (eax_2 != 0)
label_48ee4a:
    
    if (eax_2 == 2 || eax_2 == 0)
        PSTR esi_1 = nullptr
        
        if (arg8 == 0)
            arg8 = *(*arg3 + 0x14)
        
        if (arg7 == 0)
            arg7 = *(*arg3 + 4)
        
        int32_t eax_17 = sub_491d90(arg8)
        
        if (eax_17 != 0xffffffff)
            if (eax_17 == arg7)
                goto label_48ef82
            
            esi_1 = sub_491dd7(arg7, eax_17, arg5, &arg_c, nullptr, 0)
            
            if (esi_1 == 0)
                result = nullptr
            else
                arg5 = esi_1
            label_48ef82:
                BOOL result_1 = GetStringTypeA(arg8, arg4, arg5, arg_c, arg6)
                
                if (esi_1 != 0)
                    sub_4813df(esi_1)
                
                result = result_1
        else
            result = nullptr
    else
        if (eax_2 == 1)
            goto label_48ee67
        
        result = nullptr
else
    if (GetStringTypeW(1, &data_4a68ac, 1, &charType) == 0)
        if (GetLastError() != ERROR_CALL_NOT_IMPLEMENTED)
            eax_2 = data_c7b3d0
        else
            eax_2 = 2
            data_c7b3d0 = 2
        
        goto label_48ee4a
    
    data_c7b3d0 = 1
label_48ee67:
    charType = nullptr
    
    if (arg7 == 0)
        arg7 = *(*arg3 + 4)
    
    int32_t eax_7
    eax_7.b = arg9 != 0
    int32_t cchWideChar = MultiByteToWideChar(arg7, (eax_7 << 3) + 1, arg5, arg_c, nullptr, 0)
    
    if (cchWideChar == 0)
        result = nullptr
    else
        if (cchWideChar s> 0 && cchWideChar u<= 0x7ffffff0)
            int32_t* eax_10
            
            if (cchWideChar * 2 + 8 u> 0x400)
                eax_10 = sub_4814bc(cchWideChar * 2 + 8)
                
                if (eax_10 != 0)
                    *eax_10 = 0xdddd
                    eax_10 = &eax_10[2]
            else
                __alloca_probe_16(cchWideChar * 2 + 8)
                eax_10 = &var_18
                
                if (&var_18 != 0)
                    var_18 = 0xcccc
                    eax_10 = &eax_10[2]
            
            ebx = eax_10
        
        if (ebx == 0)
            result = nullptr
        else
            sub_480cf0(ebx, 0, cchWideChar * 2)
            int32_t cchSrc =
                MultiByteToWideChar(arg7, MB_PRECOMPOSED, arg5, arg_c, ebx, cchWideChar)
            
            if (cchSrc != 0)
                charType = GetStringTypeW(arg4, ebx, cchSrc, arg6)
            
            sub_489126(ebx)
            result = charType
sub_480cd2(eax_1 ^ &__saved_ebp)
return result
