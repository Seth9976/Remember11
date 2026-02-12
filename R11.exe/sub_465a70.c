// 函数: sub_465a70
// 地址: 0x465a70
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

BOOL hObject = arg1[1]
*arg1 = &CFile::`vftable'

if (hObject != 0)
    hObject = CloseHandle(hObject)
    arg1[1] = 0

return hObject
