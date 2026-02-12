// 函数: sub_47a2b0
// 地址: 0x47a2b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edi = *(arg1 + 0x68)

if (edi != 0)
    int32_t* eax_1 = *(arg1 + 0x18)
    (*(*eax_1 + 0x18))(eax_1, edi)
    *(arg1 + 0x68) = 0

ResetEvent(*(arg1 + 0x54))
int32_t result
result.b = edi == 0
return result
