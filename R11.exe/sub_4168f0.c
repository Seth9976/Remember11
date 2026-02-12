// 函数: sub_4168f0
// 地址: 0x4168f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* result = arg1 * 0x104 + data_e7e648 + 0x1f5dc
*(result + 0x34) = arg2
int32_t ecx_2 = arg2 - *(result + 0x1c)
bool cond:0 = arg2 == *(result + 0x1c)
int32_t esi = arg4
*(result + 0x38) = arg3

if (cond:0)
    *(result + 0x6c) = 0
else if (ecx_2 s<= 0)
    *(result + 0x6c) = neg.d(esi)
else
    *(result + 0x6c) = esi

if (arg3 == *(result + 0x20))
    *(result + 0x70) = 0
    return result

if (arg3 - *(result + 0x20) s<= 0)
    esi = neg.d(esi)

*(result + 0x70) = esi
return result
