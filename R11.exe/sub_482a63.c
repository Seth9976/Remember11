// 函数: sub_482a63
// 地址: 0x482a63
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

HMODULE hModule = GetModuleHandleA("mscoree.dll")

if (hModule != 0)
    hModule = GetProcAddress(hModule, "CorExitProcess")
    
    if (hModule != 0)
        return hModule(arg1)

return hModule
