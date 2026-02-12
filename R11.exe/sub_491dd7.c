// 函数: sub_491dd7
// 地址: 0x491dd7
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t cbMultiByte = *arg4
int32_t edi
int32_t var_44 = edi
PSTR var_24 = nullptr
int32_t var_30 = 0
PSTR result

if (arg1 == arg2)
    result = var_24
else
    CPINFO cPInfo
    void* cbMultiByte_1
    bool cond:2_1
    
    if (GetCPInfo(arg1, &cPInfo) != 0 && cPInfo.MaxCharSize == 1)
        if (GetCPInfo(arg2, &cPInfo) == 0 || cPInfo.MaxCharSize != 1)
            goto label_491e99
        
        cbMultiByte_1 = cbMultiByte
        var_30 = 1
        
        if (cbMultiByte_1 == 0xffffffff)
            cbMultiByte_1 = _strlen(arg3) + 1
        
        cond:2_1 = cbMultiByte_1 s<= 0
        goto label_491e6a
    
label_491e99:
    cbMultiByte_1 = MultiByteToWideChar(arg1, MB_PRECOMPOSED, arg3, cbMultiByte, nullptr, 0)
    cond:2_1 = cbMultiByte_1 s<= 0
    
    if (cbMultiByte_1 != 0)
    label_491e6a:
        int32_t* lpWideCharStr
        
        if (cond:2_1 || cbMultiByte_1 u> 0x7ffffff0)
            lpWideCharStr = nullptr
        else
            int32_t* lpWideCharStr_1
            
            if (cbMultiByte_1 * 2 + 8 u> 0x400)
                lpWideCharStr_1 = sub_4814bc(cbMultiByte_1 * 2 + 8)
                
                if (lpWideCharStr_1 != 0)
                    *lpWideCharStr_1 = 0xdddd
                    lpWideCharStr_1 = &lpWideCharStr_1[2]
            else
                __alloca_probe_16(cbMultiByte_1 * 2 + 8)
                lpWideCharStr_1 = &var_44
                
                if (&var_44 != 0)
                    var_44 = 0xcccc
                    lpWideCharStr_1 = &lpWideCharStr_1[2]
            
            lpWideCharStr = lpWideCharStr_1
        
        if (lpWideCharStr == 0)
            result = nullptr
        else
            sub_480cf0(lpWideCharStr, 0, cbMultiByte_1 * 2)
            
            if (MultiByteToWideChar(arg1, MB_PRECOMPOSED, arg3, cbMultiByte, lpWideCharStr, 
                    cbMultiByte_1) != 0)
                if (arg5 != 0)
                    if (WideCharToMultiByte(arg2, 0, lpWideCharStr, cbMultiByte_1, arg5, arg6, 
                            nullptr, nullptr) != 0)
                        var_24 = arg5
                else if (var_30 != 0)
                label_491f32:
                    PSTR lpMultiByteStr = sub_48b2bc(1, cbMultiByte_1)
                    var_24 = lpMultiByteStr
                    
                    if (lpMultiByteStr != 0)
                        int32_t eax_14 = WideCharToMultiByte(arg2, 0, lpWideCharStr, cbMultiByte_1, 
                            lpMultiByteStr, cbMultiByte_1, nullptr, nullptr)
                        
                        if (eax_14 == 0)
                            sub_4813df(var_24)
                            var_24 = nullptr
                        else if (cbMultiByte != 0xffffffff)
                            *arg4 = eax_14
                else
                    cbMultiByte_1 = WideCharToMultiByte(arg2, 0, lpWideCharStr, cbMultiByte_1, 
                        nullptr, 0, nullptr, nullptr)
                    
                    if (cbMultiByte_1 != 0)
                        goto label_491f32
            
            sub_489126(lpWideCharStr)
            result = var_24
    else
        result = nullptr

sub_480cd2(eax_1 ^ &__saved_ebp)
return result
