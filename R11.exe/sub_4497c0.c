// 函数: sub_4497c0
// 地址: 0x4497c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(arg3)
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q((eax + 0x3f) s>> 6 & 0x3f)
int32_t eax_7
int32_t edx_1
edx_1:eax_7 = sx.q(zx.d(arg2) & 0xf)
int32_t ebx_1 = eax_4 | eax_7 << 8
*(arg1 + 4) = (edx | edx_1 << 8 | eax_7 u>> 0xffffffe8) << 0x10 | ebx_1 u>> 0xfffffff0
*(arg1 + 8) = 0x4c
*(arg1 + 0xc) = 0
*arg1 = ebx_1 << 0x10
*(arg1 + 0x18) = 0x4e
*(arg1 + 0x1c) = 0
int32_t eax_11
int32_t edx_3
edx_3:eax_11 = sx.q(sub_449490(arg2, arg3, arg4))
int32_t eax_13 = zx.d(arg6) & 0xf

if (arg5 == 0)
    eax_13 |= 0x100

int32_t eax_14
int32_t edx_4
edx_4:eax_14 = sx.q(eax_13)
int32_t eax_17
int32_t edx_6
edx_6:eax_17 = sx.q(arg3 s>> 1)
*(arg1 + 0x10) = eax_11 | eax_14 << 0x18
*(arg1 + 0x14) = edx_3 | edx_4 << 0x18 | eax_14 u>> 0xfffffff8
*(arg1 + 0x28) = 0x18
*(arg1 + 0x2c) = 0
int32_t eax_19
int32_t edx_7
eax_19, edx_7 = __allmul(0x800 - eax_17, sbb.d(0, edx_6, 0x800 u< eax_17), 0x10, 0)
int32_t eax_21
int32_t edx_8
edx_8:eax_21 = sx.q(arg4 s>> 1)
int32_t eax_23
int32_t edx_9
eax_23, edx_9 = __allmul(0x800 - eax_21, sbb.d(0, edx_8, 0x800 u< eax_21), 0, 0x10)
*(arg1 + 0x20) = eax_19 | eax_23
*(arg1 + 0x40) |= 1
*(arg1 + 0x50) |= 1
int32_t eax_26
int32_t edx_10
edx_10:eax_26 = sx.q(sx.d(arg4) - 1)
*(arg1 + 0x24) = edx_7 | edx_9
int32_t eax_29
int32_t edx_11
edx_11:eax_29 = sx.q(eax - 1)
int32_t eax_30 = *(arg1 + 0x54)
int32_t edx_12 = *(arg1 + 0x44)
*(arg1 + 0x38) = 0x40
*(arg1 + 0x3c) = 0
*(arg1 + 0x30) = eax_29 << 0x10
*(arg1 + 0x34) = (eax_26 | edx_11) << 0x10 | eax_29 u>> 0xfffffff0
*(arg1 + 0x48) = 0x1a
*(arg1 + 0x4c) = 0
*(arg1 + 0x44) = edx_12
*(arg1 + 0x58) = 0x46
*(arg1 + 0x5c) = 0
*(arg1 + 0x54) = eax_30
*(arg1 + 0x68) = 0x45
*(arg1 + 0x6c) = 0

if ((arg2 & 2) == 0)
    eax_30 = *(arg1 + 0x64)
    *(arg1 + 0x60) &= 0xfffffffe
    *(arg1 + 0x64) = eax_30
else
    int32_t edx_13 = *(arg1 + 0x64)
    *(arg1 + 0x60) |= 1
    *(arg1 + 0x64) = edx_13

eax_30.w = arg5
*(arg1 + 0x78) = 0x47
*(arg1 + 0x7c) = 0

if (eax_30.w == 0)
    *(arg1 + 0x70) = 0x30000
    *(arg1 + 0x74) = 0
    return 8

int32_t eax_32
int32_t edx_14
edx_14:eax_32 = sx.q(eax_30 & 3)
*(arg1 + 0x70) = eax_32 << 0x11 | 0x10000
*(arg1 + 0x74) = edx_14 << 0x11 | eax_32 u>> 0xfffffff1
return 8
