// 函数: sub_49647f
// 地址: 0x49647f
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* var_8 = arg3
int32_t* eax = sub_48d847(arg5)
int32_t eax_1 = arg5[3]

if ((eax_1.b & 0x82) == 0)
    *__errno() = 9
    arg5[3] |= 0x20
else if ((eax_1.b & 0x40) == 0)
    if ((eax_1.b & 1) == 0)
        goto label_4964dd
    
    arg5[1] = 0
    
    if ((eax_1.b & 0x10) != 0)
        *arg5 = arg5[2]
        arg5[3] = eax_1 & 0xfffffffe
    label_4964dd:
        int32_t eax_5 = arg5[3]
        arg5[1] = 0
        var_8 = nullptr
        int32_t eax_7 = (eax_5 & 0xffffffef) | 2
        arg5[3] = eax_7
        
        if ((eax_7.w & 0x10c) == 0)
            bool cond:4_1
            
            if (arg5 == 0x4cbb00 || arg5 == 0x4cbb20)
                cond:4_1 = sub_48e2cc(eax) != 0
            
            if ((arg5 != 0x4cbb00 && arg5 != 0x4cbb20) || not(cond:4_1))
                sub_48e288(arg5)
        
        int16_t ebx_1
        uint32_t edi_2
        
        if ((arg5[3].w & 0x108) == 0)
            edi_2 = 2
            ebx_1 = arg4
            var_8.w = ebx_1
            var_8 = sub_48d76b(eax, &var_8, 2)
        label_4965d3:
            
            if (var_8 == edi_2)
                return zx.d(ebx_1)
        else
            uint8_t* eax_9 = arg5[2]
            int32_t edi_1 = *arg5
            *arg5 = &eax_9[2]
            edi_2 = edi_1 - eax_9
            arg5[1] = arg5[6] - 2
            
            if (edi_2 s> 0)
                var_8 = sub_48d76b(eax, eax_9, edi_2)
            label_4965ae:
                ebx_1 = arg4
                *arg5[2] = ebx_1
                goto label_4965d3
            
            void* eax_15
            
            if (eax == 0xffffffff || eax == 0xfffffffe)
                eax_15 = &data_4cc7d8
            else
                eax_15 = (eax & 0x1f) * 0x38 + (&data_2b6a8a0)[eax s>> 5]
            
            if ((*(eax_15 + 4) & 0x20) == 0)
                goto label_4965ae
            
            uint32_t eax_16
            int32_t edx_2
            eax_16, edx_2 = sub_48e16f(eax, 0, 0, FILE_END)
            
            if ((eax_16 & edx_2) != 0xffffffff)
                goto label_4965ae
        arg5[3] |= 0x20
        return 0xffff
    
    arg5[3] = eax_1 | 0x20
else
    *__errno() = 0x22
    arg5[3] |= 0x20

return 0xffff
