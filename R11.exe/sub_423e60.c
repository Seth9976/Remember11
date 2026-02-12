// 函数: sub_423e60
// 地址: 0x423e60
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_104
uint32_t eax_1 = __security_cookie ^ &var_104
uint32_t var_4 = eax_1
void* ecx = data_4b1de0

if (*(ecx + 0x28) == 0)
    if (*(ecx + 0x24) != 0xffffffff)
        eax_1 = sub_405bd0(0xffffffff)
        
        if (eax_1 != 0)
            eax_1 = data_4b1de0
            int32_t ecx_19 = *(eax_1 + 0x24)
            
            if (*(eax_1 + (ecx_19 << 1) + 0x32) == 0xfff0)
                if (ecx_19 s>= 0)
                    if (ecx_19 s<= 3)
                        if (zx.d(*(eax_1 + (ecx_19 << 1) + 0x3c)) - 1 u<= 2)
                            int32_t ecx_23 = *(eax_1 + 0x24)
                            sub_4427e0(ecx_23 * 0x2c + eax_1 + 0xc508, 0x900, 0, 
                                (ecx_23 << 0x12) + eax_1 + 0x1213ec)
                            eax_1 = data_4b1de0
                            void* edx_27 = *(eax_1 + 0x24) * 0x2c + eax_1 + 0xc508
                            void* ecx_27
                            ecx_27.b = *(*(eax_1 + 0x2c) + 0x194)
                            
                            if (ecx_27.b == 0x14 || ecx_27.b == 0x18)
                                sub_43f520(*(edx_27 + 0x14), *(edx_27 + 0x28) * *(edx_27 + 0x24))
                                eax_1 = data_4b1de0
                    else if (ecx_19 == 4)
                        sub_423db0()
                        eax_1 = data_4b1de0
                        
                        if (*(eax_1 + 0x18) != 0xffffffff)
                            int32_t ecx_20 = 0
                            int16_t* edx_23 = eax_1 + 0x32
                            
                            while (*edx_23 == 0xffff)
                                ecx_20 += 1
                                edx_23 = &edx_23[1]
                                
                                if (ecx_20 s>= 4)
                                    break
                            
                            if (ecx_20 == 4)
                                *(eax_1 + 0x20) = 0
                
                *(eax_1 + (*(eax_1 + 0x24) << 1) + 0x46) = 1
                *(eax_1 + (*(eax_1 + 0x24) << 1) + 0x32) = 0xffff
            
            *(eax_1 + 0x24) = 0xffffffff
    else
        int32_t esi_1 = 0
        void* edx_1 = ecx + 0x32
        
        while (true)
            eax_1 = zx.d(*edx_1)
            
            if (eax_1.w != 0xffff && eax_1.w != 0xfff0)
                break
            
            esi_1 += 1
            edx_1 += 2
            
            if (esi_1 s>= 5)
                sub_480cd2(var_4 ^ &var_104)
                return eax_1
        
        if (esi_1 s>= 0)
            if (esi_1 s<= 3)
                uint32_t eax_7 = zx.d(eax_1.w)
                uint32_t edx_7 = eax_7 u>> 0xc
                
                if (edx_7 == 1)
                    eax_7 = sub_405c80(1, (eax_7 & 0xfff) * 2 + 1, 
                        (esi_1 << 0x12) + ecx + 0x1213ec, *(ecx + 0x2213ec))
                    ecx = data_4b1de0
                    *(ecx + (esi_1 << 1) + 0x3c) = 1
                else
                    if (edx_7 == 2)
                        int32_t eax_11 = sub_405c80(2, (eax_7 & 0xfff) * 2 + 1, 
                            (esi_1 << 0x12) + ecx + 0x1213ec, *(ecx + 0x2213ec))
                        void* ecx_13 = data_4b1de0
                        *(ecx_13 + (esi_1 << 1) + 0x3c) = 2
                        *(ecx_13 + (esi_1 << 1) + 0x32) = 0xfff0
                        *(ecx_13 + 0x24) = esi_1
                        sub_480cd2(var_4 ^ &var_104)
                        return eax_11
                    
                    if (edx_7 == 3)
                        int32_t eax_9 = sub_405c80(3, (eax_7 & 0xfff) * 2 + 1, 
                            (esi_1 << 0x12) + ecx + 0x1213ec, *(ecx + 0x2213ec))
                        void* ecx_9 = data_4b1de0
                        *(ecx_9 + (esi_1 << 1) + 0x3c) = 3
                        *(ecx_9 + (esi_1 << 1) + 0x32) = 0xfff0
                        *(ecx_9 + 0x24) = esi_1
                        sub_480cd2(var_4 ^ &var_104)
                        return eax_9
                
                *(ecx + (esi_1 << 1) + 0x32) = 0xfff0
                *(ecx + 0x24) = esi_1
                sub_480cd2(var_4 ^ &var_104)
                return eax_7
            
            if (esi_1 == 4)
                *(ecx + 0x44) = 0
                
                switch (zx.d(data_2243af0))
                    case 0, 2, 4, 6
                        int32_t var_10c_1 = *(data_2b55eb8 + ((eax_1 & 0xfff) << 2))
                        sub_480b92(&var_104, "%s.BIP")
                        void* eax_3 = data_4b1de0
                        sub_405d00(0, &var_104, eax_3 + 0x113ec, *(eax_3 + 0x2213ec))
                    default
                        sub_405c80(0, eax_1 & 0xfff, ecx + 0x113ec, *(ecx + 0x2213ec))
                
                void* eax_6 = data_4b1de0
                *(eax_6 + 0x3a) = 0xfff0
                *(eax_6 + 0x24) = 4
                sub_480cd2(var_4 ^ &var_104)
                return eax_6

sub_480cd2(var_4 ^ &var_104)
return eax_1
