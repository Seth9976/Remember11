// 函数: sub_488bb0
// 地址: 0x488bb0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_4

if (TlsGetValue(data_4cc74c) == 0)
label_488be9:
    HMODULE hModule
    int32_t ecx_1
    hModule, ecx_1 = GetModuleHandleA("KERNEL32.DLL")
    
    if (hModule != 0 && sub_488acd(ecx_1) != 0)
        eax_4 = GetProcAddress(hModule, "DecodePointer")
        goto label_488c0a
else
    int32_t eax_1 = data_4cc748
    
    if (eax_1 == 0xffffffff)
        goto label_488be9
    
    void* eax_3 = TlsGetValue(data_4cc74c)(eax_1)
    
    if (eax_3 == 0)
        goto label_488be9
    
    eax_4 = *(eax_3 + 0x1fc)
label_488c0a:
    
    if (eax_4 != 0)
        return eax_4(arg1)
return arg1
