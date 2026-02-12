// 函数: sub_465d80
// 地址: 0x465d80
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

bool cond:0 = arg1[0x13] == 0
*arg1 = &CMemoryFile::`vftable'{for `CFile'}

if (not(cond:0))
    void* eax_1 = arg1[0xc]
    
    if (eax_1 != 0)
        j_sub_4813df(eax_1)
        arg1[0xc] = 0

void* eax_2 = arg1[0xe]

if (eax_2 != 0)
    j_sub_4813df(eax_2)

arg1[0xe] = 0
arg1[0xf] = 0
arg1[0x10] = 0
BOOL hObject = arg1[1]
*arg1 = &CFile::`vftable'

if (hObject != 0)
    hObject = CloseHandle(hObject)
    arg1[1] = 0

return hObject
