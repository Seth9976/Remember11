// 函数: sub_447c60
// 地址: 0x447c60
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

SYSTEMTIME systemTime
GetLocalTime(&systemTime)
uint32_t wYear = zx.d(systemTime.wYear)
*arg1 = 0
arg1[1] = 0
int32_t ecx_2 = wYear s/ 0xa
uint32_t wMonth = zx.d(systemTime.wMonth)
*(arg1 + 7) = ((mods.dp.d(sx.q(ecx_2), 0xa)).b << 4) - muls.dp.b(ecx_2.b, 0xa) + wYear.b
int32_t ecx_5 = wMonth s/ 0xa
uint32_t wDay = zx.d(systemTime.wDay)
*(arg1 + 6) = ((mods.dp.d(sx.q(ecx_5), 0xa)).b << 4) - muls.dp.b(ecx_5.b, 0xa) + wMonth.b
int32_t ecx_8 = wDay s/ 0xa
uint32_t wHour = zx.d(systemTime.wHour)
*(arg1 + 5) = ((mods.dp.d(sx.q(ecx_8), 0xa)).b << 4) - muls.dp.b(ecx_8.b, 0xa) + wDay.b
int32_t ecx_11 = wHour s/ 0xa
uint32_t wMinute = zx.d(systemTime.wMinute)
*(arg1 + 3) = ((mods.dp.d(sx.q(ecx_11), 0xa)).b << 4) - muls.dp.b(ecx_11.b, 0xa) + wHour.b
int32_t ecx_14 = wMinute s/ 0xa
uint32_t wSecond = zx.d(systemTime.wSecond)
*(arg1 + 2) = ((mods.dp.d(sx.q(ecx_14), 0xa)).b << 4) - muls.dp.b(ecx_14.b, 0xa) + wMinute.b
int32_t ecx_17 = wSecond s/ 0xa
*(arg1 + 1) = ((mods.dp.d(sx.q(ecx_17), 0xa)).b << 4) - muls.dp.b(ecx_17.b, 0xa) + wSecond.b
return 1
