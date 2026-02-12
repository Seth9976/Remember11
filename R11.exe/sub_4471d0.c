// 函数: sub_4471d0
// 地址: 0x4471d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

long double x87_r7_1 = sub_46a5f0(arg1) - fconvert.t(*(arg1 + 0x30))
long double x87_r6 = float.t(*(arg1 + 0x2c))

if (*(arg1 + 0x2c) s< 0)
    x87_r6 = x87_r6 + fconvert.t(4294967296.0)

int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg2)
int16_t x87control
int16_t x87status_1
x87control, x87status_1 = __fldcw_memmem16((zx.d(temp0) | 0xc00).w)
int32_t result
result.q = int.q(x87_r7_1 * fconvert.t(4.2666666666666666) + x87_r6)
*(arg1 + 0x28) = result
int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16(temp0)
return result
