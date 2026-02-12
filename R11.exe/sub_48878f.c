// 函数: sub_48878f
// 地址: 0x48878f
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_78
int32_t eax_1 = __security_cookie ^ &var_78
int32_t i = 0
void* result

if (arg4 == 0)
    int32_t var_94_1 = 1
    int32_t var_90_1 = 0
    
    if (arg3 == 0)
        result = sub_488154(arg2)
    else
        char var_8c[0x14]
        
        if (*arg3 != 0x4c || arg3[1] != 0x43 || arg3[2] != 0x5f)
            int32_t var_ac_6 = 0
            result = sub_4882c5(arg3, &var_8c, 0x83, nullptr, nullptr)
            
            if (result != 0)
                void* edi_4 = arg2 + 0x48
                
                do
                    if (i != 0)
                        int32_t eax_10
                        int32_t edx_1
                        eax_10, edx_1 = sub_48a480(&var_8c, *edi_4)
                        int32_t eax_11
                        
                        if (eax_10 != 0)
                            eax_11 = sub_488499(eax_10, edx_1, &var_8c, arg2, i)
                        
                        if (eax_10 == 0 || eax_11 != 0)
                            var_90_1 += 1
                        else
                            var_94_1 &= eax_11
                    
                    i += 1
                    edi_4 += 0x10
                while (i s<= 5)
                
                result = nullptr
                
                if (var_94_1 != 0 || var_90_1 != 0)
                    result = sub_488154(arg2)
        else
            char* edi_1 = arg3
            
            while (true)
                void* eax_4 = _strpbrk(edi_1, "=;")
                
                if (eax_4 != 0)
                    int32_t i_2 = eax_4 - edi_1
                    int32_t i_1 = i_2
                    
                    if (eax_4 != edi_1 && *eax_4 != 0x3b)
                        int32_t var_98_1 = 1
                        char** esi_1 = &data_4a6774
                        
                        while (sub_4812dc(*esi_1, edi_1, i_2) != 0 || i_1 != _strlen(*esi_1))
                            var_98_1 += 1
                            esi_1 = &esi_1[3]
                            
                            if (esi_1 s> &data_4a67a4)
                                break
                            
                            i_2 = i_1
                        
                        void* eax_7 = _strcspn(eax_4 + 1, &(*U"._;=")[2])
                        &(*U"._;=")[2]
                        
                        if (eax_7 != 0 || *(eax_4 + 1) == 0x3b)
                            if (var_98_1 s<= 5)
                                int32_t eax_8
                                int32_t edx
                                eax_8, edx = sub_48ecf8(&var_8c, 0x83, eax_4 + 1, eax_7)
                                
                                if (eax_8 != 0)
                                    int32_t var_bc_1
                                    __builtin_memset(&var_bc_1, 0, 0x14)
                                    sub_481c1f()
                                    noreturn
                                
                                *(&var_8c + eax_7) = 0
                                
                                if (sub_488499(eax_8, edx, &var_8c, arg2, var_98_1) != 0)
                                    var_90_1 += 1
                            
                            void* edi_3 = eax_7 + eax_4 + 1
                            
                            if (*edi_3 == 0)
                                break
                            
                            edi_1 = edi_3 + 1
                            
                            if (*edi_1 == 0)
                                break
                            
                            continue
                
                result = nullptr
                goto label_488953
            
            result = nullptr
            
            if (var_90_1 != 0)
                result = sub_488154(arg2)
else if (arg3 == 0)
    result = *((arg4 << 4) + arg2 + 0x48)
else
    result = sub_488499(arg4, arg2, arg3, arg2, arg4)

label_488953:
sub_480cd2(eax_1 ^ &var_78)
return result
