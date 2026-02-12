// 函数: sub_48345d
// 地址: 0x48345d
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t result_1 = 0xffffffff
wchar16 buffer[0x106]
wchar16 (* esi)[0x106] = &buffer
int32_t var_224 = 0
int32_t result

if (arg1 != 0)
    if (SetCurrentDirectoryW(arg1) == 0)
        sub_48508b(GetLastError())
    else
        uint32_t edi_1 = GetCurrentDirectoryW(0x105, &buffer)
        
        if (edi_1 s<= 0x104)
            goto label_48350e
        
        esi = sub_48b2bc(edi_1 + 1, 2)
        
        if (esi == 0)
            sub_48508b(GetLastError())
        else
            var_224 = 1
            
            if (edi_1 == 0)
                sub_48508b(GetLastError())
            else
                edi_1 = GetCurrentDirectoryW(edi_1 + 1, esi)
            label_48350e:
                
                if (edi_1 == 0)
                    sub_48508b(GetLastError())
                else
                    wchar16 eax_9 = *esi
                    
                    if (eax_9 == 0x5c)
                        if (eax_9 != (*esi)[1])
                            goto label_483527
                        
                        result_1 = 0
                    else if (eax_9 != 0x2f || eax_9 != (*esi)[1])
                    label_483527:
                        int16_t name = 0x3d
                        int16_t var_e_1 = sub_48ce16(*esi)
                        int16_t var_c_1 = 0x3a
                        int16_t var_a_1 = 0
                        
                        if (SetEnvironmentVariableW(&name, esi) == 0)
                            sub_48508b(GetLastError())
                        else
                            result_1 = 0
                    else
                        result_1 = 0
    
    if (var_224 != 0)
        sub_4813df(esi)
    
    result = result_1
else
    *___doserrno() = 0
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    result = 0xffffffff

sub_480cd2(eax_1 ^ &__saved_ebp)
return result
