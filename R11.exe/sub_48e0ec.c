// 函数: sub_48e0ec
// 地址: 0x48e0ec
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t distanceToMoveHigh = arg3
int32_t var_c = arg3
distanceToMoveHigh = arg6
HANDLE hFile = sub_49350a(arg4)
uint32_t result

if (hFile != 0xffffffff)
    uint32_t result_1 = SetFilePointer(hFile, arg5, &distanceToMoveHigh, arg7)
    enum WIN32_ERROR eax_3
    
    if (result_1 == 0xffffffff)
        eax_3 = GetLastError()
    
    if (result_1 != 0xffffffff || eax_3 == NO_ERROR)
        char* eax_7 = (&data_2b6a8a0)[arg4 s>> 5] + (arg4 & 0x1f) * 0x38 + 4
        *eax_7 &= 0xfd
        result = result_1
    else
        sub_48508b(eax_3)
        result = 0xffffffff
else
    *__errno() = 9
    result = 0xffffffff

return result
