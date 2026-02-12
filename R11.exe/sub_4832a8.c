// 函数: sub_4832a8
// 地址: 0x4832a8
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

__IsNonwritableInCurrentImage(&data_4a5fe4)
void* eax_2 = sub_488d89()

if (eax_2 != 0)
    HANDLE hObject = *(eax_2 + 4)
    
    if (hObject != 0xffffffff)
        CloseHandle(hObject)
    
    sub_488f39(eax_2)

ExitThread(0)
noreturn
