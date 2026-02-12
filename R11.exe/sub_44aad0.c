// 函数: sub_44aad0
// 地址: 0x44aad0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ebx = arg2

if (*(arg1 + 0x14) u< ebx)
    sub_4971f7()
    noreturn

void* edi = arg3
void* eax_1 = *(arg1 + 0x14) - ebx

if (eax_1 u< edi)
    edi = eax_1

if (edi u> 0)
    int32_t ecx = *(arg1 + 0x18)
    void* ebp_1 = arg1 + 4
    
    if (ecx u< 0x10)
        arg2 = ebp_1
    else
        arg2 = *ebp_1
    
    void* edx_2
    
    if (ecx u< 0x10)
        edx_2 = ebp_1
    else
        edx_2 = *ebp_1
    
    sub_481dca(edx_2 + ebx, ecx - ebx, arg2 + ebx + edi, eax_1 - edi)
    char* eax_7 = *(arg1 + 0x14) - edi
    bool cond:2_1 = *(arg1 + 0x18) u< 0x10
    *(arg1 + 0x14) = eax_7
    
    if (not(cond:2_1))
        ebp_1 = *ebp_1
    
    *(eax_7 + ebp_1) = 0

return arg1
