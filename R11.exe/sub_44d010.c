// 函数: sub_44d010
// 地址: 0x44d010
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

while (true)
    HANDLE hHandle = data_c777f0
    enum WAIT_EVENT eax_1
    
    if (hHandle != 0)
        eax_1 = WaitForSingleObject(hHandle, 0)
    
    if (hHandle == 0 || eax_1 != WAIT_TIMEOUT)
        data_c777f0 = 0
        return DeleteCriticalSection(&data_c777f4)
    
    Sleep(1)
