// 函数: sub_498e7c
// 地址: 0x498e7c
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg2 != 0 && arg3 != 0)
    if (arg4 != 0 && arg1 != 0 && arg3 u<= divu.dp.d(0:0xffffffff, arg2))
        void* edi_2 = arg2 * arg3
        void* var_8_1 = arg1
        void* var_10_1 = edi_2
        void* ebx_1 = edi_2
        int32_t var_c_1
        
        if ((arg4[3].w & 0x10c) == 0)
            var_c_1 = 0x1000
        else
            var_c_1 = arg4[6]
        
        if (edi_2 != 0)
            while (true)
                int32_t ecx_3 = arg4[3] & 0x108
                void* eax_6
                
                if (ecx_3 != 0)
                    eax_6 = arg4[1]
                
                void* eax_17
                
                if (ecx_3 != 0 && eax_6 != 0)
                    if (eax_6 s>= 0)
                        void* edi_3 = ebx_1
                        
                        if (ebx_1 u>= eax_6)
                            edi_3 = eax_6
                        
                        sub_480ea0(*arg4, var_8_1, edi_3)
                        arg4[1] -= edi_3
                        *arg4 += edi_3
                        ebx_1 -= edi_3
                        var_8_1 += edi_3
                        goto label_498f82
                    
                    arg4[3] |= 0x20
                    eax_17 = edi_2
                else if (ebx_1 u< var_c_1)
                    int32_t* var_20_4 = arg4
                    
                    if (sub_484495(sx.d(*var_8_1)) != 0xffffffff)
                        var_8_1 += 1
                        int32_t eax_15 = arg4[6]
                        ebx_1 -= 1
                        var_c_1 = eax_15
                        
                        if (eax_15 s<= 0)
                            var_c_1 = 1
                        
                        goto label_498fb0
                    
                    eax_17 = edi_2
                else
                    bool cond:5_1
                    
                    if (ecx_3 != 0)
                        cond:5_1 = sub_4836ad(arg4) != 0
                    
                    if (ecx_3 != 0 && cond:5_1)
                        eax_17 = edi_2
                    else
                        void* edi_4 = ebx_1
                        
                        if (var_c_1 != 0)
                            edi_4 -= modu.dp.d(0:ebx_1, var_c_1)
                        
                        void* eax_11 = sub_48d76b(sub_48d847(arg4), var_8_1, edi_4)
                        
                        if (eax_11 != 0xffffffff)
                            void* ecx_6 = edi_4
                            
                            if (eax_11 u<= edi_4)
                                ecx_6 = eax_11
                            
                            var_8_1 += ecx_6
                            ebx_1 -= ecx_6
                        
                        if (eax_11 == 0xffffffff || eax_11 u< edi_4)
                            arg4[3] |= 0x20
                            eax_17 = var_10_1
                        else
                        label_498f82:
                            edi_2 = var_10_1
                        label_498fb0:
                            
                            if (ebx_1 == 0)
                                break
                            
                            continue
                
                return divu.dp.d(0:(eax_17 - ebx_1), arg2)
        
        return arg3
    
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)

return 0
