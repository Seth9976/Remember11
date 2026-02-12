// 函数: sub_446a00
// 地址: 0x446a00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* const result

if (arg1 s< 0)
    result = data_c7bbac * 0x4c + data_c7b7a4
else if (arg1 s>= data_c7b7a8)
    result = nullptr
else
    result = arg1 * 0x4c + data_c7b7a4

if (*(result + 0xd) != 3)
    uint32_t ecx_1 = zx.d(*(result + 0xc))
    int16_t edx_1 = (*((ecx_1 << 2) + &data_c7b7ac)).w
    *((ecx_1 << 2) + &data_c7b7ac) = arg1
    *(result + 0xa) = edx_1
    data_c7bbb0 += 1
    void* const esi_3
    
    for (int32_t i = sx.d(*(result + 8)); i != 0xffffffff; i = sx.d(*(esi_3 + 6)))
        result = sub_446a00(i)
        
        if (i s< 0)
            esi_3 = data_c7bbac * 0x4c + data_c7b7a4
        else if (i s>= data_c7b7a8)
            esi_3 = nullptr
        else
            esi_3 = i * 0x4c + data_c7b7a4
    
    data_c7bbb0 -= 1

return result
