// 函数: sub_49375d
// 地址: 0x49375d
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if ((arg2[3].b & 0x40) != 0)
label_49381e:
    
    if (arg1 != 0xffffffff)
        char eax_19 = (arg2[3]).b
        
        if ((eax_19 & 1) != 0)
        label_493836:
            
            if (arg2[2] == 0)
                sub_48e288(arg2)
            
            int32_t eax_20 = *arg2
            
            if (eax_20 != arg2[2])
                goto label_49384e
            
            if (arg2[1] == 0)
                *arg2 = eax_20 + 1
            label_49384e:
                *arg2 -= 1
                char* eax_22 = *arg2
                
                if ((arg2[3].b & 0x40) == 0)
                    *eax_22 = arg1.b
                label_493863:
                    int32_t eax_24 = arg2[3]
                    arg2[1] += 1
                    arg2[3] = (eax_24 & 0xffffffef) | 1
                    return zx.d(arg1.b)
                
                if (*eax_22 == arg1.b)
                    goto label_493863
                
                *arg2 = &eax_22[1]
        else if (eax_19 s< 0 && (eax_19 & 2) == 0)
            goto label_493836
else
    bool cond:1_1 = sub_48d847(arg2) == 0xffffffff
    bool cond:2_1
    
    if (not(cond:1_1))
        cond:2_1 = sub_48d847(arg2) == 0xfffffffe
    
    void* eax_8
    
    if (cond:1_1 || cond:2_1)
        eax_8 = &data_4cc7d8
    else
        void* edi_1 = &(&data_2b6a8a0)[sub_48d847(arg2) s>> 5]
        eax_8 = (sub_48d847(arg2) & 0x1f) * 0x38 + *edi_1
    
    void* eax_16
    
    if ((*(eax_8 + 0x24) & 0x7f) == 0)
        bool cond:3_1 = sub_48d847(arg2) == 0xffffffff
        bool cond:4_1
        
        if (not(cond:3_1))
            cond:4_1 = sub_48d847(arg2) == 0xfffffffe
        
        if (cond:3_1 || cond:4_1)
            eax_16 = &data_4cc7d8
        else
            void* edi_2 = &(&data_2b6a8a0)[sub_48d847(arg2) s>> 5]
            eax_16 = (sub_48d847(arg2) & 0x1f) * 0x38 + *edi_2
    
    if ((*(eax_8 + 0x24) & 0x7f) == 0 && (*(eax_16 + 0x24) & 0x80) == 0)
        goto label_49381e
    
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)

return 0xffffffff
