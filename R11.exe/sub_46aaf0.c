// 函数: sub_46aaf0
// 地址: 0x46aaf0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg2 == 0)
    return 0x80070057

int32_t eax_1 = _vsnprintf_s(arg1, arg2, arg2 - 1, arg3, arg4)
int32_t result

if (eax_1 s< 0 || eax_1 u> arg2 - 1)
    result = 0x8007007a
    *(arg1 + ((arg2 - 1) << 1)) = 0
else
    result = 0
    
    if (eax_1 == arg2 - 1)
        *(arg1 + ((arg2 - 1) << 1)) = 0
        return 0

return result
