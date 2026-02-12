// 函数: sub_46cd00
// 地址: 0x46cd00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (data_c79d88 != 0)
    int32_t result
    result.b = data_c79d7c != 0
    return result

data_c79d8c = sub_46cca0()
HMODULE hModule = GetModuleHandleW(u"USER32")

if (hModule != 0)
    int32_t eax_1 = GetProcAddress(hModule, "GetSystemMetrics")
    data_c79d6c = eax_1
    
    if (eax_1 != 0)
        int32_t eax_2 = GetProcAddress(hModule, "MonitorFromWindow")
        data_c79d70 = eax_2
        
        if (eax_2 != 0)
            int32_t eax_3 = GetProcAddress(hModule, "MonitorFromRect")
            data_c79d74 = eax_3
            
            if (eax_3 != 0)
                int32_t eax_4 = GetProcAddress(hModule, "MonitorFromPoint")
                data_c79d78 = eax_4
                
                if (eax_4 != 0)
                    int32_t eax_5 = GetProcAddress(hModule, "EnumDisplayMonitors")
                    data_c79d80 = eax_5
                    
                    if (eax_5 != 0)
                        int32_t eax_6 = GetProcAddress(hModule, "EnumDisplayDevicesW")
                        data_c79d84 = eax_6
                        
                        if (eax_6 != 0)
                            PSTR lpProcName
                            
                            if (data_c79d8c == 0)
                                lpProcName = "GetMonitorInfoA"
                            else
                                lpProcName = "GetMonitorInfoW"
                            
                            int32_t eax_7 = GetProcAddress(hModule, lpProcName)
                            data_c79d7c = eax_7
                            
                            if (eax_7 != 0)
                                data_c79d88 = 1
                                return 1

__builtin_memset(&data_c79d6c, 0, 0x1c)
data_c79d88 = 1
return 0
