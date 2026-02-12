// 函数: sub_47bff0
// 地址: 0x47bff0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

bool cond:0 = arg1[5] != 2
arg1[0x18] = 0

if (cond:0)
    EnterCriticalSection(&arg1[0x25])
    arg1[0x2c] = 1
    LeaveCriticalSection(&arg1[0x25])
    return 0

int32_t result = (*(*arg1 + 0x7c))()

if (result s< 0)
    return result

EnterCriticalSection(&arg1[0x25])
arg1[0x2c] = 0
LeaveCriticalSection(&arg1[0x25])
return 0
