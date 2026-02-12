// 函数: sub_450770
// 地址: 0x450770
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_29c
int32_t eax_1 = __security_cookie ^ &var_29c
data_c77a9c = 0xd

if (arg1 != 0 || arg2 != 0)
    data_c77ef0 = 0xfffffff5
else if (arg4 != 0)
label_450810:
    var_29c = 0
    int32_t var_298_1 = 0
    
    if (arg5 + 1 s> 0)
        int32_t* ebx_1 = arg6 + 0x10
        void* var_294
        
        while (sub_44fe90(&data_c77ef8, &var_294) s>= 0)
            void* ebp_1 = var_294
            wchar16 const* const ecx_1 = u"key.conf"
            int16_t* eax_6 = ebp_1 + 0x2c
            int32_t eax_8
            
            while (true)
                int16_t edx_1 = *eax_6
                wchar16 const temp0_1 = *ecx_1
                bool c_1 = edx_1 u< temp0_1
                
                if (edx_1 == temp0_1)
                    if (edx_1 == 0)
                        eax_8 = 0
                        break
                    
                    edx_1 = eax_6[1]
                    int16_t temp3_1 = ecx_1[1]
                    c_1 = edx_1 u< temp3_1
                    
                    if (edx_1 == temp3_1)
                        eax_6 = &eax_6[2]
                        ecx_1 = &ecx_1[2]
                        
                        if (edx_1 != 0)
                            continue
                        
                        eax_8 = 0
                        break
                
                bool c_2 = unimplemented  {sbb eax, eax}
                eax_8 = sbb.d(sbb.d(eax_6, eax_6, c_1), 0xffffffff, c_2)
                break
            
            if (eax_8 != 0)
                void var_28c
                void* var_290 = &var_28c
                sub_44cb00(&var_290, ebp_1 + 0x2c, data_4ccfa0())
                void* eax_10 = var_290
                __builtin_memcpy(&ebx_1[4], eax_10, 0x20)
                
                if (eax_10 != &var_28c)
                    sub_4813df(eax_10)
                
                int32_t edx_2 = *(ebp_1 + 0x20)
                var_29c += 1
                *ebx_1 = edx_2
                ebx_1 = &ebx_1[0x10]
            
            if (var_29c == arg5)
                break
            
            bool cond:2_1 = var_298_1 + 1 s< arg5 + 1
            var_298_1 += 1
            
            if (not(cond:2_1))
                break
    
    data_c77ef0 = var_29c
else
    sub_44fe20(&data_c77ef8)
    wchar16 var_20c[0x104]
    sub_4503d0(&var_20c, arg3)
    
    if (sub_44fe50(&data_c77ef8, &var_20c) s>= 0)
        goto label_450810
    
    data_c77ef0 = 0xfffffffc

sub_480cd2(eax_1 ^ &var_29c)
return 0
