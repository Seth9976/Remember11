// 函数: sub_46abb0
// 地址: 0x46abb0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void libFileName
int32_t var_4 = __security_cookie ^ &libFileName

if (data_c79d04 == 0)
    uint32_t __saved_esi_1 = 0x105
    void* var_218 = &libFileName
    uint32_t hModule
    
    if (GetSystemDirectoryW(var_218, __saved_esi_1) == 0)
    label_46abe5:
        hModule.b = 0
        sub_480cd2(var_4 ^ &libFileName)
        return hModule
    
    int32_t i_1 = 0x104
    void* eax_2 = &libFileName
    int32_t i
    
    do
        if (*eax_2 == 0)
            if (i_1 != 0)
                int16_t* __saved_esi_2 = u"\d3d9.dll"
                var_218 = 0x104 * 0 + i_1
                sub_46aa90(&var_218 + ((0x104 - i_1) << 1) + 8, var_218, __saved_esi_2)
            
            break
        
        eax_2 += 2
        i = i_1
        i_1 -= 1
    while (i != 1)
    hModule = LoadLibraryW(&libFileName)
    data_c79d04 = hModule
    
    if (hModule == 0)
        goto label_46abe5
    
    var_218 = "Direct3DCreate9"
    int32_t eax_4 = GetProcAddress(hModule, var_218)
    HMODULE hModule_3 = data_c79d04
    var_218 = "D3DPERF_BeginEvent"
    data_c79d08 = eax_4
    int32_t eax_5 = GetProcAddress(hModule_3, var_218)
    HMODULE hModule_6 = data_c79d04
    var_218 = "D3DPERF_EndEvent"
    data_c79d0c = eax_5
    data_c79d10 = GetProcAddress(hModule_6, var_218)
    HMODULE hModule_1 = data_c79d04
    var_218 = "D3DPERF_SetMarker"
    int32_t eax_7 = GetProcAddress(hModule_1, var_218)
    HMODULE hModule_4 = data_c79d04
    var_218 = "D3DPERF_SetRegion"
    data_c79d14 = eax_7
    int32_t eax_8 = GetProcAddress(hModule_4, var_218)
    HMODULE hModule_7 = data_c79d04
    var_218 = "D3DPERF_QueryRepeatFrame"
    data_c79d18 = eax_8
    data_c79d1c = GetProcAddress(hModule_7, var_218)
    HMODULE hModule_2 = data_c79d04
    var_218 = "D3DPERF_SetOptions"
    int32_t eax_10 = GetProcAddress(hModule_2, var_218)
    HMODULE hModule_5 = data_c79d04
    var_218 = "D3DPERF_GetStatus"
    data_c79d20 = eax_10
    data_c79d24 = GetProcAddress(hModule_5, var_218)

int32_t eax_1
eax_1.b = 1
sub_480cd2(var_4 ^ &libFileName)
return eax_1
