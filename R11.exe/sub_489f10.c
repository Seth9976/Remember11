// 函数: sub_489f10
// 地址: 0x489f10
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t __security_cookie_1 = __security_cookie
FILETIME systemTimeAsFileTime
__builtin_memset(&systemTimeAsFileTime, 0, 8)
uint32_t result

if (__security_cookie_1 == 0xbb40e64e || (0xffff0000 & __security_cookie_1) == 0)
    GetSystemTimeAsFileTime(&systemTimeAsFileTime)
    uint32_t esi_5 = systemTimeAsFileTime.dwHighDateTime ^ systemTimeAsFileTime.dwLowDateTime
        ^ GetCurrentProcessId() ^ GetCurrentThreadId() ^ GetTickCount()
    int32_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int32_t var_10
    result = var_10 ^ performanceCount
    uint32_t esi_6 = esi_5 ^ result
    
    if (esi_6 == 0xbb40e64e)
        esi_6 = 0xbb40e64f
    else if ((0xffff0000 & esi_6) == 0)
        result = esi_6 << 0x10
        esi_6 |= result
    
    __security_cookie = esi_6
    data_4cba94 = not.d(esi_6)
else
    result = not.d(__security_cookie_1)
    data_4cba94 = result

return result
