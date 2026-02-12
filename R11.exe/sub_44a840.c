// 函数: sub_44a840
// 地址: 0x44a840
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = *(arg2 + 8)
uint32_t ecx = *(arg2 + 0xc)
void* result = arg3
void* esi_2 = arg2 + 0x10

if (result s> 0)
    arg3 = result
    void* i
    
    do
        result = arg4
        int32_t ebx_1 = eax
        uint32_t ebp_1 = ecx
        
        if (result s> 0)
            arg2 = result
            void* j
            
            do
                result = ebx_1 & 0xf
                
                if (result u> 0xf || result u> 0xf)
                label_44a98a:
                    
                    if (data_4ca0bd == 1)
                        result = sub_464790(".\emu.cpp", 0x57b)
                        data_4ca0bd = 0
                else
                    switch (result)
                        case nullptr
                            result = sub_4473b0(arg1, *esi_2, *(esi_2 + 4))
                        case 1
                            int32_t eax_3 = *esi_2
                            result = *(arg1 + 0x18014)
                            *(result + 0xc) =
                                zx.d(eax_3.b) << 0x10 | zx.d(*(esi_2 + 2)) | (eax_3 & 0xff00ff00)
                            data_c78890 = *(*(arg1 + 0x18014) + 0xc)
                        case 2
                            result = *(arg1 + 0x18014)
                            *(result + 0x10) = fconvert.s(fconvert.t(*esi_2))
                            *(*(arg1 + 0x18014) + 0x14) = fconvert.s(fconvert.t(*(esi_2 + 4)))
                        case 3
                            *(*(arg1 + 0x18014) + 0x10) = *esi_2 & 0x3fff
                            result = *(arg1 + 0x18014)
                            *(result + 0x14) = (*esi_2 u>> 0x10 | *(esi_2 + 4) << 0x10) & 0x3fff
                        case 4
                            result = sub_44a1e0(arg1, esi_2)
                        case 5
                            result = sub_44a1e0(arg1, esi_2)
                        case 6
                            data_c787b0 = *esi_2
                            data_c787b4 = *(esi_2 + 4)
                        case 7
                            result = *esi_2
                            data_c787b8 = result
                            data_c787bc = *(esi_2 + 4)
                        case 8, 9, 0xa, 0xb, 0xd, 0xe
                            goto label_44a98a
                        case 0xc
                            result = sub_44a1e0(arg1, esi_2)
                
                ebx_1 = ebx_1 u>> 4 | ebp_1 << 0x1c
                esi_2 += 8
                ebp_1 u>>= 4
                j = arg2
                arg2 -= 1
            while (j != 1)
        
        i = arg3
        arg3 -= 1
    while (i != 1)

return result
