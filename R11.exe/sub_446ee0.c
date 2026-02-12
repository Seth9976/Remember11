// 函数: sub_446ee0
// 地址: 0x446ee0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

data_c7bbac = arg1
int32_t* esi_2

if (arg1 s< 0)
    esi_2 = arg1 * 0x4c + data_c7b7a4
else if (arg1 s>= data_c7b7a8)
    esi_2 = nullptr
else
    esi_2 = arg1 * 0x4c + data_c7b7a4

if (*esi_2 != 0)
    while (true)
        if (*(esi_2 + 0xe) != 0)
            int16_t eax_5 = *(esi_2 + 0xe)
            
            if (eax_5 s> 0)
                *(esi_2 + 0xe) = eax_5 - 1
        else
            int16_t eax_2 = (*esi_2)(esi_2)
            uint32_t ecx_1 = zx.d(*(esi_2 + 0xd))
            *(esi_2 + 0x12) = eax_2
            
            if (ecx_1 == 0)
                if (eax_2 != 0)
                    int32_t result = sx.d(*(esi_2 + 0x12))
                    *(esi_2 + 0xd) = 3
                    return result
            else if (ecx_1 == 1)
                *(esi_2 + 0xd) = (ecx_1 - 1).b
                
                if (*esi_2 == ecx_1 - 1)
                    break
                
                continue
            else if (ecx_1 == 2)
                sub_446d40(arg1)
        
        return sx.d(*(esi_2 + 0x12))

return 0xffffffff
