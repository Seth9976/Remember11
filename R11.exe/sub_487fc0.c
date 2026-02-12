// 函数: sub_487fc0
// 地址: 0x487fc0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

sub_480cf0(arg1, 0, 0x90)
char* esi = arg2
char eax = *esi

if (eax != 0)
    if (eax != 0x2e || esi[1] == 0)
        arg2 = nullptr
        void* eax_4 = _strcspn(esi, "_.,")
        bool cond:0_1 = eax_4 != 0
        
        while (true)
            if (cond:0_1)
                void* edi_1 = eax_4 + esi
                char ebx_1 = *edi_1
                char* var_20_2
                int32_t var_1c_1
                char* var_18_3
                void* var_14_1
                
                if (arg2 != 0)
                    char* eax_6
                    
                    if (arg2 != 1)
                        if (arg2 == 2 && eax_4 u< 0x10 && (ebx_1 == 0 || ebx_1 == 0x2c))
                            var_14_1 = eax_4
                            var_18_3 = esi
                            var_1c_1 = 0x10
                            eax_6 = &arg1[0x80]
                            goto label_488099
                    else if (eax_4 u< 0x40 && ebx_1 != 0x5f)
                        var_14_1 = eax_4
                        var_18_3 = esi
                        var_1c_1 = 0x40
                        eax_6 = &arg1[0x40]
                    label_488099:
                        var_20_2 = eax_6
                        goto label_48809a
                else if (eax_4 u< 0x40 && ebx_1 != 0x2e)
                    var_14_1 = eax_4
                    var_18_3 = esi
                    var_1c_1 = 0x40
                    var_20_2 = arg1
                label_48809a:
                    
                    if (sub_48ecf8(var_20_2, var_1c_1, var_18_3, var_14_1) != 0)
                        int32_t var_24_1
                        __builtin_memset(&var_24_1, 0, 0x14)
                        sub_481c1f()
                        noreturn
                    
                    if (ebx_1 == 0x2c)
                        break
                    
                    if (ebx_1 == 0)
                        break
                    
                    arg2 = &arg2[1]
                    esi = edi_1 + 1
                    eax_4 = _strcspn(esi, "_.,")
                    cond:0_1 = eax_4 != 0
                    continue
            
            return 0xffffffff
    else
        if (sub_48ecf8(&arg1[0x80], 0x10, &esi[1], 0xf) != 0)
            int32_t var_24
            __builtin_memset(&var_24, 0, 0x14)
            sub_481c1f()
            noreturn
        
        arg1[0x8f] = 0

return 0
