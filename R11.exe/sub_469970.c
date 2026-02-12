// 函数: sub_469970
// 地址: 0x469970
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

sub_469640(arg1)
*(arg1 + 0x28) = arg2
*(arg1 + 0x2c) = 0
int32_t result
int32_t ecx_1
int32_t edx
result, ecx_1, edx = sub_4698b0(0x20)
bool cond:0 = *(arg1 + 0x28) != 0
*(arg1 + 0x30) = result.b

if (not(cond:0))
    result, ecx_1 = sub_4694f0(arg1, *(arg1 + 8) | 4, 0)

if (arg3 != 0)
    return sub_49779e(result, edx, ecx_1, arg1)

*(arg1 + 4) = 0
return result
