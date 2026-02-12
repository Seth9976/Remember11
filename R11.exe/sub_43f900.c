// 函数: sub_43f900
// 地址: 0x43f900
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t esi = arg3
int32_t eax = esi << 2
long double x87_r7 = float.t(eax)

if (eax s< 0)
    x87_r7 = x87_r7 + fconvert.t(4.2949673e+09f)

long double x87_r7_2 = x87_r7 + fconvert.t(0.5f) + fconvert.t(3f)
int32_t eax_1 = sub_480df0(x87_r7_2)
int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg1)
arg3.w = temp0
*arg2 = eax_1 + 0x20000000
arg2[1] = 0
int16_t x87control
int16_t x87status_1
x87control, x87status_1 = __fldcw_memmem16((zx.d(arg3.w) | 0xc00).w)
arg2[2] = 0
arg2[3] = (int.q(x87_r7_2)).d | 0x50000000
int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16(arg3.w)
arg2[4] = 1
arg2[5] = 0x10aa4000
arg2[6] = 0xfffffffe
arg2[7] = 0xffffffff
arg2[8] = 0
arg2[9] = 0
arg2[0xb] = 0
arg2[0xa] = 0xf
arg2[0xc] = esi | 0x8000
arg2[0xd] = 0x84000000
arg2[0xe] = 0x4343c3c3
arg2[0xf] = 0xffffffff
return eax_1 + 1
