// 函数: sub_479530
// 地址: 0x479530
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

EnterCriticalSection(&data_c7a9cc)
int32_t* eax = *(arg1 + 0x20)

if (eax != 0)
    (*(*eax + 8))(eax)
    *(arg1 + 0x20) = 0

int32_t* eax_1 = *(arg1 + 0x24)

if (eax_1 != 0)
    (*(*eax_1 + 8))(eax_1)
    *(arg1 + 0x24) = 0

LeaveCriticalSection(&data_c7a9cc)
return 0
