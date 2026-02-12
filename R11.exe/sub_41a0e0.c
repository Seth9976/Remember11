// 函数: sub_41a0e0
// 地址: 0x41a0e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

bool cond:1_1

switch (sx.d(*(arg1 + 0x10)))
    case 0
        sub_441740(data_e7e648 + 0xb3dcc, 0xffffff80, 4)
        sub_441760(data_e7e648 + 0xb3dcc, 0, 0)
        *(data_e7e648 + 0xab460) = 0
        *(data_e7e648 + 0xab461) = 0
        sub_419c80()
        *(arg1 + 0x10) = 1
    label_41a160:
        cond:1_1 = sub_441790(data_e7e648 + 0xb3dcc) != 0
    label_41a523:
        
        if (cond:1_1)
            sub_41a030()
        else
            *(arg1 + 0x10) = 2
            sub_41a030()
    case 1
        goto label_41a160
    case 2
        data_e7e634 = 0xffffffff
        data_e7e630 = 0
        *(arg1 + 0x10) = 9
    label_41a181:
        int32_t eax_5 = data_e7e634
        
        if (eax_5 s>= 0 && eax_5 != zx.d(*(data_e7e648 + 0xab460)))
            sub_4095a0(3)
            *(data_e7e648 + 0xab460) = data_e7e634.b
        
        int32_t edi_1 = 0
        bool cond:2_1
        
        if (data_2b5cf1a != 0)
            cond:2_1 = (*(data_c7cc70 + 8) & 0x8000) == 0
        else
            cond:2_1 = (*(data_c7cc70 + 8) & 8) == 0
        
        if (not(cond:2_1))
            edi_1 = 1
        
        int32_t eax_7 = data_2b53610
        void* ecx_8
        
        if ((eax_7 & 0x900890) != 0)
            sub_4095a0(3)
            ecx_8 = data_e7e648
            *(ecx_8 + 0xab460) = (mods.dp.d(sx.q(zx.d(*(ecx_8 + 0xab460)) + 6), 7)).b
        else if ((eax_7 & 0x600260) != 0)
            sub_4095a0(3)
            ecx_8 = data_e7e648
            *(ecx_8 + 0xab460) = (mods.dp.d(sx.q(zx.d(*(ecx_8 + 0xab460)) + 1), 7)).b
        else
            int32_t eax_8 = data_2b53608
            
            if ((eax_8 & 0x2100) != 0 || data_e7e630 != 0)
                void* ecx_7 = data_e7e648
                
                switch (zx.d(*(ecx_7 + 0xab460)))
                    case 0
                        if (*(ecx_7 + 0x28c0) != 1)
                            goto label_41a273
                        
                        sub_4095a0(2)
                    case 1, 3, 4, 5
                    label_41a273:
                        sub_4095a0(6)
                        sub_4050d0(3, 0xa)
                        *(arg1 + 0x10) = 5
                    case 2
                        sub_415a50()
                        sub_4095a0(0)
                        return 1
                    case 6
                        sub_4095a0(6)
                        *(data_e7e648 + 0xab461) = 1
                        *(arg1 + 0x10) = 3
            else
                int32_t eax_9
                
                if ((eax_8 & 0x4400) == 0)
                    eax_9 = sub_45c4f0()
                
                if ((eax_8 & 0x4400) != 0 || eax_9 != 0 || edi_1 == 1)
                    sub_4095a0(1)
                    return 1
        sub_41a030()
    case 3
        data_e7e634 = 0xffffffff
        data_e7e630 = 0
        *(arg1 + 0x10) = 0xa
    label_41a327:
        int32_t eax_19 = data_e7e634
        
        if (eax_19 s>= 1 && eax_19 - 1 != zx.d(*(data_e7e648 + 0xab461)))
            sub_4095a0(3)
            *(data_e7e648 + 0xab461) = data_e7e634.b - 1
        
        if ((data_2b53610 & 0xf00af0) != 0)
            sub_4095a0(3)
            void* eax_24 = data_e7e648
            *(eax_24 + 0xab461) = *(eax_24 + 0xab461) == 0
            sub_41a090()
        else
            int32_t eax_22 = data_2b53608
            
            if ((eax_22 & 0x2100) == 0 && data_e7e630 == 0)
                if ((eax_22 & 0x4400) != 0)
                    goto label_41a395
                
                if (sub_45c4f0() != 0)
                    goto label_41a395
                
                sub_41a090()
            else if (*(data_e7e648 + 0xab461) != 0)
            label_41a395:
                sub_4095a0(1)
                *(arg1 + 0x10) = 2
                sub_41a090()
            else
                sub_4095a0(0)
                sub_4050d0(3, 0xa)
                *(arg1 + 0x10) = 4
                sub_41a090()
    case 4
        if (sub_405130() == 1)
            return 2
        
        sub_41a090()
    case 5
        if (sub_405130() == 1)
            sub_414cc0(0)
            *(arg1 + 0x10) = 6
        
        sub_41a030()
    case 6
        sub_41de40()
        sub_406780(0, 0)
        void* eax_28 = data_e7e648
        *(data_e7e648 + 0x2894) =
            (&data_4b13e8)[zx.d(*(eax_28 + 0xab460))](eax_28 + 0xb20450, 0x5e0000)
        *(arg1 + 0x10) = 7
    case 7
        int32_t eax_33 = sub_446f90(*(data_e7e648 + 0x2894))
        
        if (eax_33 == 1)
            sub_4050d0(2, 0xa)
            sub_414c80(0)
            sub_419c80()
            *(arg1 + 0x10) = 8
        else
            if (eax_33 == 2)
                return 3
            
            if (eax_33 == 3)
                void* eax_37 = data_e7e648
                *(eax_37 + 0xab460) = *(eax_37 + 0xab460) == 0
                void* eax_38 = data_e7e648
                *(data_e7e648 + 0x2894) =
                    (&data_4b13e8)[zx.d(*(eax_38 + 0xab460))](eax_38 + 0xb20450, 0x5e0000)
    case 8
        cond:1_1 = sub_405130() != 1
        goto label_41a523
    case 9
        goto label_41a181
    case 0xa
        goto label_41a327

sub_4417a0(data_e7e648 + 0xb3dcc)
return 0
