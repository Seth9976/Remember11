// 函数: sub_42c070
// 地址: 0x42c070
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax = data_4bf344
int32_t ecx_1 = *((*(eax + 0xb218) << 2) + &data_4bf2e0)
int32_t ecx_3 = sx.d(*(arg1 + 0x10))

if (ecx_3 == 0)
    sub_43d220(eax + 0x15788, 0x4be488, 2, 0, 0xffffffff, 0x1000)
    sub_441740(data_4bf344 + 0x1f0f0, 0x280, 0xa)
    sub_441760(data_4bf344 + 0x1f0f0, 0, 0)
    sub_43d220(data_4bf344 + 0x19c3c, 0x4be498, 3, 0, 0xffffffff, 0xe14)
    eax = data_4bf344
    *(arg1 + 0x10) = 1
label_42c4c8:
    
    if (*(eax + 0xb224) == 1)
        sub_480ea0(eax + 0x590c, &data_2b5aa20, 0x590c)
        sub_42af80()
        void* eax_40 = data_4bf344
        *(eax_40 + 0xb224) = 2
        *(eax_40 + 0xb230) = 1
        *(arg1 + 0x10) = 2
else
    if (ecx_3 == 1)
        goto label_42c4c8
    
    if (ecx_3 == 2)
        int32_t eax_1 = data_2b53608
        
        if ((eax_1 & 0x2100) == 0)
            int32_t eax_3
            
            if ((eax_1 & 0x4400) == 0)
                eax_3 = sub_45c4f0()
            
            if ((eax_1 & 0x4400) != 0 || eax_3 != 0)
                sub_4095a0(1)
                void* edi_1 = data_4bf344
                sub_480ea0(&data_2b5aa20, edi_1 + 0x590c, 0x590c)
                *((&data_4bf018)[ecx_1 * 6] + 4) = sx.d(data_2b5cf06)
                *((&data_4bf018)[ecx_1 * 6] + 0x14) = sx.d(data_2b5cf07)
                *(edi_1 + 0xb224) = 0
                *(edi_1 + 0xb230) = 0
                *(arg1 + 0x10) = 1
            else
                int32_t eax_4 = data_2b53610
                
                if ((eax_4 & 0x100810) == 0)
                    if ((eax_4 & &__section_headers[1].numberOfRelocations) != 0)
                        if (data_2b5cf07 s<= 0xe0)
                            goto label_42c1a3
                        
                        sub_4095a0(3)
                        data_2b5cf07 -= 1
                    else if ((eax_4 & 0x800080) != 0)
                        if (data_2b5cf06 s<= 0xe0)
                            goto label_42c1a3
                        
                        sub_4095a0(3)
                        data_2b5cf06 -= 1
                    else if ((eax_4 & 0x200020) == 0)
                        void* eax_6 = data_4bf344
                        
                        if (*(eax_6 + 0xb238) == 1 && (data_2b53604 & 0xf00af0) == 0)
                            *(eax_6 + 0xb238) = 0
                    else
                        if (data_2b5cf06 s>= 0x20)
                            goto label_42c1a3
                        
                        sub_4095a0(3)
                        data_2b5cf06 += 1
                else if (data_2b5cf07 s>= 0x20)
                label_42c1a3:
                    void* eax_5 = data_4bf344
                    
                    if (*(eax_5 + 0xb238) == 0)
                        *(eax_5 + 0xb238) = 1
                        sub_4095a0(2)
                else
                    sub_4095a0(3)
                    data_2b5cf07 += 1
        else
            sub_4095a0(0)
            void* eax_2 = data_4bf344
            *(eax_2 + 0xb224) = 0
            *(eax_2 + 0xb230) = 0
            *(arg1 + 0x10) = 1
        
        int32_t eax_13
        int16_t edx_4
        edx_4:eax_13 = sx.q(sub_441360(data_2b603ac << 0xa) * 6)
        int32_t eax_16
        int32_t edx_6
        edx_6:eax_16 = sx.q((eax_13 + zx.d(edx_4)) s>> 0x10)
        int32_t esi_3 = (eax_16 ^ edx_6) - edx_6
        int32_t var_18
        
        if (data_2b5cf06 != 0xe0)
            int32_t eax_17 = data_4bf3f8
            int32_t edx_7 = data_4bf400
            int32_t ecx_9 = data_4bf3fc
            var_18 = eax_17
            int32_t var_10_1 = edx_7
            int32_t edx_8 = data_4bf408
            int32_t var_14_1 = ecx_9
            int32_t ecx_10 = data_4bf404
            var_18 = eax_17 + esi_3
            int32_t var_8_1 = edx_8
            int32_t var_c_1 = ecx_10
            int32_t var_4_1 = data_4bf40c
            sub_445470(data_4bf344 + 0x1f1b4, &var_18, 0x4bf458, 0xa)
        
        if (data_2b5cf06 != 0x20)
            int32_t eax_21 = data_4bf410
            int32_t edx_9 = data_4bf418
            int32_t ecx_12 = data_4bf414
            var_18 = eax_21
            int32_t var_10_2 = edx_9
            int32_t edx_10 = data_4bf420
            int32_t var_14_2 = ecx_12
            int32_t ecx_13 = data_4bf41c
            var_18 = eax_21 - esi_3
            int32_t var_8_2 = edx_10
            int32_t var_c_2 = ecx_13
            int32_t var_4_2 = data_4bf424
            sub_445470(data_4bf344 + 0x1f1b4, &var_18, 0x4bf458, 0xa)
        
        if (data_2b5cf07 != 0x20)
            int32_t eax_25 = data_4bf42c
            int32_t var_14_3 = eax_25
            int32_t var_10_3 = data_4bf430
            int32_t edx_12 = data_4bf438
            var_18 = data_4bf428
            int32_t var_14_4 = eax_25 + esi_3
            int32_t var_8_3 = edx_12
            int32_t var_c_3 = data_4bf434
            int32_t var_4_3 = data_4bf43c
            sub_445470(data_4bf344 + 0x1f1b4, &var_18, 0x4bf458, 0xa)
        
        if (data_2b5cf07 != 0xe0)
            int32_t eax_29 = data_4bf444
            int32_t var_14_5 = eax_29
            wchar32 var_10_4 = (*U"    ")[0]
            wchar32 edx_14 = (*U"    ")[2]
            var_18 = data_4bf440
            int32_t var_14_6 = eax_29 - esi_3
            wchar32 var_8_4 = edx_14
            wchar32 var_c_4 = (*U"    ")[1]
            wchar32 var_4_4 = (*U"    ")[3]
            sub_445470(data_4bf344 + 0x1f1b4, &var_18, 0x4bf458, 0xa)
        
        sub_442c30(data_4bf344 + 0x1f1b4, 0xa)
        *((&data_4bf018)[ecx_1 * 6] + 4) = sx.d(data_2b5cf06)
        *((&data_4bf018)[ecx_1 * 6] + 0x14) = sx.d(data_2b5cf07)
        sub_42afd0()
        sub_42b560(0)
        return 0

sub_42b560(0)
return 0
