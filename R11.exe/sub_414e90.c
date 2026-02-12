// 函数: sub_414e90
// 地址: 0x414e90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t eax_9 = zx.d(arg1)
int32_t ecx_1 = eax_9 & 0xc000

if (ecx_1 == 0x4000)
    int32_t ecx_6 = eax_9 & 0x2000
    
    if (ecx_6 == 0)
        return *(data_2b55ea0 + ((eax_9 & 0x1fff) << 2))
    
    if (ecx_6 == 0x2000)
        return *(data_2b55eb0 + ((eax_9 & 0x1fff) << 2))
else if (ecx_1 == 0x8000)
    int32_t ecx_3 = eax_9 & 0x2000
    
    if (ecx_3 == 0)
        return *(data_2b55e98 + ((eax_9 & 0x1fff) << 2))
    
    if (ecx_3 == 0x2000)
        return *(data_2b55ea8 + ((eax_9 & 0x1fff) << 2))

return 0
