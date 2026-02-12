// 函数: ___initconout
// 地址: 0x4965ef
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

HANDLE result = CreateFileA("CONOUT$", 0x40000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, 
    OPEN_EXISTING, SECURITY_ANONYMOUS, nullptr)
data_4ccb6c = result
return result
