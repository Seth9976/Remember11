// 函数: sub_44acb0
// 地址: 0x44acb0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t result = arg2
int32_t ecx_2 = (arg3 << 4) + result
*(arg1 + 0x18010) = 0
*(arg1 + 0x18014) = arg1
int32_t* result_1 = result
arg2 = result_1
*(arg1 + 0xc) = data_c78890

if (result u< ecx_2)
    do
        int32_t var_10_1 = *result_1
        result = result_1[1]
        uint32_t ecx_4 = result u>> 0x1c
        arg3 = 0x10
        
        if (ecx_4 != 0)
            arg3 = ecx_4
        
        uint32_t i_3 = *result_1 & 0x7fff
        int32_t ecx_6 = *(arg1 + 0x18018)
        
        if (ecx_6 == 0)
            int32_t ecx_12 = result u>> 0x1a & 3
            
            if (ecx_12 == 0)
                if ((result & 0x4000) != 0)
                    sub_4473b0(arg1, result u>> 0xf & 0x7ff, ecx_12)
                
                if ((result_1[2] & 0xf) != 0xe)
                    uint32_t i_2 = i_3
                    
                    if (i_2 != 0)
                        if (arg3 == 0x10 && data_4ca0c3 == 1)
                            sub_464790(".\emu.cpp", 0x3e9)
                            data_4ca0c3 = 0
                        
                        int32_t eax_10 = result_1[2]
                        uint32_t ecx_18 = result_1[3]
                        
                        if (i_2 s> 0)
                            uint32_t i_1 = i_2
                            uint32_t edi_10 = &result_1[4]
                            uint32_t i
                            
                            do
                                int32_t ebp_6 = eax_10
                                uint32_t ebx = ecx_18
                                
                                if (arg3 s> 0)
                                    uint32_t j_1 = arg3
                                    uint32_t j
                                    
                                    do
                                        int32_t eax_13 = ebp_6 & 0xf
                                        
                                        if (eax_13 u> 0xd || eax_13 - 1 u> 0xc)
                                        label_44afdd:
                                            
                                            if (data_4ca0c0 == 1)
                                                sub_464790(".\emu.cpp", 0x415)
                                                data_4ca0c0 = 0
                                        else
                                            switch (eax_13)
                                                case 1
                                                    *(*(arg1 + 0x18014) + 0xc) = (
                                                        (*(edi_10 + 0xc) << 8 | *edi_10) << 8
                                                        | *(edi_10 + 4)) << 8 | *(edi_10 + 8)
                                                    data_c78890 = *(*(arg1 + 0x18014) + 0xc)
                                                case 2
                                                    sub_465480(".\emu.cpp", 0x209)
                                                case 3
                                                    *(*(arg1 + 0x18014) + 0x10) = *edi_10
                                                    *(*(arg1 + 0x18014) + 0x14) = *(edi_10 + 4)
                                                case 4
                                                    sub_44a180(arg1, edi_10)
                                                case 5
                                                    sub_44a180(arg1, edi_10)
                                                case 6, 7, 8, 9, 0xc, 0xd
                                                    if (data_4ca0c2 == 1)
                                                        sub_464790(".\emu.cpp", 0x409)
                                                        data_4ca0c2 = 0
                                                case 0xa
                                                    if (data_4ca0c1 == 1)
                                                        sub_464790(".\emu.cpp", 0x40f)
                                                        data_4ca0c1 = 0
                                                case 0xb
                                                    goto label_44afdd
                                        
                                        ebp_6 = ebp_6 u>> 4 | ebx << 0x1c
                                        edi_10 += 0x10
                                        ebx u>>= 4
                                        j = j_1
                                        j_1 -= 1
                                    while (j != 1)
                                
                                i = i_1
                                i_1 -= 1
                            while (i != 1)
                            i_2 = i_3
                            result_1 = arg2
                    
                    result = *(arg1 + 0x18010)
                    
                    if (result != 0)
                        result = (*(*data_c78668 + 0x68))(arg1, result)
                        *(arg1 + 0x18010) = 0
                        *(arg1 + 0x18014) = arg1
                        *(arg1 + 0xc) = data_c78890
                    
                    arg2 = &result_1[i_2 * arg3 * 4 + 4]
                    result_1 = &result_1[i_2 * arg3 * 4 + 4]
                else
                    sub_44a280(arg1, result_1, i_3, arg3)
                    result = *(arg1 + 0x18010)
                    
                    if (result != 0)
                        result = (*(*data_c78668 + 0x68))(arg1, result)
                        *(arg1 + 0x18010) = 0
                        *(arg1 + 0x18014) = arg1
                        *(arg1 + 0xc) = data_c78890
                    
                    arg2 = &result_1[i_3 * arg3 * 4 + 4]
                    result_1 = &result_1[i_3 * arg3 * 4 + 4]
            else if (ecx_12 == 1)
                if ((result & 0x4000) != 0)
                    sub_4473b0(arg1, result u>> 0xf & 0x7ff, 0)
                
                void* ebp_9 = arg3
                sub_44a840(arg1, result_1, i_3, ebp_9)
                int32_t eax_21 = *(arg1 + 0x18010)
                
                if (eax_21 != 0)
                    (*(*data_c78668 + 0x68))(arg1, eax_21)
                    *(arg1 + 0x18010) = 0
                    *(arg1 + 0x18014) = arg1
                    *(arg1 + 0xc) = data_c78890
                
                int32_t eax_26
                int32_t edx_22
                edx_22:eax_26 = sx.q(i_3 * ebp_9 + 1)
                result = (eax_26 - edx_22) s>> 1 << 4
                arg2 = result_1 + result + 0x10
                result_1 = result_1 + result + 0x10
            else if (ecx_12 == 2)
                uint32_t eax_29 = zx.d(*(result_1 + 2))
                int32_t ecx_30 = *result_1
                result_1 = &result_1[4]
                result = eax_29 << 0xf | (ecx_30 & 0x7fff)
                arg2 = result_1
                *(arg1 + 0x18018) = result
            else if (data_4ca0bf == 1)
                result = sub_464790(".\emu.cpp", 0x43d)
                data_4ca0bf = 0
        else
            int32_t edi_4 = (ecx_2 - result_1) s>> 4
            
            if (ecx_6 s> edi_4 && data_4ca0c5 == 1)
                sub_464790(".\emu.cpp", 0x3d1)
                data_4ca0c5 = 0
            
            int32_t eax_1 = *(arg1 + 0x18018)
            bool cond:2_1 = eax_1 == edi_4
            
            if (eax_1 s< edi_4)
                cond:2_1 = eax_1 == eax_1
            
            if (not(cond:2_1) && data_4ca0c4 == 1)
                sub_464790(".\emu.cpp", 0x3d6)
                data_4ca0c4 = 0
            
            int32_t* result_2 = result_1
            sub_447220(0xc5f798, data_c78860, data_c78864, data_c78868, data_c7886c, data_c78870, 
                data_c78874, data_c78878, data_c7887c)
            result = *(arg1 + 0x18018) << 4
            result_1 += result
            arg2 = result_1
            *(arg1 + 0x18018) = 0
    while (result_1 u< ecx_2)

if (result_1 != ecx_2 && data_4ca0be == 1)
    result = sub_464790(".\emu.cpp", 0x443)
    data_4ca0be = 0

return result
