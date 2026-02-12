// 函数: sub_449490
// 地址: 0x449490
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(sx.d(arg2) + 0x3f)
uint32_t ecx = zx.d(((eax_1 + (edx & 0x3f)) s>> 6).w)
int32_t eax_4 = sx.d(arg3)
int16_t eax_8

if ((arg1 & 2) == 0)
    int32_t eax_10
    int32_t edx_4
    edx_4:eax_10 = sx.q(eax_4 + 0x1f)
    eax_8 = ((eax_10 + (edx_4 & 0x1f)) s>> 5).w
else
    int32_t eax_6
    int32_t edx_2
    edx_2:eax_6 = sx.q(eax_4 + 0x3f)
    eax_8 = ((eax_6 + (edx_2 & 0x3f)) s>> 6).w

uint32_t eax_12 = zx.d(eax_8)

if (data_4ca070 == 1 && data_4ca074 == 0)
    return eax_12 * ecx

return eax_12 * ecx * 2
