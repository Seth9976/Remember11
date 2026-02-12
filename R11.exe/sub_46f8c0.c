// 函数: sub_46f8c0
// 地址: 0x46f8c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* ebx = arg2
void* ebp = arg3
void* result

if ((*ebp == 1 && *arg1 != *ebx) || (*(ebp + 4) == 1 && arg1[1] != ebx[1])
        || (*(ebp + 8) == 1 && arg1[4] != ebx[0xc]) || (*(ebp + 0xc) == 1 && arg1[2] != ebx[2]))
    result.b = 0
    return result

if (*(ebp + 0x10) == 1 && (ebx[3].b & 0x40) != 0 && (*(arg1[0x15] + 0x24) & 0x10000) == 0)
    result.b = 0
    return result

if (*(ebp + 0x14) == 1)
    result = arg1[0x14]
    int32_t ebp_1 = *(result + 0x654)
    int32_t ecx_1 = 0
    
    if (ebp_1 s<= 0)
    label_46f973:
        result.b = 0
        return result
    
    result = *(result + 0x650)
    
    while (true)
        int32_t var_8_1 = *(result + 8)
        
        if (*(result + 0xc) == arg1[2])
            ebx = arg2
            
            if (*result == ebx[4] && *(result + 4) == ebx[5])
                ebp = arg3
                break
        
        ecx_1 += 1
        result += 0x10
        
        if (ecx_1 s>= ebp_1)
            goto label_46f973

if (*(ebp + 0x18) != 1 || arg1[3] == ebx[6])
    if (*(ebp + 0x20) == 1)
        int32_t ecx_2 = arg1[9]
        result = nullptr
        
        if (ecx_2 s<= 0)
        label_46f9c3:
            result.b = 0
            return result
        
        while (*(arg1[8] + (result << 2)) != ebx[8] || *(arg1[0xb] + (result << 2)) u< ebx[9])
            result += 1
            
            if (result s>= ecx_2)
                goto label_46f9c3
        
        ebp = arg3
    
    int32_t edi_3 = *(ebp + 0x28)
    
    if (edi_3 != 1)
        goto label_46fa53
    
    if (*(ebp + 0x2c) == 1 && ebx[0xe] != 0)
        result = sub_46f880(&arg1[5], &ebx[0xe])
    
    if (*(ebp + 0x2c) != 1 || ebx[0xe] == 0 || result.b != 0)
        if (edi_3 != 1)
            goto label_46fa53
        
        result = ebx[0xe]
        
        if (result == 0)
            goto label_46fa53
        
        ebx.b = 0
        int32_t i = 0
        void* ebp_4 = sub_477ac0(result)
        
        if (arg1[6] s> 0)
            do
                if (sub_477ac0(*(arg1[5] + (i << 2))) == ebp_4)
                    ebx.b = 1
                
                i += 1
            while (i s< arg1[6])
            
            if (ebx.b != 0)
                ebx = arg2
                ebp = arg3
            label_46fa53:
                
                if (*(ebp + 0x2c) != 1)
                    goto label_46faa1
                
                result = ebx[0xe]
                
                if (result == 0)
                    goto label_46faa1
                
                ebx.b = 0
                int32_t i_1 = 0
                void* ebp_5 = sub_477b20(result)
                
                if (arg1[6] s> 0)
                    do
                        if (sub_477b20(*(arg1[5] + (i_1 << 2))) == ebp_5)
                            ebx.b = 1
                        
                        i_1 += 1
                    while (i_1 s< arg1[6])
                    
                    if (ebx.b != 0)
                        ebx = arg2
                        ebp = arg3
                    label_46faa1:
                        
                        if (*(ebp + 0x34) != 1)
                        label_46faf7:
                            
                            if (*(ebp + 0x38) != 1)
                                result.b = 1
                                return result
                            
                            result = arg1[0xf]
                            
                            if (result s> 0)
                                void* result_1 = result
                                
                                if (result_1 s> 0 && result_1 s<= result)
                                    int32_t* esi_1 = arg1[0xe]
                                    result = nullptr
                                    
                                    while (ebx[0x11] != *esi_1)
                                        result += 1
                                        esi_1 = &esi_1[1]
                                        
                                        if (result s>= result_1)
                                            result.b = 0
                                            return result
                                    
                                    if (result != 0xffffffff)
                                        result.b = 1
                                        return result
                        else
                            result = arg1[0x14]
                            int32_t edi_4 = *(result + 0x654)
                            int32_t ecx_5 = 0
                            
                            if (edi_4 s> 0)
                                result = *(result + 0x650)
                                
                                while (true)
                                    int32_t var_10_1 = *result
                                    int32_t var_c_1 = *(result + 4)
                                    
                                    if (*(result + 0xc) == arg1[2] && *(result + 8) == ebx[0x10])
                                        ebp = arg3
                                        break
                                    
                                    ecx_5 += 1
                                    result += 0x10
                                    
                                    if (ecx_5 s>= edi_4)
                                        goto label_46fae7
                                
                                goto label_46faf7

label_46fae7:
result.b = 0
return result
