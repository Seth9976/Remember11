// 函数: sub_447d90
// 地址: 0x447d90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(zx.d(arg10))
int32_t eax_2 = eax_1 | 0x80000000
int32_t eax_5
int32_t edx_3
edx_3:eax_5 = sx.q(zx.d(arg9))
int32_t esi_1 = eax_2 << 8 | eax_5
int32_t eax_7
int32_t edx_4
edx_4:eax_7 = sx.q(zx.d(arg8))
int32_t esi_3 = esi_1 << 8 | eax_7
int32_t eax_9
int32_t edx_5
edx_5:eax_9 = sx.q(zx.d(arg7))
int32_t eax_12
int32_t edx_6
edx_6:eax_12 = sx.q(sx.d(arg4) << 4)
arg1[9] =
    (((edx | 0x3f) << 8 | eax_2 u>> 0xffffffe8 | edx_3) << 8 | esi_1 u>> 0xffffffe8 | edx_4) << 8
    | esi_3 u>> 0xffffffe8 | edx_5
arg1[8] = esi_3 << 8 | eax_9
int32_t ebx_6 = arg11 u>> 0xfffffff0
int32_t esi_7 = arg11 << 0x10
int32_t eax_13 = eax_12 | esi_7
arg10.d = (edx_6 | ebx_6) << 0x10 | eax_13 u>> 0xfffffff0
int32_t eax_18
int32_t edx_9
edx_9:eax_18 = sx.q(sx.d(arg3) << 4)
arg1[0xd] = arg10.d | edx_9
int32_t eax_24
int32_t edx_11
edx_11:eax_24 = sx.q((sx.d(arg6) + sx.d(arg4)) << 4)
int32_t eax_25 = eax_24 | esi_7
arg1[0xc] = eax_13 << 0x10 | eax_18
arg1[2] = 0x47
arg1[3] = 0
*arg1 = 0x30000
arg1[1] = 0
arg1[6] = 0
arg1[7] = 0
arg1[4] = 6
arg1[5] = 0
arg1[0xa] = 1
arg1[0xb] = 0
arg1[0xe] = 5
arg1[0xf] = 0
arg1[0x12] = 5
arg1[0x13] = 0
int32_t eax_30
int32_t edx_15
edx_15:eax_30 = sx.q((sx.d(arg5) + sx.d(arg3)) << 4)
int32_t esi_9 = eax_25 << 0x10 | eax_30
eax_30.w = arg2
arg1[0x10] = esi_9
arg1[0x11] = (edx_11 | ebx_6) << 0x10 | eax_25 u>> 0xfffffff0 | edx_15
arg1[0x16] = 0x47
arg1[0x17] = 0

if (eax_30.w == 0)
    arg1[0x15] = 0
    arg1[0x14] = 0x30000
    return 6

int32_t eax_32
int32_t edx_16
edx_16:eax_32 = sx.q(eax_30 & 3)
arg1[0x14] = eax_32 << 0x11 | 0x10000
arg1[0x15] = edx_16 << 0x11 | eax_32 u>> 0xfffffff1
return 6
