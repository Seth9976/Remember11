// 函数: sub_460b80
// 地址: 0x460b80
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg3 != 0)
    uint32_t edx = *(arg1 + &data_441e64)
    uint32_t eax_1 = arg4 u>> 0x18
    
    if (edx u> eax_1)
        eax_1 = edx
    
    *(arg1 + &data_441e64) = eax_1
    return (arg2 & 0xffffff) | arg4

if ((arg2 & 0xff000000) u< 0x80000000)
    *arg5 = 0

int32_t edx_6 = arg2 u>> 0x17 & 0x1fe
int32_t edi = edx_6

if (edx_6 u>= 0xff)
    edi = 0xff

int32_t esi_1 = *(arg1 + &data_441e64)

if (esi_1 u<= edi)
    esi_1 = edx_6
    
    if (edx_6 u>= 0xff)
        esi_1 = 0xff

*(arg1 + &data_441e64) = esi_1

if (edx_6 u>= 0xff)
    edx_6 = 0xff

return (arg2 & 0xffffff) | edx_6 << 0x18
