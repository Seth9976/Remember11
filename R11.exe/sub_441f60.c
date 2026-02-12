// 函数: sub_441f60
// 地址: 0x441f60
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* result = arg2

if (*result == 0)
    uint32_t ecx_2 = zx.d(result[1]) u>> 4
    
    if (ecx_2 == 4)
        result = not.d(zx.d(*(result + 2)) | 0xffff0000)
        *(arg1 + 4) |= result
    else if (ecx_2 == 7)
        *(arg1 + 4) |= not.d(zx.d(*(result + 2)) | 0xffff0000)
        *(arg1 + 0x1c) = zx.d(result[4])
        *(arg1 + 0x20) = zx.d(result[5])
        *(arg1 + 0x24) = zx.d(result[6])
        *(arg1 + 0x28) = zx.d(result[7])
        
        if (result[6] u< 0x40)
            *(arg1 + 4) |= 0x800000
        
        if (result[6] u> 0xc0)
            *(arg1 + 4) |= 0x200000
        
        if (result[7] u< 0x40)
            *(arg1 + 4) |= 0x100000
        
        if (result[7] u> 0xc0)
            *(arg1 + 4) |= &__dos_header
        
        if (result[4] u< 0x40)
            *(arg1 + 4) |= 0x80000000
        
        if (result[4] u> 0xc0)
            *(arg1 + 4) |= 0x20000000
        
        if (result[5] u< 0x40)
            *(arg1 + 4) |= 0x10000000
        
        if (result[5] u> 0xc0)
            *(arg1 + 4) |= 0x40000000

return result
