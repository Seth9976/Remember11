// 函数: sub_42c520
// 地址: 0x42c520
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (sub_45e350(0x40, 0x99, 0x42, 0x42, 0) != 0)
    sub_45c4e0()

void* eax_48 = data_4bf344
int32_t ecx_1 = *((*(eax_48 + 0xb218) << 2) + &data_4bf2e0)
int32_t ecx_3 = sx.d(*(arg1 + 0x10))

if (ecx_3 == 0)
    sub_43d220(eax_48 + 0x15788, 0x4be4a8, 2, 0, 0xffffffff, 0x1000)
    sub_441740(data_4bf344 + 0x1f0f0, 0x280, 0xa)
    sub_441760(data_4bf344 + 0x1f0f0, 0, 0)
    sub_43d220(data_4bf344 + 0x19c3c, 0x4be4b8, 3, 0, 0xffffffff, 0xe14)
    eax_48 = data_4bf344
    *(arg1 + 0x10) = 1
label_42cae7:
    
    if (*(eax_48 + 0xb224) == 1)
        sub_480ea0(eax_48 + 0x590c, &data_2b5aa20, 0x590c)
        sub_42af80()
        void* eax_50 = data_4bf344
        *(eax_50 + 0xb224) = 2
        *(eax_50 + 0xb230) = 1
        *(arg1 + 0x10) = 2
else
    if (ecx_3 == 1)
        goto label_42cae7
    
    if (ecx_3 == 2)
        if (sub_45e350(sx.d(data_2b5cf08) + data_4bf460 + 4, data_4bf464 - sx.d(data_2b5cf09), 
                0x20, 0x20, 0) != 0)
            sub_45c500()
        
        if (sub_45e350(sx.d(data_2b5cf08) + data_4bf478 - 4, data_4bf47c - sx.d(data_2b5cf09), 
                0x20, 0x20, 0) != 0)
            sub_45c500()
        
        if (sub_45e350(sx.d(data_2b5cf08) + data_4bf490, data_4bf494 - sx.d(data_2b5cf09) + 4, 
                0x20, 0x20, 0) != 0)
            sub_45c500()
        
        if (sub_45e350(sx.d(data_2b5cf08) + data_4bf4a8, data_4bf4ac - sx.d(data_2b5cf09) - 4, 
                0x20, 0x20, 0) != 0)
            sub_45c500()
        
        int32_t eax_11
        int32_t eax_12
        
        if ((data_2b53608 & 0x2100) == 0)
            eax_11 = sub_45e350(0x40, 0x99, 0x42, 0x42, 0)
            
            if (eax_11 != 0)
                eax_12 = sub_45c4e0()
        
        if ((data_2b53608 & 0x2100) != 0 || (eax_11 != 0 && eax_12 != 0))
            sub_4095a0(0)
            void* eax_19 = data_4bf344
            *(eax_19 + 0xb224) = 0
            *(eax_19 + 0xb230) = 0
            *(arg1 + 0x10) = 1
        else
            int32_t eax_13
            
            if ((data_2b53608 & 0x4400) == 0)
                eax_13 = sub_45c4f0()
            
            if ((data_2b53608 & 0x4400) != 0 || eax_13 != 0)
                sub_4095a0(1)
                void* edi_1 = data_4bf344
                sub_480ea0(&data_2b5aa20, edi_1 + 0x590c, 0x590c)
                *((&data_4bf018)[ecx_1 * 6] + 4) = sx.d(data_2b5cf08)
                *((&data_4bf018)[ecx_1 * 6] + 0x14) = sx.d(data_2b5cf09)
                *(edi_1 + 0xb224) = 0
                *(edi_1 + 0xb230) = 0
                *(arg1 + 0x10) = 1
            else
                int32_t eax_14 = data_2b53610
                
                if ((eax_14 & 0x100810) == 0)
                    if ((eax_14 & &__section_headers[1].numberOfRelocations) != 0)
                        if (data_2b5cf09 s<= 0xe0)
                            goto label_42c6e9
                        
                        sub_4095a0(3)
                        data_2b5cf09 -= 1
                    else if ((eax_14 & 0x800080) != 0)
                        if (data_2b5cf08 s<= 0xe0)
                            goto label_42c6e9
                        
                        sub_4095a0(3)
                        data_2b5cf08 -= 1
                    else if ((eax_14 & 0x200020) == 0)
                        void* eax_16 = data_4bf344
                        
                        if (*(eax_16 + 0xb238) == 1 && (data_2b53604 & 0xf00af0) == 0)
                            *(eax_16 + 0xb238) = 0
                    else
                        if (data_2b5cf08 s>= 0x20)
                            goto label_42c6e9
                        
                        sub_4095a0(3)
                        data_2b5cf08 += 1
                else if (data_2b5cf09 s>= 0x20)
                label_42c6e9:
                    void* eax_15 = data_4bf344
                    
                    if (*(eax_15 + 0xb238) == 0)
                        *(eax_15 + 0xb238) = 1
                        sub_4095a0(2)
                else
                    sub_4095a0(3)
                    data_2b5cf09 += 1
        
        int32_t eax_25
        int16_t edx_12
        edx_12:eax_25 = sx.q(sub_441360(data_2b603ac << 0xa) * 6)
        int32_t* eax_28
        int32_t edx_14
        edx_14:eax_28 = sx.q((eax_25 + zx.d(edx_12)) s>> 0x10)
        int32_t* esi_1 = eax_28
        eax_28.b = data_2b5cf08
        int32_t esi_3 = (esi_1 ^ edx_14) - edx_14
        int32_t var_18
        
        if (eax_28.b != 0xe0)
            int32_t ecx_18 = data_4bf460
            int32_t edi_2 = data_4bf468
            int32_t edx_15 = data_4bf464
            var_18 = ecx_18
            int32_t var_10_1 = edi_2
            int32_t edx_16 = edx_15 - sx.d(data_2b5cf09)
            int32_t var_c_1 = data_4bf46c
            int32_t edi_4 = data_4bf470
            var_18 = sx.d(eax_28.b) + ecx_18 + esi_3
            int32_t var_14_1 = edx_16
            int32_t var_8_1 = edi_4
            int32_t var_4_1 = data_4bf474
            eax_28, edx_14 = sub_445470(data_4bf344 + 0x1f1b4, &var_18, 0x4bf45c, 0xa)
            eax_28.b = data_2b5cf08
        
        if (eax_28.b != 0x20)
            int32_t ecx_20 = data_4bf478
            int32_t edi_6 = data_4bf480
            int32_t edx_17 = data_4bf47c
            var_18 = ecx_20
            int32_t var_10_2 = edi_6
            int32_t edx_18 = edx_17 - sx.d(data_2b5cf09)
            int32_t var_c_2 = data_4bf484
            int32_t edi_8 = data_4bf488
            var_18 = sx.d(eax_28.b) - esi_3 + ecx_20
            int32_t var_14_2 = edx_18
            int32_t var_8_2 = edi_8
            int32_t var_4_2 = data_4bf48c
            eax_28, edx_14 = sub_445470(data_4bf344 + 0x1f1b4, &var_18, 0x4bf45c, 0xa)
            eax_28.b = data_2b5cf08
        
        edx_14.b = data_2b5cf09
        
        if (edx_14.b != 0x20)
            int32_t edi_10 = data_4bf494
            void* eax_40 = data_4bf344
            int32_t var_10_3 = data_4bf498
            int32_t var_14_3 = edi_10
            int32_t var_c_3 = data_4bf49c
            int32_t ebp_3 = data_4bf4a0
            var_18 = data_4bf490 + sx.d(eax_28.b)
            int32_t var_8_3 = ebp_3
            int32_t var_4_3 = data_4bf4a4
            int32_t var_14_4 = edi_10 + esi_3 - sx.d(edx_14.b)
            eax_28, edx_14 = sub_445470(eax_40 + 0x1f1b4, &var_18, 0x4bf45c, 0xa)
            edx_14.b = data_2b5cf09
            eax_28.b = data_2b5cf08
        
        if (edx_14.b != 0xe0)
            int32_t ecx_25 = data_4bf4ac
            int32_t var_14_5 = ecx_25
            wchar32 var_10_4 = (*U"    ")[0]
            wchar32 var_c_4 = (*U"    ")[1]
            int32_t var_14_6 = ecx_25 - esi_3 - sx.d(edx_14.b)
            wchar32 var_8_4 = (*U"    ")[2]
            void* ecx_29 = data_4bf344 + 0x1f1b4
            wchar32 var_4_4 = (*U"    ")[3]
            var_18 = data_4bf4a8 + sx.d(eax_28.b)
            sub_445470(ecx_29, &var_18, 0x4bf45c, 0xa)
        
        sub_442c30(data_4bf344 + 0x1f1b4, 0xa)
        *((&data_4bf018)[ecx_1 * 6] + 4) = sx.d(data_2b5cf08)
        *((&data_4bf018)[ecx_1 * 6] + 0x14) = sx.d(data_2b5cf09)
        sub_42afd0()
        sub_42b560(1)
        return 0

sub_42b560(1)
return 0
