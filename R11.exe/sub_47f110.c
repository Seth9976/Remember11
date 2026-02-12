// 函数: sub_47f110
// 地址: 0x47f110
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* ebp = nullptr
int32_t __saved_ecx

if (&__saved_ecx == 0)
    return 0x80004003

int32_t* ebx = arg1

if (*ebx != 0)
    ebp = *ebx
    (*(*ebp + 4))(ebp)
else
    HMODULE hModule = sub_47c990()
    int32_t eax_5
    
    if (hModule == 0)
    label_47f1be:
        eax_5 = GetLastError() | 0x80070000
    label_47f1c3:
        
        if (eax_5 s< 0)
            return eax_5
    else
        int32_t eax_2 = GetProcAddress(hModule, "LoadRegTypeLib")
        
        if (eax_2 == 0)
            goto label_47f1be
        
        if (eax_2(0x4a5d84, 1, 0, arg5, &arg1) s< 0)
            int32_t eax_4 = GetProcAddress(hModule, "LoadTypeLib")
            
            if (eax_4 == 0)
                goto label_47f1be
            
            eax_5 = eax_4(u"control.tlb", &arg1)
            
            if (eax_5 s< 0)
                return eax_5
        
        int32_t* eax_6 = arg1
        int32_t eax_7 = (*(*eax_6 + 0x18))(eax_6, arg2, ebx)
        int32_t* eax_8 = arg1
        (*(*eax_8 + 8))(eax_8)
        
        if (eax_7 s< 0)
            eax_5 = eax_7
            goto label_47f1c3
        
        ebp = *ebx
        (*(*ebp + 4))(ebp)

int32_t eax_13 = (*(*ebp + 0x28))(ebp, arg3, arg4, arg6)
(*(*ebp + 8))(ebp)
return eax_13
