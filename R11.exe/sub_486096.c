// 函数: sub_486096
// 地址: 0x486096
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

HMODULE hModule = GetModuleHandleA("KERNEL32")

if (hModule != 0)
    int32_t eax = GetProcAddress(hModule, "IsProcessorFeaturePresent")
    
    if (eax != 0)
        return eax(0)

return sub_48605a() __tailcall
