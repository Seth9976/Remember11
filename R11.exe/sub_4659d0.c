// 函数: sub_4659d0
// 地址: 0x4659d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx = *(arg1 + 0x48)
void* edi = arg3
void* eax_1 = *(arg1 + 0x44) - ecx

if (edi u>= eax_1)
    edi = eax_1

if (edi != 0)
    sub_480ea0(arg2, *(arg1 + 0x30) + ecx, edi)

if (arg4 != 0)
    *arg4 = edi

*(arg1 + 0x48) += edi
return arg4
