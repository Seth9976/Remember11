// 函数: sub_49363d
// 地址: 0x49363d
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg1 != 0)
    int32_t eax_1 = arg1[3]
    
    if ((eax_1.b & 0x83) != 0 && (eax_1.b & 0x40) == 0)
        if ((eax_1.b & 2) == 0)
            int32_t eax_3 = eax_1 | 1
            arg1[3] = eax_3
            
            if ((eax_3.w & 0x10c) != 0)
                *arg1 = arg1[2]
            else
                sub_48e288(arg1)
            
            int32_t eax_6 = sub_496bfc(sub_48d847(arg1), arg1[2], arg1[6])
            arg1[1] = eax_6
            
            if (eax_6 != 0 && eax_6 != 0xffffffff)
                if ((arg1[3].b & 0x82) == 0)
                    bool cond:2_1 = sub_48d847(arg1) == 0xffffffff
                    bool cond:3_1
                    
                    if (not(cond:2_1))
                        cond:3_1 = sub_48d847(arg1) == 0xfffffffe
                    
                    void* eax_14
                    
                    if (cond:2_1 || cond:3_1)
                        eax_14 = &data_4cc7d8
                    else
                        void* edi_1 = &(&data_2b6a8a0)[sub_48d847(arg1) s>> 5]
                        eax_14 = (sub_48d847(arg1) & 0x1f) * 0x38 + *edi_1
                    
                    eax_14.b = *(eax_14 + 4)
                    eax_14.b &= 0x82
                    
                    if (eax_14.b == 0x82)
                        arg1[3] |= 0x2000
                
                if (arg1[6] == 0x200)
                    int16_t eax_15 = (arg1[3]).w
                    
                    if ((eax_15.b & 8) != 0 && (eax_15 & 0x400) == 0)
                        arg1[6] = 0x1000
                
                char* ecx_6 = *arg1
                arg1[1] -= 1
                uint32_t result = zx.d(*ecx_6)
                *arg1 = &ecx_6[1]
                return result
            
            int32_t eax_16 = neg.d(eax_6)
            arg1[3] |= (sbb.d(eax_16, eax_16, eax_6 != 0) & 0x10) + 0x10
            arg1[1] = 0
        else
            arg1[3] = eax_1 | 0x20
else
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)

return 0xffffffff
