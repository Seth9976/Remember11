// 函数: sub_488499
// 地址: 0x488499
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_78
int32_t eax_1 = __security_cookie ^ &var_78
int32_t var_1d4 = arg5
void* edi_1 = __getptd() + 0x1d0
int16_t var_1b4
int32_t var_19c
void var_8c
int32_t result

if (sub_4882c5(arg3, &var_8c, 0x83, &var_1b4, &var_19c) != 0)
    void* ebx_1 = (arg5 << 4) + arg4
    
    if (sub_48a480(&var_8c, *(ebx_1 + 0x48)) == 0)
        result = *(ebx_1 + 0x48)
    else
        void* eax_8 = _strlen(&var_8c) + 5
        void* eax_9 = sub_48b27c(eax_8)
        
        if (eax_9 == 0)
            result = 0
        else
            int32_t eax_10 = *(ebx_1 + 0x48)
            int32_t eax_12 = *(arg4 + (arg5 << 2) + 0xc)
            int128_t* eax_13 = (arg5 + 6) * 6 + arg4
            void var_1c8
            sub_480ea0(&var_1c8, eax_13, 6)
            int32_t eax_14 = *(arg4 + 4)
            
            if (sub_48a315(eax_9 + 4, eax_8 - 4, &var_8c) != 0)
                int32_t var_1e4_2
                __builtin_memset(&var_1e4_2, 0, 0x14)
                sub_481c1f()
                noreturn
            
            *(ebx_1 + 0x48) = eax_9 + 4
            *(arg4 + (arg5 << 2) + 0xc) = zx.d(var_1b4)
            sub_480ea0(eax_13, &var_1b4, 6)
            
            if (arg5 == 2)
                int32_t i = 0
                *(arg4 + 4) = var_19c
                int32_t ecx_8 = *(edi_1 + 0x20)
                int32_t var_1a0_2 = *(edi_1 + 0x24)
                void* eax_23 = edi_1
                
                do
                    if (*(arg4 + 4) == *eax_23)
                        if (i != 0)
                            void* eax_25 = edi_1 + (i << 3)
                            *edi_1 = *eax_25
                            *(edi_1 + 4) = *(eax_25 + 4)
                            *eax_25 = ecx_8
                            *(eax_25 + 4) = var_1a0_2
                        
                        break
                    
                    int32_t edx_1 = *eax_23
                    i += 1
                    *eax_23 = ecx_8
                    int32_t edx_2 = *(eax_23 + 4)
                    *(eax_23 + 4) = var_1a0_2
                    ecx_8 = edx_1
                    eax_23 += 8
                    var_1a0_2 = edx_2
                while (i s< 5)
                
                if (i == 5)
                    int16_t var_18c[0x80]
                    
                    if (sub_48efa9(nullptr, 1, 0x4a67b0, 0x7f, &var_18c, *(arg4 + 4), 
                            *(arg4 + 0x14), 1) == 0)
                        *(edi_1 + 4) = 0
                    else
                        for (int32_t i_1 = 0; i_1 u< 0x7f; i_1 += 1)
                            var_18c[i_1] &= 0x1ff
                        
                        uint32_t eax_27 = sub_4906c1(&var_18c, data_4cc650, 0xfe)
                        int32_t eax_28 = neg.d(eax_27)
                        *(edi_1 + 4) = sbb.d(eax_28, eax_28, eax_27 != 0) + 1
                    
                    *edi_1 = *(arg4 + 4)
                
                *(arg4 + 0xa8) = *(edi_1 + 4)
            
            if (arg5 == 1)
                *(arg4 + 8) = var_19c
            
            if ((&data_4a6770)[arg5 * 3](arg4) == 0)
                if (eax_10 != &data_4cc658)
                    void* edi_2 = ((arg5 + 5) << 4) + arg4
                    
                    if (InterlockedDecrement(*edi_2) == 0)
                        sub_4813df(*edi_2)
                        sub_4813df(*(ebx_1 + 0x54))
                        *(ebx_1 + 0x4c) = 0
                
                *eax_9 = 1
                *(((arg5 + 5) << 4) + arg4) = eax_9
                result = *(ebx_1 + 0x48)
            else
                *(ebx_1 + 0x48) = eax_10
                sub_4813df(eax_9)
                *(arg4 + (arg5 << 2) + 0xc) = eax_12
                *(arg4 + 4) = eax_14
                result = 0
else
    result = 0

sub_480cd2(eax_1 ^ &var_78)
return result
