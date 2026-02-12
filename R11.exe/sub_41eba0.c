// 函数: sub_41eba0
// 地址: 0x41eba0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(*(arg1 + 0x10))
void* ecx = data_e7e648 + 0xb20450
data_4b187c = ecx

switch (eax)
    case 0
        sub_4050d0(2, 0xa)
        sub_41e960()
        *(arg1 + 0x10) = 1
    label_41ebe7:
        
        if (sub_405130() == 1)
            *data_4b187c = 0
            *(arg1 + 0x10) = 2
    case 1
        goto label_41ebe7
    case 2
        sub_45e320(0x20, 0x1a0, 0x6e, 0x18, 0)
        sub_45c4b0()
        sub_45e320(0xac, 0x1a0, 0x6e, 0x18, 0)
        sub_45c4b0()
        sub_45e320(0x254, 0x24, 0x18, 0x18, 0)
        int32_t eax_6 = sub_45c4b0()
        sub_45e320(0x254, 0x193, 0x18, 0x18, 0)
        int32_t eax_7 = sub_45c4b0()
        int32_t ecx_3 = data_2b53610
        
        if ((ecx_3 & 0x900890) != 0 || eax_6 != 0)
            void* eax_15 = data_4b187c
            int32_t esi_3 = *(eax_15 + 0x1c)
            *(eax_15 + 0x1c) = 0
            
            if (sub_41e3e0(1) != 0)
                void* eax_17 = data_4b187c
                
                if (*(eax_17 + 0x18) == 0)
                    *(eax_17 + 0x18) = 1
                    sub_4095a0(2)
            
            *(data_4b187c + 0x1c) = esi_3
        else if ((ecx_3 & 0x600260) != 0 || eax_7 != 0)
            void* eax_12 = data_4b187c
            int32_t esi_2 = *(eax_12 + 0x1c)
            *(eax_12 + 0x1c) = 9
            
            if (sub_41e3e0(0) != 0)
                void* eax_14 = data_4b187c
                
                if (*(eax_14 + 0x18) == 0)
                    *(eax_14 + 0x18) = 1
                    sub_4095a0(2)
            
            *(data_4b187c + 0x1c) = esi_2
        else
            int32_t eax_8
            
            if ((data_2b53608 & 0x2100) == 0)
                eax_8 = sub_45c4e0()
            
            if ((data_2b53608 & 0x2100) != 0 || eax_8 != 0)
                sub_4095a0(0)
                *data_4b187c = 1
                *(arg1 + 0x10) = 3
            else if ((data_2b53608 & 0x5402) != 0)
            label_41ed40:
                sub_4095a0(1)
                sub_4050d0(3, 0xa)
                *(arg1 + 0x10) = 6
            else
                if (sub_45c4f0() != 0)
                    goto label_41ed40
                
                if (sub_45c4f0() != 0)
                    goto label_41ed40
                
                void* eax_11 = data_4b187c
                
                if (*(eax_11 + 0x18) == 1 && (data_2b53604 & 0xf00af0) == 0)
                    *(eax_11 + 0x18) = 0
    case 3
        sub_45e320(0x20, 0x1a0, 0x6e, 0x18, 0)
        sub_45c4b0()
        sub_45e320(0xac, 0x1a0, 0x6e, 0x18, 0)
        sub_45c4b0()
        sub_45e320(0x138, 0x1a0, 0x6e, 0x18, 0)
        sub_45c4b0()
        sub_45e320(0x254, 0x24, 0x18, 0x18, 0)
        void* eax_19 = sub_45c4b0()
        sub_45e320(0x254, 0x193, 0x18, 0x18, 0)
        sub_45c4b0()
        int32_t ebx_1 = 0
        int32_t edi_1 = 0
        
        for (int32_t i = 0x44; i s< 0x184; )
            if (sub_45e320(0x27, i, 0x1f4, 0x1c, 0) != 0 && edi_1 != *(data_4b187c + 0x1c)
                    && sub_45c4b0() != 0)
                *(data_4b187c + 0x1c) = edi_1
                ebx_1 = 1
            
            i += 0x20
            edi_1 += 1
        
        int32_t esi_4 = sub_45c4b0()
        
        if (ebx_1 != 0)
            esi_4 = 0
        
        int32_t eax_23 = data_2b53610
        int32_t var_14_1
        
        if ((eax_23 & 0x900890) != 0 || eax_19 != 0)
            void* eax_34 = data_4b187c
            int32_t ecx_11 = *(eax_34 + 0x1c)
            
            if (*(eax_34 + 4) == 0)
                if (ecx_11 == 0)
                label_41f06a:
                    var_14_1 = 1
                    goto label_41f06c
                
                *(eax_34 + 0x1c) = ecx_11 - 1
            else
                if (ecx_11 s<= 1)
                    goto label_41f06a
                
                *(eax_34 + 0x1c) = ecx_11 - 1
        else if ((eax_23 & 0x600260) != 0)
            if (sub_41e4b0(0) != 0)
                var_14_1 = 0
            label_41f06c:
                
                if (sub_41e3e0(var_14_1) != 0)
                    void* eax_36 = data_4b187c
                    
                    if (*(eax_36 + 0x18) == 0)
                        *(eax_36 + 0x18) = 1
                        sub_4095a0(2)
        else
            int32_t eax_24 = data_2b53608
            
            if ((eax_24 & 0x2100) != 0)
                *(data_4b187c + 0x24) = 0xffffffff
                
                if (sub_41e520() != 0)
                    sub_4095a0(2)
                else
                    *(data_4b187c + 0x14) = 1
                    *(arg1 + 0x10) = 4
            else if ((eax_24 & 0x5402) != 0)
            label_41f019:
                sub_4095a0(1)
                *data_4b187c = 0
                *(arg1 + 0x10) = 2
            else
                if (sub_45c4f0() != 0)
                    goto label_41f019
                
                if (sub_45c4f0() != 0)
                    goto label_41f019
                
                int32_t ecx_8 = *(data_c7cc70 + 8)
                void* eax_29 = data_4b187c
                
                if ((ecx_8 & 0x8000) != 0)
                    *(eax_29 + 0x24) = 0xffffffff
                    *(eax_29 + 0x14) = 1
                    sub_41e520()
                    *(arg1 + 0x10) = 5
                else if (*(eax_29 + 0x18) != 1)
                    if ((ecx_8.b & 8) != 0 || esi_4 != 0)
                        sub_4095a0(0)
                        void* eax_30 = data_4b187c
                        sub_43d220(eax_30 + 0x3c, eax_30 + 0x44f0, 0x13, zx.d(*(eax_30 + 0x44f6)), 
                            0xffffffff, 0x1000)
                        *(data_4b187c + 0x38) = 1
                        *(arg1 + 0x10) = 7
                else if ((data_2b53604 & 0xf00af0) == 0)
                    *(eax_29 + 0x18) = 0
    case 4
        sub_45e320(0x20, 0x1a0, 0x6e, 0x18, 0)
        sub_45c4b0()
        
        if ((*(data_c7cc70 + 8) & 0x8000) != 0 || (data_2b53608 & 0x4400) != 0)
        label_41f117:
            sub_4095a0(1)
            sub_4090d0(0)
            *(data_4b187c + 0x14) = 0
            *(arg1 + 0x10) = 3
        else
            if (sub_45c4f0() != 0 || (data_2b53608 & 0x3102) != 0)
                goto label_41f117
            
            if (sub_45c4f0() != 0)
                goto label_41f117
            
            if (sub_41e5b0() == 0)
                *(data_4b187c + 0x14) = 0
                *(arg1 + 0x10) = 3
    case 5
        sub_45e320(0x20, 0x1a0, 0x6e, 0x18, 0)
        sub_45c4b0()
        
        if ((*(data_c7cc70 + 8) & 0x8000) != 0 || (data_2b53608 & 0x4400) != 0)
        label_41f1ee:
            sub_4095a0(1)
            sub_4090d0(0)
            *(data_4b187c + 0x14) = 0
            *(arg1 + 0x10) = 3
        else
            if (sub_45c4f0() != 0 || (data_2b53608 & 0x3102) != 0)
                goto label_41f1ee
            
            if (sub_45c4f0() != 0)
                goto label_41f1ee
            
            if (sub_41e5b0() == 0)
                void* eax_44 = data_4b187c
                int32_t esi_5 = *(eax_44 + 0x1c)
                *(eax_44 + 0x1c) = 9
                
                if (sub_41e3e0(0) != 0)
                    void* edi_2 = data_4b187c
                    *(edi_2 + 0x1c) = esi_5
                    
                    if (sub_41e4b0(0) == 0)
                        sub_41e520()
                    else
                        *(edi_2 + 0x14) = 0
                        *(arg1 + 0x10) = 3
                else
                    *(data_4b187c + 0x1c) = esi_5
                    sub_41e520()
    case 6
        if (sub_405130() == 1)
            sub_4090d0(0)
            return 1
    case 7
        data_e7e634 = 0xffffffff
        data_e7e630 = 0
        *(arg1 + 0x10) = 8
    label_41f248:
        int32_t eax_50 = data_e7e634
        
        if (eax_50 s< 1)
            data_e7e630 = 0
        else
            if (eax_50 - 1 != *(ecx + 0x38))
                sub_4095a0(3)
                ecx = data_4b187c
                *(ecx + 0x38) = data_e7e634 - 1
                eax_50 = data_e7e634
            
            if (eax_50 s< 1)
                data_e7e630 = 0
        
        int32_t eax_53 = data_2b53610
        
        if ((eax_53 & 0x900890) != 0)
            sub_4095a0(3)
            void* eax_57 = data_4b187c
            int32_t edx_10
            edx_10.b = *(eax_57 + 0x38) == 0
            *(eax_57 + 0x38) = edx_10
            sub_41e920()
        else if ((eax_53 & 0x600260) != 0)
            sub_4095a0(3)
            void* eax_56 = data_4b187c
            int32_t ecx_15
            ecx_15.b = *(eax_56 + 0x38) == 0
            *(eax_56 + 0x38) = ecx_15
            sub_41e920()
        else
            int32_t eax_54 = data_2b53608
            
            if ((eax_54 & 0x2100) == 0 && data_e7e630 == 0)
                if ((eax_54 & 0x5402) != 0)
                    goto label_41f2c6
                
                if (sub_45c4f0() != 0)
                    goto label_41f2c6
                
                sub_41e920()
            else if (*(ecx + 0x38) != 0)
            label_41f2c6:
                sub_4095a0(1)
                *(arg1 + 0x10) = 3
                sub_41e920()
            else
                sub_4095a0(0)
                sub_4050d0(3, 0xa)
                *(arg1 + 0x10) = 9
                sub_41e920()
    case 8
        goto label_41f248
    case 9
        if (sub_405130() == 1)
            sub_4090d0(0)
            sub_41e280(&data_49e15e, 0)
            sub_4016c0()
            void* eax_59 = data_4b187c
            __builtin_memcpy(&data_2b5a860, 
                mods.dp.d(sx.q(*(eax_59 + 0x1c) + *(eax_59 + 0x10) + *(eax_59 + 4) + 0x3e8), 0x3e8)
                    * 0x238 + data_e7e648 + 0x20a1c, 
                0x1bc)
            data_e7e644 = 1
            sub_41e280(0x49ee58, 0)
            sub_41e280(0x49ee34, 0)
            sub_41e280(0x49ee58, 0)
            sub_41e280(&data_49e15e, 0)
            return 2

sub_41e630()
sub_445470(data_4b187c + 0x6054, 0x4b19a4, 0x4b19bc, 1)
sub_442c30(data_4b187c + 0x6054, 1)
sub_423a40(data_4b187c + 0x5fa0, 1)
return 0
