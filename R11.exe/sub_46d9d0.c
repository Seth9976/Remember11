// 函数: sub_46d9d0
// 地址: 0x46d9d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

bool cond:1 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
int32_t ecx = *(arg1 + 0x1f8)
int32_t edx = *(arg1 + 0x1fc)
*arg2 = *(arg1 + 0x1f4)
int32_t eax_1 = *(arg1 + 0x200)
arg2[1] = ecx
int32_t ecx_1 = *(arg1 + 0x204)
arg2[2] = edx
int32_t edx_1 = *(arg1 + 0x208)
arg2[3] = eax_1
arg2[4] = ecx_1
arg2[5] = edx_1

if (not(cond:1))
    LeaveCriticalSection(&data_c79d54)

return arg2
