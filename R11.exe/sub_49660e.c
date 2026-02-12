// 函数: sub_49660e
// 地址: 0x49660e
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

HANDLE hObject_1 = data_4ccb6c

if (hObject_1 != 0xffffffff && hObject_1 != 0xfffffffe)
    CloseHandle(hObject_1)

BOOL hObject = data_4ccb68

if (hObject != 0xffffffff && hObject != 0xfffffffe)
    return CloseHandle(hObject)

return hObject
