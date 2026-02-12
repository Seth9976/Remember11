// 函数: sub_4015f0
// 地址: 0x4015f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(arg1)
int32_t ecx = arg1 & 0x80000007

if (ecx s< 0)
    ecx = ((ecx - 1) | 0xfffffff8) + 1

return zx.d(*(((eax_1 + (edx & 7)) s>> 3) + 0x2b60324)) u>> ecx.b & 1
