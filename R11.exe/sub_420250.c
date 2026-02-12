// 函数: sub_420250
// 地址: 0x420250
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

data_4b19c0 = *(arg1 + 0x44)

switch (sx.d(*(arg1 + 0x10)))
    case 0
        sub_4050d0(2, 0xa)
        sub_41fbd0()
        *(arg1 + 0x10) = 1
    label_420284:
        
        if (sub_405130() == 1)
            *data_4b19c0 = 0
            sub_41f420()
            *(arg1 + 0x10) = 2
    case 1
        goto label_420284
    case 2
        int32_t edi_1 = 0
        
        for (int32_t i = 0x4c; i s< 0x18c; )
            if (sub_45e320(0x2e, i, 0x246, 0x1c, 0) != 0)
                void* ecx_2 = data_4b19c0
                int32_t eax_5 = *(ecx_2 + 0xc)
                
                if (eax_5 != edi_1)
                    *(ecx_2 + 0xc) = edi_1
                    *(ecx_2 + 4) += edi_1 - eax_5
            
            i += 0x20
            edi_1 += 1
        
        int32_t eax_6 = sub_45c4b0()
        int32_t ecx_3 = data_2b53608
        void* eax_14
        
        if ((ecx_3 & 0x2100) != 0 || eax_6 != 0)
            eax_14 = data_4b19c0
            
            if (*(*(eax_14 + 4) + eax_14 + 0x10) != 0)
                sub_4095a0(0)
                int32_t* eax_18 = data_4b19c0
                int32_t edx_6 = eax_18[1]
                *eax_18 = 1
                sub_41fcd0(sub_402210(edx_6))
                *(arg1 + 0x10) = 3
                sub_41fb60()
                return 0
            
        label_4203bb:
            
            if (*(eax_14 + 0x414) == 0)
                *(eax_14 + 0x414) = 1
                sub_4095a0(2)
                sub_41fb60()
                return 0
        else
            if ((ecx_3 & 0x4400) != 0)
            label_4203fe:
                sub_4095a0(1)
                sub_4050d0(3, 0xa)
                *(arg1 + 0x10) = 5
                sub_41fb60()
                return 0
            
            if (sub_45c4f0() != 0)
                goto label_4203fe
            
            if (sub_45c4f0() != 0)
                goto label_4203fe
            
            int32_t eax_9
            
            if ((data_2b53610 & 0x900890) == 0)
                eax_9 = sub_45c510()
            
            int32_t __saved_esi_1
            
            if ((data_2b53610 & 0x900890) != 0 || eax_9 != 0)
                __saved_esi_1 = 0
            label_4203aa:
                
                if (sub_41f840(__saved_esi_1) == 0)
                    eax_14 = data_4b19c0
                    goto label_4203bb
                
                sub_4095a0(3)
                sub_41fb60()
                return 0
            
            int32_t eax_10
            
            if ((data_2b53610 & 0x600260) == 0)
                eax_10 = sub_45c520()
            
            if ((data_2b53610 & 0x600260) != 0 || eax_10 != 0)
                __saved_esi_1 = 1
                goto label_4203aa
            
            void* eax_11 = data_4b19c0
            
            if (*(eax_11 + 0x414) == 1 && (data_2b53604 & 0xf00af0) == 0)
                *(eax_11 + 0x414) = 0
                sub_41fb60()
                return 0
    case 3
        int32_t eax_21 = sub_41ff00()
        
        if (eax_21 == 1)
            sub_41f420()
            *data_4b19c0 = 0
            *(arg1 + 0x10) = 2
            sub_41fb60()
            return 0
        
        if (eax_21 == 2)
            *(data_e7e648 + 0xbec6c) = 1
            *(arg1 + 0x10) = 4
            sub_41fb60()
            return 0
    case 4
        if (sub_420170() - 1 u<= 1)
            *(arg1 + 0x10) = 3
            sub_41fb60()
            return 0
    case 5
        if (sub_405130() == 1)
            void* eax_31 = data_e7e648
            sub_41a5b0(*(eax_31 + 0x13238) * 0x5c10 + eax_31 + 0x13254)
            return 1

sub_41fb60()
return 0
