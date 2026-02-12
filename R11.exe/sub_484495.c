// 函数: sub_484495
// 地址: 0x484495
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t* eax = sub_48d847(arg1)
int32_t eax_1 = arg1[3]

if ((eax_1.b & 0x82) != 0)
    if ((eax_1.b & 0x40) == 0)
        if ((eax_1.b & 1) != 0)
            arg1[1] = 0
            
            if ((eax_1.b & 0x10) == 0)
                arg1[3] = eax_1 | 0x20
                return 0xffffffff
            
            *arg1 = arg1[2]
            arg1[3] = eax_1 & 0xfffffffe
        
        int32_t eax_8 = (arg1[3] & 0xffffffef) | 2
        arg1[3] = eax_8
        arg1[1] = 0
        void* var_8_1 = nullptr
        
        if ((eax_8.w & 0x10c) == 0)
            bool cond:5_1
            
            if (arg1 == 0x4cbb00 || arg1 == 0x4cbb20)
                cond:5_1 = sub_48e2cc(eax) != 0
            
            if ((arg1 != 0x4cbb00 && arg1 != 0x4cbb20) || not(cond:5_1))
                sub_48e288(arg1)
        
        int32_t arg_4
        uint32_t edi_2
        
        if ((arg1[3].w & 0x108) == 0)
            edi_2 = 1
            var_8_1 = sub_48d76b(eax, &arg_4, 1)
        label_4845da:
            
            if (var_8_1 == edi_2)
                return zx.d(arg_4.b)
        else
            uint8_t* eax_10 = arg1[2]
            int32_t edi_1 = *arg1
            *arg1 = &eax_10[1]
            edi_2 = edi_1 - eax_10
            arg1[1] = arg1[6] - 1
            int32_t* ecx_8
            
            if (edi_2 s> 0)
                void* eax_11
                eax_11, ecx_8 = sub_48d76b(eax, eax_10, edi_2)
                var_8_1 = eax_11
            label_4845bd:
                ecx_8.b = arg_4.b
                *arg1[2] = ecx_8.b
                goto label_4845da
            
            void* eax_16
            
            if (eax == 0xffffffff || eax == 0xfffffffe)
                eax_16 = &data_4cc7d8
            else
                eax_16 = (eax & 0x1f) * 0x38 + (&data_2b6a8a0)[eax s>> 5]
            
            if ((*(eax_16 + 4) & 0x20) == 0)
                goto label_4845bd
            
            uint32_t eax_17
            int32_t edx_3
            eax_17, ecx_8, edx_3 = sub_48e16f(eax, 0, 0, FILE_END)
            
            if ((eax_17 & edx_3) != 0xffffffff)
                goto label_4845bd
        arg1[3] |= 0x20
        return 0xffffffff
    
    *__errno() = 0x22
else
    *__errno() = 9

arg1[3] |= 0x20
return 0xffffffff
