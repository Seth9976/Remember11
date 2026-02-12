// 函数: sub_4020c0
// 地址: 0x4020c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx = arg1 & 0xfff
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ecx)
int32_t ecx_1 = ecx & 0x80000007

if (ecx_1 s< 0)
    ecx_1 = ((ecx_1 - 1) | 0xfffffff8) + 1

return zx.d(*(((eax_1 + (edx & 7)) s>> 3) + 0x2b5aaf1)) u>> ecx_1.b & 1
