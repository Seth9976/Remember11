// 函数: sub_4795a0
// 地址: 0x4795a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

HANDLE hHandle = *(arg1 + 0x44)
long double x87_r7_1 = fconvert.t(arg3) * fconvert.t(1000.0)
int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg2)
arg3.w = temp0
int16_t x87control
int16_t x87status_1
x87control, x87status_1 = __fldcw_memmem16((zx.d(arg3.w) | 0xc00).w)
uint32_t dwMilliseconds
dwMilliseconds.q = int.q(x87_r7_1)
int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16(arg3.w)
WaitForSingleObject(hHandle, dwMilliseconds)
return 0
