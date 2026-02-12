// 函数: sub_488fa2
// 地址: 0x488fa2
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

HMODULE hModule = GetModuleHandleA("KERNEL32.DLL")

if (hModule == 0)
    sub_488c8d()
    return 0

data_c7b25c = GetProcAddress(hModule, "FlsAlloc")
data_c7b260 = GetProcAddress(hModule, "FlsGetValue")
data_c7b264 = GetProcAddress(hModule, "FlsSetValue")
int32_t eax_4 = GetProcAddress(hModule, "FlsFree")
bool cond:0 = data_c7b25c == 0
data_c7b268 = eax_4

if (cond:0 || data_c7b260 == 0 || data_c7b264 == 0 || eax_4 == 0)
    data_c7b260 = TlsGetValue
    data_c7b25c = sub_488c1e
    data_c7b264 = TlsSetValue
    data_c7b268 = TlsFree

uint32_t dwTlsIndex = TlsAlloc()
data_4cc74c = dwTlsIndex

if (dwTlsIndex != 0xffffffff && TlsSetValue(dwTlsIndex, data_c7b260) != 0)
    sub_482d0f()
    int32_t eax_6 = sub_488b39(data_c7b25c)
    int32_t var_10_5 = data_c7b260
    data_c7b25c = eax_6
    int32_t eax_7 = sub_488b39(var_10_5)
    int32_t var_14_1 = data_c7b264
    data_c7b260 = eax_7
    int32_t eax_8 = sub_488b39(var_14_1)
    int32_t var_18_1 = data_c7b268
    data_c7b264 = eax_8
    data_c7b268 = sub_488b39(var_18_1)
    
    if (sub_486607() != 0)
        int32_t eax_12 = sub_488bb0(data_c7b25c)(sub_488e18)
        data_4cc748 = eax_12
        
        if (eax_12 != 0xffffffff)
            void* eax_13 = sub_48b2bc(1, 0x214)
            
            if (eax_13 != 0 && sub_488bb0(data_c7b264)(data_4cc748, eax_13) != 0)
                sub_488cca(eax_13, 0)
                uint32_t eax_16 = GetCurrentThreadId()
                *(eax_13 + 4) = 0xffffffff
                *eax_13 = eax_16
                return 1
    
    sub_488c8d()

return 0
