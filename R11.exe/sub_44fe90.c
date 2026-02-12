// 函数: sub_44fe90
// 地址: 0x44fe90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

HANDLE hFindFile = *arg1

if (hFindFile != 0)
    if (arg1[1] != 0)
        arg1[1] = 0
        *arg2 = &arg1[2]
        return 0
    
    if (FindNextFileW(hFindFile, &arg1[2]) != 0)
        *arg2 = &arg1[2]
        return 0
    
    if (GetLastError() != ERROR_NO_MORE_FILES)
        if (data_4ca19c != 1)
            *arg2 = &arg1[2]
            return 0
        
        sub_464790(".\libmc.cpp", 0x3c)
        data_4ca19c = 0
        *arg2 = &arg1[2]
        return 0

return 0x80004005
