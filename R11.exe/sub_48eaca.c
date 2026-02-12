// 函数: sub_48eaca
// 地址: 0x48eaca
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sub_488ba7()
bool cond:0 = data_c7b3bc != 0
int32_t var_8 = 0
int32_t var_10 = 0
int32_t var_14 = 0

if (cond:0)
label_48eba0:
    int32_t eax_12 = data_c7b3c8
    
    if (eax_12 == eax || data_c7b3cc == eax)
    label_48ec25:
        int32_t eax_18 = data_c7b3c0
        
        if (eax_18 != eax)
            int32_t eax_19 = sub_488bb0(eax_18)
            
            if (eax_19 != 0)
                int32_t eax_20 = eax_19()
                var_8 = eax_20
                
                if (eax_20 != 0)
                    int32_t eax_21 = data_c7b3c4
                    
                    if (eax_21 != eax)
                        int32_t eax_22 = sub_488bb0(eax_21)
                        
                        if (eax_22 != 0)
                            var_8 = eax_22(var_8)
    else
        int32_t eax_13 = sub_488bb0(eax_12)
        int32_t eax_14 = sub_488bb0(data_c7b3cc)
        
        if (eax_13 == 0 || eax_14 == 0)
            goto label_48ec25
        
        int32_t eax_15 = eax_13()
        int32_t eax_16
        void var_24
        void var_18
        
        if (eax_15 != 0)
            eax_16 = eax_14(eax_15, 1, &var_24, 0xc, &var_18)
        char var_1c
        
        if (eax_15 != 0 && eax_16 != 0 && (var_1c & 1) != 0)
            goto label_48ec25
        
        if (sub_482b1f(&var_14) != 0)
            int32_t var_44_3
            __builtin_memset(&var_44_3, 0, 0x14)
            sub_481c1f()
            noreturn
        
        if (var_14 u< 4)
            arg3 |= 0x40000
        else
            arg3 |= 0x200000
    
    int32_t eax_24 = sub_488bb0(data_c7b3bc)
    
    if (eax_24 != 0)
        return eax_24(var_8, arg1, arg2, arg3)
else
    HMODULE hModule = LoadLibraryA("USER32.DLL")
    
    if (hModule != 0)
        int32_t eax_1 = GetProcAddress(hModule, "MessageBoxA")
        
        if (eax_1 != 0)
            data_c7b3bc = sub_488b39(eax_1)
            data_c7b3c0 = sub_488b39(GetProcAddress(hModule, "GetActiveWindow"))
            data_c7b3c4 = sub_488b39(GetProcAddress(hModule, "GetLastActivePopup"))
            
            if (sub_482ae8(&var_10) != 0)
                int32_t var_44_1
                __builtin_memset(&var_44_1, 0, 0x14)
                sub_481c1f()
                noreturn
            
            if (var_10 == 2)
                int32_t eax_9 = sub_488b39(GetProcAddress(hModule, "GetUserObjectInformationA"))
                data_c7b3cc = eax_9
                
                if (eax_9 != 0)
                    data_c7b3c8 = sub_488b39(GetProcAddress(hModule, "GetProcessWindowStation"))
            
            goto label_48eba0

return 0
