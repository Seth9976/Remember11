// 函数: sub_489b53
// 地址: 0x489b53
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_4 = ecx
int32_t var_8 = ecx
int32_t eax = data_c7b378
void* lpMultiByteStr_2 = nullptr
PWSTR esi = nullptr

if (eax != 0)
label_489b9c:
    
    if (eax != 1)
        if (eax == 2 || eax == 0)
            int128_t* penv_1 = GetEnvironmentStrings()
            int128_t* penv = penv_1
            
            if (penv != 0)
                if (*penv != 0)
                    while (true)
                        penv_1 += 1
                        
                        if (*penv_1 == 0)
                            penv_1 += 1
                            
                            if (*penv_1 == 0)
                                break
                
                void* eax_12 = sub_48b27c(penv_1 - penv + 1)
                
                if (eax_12 != 0)
                    sub_480ea0(eax_12, penv, penv_1 - penv + 1)
                    FreeEnvironmentStringsA(penv)
                    return eax_12
                
                FreeEnvironmentStringsA(penv)
        
        return nullptr
else
    esi = GetEnvironmentStringsW()
    
    if (esi == 0)
        if (GetLastError() != ERROR_CALL_NOT_IMPLEMENTED)
            eax = data_c7b378
        else
            eax = 2
            data_c7b378 = 2
        
        goto label_489b9c
    
    data_c7b378 = 1

if (esi == 0)
    esi = GetEnvironmentStringsW()
    
    if (esi == 0)
        return nullptr

PWSTR eax_4 = esi

if (*esi != 0)
    while (true)
        eax_4 = &eax_4[1]
        
        if (*eax_4 == 0)
            eax_4 = &eax_4[1]
            
            if (*eax_4 == 0)
                break

int32_t cbMultiByte =
    WideCharToMultiByte(0, 0, esi, ((eax_4 - esi) s>> 1) + 1, nullptr, 0, nullptr, nullptr)

if (cbMultiByte != 0)
    void* lpMultiByteStr = sub_48b27c(cbMultiByte)
    void* lpMultiByteStr_1 = lpMultiByteStr
    
    if (lpMultiByteStr != 0)
        if (WideCharToMultiByte(0, 0, esi, ((eax_4 - esi) s>> 1) + 1, lpMultiByteStr, cbMultiByte, 
                nullptr, nullptr) == 0)
            sub_4813df(lpMultiByteStr_1)
            lpMultiByteStr_1 = nullptr
        
        lpMultiByteStr_2 = lpMultiByteStr_1

FreeEnvironmentStringsW(esi)
return lpMultiByteStr_2
