// 函数: sub_41ab40
// 地址: 0x41ab40
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* edx = arg1
int32_t var_84 = 0
int32_t var_6c = 0
void* result = *(edx + 0x74) + 1
int32_t var_7c = 0xffffffff

if (result s> 0)
    result = edx + 0x59e4
    void* result_1 = result
    
    while (true)
        int32_t ecx_1 = *result
        int32_t ebx_1 = *(result + 0xc)
        int32_t edi_1 = *(result + 8)
        void* esi_3 = ecx_1 * 0x34 + edx + 0x80
        int32_t edx_1 = ecx_1
        int32_t var_74_1 = ecx_1
        int32_t var_5c_1 = ebx_1
        int32_t var_70_1 = 0
        int32_t var_68
        int32_t var_64
        int32_t var_58
        int32_t var_54
        int32_t var_38
        
        if (*(result + 4) s> 0)
            bool cond:3_1
            
            do
                if (*esi_3 == 0)
                    int32_t ecx_3 = edx_1 & 0x80000001
                    
                    if (ecx_3 s< 0)
                        ecx_3 = ((ecx_3 - 1) | 0xfffffffe) + 1
                    
                    int32_t eax_3
                    int32_t edx_2
                    edx_2:eax_3 = sx.q(edx_1)
                    int32_t ecx_8 =
                        *(arg1 + (ecx_3 << 2) + 0x78) << 0x10 | zx.d(((eax_3 - edx_2) s>> 1).w)
                    int32_t* var_9c_3
                    char* var_98_3
                    int32_t var_94_3
                    void var_80
                    int32_t var_28
                    
                    switch (*(esi_3 + 0x18) - 1)
                        case 0
                            var_28 = edi_1
                            int32_t var_24_1 = ebx_1
                            var_28 = *(esi_3 + 0x20) + edi_1
                            int32_t var_48 = *(esi_3 + 0x10)
                            int32_t var_44_1 = *(esi_3 + 0x14)
                            int32_t var_40_1 = data_4b1788
                            int32_t var_3c_1 = data_4b178c
                            int32_t eax_10
                            eax_10.b = *(esi_3 + 8)
                            var_48:3.b = eax_10.b
                            int32_t edx_6
                            edx_6.b = *(esi_3 + 8)
                            var_44_1:3.b = edx_6.b
                            int32_t eax_13
                            int32_t edx_7
                            edx_7:eax_13 = sx.q(zx.d(*(esi_3 + 0x13)) * *(esi_3 + 8))
                            var_40_1:3.b = ((eax_13 + (edx_7 & 0x7f)) s>> 7).b
                            int32_t eax_18
                            int32_t edx_9
                            edx_9:eax_18 = sx.q(zx.d(*(esi_3 + 0x17)) * *(esi_3 + 8))
                            var_3c_1:3.b = ((eax_18 + (edx_9 & 0x7f)) s>> 7).b
                            int32_t eax_21 = *(esi_3 + 0x2c)
                            
                            if (eax_21 != 0)
                                int32_t var_20_1 = *((eax_21 << 3) + &data_4b1730)
                                int32_t var_1c_1 = *((eax_21 << 3) + &data_4b1734)
                                sub_43b4b0(ecx_8, &var_28, &var_48, arg2.w)
                            else
                                sub_43b400(ecx_8, &var_28, &var_48, arg2.w)
                        case 1
                            int32_t var_20_2 = 0x2000
                            int32_t var_1c_2 = 0x2000
                        label_41acbc:
                            var_94_3 = arg2
                            var_98_3 = &var_80
                            var_9c_3 = &var_28
                        label_41acc8:
                            var_28 = edi_1
                            int32_t var_24_2 = ebx_1
                            sub_441ed0(ecx_8, var_9c_3, var_98_3, var_94_3)
                        case 2
                            int32_t var_20_3 = 0xccc
                        label_41ad20:
                            var_94_3 = arg2
                            var_98_3 = &var_80
                            int32_t var_1c_3 = 0x1000
                            var_9c_3 = &var_28
                            goto label_41acc8
                        case 3
                            var_28 = edi_1
                            int32_t eax_28 = *(esi_3 + 0x1c) & 0x80000001
                            
                            if (eax_28 s< 0)
                                eax_28 = ((eax_28 - 1) | 0xfffffffe) + 1
                            
                            var_28 = eax_28 + edi_1
                            int32_t var_24_4 = ebx_1 - mods.dp.d(sx.q(*(esi_3 + 0x1c)), 3)
                            sub_441e90(ecx_8, &var_28, &var_80, arg2)
                            ebx_1 = var_5c_1
                        case 4
                            int32_t var_24_5 = ebx_1 + 8
                            int32_t var_1c_4 = ebx_1 + 8
                            int32_t var_20_4 = edi_1 + 8
                            int32_t var_18_1 = 0x1000
                            int32_t var_14_1 = 0x1000
                            var_28 = edi_1
                            var_28 = edi_1 + 8
                            int32_t eax_38
                            int32_t edx_20
                            edx_20:eax_38 = sx.q(*(esi_3 + 0x1c) << 0xc)
                            int32_t var_10_1 = (eax_38 + (edx_20 & 0x3f)) s>> 6
                            int32_t var_94_5 = arg2
                            void* var_98_5 = &var_80
                            int32_t var_c_1 = 1
                            sub_441f10(ecx_8, &var_28)
                        case 5
                            goto label_41ad20
                        case 6
                            goto label_41acbc
                    
                    var_68 = edi_1
                    var_64 = ebx_1
                    
                    if (var_7c != *(esi_3 + 0x30))
                        if (var_7c != 0xffffffff)
                            int32_t var_4c_1 = ebx_1
                            int32_t var_50_1 = edi_1
                            int32_t ecx_11 = *(esi_3 + 0x20) + edi_1
                            sub_443990(&var_58, 0x4b172c, arg2)
                            void* eax_43 = data_a5d8f8
                            
                            if (*(eax_43 + 0xa4cc) == 1 && var_84 == *(eax_43 + 0xa4d0))
                                int32_t eax_44 = var_58
                                int32_t var_34_1 = var_54 - 0x1a
                                int32_t var_94_7 = arg2
                                var_38 = eax_44
                                int32_t var_30_1 = ecx_11 - eax_44
                                int32_t var_2c_1 = 0x1a
                                sub_439d90(nullptr, &var_38, 0)
                            
                            var_84 += 1
                            var_58 = ecx_11
                            var_54 = ebx_1 + 0x1a
                        else
                            int32_t var_54_1 = ebx_1
                            var_58 = edi_1
                            var_58 = *(esi_3 + 0x20) + edi_1
                            var_54 = ebx_1 + 0x1a
                        
                        var_7c = *(esi_3 + 0x30)
                    
                    result = result_1
                
                edx_1 = var_74_1 + 1
                esi_3 += 0x34
                cond:3_1 = var_70_1 + 1 s< *(result + 4)
                var_74_1 = edx_1
                var_70_1 += 1
            while (cond:3_1)
        
        if (*(esi_3 - 0x34) == 0 && var_7c != 0xffffffff)
            int32_t var_50_3 = var_68
            int32_t var_4c_3 = var_64
            int32_t ecx_19 = *(esi_3 - 0x14) + var_68 + 0x1a
            sub_443990(&var_58, 0x4b172c, arg2)
            void* eax_48 = data_a5d8f8
            
            if (*(eax_48 + 0xa4cc) == 1 && var_84 == *(eax_48 + 0xa4d0))
                int32_t eax_49 = var_58
                int32_t var_94_9 = arg2
                int32_t var_34_2 = var_54 - 0x1a
                var_38 = eax_49
                int32_t var_30_2 = ecx_19 - eax_49
                int32_t var_2c_2 = 0x1a
                sub_439d90(nullptr, &var_38, 0)
            
            var_84 += 1
            var_58 = ecx_19
            result = result_1
            var_54 = var_64 + 0x1a
            var_7c = 0xffffffff
        
        result += 0x1c
        bool cond:2_1 = var_6c + 1 s< *(arg1 + 0x74) + 1
        var_6c += 1
        result_1 = result
        
        if (not(cond:2_1))
            break
        
        edx = arg1

return result
