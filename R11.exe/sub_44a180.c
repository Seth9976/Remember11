// 函数: sub_44a180
// 地址: 0x44a180
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* eax_1 = arg2
**(arg1 + 0x18014) = fconvert.s(float.t(*eax_1))
*(*(arg1 + 0x18014) + 4) = fconvert.s(float.t(eax_1[1]))
*(*(arg1 + 0x18014) + 8) = fconvert.s(float.t(zx.d(eax_1[2].w)) * fconvert.t(1.43612133e-05f))
*(arg1 + 0x18010) += 1
*(arg1 + 0x18014) += 0x18
int32_t result = data_c78890
*(*(arg1 + 0x18014) + 0xc) = result
return result
