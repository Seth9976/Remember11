// 函数: sub_449ca0
// 地址: 0x449ca0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_3
int32_t edx
edx:eax_3 = sx.q(arg3 s>> 6 & 0x3f)
int32_t eax_6
int32_t edx_1
edx_1:eax_6 = sx.q(zx.d(arg2) & 0xf)
int32_t ebx_1 = eax_3 | eax_6 << 8
*arg1 = ebx_1 << 0x10
int16_t ebx_3 = arg4.w
arg1[2] = 0x4d
arg1[3] = 0
arg1[1] = (edx | edx_1 << 8 | eax_6 u>> 0xffffffe8) << 0x10 | ebx_1 u>> 0xfffffff0
arg1[6] = 0x4f
arg1[7] = 0
int32_t eax_10
int32_t edx_3
edx_3:eax_10 = sx.q(sub_449490(arg2, arg3.w, ebx_3))
int32_t eax_12 = zx.d(arg6) & 0xf

if (arg5 == 0)
    eax_12 |= 0x100

int32_t eax_13
int32_t edx_4
edx_4:eax_13 = sx.q(eax_12)
int32_t edx_5
edx_5.w = arg3.w
edx_5.w s>>= 1
int32_t eax_16
int32_t edx_6
edx_6:eax_16 = sx.q(edx_5.w)
arg1[4] = eax_10 | eax_13 << 0x18
arg1[5] = edx_3 | edx_4 << 0x18 | eax_13 u>> 0xfffffff8
arg1[0xa] = 0x19
arg1[0xb] = 0
int32_t eax_18
int32_t* edx_7
eax_18, edx_7 = __allmul(0x800 - eax_16, sbb.d(0, edx_6, 0x800 u< eax_16), 0x10, 0)
int32_t eax_21
int32_t edx_8
edx_8:eax_21 = sx.q(ebx_3 s>> 1)
int32_t eax_23
int32_t edx_9
eax_23, edx_9 = __allmul(0x800 - eax_21, sbb.d(0, edx_8, 0x800 u< eax_21), 0, 0x10)
arg1[9] = edx_7 | edx_9
arg1[0x10] |= 1
arg1[0x14] |= 1
int32_t eax_28
int32_t edx_10
edx_10:eax_28 = sx.q(sx.d(arg4.w) - 1)
int32_t eax_31
int32_t edx_11
edx_11:eax_31 = sx.q(sx.d(arg3.w) - 1)
arg1[8] = eax_18 | eax_23
int32_t edx_12 = arg1[0x11]
arg1[0xd] = (eax_28 | edx_11) << 0x10 | eax_31 u>> 0xfffffff0
int32_t eax_35 = arg1[0x15]
arg1[0xe] = 0x41
arg1[0xf] = 0
arg1[0xc] = eax_31 << 0x10
arg1[0x12] = 0x1a
arg1[0x13] = 0
arg1[0x11] = edx_12
arg1[0x16] = 0x46
arg1[0x17] = 0
arg1[0x15] = eax_35
arg1[0x1a] = 0x45
arg1[0x1b] = 0

if ((arg2 & 2) == 0)
    eax_35 = arg1[0x19]
    arg1[0x18] &= 0xfffffffe
    arg1[0x19] = eax_35
else
    int32_t edx_13 = arg1[0x19]
    arg1[0x18] |= 1
    arg1[0x19] = edx_13

eax_35.w = arg5
arg1[0x1e] = 0x48
arg1[0x1f] = 0

if (eax_35.w == 0)
    arg1[0x1c] = 0x30000
    arg1[0x1d] = 0
    return 8

int32_t eax_37
int32_t edx_14
edx_14:eax_37 = sx.q(eax_35 & 3)
arg1[0x1c] = eax_37 << 0x11 | 0x10000
arg1[0x1d] = edx_14 << 0x11 | eax_37 u>> 0xfffffff1
return 8
