// 函数: sub_47f020
// 地址: 0x47f020
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* ebp = arg5

if (ebp == 0)
    return 0x80004003

*ebp = 0

if (arg3 != 0)
    return 0x8002802b

if (*arg1 == 0)
    HMODULE hModule = sub_47c990()
    
    if (hModule == 0)
        return GetLastError() | 0x80070000
    
    int32_t eax_3 = GetProcAddress(hModule, "LoadRegTypeLib")
    
    if (eax_3 == 0)
        return GetLastError() | 0x80070000
    
    if (eax_3(0x4a5d84, 1, 0, arg4, &arg5) s< 0)
        int32_t eax_5 = GetProcAddress(hModule, "LoadTypeLib")
        
        if (eax_5 == 0)
            return GetLastError() | 0x80070000
        
        int32_t eax_8 = eax_5(u"control.tlb", &arg5)
        
        if (eax_8 s< 0)
            return eax_8
    
    int32_t* eax_9 = arg5
    int32_t eax_10 = (*(*eax_9 + 0x18))(eax_9, arg2, arg1)
    int32_t* eax_11 = arg5
    (*(*eax_11 + 8))(eax_11)
    
    if (eax_10 s< 0)
        return eax_10

*ebp = *arg1
int32_t* eax_14 = *arg1
(*(*eax_14 + 4))(eax_14)
return 0
