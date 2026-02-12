// 函数: sub_496cf9
// 地址: 0x496cf9
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

HANDLE hFile = sub_49350a(arg1)

if (hFile == 0xffffffff)
    *__errno() = 9
    return 0xffffffff

uint32_t result = SetFilePointer(hFile, arg2, nullptr, arg3)
enum WIN32_ERROR eax_2

if (result != 0xffffffff)
    eax_2 = NO_ERROR
else
    eax_2 = GetLastError()

if (eax_2 != NO_ERROR)
    sub_48508b(eax_2)
    return 0xffffffff

char* eax_7 = (&data_2b6a8a0)[arg1 s>> 5] + (arg1 & 0x1f) * 0x38 + 4
*eax_7 &= 0xfd
return result
