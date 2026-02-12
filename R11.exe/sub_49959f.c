// 函数: sub_49959f
// 地址: 0x49959f
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* edi = arg1

if (edi != 0)
    int32_t eax_1 = sub_48d847(edi)
    
    if (edi[1] s< 0)
        edi[1] = 0
    
    uint32_t eax_2 = sub_496d6b(eax_1, 0, FILE_CURRENT)
    
    if (eax_2 s>= 0)
        int16_t edx_1 = (edi[3]).w
        
        if ((edx_1 & 0x108) == 0)
            return eax_2 - edi[1]
        
        int32_t eax_4 = *edi
        char* i_2 = edi[2]
        void* var_10_1 = eax_4 - i_2
        
        if ((edx_1.b & 3) != 0)
            if ((*((&data_2b6a8a0)[eax_1 s>> 5] + (eax_1 & 0x1f) * 0x38 + 4) & 0x80) != 0)
                for (char* i = i_2; i u< eax_4; i = &i[1])
                    if (*i == 0xa)
                        var_10_1 += 1
            
            goto label_49964d
        
        if (edx_1.b s< 0)
        label_49964d:
            
            if (eax_2 == 0)
                return var_10_1
            
            if ((edi[3].b & 1) == 0)
                return var_10_1 + eax_2
            
            int32_t edx_5 = edi[1]
            
            if (edx_5 == 0)
                return eax_2
            
            int32_t esi_9 = (eax_1 & 0x1f) * 0x38
            arg1 = eax_4 - i_2 + edx_5
            
            if ((*((&data_2b6a8a0)[eax_1 s>> 5] + esi_9 + 4) & 0x80) == 0)
                return var_10_1 + eax_2 - arg1
            
            bool cond:3_1
            
            if (sub_496d6b(eax_1, 0, FILE_END) == eax_2)
                char* i_1 = edi[2]
                
                for (void* ecx_3 = arg1 + i_1; i_1 u< ecx_3; i_1 = &i_1[1])
                    if (*i_1 == 0xa)
                        arg1 += 1
                
                cond:3_1 = (edi[3].w & 0x2000) == 0
                goto label_49971f
            
            if (sub_496d6b(eax_1, eax_2, FILE_BEGIN) s>= 0)
                int32_t* eax_11 = 0x200
                int16_t ecx_4
                
                if (arg1 u<= 0x200)
                    ecx_4 = (edi[3]).w
                
                if (arg1 u> 0x200 || (ecx_4.b & 8) == 0 || (ecx_4 & 0x400) != 0)
                    eax_11 = edi[6]
                
                arg1 = eax_11
                cond:3_1 = (*((&data_2b6a8a0)[eax_1 s>> 5] + esi_9 + 4) & 4) == 0
            label_49971f:
                
                if (cond:3_1)
                    return var_10_1 + eax_2 - arg1
                
                return var_10_1 + eax_2 - (arg1 + 1)
        else
            *__errno() = 0x16
else
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)

return 0xffffffff
