// 函数: sub_464fe0
// 地址: 0x464fe0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* var_4_1 = arg1

if (data_c78bc0 == 0)
    return 0x80004005

EnterCriticalSection(arg1 + 4)
int32_t* ecx_1 = *(arg1 + (arg2 << 2) + 0x20)

if (ecx_1 != 0)
    (**ecx_1)(1)
    *(arg1 + (arg2 << 2) + 0x20) = 0

LeaveCriticalSection(arg1 + 4)
int32_t eax_5
int32_t edx_3
edx_3:eax_5 = mulu.dp.d(0xaaaaaaab, *((*(*arg3 + 0x14))() + 8))
EnterCriticalSection(arg1 + 4)
data_c78bc0
(*(*data_c78bc0 + 0x18))(arg1 + (arg2 << 2) + 0x20, arg3, 0x50180, 0, 0, 0, 0, 3, edx_3 u>> 1, 
    *(arg1 + (arg2 << 2) + 0xa0))
LeaveCriticalSection(arg1 + 4)
return 0
