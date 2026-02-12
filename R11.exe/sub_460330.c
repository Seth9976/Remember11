// 函数: sub_460330
// 地址: 0x460330
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

sub_4602b0(arg1)
arg1[0x22] = arg2
int32_t edx = data_c78798
int32_t eax_3 = edx & 0x200

if (eax_3 != 0)
    eax_3 = 1

arg1[4] = edx
arg1[5] = data_c7879c
arg1[2] = (&data_c787a0)[eax_3 * 2]
arg1[3] = (&data_c787a4)[eax_3 * 2]
*arg1 = (&data_c787b0)[eax_3 * 2]
arg1[1] = (&data_c787b4)[eax_3 * 2]
arg1[8] = *((eax_3 << 3) + &data_c787e0)
arg1[9] = *((eax_3 << 3) + &data_c787e4)
arg1[0xa] = (&data_c787f0)[eax_3 * 2]
arg1[0xb] = (&data_c787f4)[eax_3 * 2]
arg1[0xc] = (&data_c78800)[eax_3 * 2]
arg1[0xd] = (&data_c78804)[eax_3 * 2]
arg1[0xe] = (&data_c78810)[eax_3 * 2]
arg1[0xf] = (&data_c78814)[eax_3 * 2]
arg1[0x10] = (&data_c78820)[eax_3 * 2]
arg1[0x11] = (&data_c78824)[eax_3 * 2]
arg1[0x12] = (&data_c78830)[eax_3 * 2]
arg1[0x13] = (&data_c78834)[eax_3 * 2]
arg1[0x14] = (&data_c78840)[eax_3 * 2]
arg1[0x15] = (&data_c78844)[eax_3 * 2]
arg1[0x16] = (&data_c78850)[eax_3 * 2]
arg1[0x17] = (&data_c78854)[eax_3 * 2]
arg1[0x18] = data_c78888
int32_t eax_5 = data_c7888c
int32_t edx_22 = arg1[3]
arg1[0xc] &= 0xff0001ff
arg1[0xc] &= 0xfffffff
arg1[0x10] &= 0xffff01ff
arg1[0x10] &= 0xff3fffff
arg1[4] &= 0x7ff
arg1[0xb] &= 0xfff
arg1[0xe] &= 0x7ffff
arg1[0x10] &= 0x3fffffff
arg1[3] = edx_22
arg1[0x19] = eax_5
arg1[2] &= 0xff
int32_t edx_23 = arg1[2]
arg1[3] &= 0xff
arg1[2] = edx_23
arg1[0xa] = arg1[0xa]
arg1[0xd] = arg1[0xd]
int32_t edx_26 = arg1[0xc]
arg1[0xd] &= 1
arg1[0xc] = edx_26
arg1[0x11] = arg1[0x11]
int32_t edx_28 = arg1[0x15]
arg1[0x14] &= 0xffff07ff
arg1[0x15] = edx_28
arg1[0x14] &= 0x7ffffff
arg1[5] = 0
arg1[0xf] = 0
*(arg1 + 0x4a) = 0
*(arg1 + 0x4e) = 0
int32_t ebp = arg1[0x15]
arg1[0x18] &= 0xffff80ff
arg1[0x16] &= 1
arg1[0x15] = ebp
int32_t ebp_1 = arg1[0x14]
arg1[0x15] &= 0xffff07ff
arg1[0x15] &= 0x7ffffff
int32_t edx_29 = arg1[0x19]
*(arg1 + 0x62) = 0
arg1[0x17] = 0
int32_t ecx = arg1[0x18]
arg1[0x14] = ebp_1
arg1[0x19] = edx_29
arg1[0x19] &= 0xff
arg1[0x18] = ecx
return 0xff
