// 函数: sub_442750
// 地址: 0x442750
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edi
edi.w = arg10
*arg1 = arg3
arg1[2] = arg4
uint32_t esi = zx.d(edi.w)
int32_t eax_2
int32_t edx_1
edx_1:eax_2 = sx.q(esi + 0x3f)
int32_t edx_2
edx_2.w = arg9
arg1[4] = edx_2.w
edx_2.w = arg6
arg1[7] = edx_2.w
edx_2.w = arg7
arg1[8] = edx_2.w
*(arg1 + 0x14) = arg2
arg1[1] = ((eax_2 + (edx_1 & 0x3f)) s>> 6).w
*(arg1 + 0x18) = arg5
arg1[3] = arg8
arg1[6] = arg11
*(arg1 + 0x1c) = zx.d(arg12)
uint32_t result = zx.d(arg11)
arg1[5] = edi.w
*(arg1 + 0x24) = esi
*(arg1 + 0x20) = zx.d(arg13)
*(arg1 + 0x28) = result
return result
