// 函数: sub_422d30
// 地址: 0x422d30
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_4 = ecx
int32_t eax = sx.d(*(arg1 + 0x10))
int32_t* edx = &data_e7e660
data_a5d910 = &data_e7e660

switch (eax)
    case 0
        sub_422cd0()
        sub_4050d0(2, 0xa)
        *data_a5d910 = 0
        *(arg1 + 0x10) = 1
    label_422d7a:
        
        if (sub_405130() == 1)
            *(data_a5d910 + 0xc) = 0
            *(arg1 + 0x10) = 2
    case 1
        goto label_422d7a
    case 2
        int32_t eax_5 = data_e7e66c + 2
        data_e7e66c = eax_5
        
        if (eax_5 s> 0x80)
            data_e7e660 = 1
            data_e7e66c = 0x80
            sub_4215a0()
            *(arg1 + 0x10) = 4
            sub_422800()
            return 0
    case 3
        int32_t eax_8 = data_e7e66c + 2
        data_e7e66c = eax_8
        
        if (eax_8 s> 0x80)
            data_e7e66c = 0x80
            *(arg1 + 0x10) = 7
            sub_422800()
            return 0
    case 4
        int32_t edi_1 = 0
        
        for (void* i = &data_4b1b84; i s< 0x4b1ba8; )
            if (sub_45e320(*(i - 4), *i, 0x1cf, 0x54, 0) != 0 && *(data_a5d910 + 0x10) != edi_1)
                sub_4095a0(3)
                *(data_a5d910 + 0x10) = edi_1
            
            i += 0xc
            edi_1 += 1
        
        int32_t eax_13
        
        if ((data_2b53608 & 0x2000) == 0)
            eax_13 = sub_45c4b0()
        
        if ((data_2b53608 & 0x2000) != 0 || eax_13 != 0)
            sub_4095a0(0)
            void* eax_27 = data_a5d910
            int32_t ecx_12 = *((*(eax_27 + 0x10) << 2) + &data_4b1ba0)
            *(eax_27 + 0x24) = ecx_12
            *(eax_27 + 0x28) = ecx_12
            sub_421630()
            int32_t* eax_28 = data_a5d910
            eax_28[8] = 0
            eax_28[3] = 0
            *eax_28 = 2
            *(arg1 + 0x10) = 3
            sub_422800()
            return 0
        
        int32_t eax_14
        
        if ((data_2b53608 & 0x4000) == 0)
            eax_14 = sub_45c4f0()
        
        if ((data_2b53608 & 0x4000) != 0 || eax_14 != 0)
            sub_4095a0(1)
            sub_4050d0(3, 0xa)
            *(arg1 + 0x10) = 0x12
            sub_422800()
            return 0
        
        int32_t eax_15 = *(data_c7cc70 + 0x10)
        
        if ((eax_15.b & 0x90) != 0 || (eax_15 & 0x900000) != 0)
            sub_4095a0(3)
            void* ecx_9 = data_a5d910
            *(ecx_9 + 0x10) = mods.dp.d(sx.q(*(ecx_9 + 0x10) + 2), 3)
            sub_422800()
            return 0
        
        if ((eax_15.b & 0x60) != 0 || (eax_15 & 0x600000) != 0)
            sub_4095a0(3)
            void* ecx_7 = data_a5d910
            *(ecx_7 + 0x10) = mods.dp.d(sx.q(*(ecx_7 + 0x10) + 4), 3)
            sub_422800()
            return 0
    case 5
        int32_t eax_34 = data_e7e680 + 2
        data_e7e680 = eax_34
        
        if (eax_34 s> 0x80)
            data_e7e680 = 0x80
            data_e7e660 = 4
            sub_4214c0()
            *(arg1 + 0x10) = 8
            sub_422800()
            return 0
    case 6
        int32_t temp3_1 = data_e7e680
        data_e7e680 -= 2
        
        if (temp3_1 - 2 s< 0)
            data_e7e680 = 0
            data_e7e660 = 0
            data_e7e66c = 0
            *(arg1 + 0x10) = 2
            sub_422800()
            return 0
    case 7
        if (sub_405bd0(0xffffffff) != 0)
            sub_421670()
            *data_a5d910 = 3
            *(arg1 + 0x10) = 5
            sub_422800()
            return 0
    case 8
        int32_t edi_2 = 0
        var_4 = 0
        
        for (int32_t i_1 = 0x30; i_1 s< 0x198; )
            int32_t esi_1 = 0
            
            for (int32_t j = 0x16; j s< 0x26e; )
                if (edx[((edi_2 + (edx[9] << 2)) * 5 + esi_1) * 0xc + 0x14].w != 0)
                    int32_t eax_41
                    eax_41, ecx = sub_45e320(j, i_1, 0x70, 0x4e, 0)
                    
                    if (eax_41 == 0)
                        edx = data_a5d910
                    else
                        edx = data_a5d910
                        
                        if (edx[0x1e13] != esi_1 || edx[0x1e14] != edi_2)
                            int32_t eax_42
                            eax_42, ecx = sub_45c4b0()
                            
                            if (eax_42 != 0)
                                sub_4095a0(3)
                                void* eax_43 = data_a5d910
                                sub_4211c0(edi_2 - *(eax_43 + 0x7850), esi_1 - *(eax_43 + 0x784c))
                                var_4 = 1
                            
                            edx = data_a5d910
                
                j += 0x78
                esi_1 += 1
            
            i_1 += 0x5a
            edi_2 += 1
        
        int32_t eax_44 = sub_45c4b0()
        
        if (var_4 != 0)
            eax_44 = 0
        
        int32_t ecx_21 = data_2b53608
        
        if ((ecx_21 & 0x2000) != 0 || eax_44 != 0)
            void* ecx_37 = data_a5d910
            int32_t edx_23 =
                ((*(ecx_37 + 0x7850) + (*(ecx_37 + 0x24) << 2)) * 5 + *(ecx_37 + 0x784c)) * 0x30
            
            if (*(edx_23 + ecx_37 + 0x4e) == 0 || *(edx_23 + ecx_37 + 0x4c) != 1)
            label_42346c:
                sub_4095a0(2)
                sub_422800()
                return 0
            
            sub_4095a0(0)
            
            if (sub_422b10() != 1)
                sub_4050d0((*(((*(data_a5d910 + 4) & 0xfff) << 5) + 0x4af37c)).b, 0xa)
                *(arg1 + 0x10) = 0x10
                sub_422800()
                return 0
            
            void* eax_87 = data_a5d910
            *(eax_87 + 0x7ad8) = 0
            *(eax_87 + 0x7ac8) = 0
            *(eax_87 + 0x7acc) = 0
            *(eax_87 + 0x7ae0) = 0
            *(eax_87 + 0x7ae4) = 0
            sub_421ca0()
            *(arg1 + 0x10) = 0xb
            sub_422800()
            return 0
        
        int32_t eax_45
        
        if ((ecx_21 & 0x4000) == 0)
            eax_45 = sub_45c4f0()
        
        if ((ecx_21 & 0x4000) != 0 || eax_45 != 0)
            sub_4095a0(1)
            int32_t* eax_78 = data_a5d910
            eax_78[4] = *((eax_78[9] << 2) + &data_4b1bac)
            eax_78[5] = 0
            eax_78[6] = 0
            eax_78[7] = 0
            *eax_78 = 6
            *(arg1 + 0x10) = 6
            sub_422800()
            return 0
        
        void* ecx_22 = data_c7cc70
        int32_t eax_46 = *(ecx_22 + 8)
        
        if ((eax_46.b & 8) != 0)
            if (sub_4228d0() == 0)
                goto label_42346c
            
            sub_4095a0(3)
            sub_422800()
            return 0
        
        if ((eax_46 & 0x1000) != 0)
            void* ecx_24 = data_a5d910
            int32_t edx_11 =
                ((*(ecx_24 + 0x7850) + (*(ecx_24 + 0x24) << 2)) * 5 + *(ecx_24 + 0x784c)) * 0x30
            
            if (*(edx_11 + ecx_24 + 0x4e) == 0 || *(edx_11 + ecx_24 + 0x4c) != 1)
                goto label_42346c
            
            sub_4095a0(3)
            void* ecx_25 = data_a5d910
            int32_t eax_59 =
                ((*(ecx_25 + 0x7850) + (*(ecx_25 + 0x24) << 2)) * 5 + *(ecx_25 + 0x784c)) * 0x30
            char* eax_60 = eax_59 + ecx_25 + 0x4d
            ecx_25.b = *(eax_59 + ecx_25 + 0x4d) == 0
            *eax_60 = ecx_25.b
            sub_422800()
            return 0
        
        int32_t eax_62
        
        if ((*(ecx_22 + 0x10) & 0x400) == 0)
            eax_62 = sub_45c510()
        
        if ((*(ecx_22 + 0x10) & 0x400) != 0 || eax_62 != 0)
            sub_4095a0(0)
            void* ecx_33 = data_a5d910
            int32_t esi_3 = data_2b5a728
            int32_t eax_74 = *(ecx_33 + 0x24) + esi_3 - 1
            *(ecx_33 + 0x30) = 1
            *(ecx_33 + 0x28) = modu.dp.d(0:eax_74, esi_3)
            sub_421630()
            *(arg1 + 0x10) = 9
            sub_422800()
            return 0
        
        int32_t eax_63
        
        if ((*(data_c7cc70 + 0x10) & 0x800) == 0)
            eax_63 = sub_45c520()
        
        if ((*(data_c7cc70 + 0x10) & 0x800) != 0 || eax_63 != 0)
            sub_4095a0(0)
            void* ecx_31 = data_a5d910
            int32_t esi_2 = data_2b5a728
            int32_t eax_70 = *(ecx_31 + 0x24) + esi_2 + 1
            *(ecx_31 + 0x30) = 0
            *(ecx_31 + 0x28) = modu.dp.d(0:eax_70, esi_2)
            sub_421630()
            *(arg1 + 0x10) = 9
            sub_422800()
            return 0
        
        int32_t eax_65 = *(data_c7cc70 + 0x10)
        
        if ((eax_65.b & 0x10) != 0 || (eax_65 & 0x100000) != 0)
            sub_4095a0(3)
            sub_4211c0(0xffffffff, 0)
            sub_422800()
            return 0
        
        if ((eax_65.b & 0x40) != 0 || (eax_65 & &__dos_header) != 0)
            sub_4095a0(3)
            sub_4211c0(1, 0)
            sub_422800()
            return 0
        
        if (eax_65.b s< 0 || (eax_65 & 0x800000) != 0)
            sub_4095a0(3)
            sub_4211c0(0, 0xffffffff)
            sub_422800()
            return 0
        
        if ((eax_65.b & 0x20) != 0 || (eax_65 & 0x200000) != 0)
            sub_4095a0(3)
            sub_4211c0(0, 1)
            sub_422800()
            return 0
    case 9
        if (sub_405bd0(0xffffffff) != 0)
            sub_421670()
            *data_a5d910 = 5
            *(arg1 + 0x10) = 0xa
            sub_422800()
            return 0
    case 0xa
        if (sub_441790(0xe7e698) s>= 0x280)
            *data_a5d910 = 4
            *(arg1 + 0x10) = 8
            sub_422800()
            return 0
    case 0xb
        if (sub_405bd0(0xffffffff) != 0)
            sub_421fe0()
            sub_421f30()
            *data_a5d910 = 7
            *(arg1 + 0x10) = 0xc
            sub_422800()
            return 0
    case 0xc
        int32_t eax_101 = data_e86134 + 6
        data_e86134 = eax_101
        
        if (eax_101 s> 0x80)
            sub_421f30()
            int32_t* eax_102 = data_a5d910
            eax_102[0x1eb5] = 0x80
            *eax_102 = 8
            *(arg1 + 0x10) = 0xd
            sub_422800()
            return 0
    case 0xd
        if (data_e86128 != 0)
            int32_t eax_120 = *(data_c7cc70 + 8)
            
            if ((eax_120.b & 6) == 0 && (eax_120 & 0xf0f00000) == 0 && data_2b53608 != 0)
                sub_4095a0(1)
                *(data_a5d910 + 0x7ac8) = 0
                sub_422800()
                return 0
        else
            int32_t eax_104
            
            if ((data_2b53608 & 0x2000) == 0)
                eax_104 = sub_45c4e0()
            
            if ((data_2b53608 & 0x2000) != 0 || eax_104 != 0)
                sub_4095a0(0)
                void* eax_115 = data_a5d910
                *(eax_115 + 0x7ad8) += 1
                
                if (sub_421ca0() == 1)
                    *(arg1 + 0x10) = 0xe
                    sub_422800()
                    return 0
                
                sub_409b20()
                sub_4050d0(0x16, 0xa)
                *data_a5d910 = 0xa
                *(arg1 + 0x10) = 0xf
                sub_422800()
                return 0
            
            int32_t eax_105
            
            if ((data_2b53608 & 0x4000) == 0)
                eax_105 = sub_45c4f0()
            
            if ((data_2b53608 & 0x4000) != 0 || eax_105 != 0)
                sub_4095a0(1)
                sub_409b20()
                sub_4050d0(0x16, 0xa)
                *data_a5d910 = 0xa
                *(arg1 + 0x10) = 0xf
                sub_422800()
                return 0
            
            void* edx_28 = data_c7cc70
            int32_t ecx_48 = *(edx_28 + 8)
            
            if ((ecx_48 & 0x400) != 0)
                sub_4095a0(1)
                *(data_a5d910 + 0x7ac8) = 1
                sub_422800()
                return 0
            
            void* eax_107 = data_a5d910
            
            if (*(eax_107 + 0x7ad0) == 1)
                if ((ecx_48 & 0x8000) != 0)
                    sub_4095a0(0)
                    void* eax_108 = data_a5d910
                    int32_t ecx_50
                    ecx_50.b = *(eax_108 + 0x7acc) == 0
                    *(eax_108 + 0x7acc) = ecx_50
                    sub_422800()
                    return 0
                
                if (*(eax_107 + 0x7acc) == 0)
                    int32_t ecx_52 = *(edx_28 + 4)
                    
                    if ((ecx_52.b & 0x10) != 0 || (ecx_52 & 0x100000) != 0)
                        int32_t temp4_1 = *(eax_107 + 0x7ae4)
                        *(eax_107 + 0x7ae4) -= 4
                        
                        if (temp4_1 - 4 s< 0)
                            *(eax_107 + 0x7ae4) = 0
                            sub_422800()
                            return 0
                    else if ((ecx_52.b & 0x40) != 0 || (ecx_52 & &__dos_header) != 0)
                        int32_t ecx_61 = *(eax_107 + 0x7ac4)
                        *(eax_107 + 0x7ae4) += 4
                        int32_t ecx_66 = zx.d(*(*(eax_107 + (ecx_61 + 0xa3e) * 0xc) + 0xa)) - 0x1c0
                        
                        if (*(eax_107 + 0x7ae4) s> ecx_66)
                            *(eax_107 + 0x7ae4) = ecx_66
                            sub_422800()
                            return 0
                    else if (ecx_52.b s< 0 || (ecx_52 & 0x800000) != 0)
                        int32_t temp5_1 = *(eax_107 + 0x7ae0)
                        *(eax_107 + 0x7ae0) -= 4
                        
                        if (temp5_1 - 4 s< 0)
                            *(eax_107 + 0x7ae0) = 0
                            sub_422800()
                            return 0
                    else if ((ecx_52.b & 0x20) != 0 || (ecx_52 & 0x200000) != 0)
                        int32_t ecx_53 = *(eax_107 + 0x7ac4)
                        *(eax_107 + 0x7ae0) += 4
                        int32_t ecx_58 = zx.d(*(*(eax_107 + (ecx_53 + 0xa3e) * 0xc) + 8)) - 0x280
                        
                        if (*(eax_107 + 0x7ae0) s> ecx_58)
                            *(eax_107 + 0x7ae0) = ecx_58
                            sub_422800()
                            return 0
    case 0xe
        if (sub_405bd0(0xffffffff) != 0)
            sub_421fe0()
            *data_a5d910 = 9
            *(arg1 + 0x10) = 0xc
            sub_422800()
            return 0
    case 0xf
        if (sub_405130() == 1)
            *data_a5d910 = 4
            *(arg1 + 0x10) = 8
            sub_422800()
            return 0
    case 0x10
        if (sub_405130() == 1)
            sub_408ef0()
            sub_4010a0(data_a5d910 + 0x62921c)
            sub_4010b0(*(((*(data_a5d910 + 4) & 0xfff) << 5) + 0x4af370))
            *(arg1 + 0x10) = 0x14
            sub_422800()
            return 0
    case 0x11
        if (sub_405130() == 1)
            *(arg1 + 0x10) = 8
            sub_422800()
            return 0
    case 0x12
        if (sub_405130() == 1)
            *(arg1 + 0x10) = 0x13
            sub_422800()
            return 0
    case 0x13
        sub_420d00(0xe7e6ac)
        data_2b55e64 = 3
        return 1
    case 0x14
        int32_t var_18_2 = 0
        int32_t eax_130 = sub_44c8d0()
        int32_t eax_132
        
        if (eax_130 != 3 && eax_130 != 4 && (*(data_c7cc70 + 8) & 8) == 0)
            eax_132 = sub_45c4e0()
        
        if (eax_130 == 3 || eax_130 == 4 || (*(data_c7cc70 + 8) & 8) != 0 || eax_132 != 0)
            int32_t var_18_3 = 0
            sub_44c890()
            sub_408f30(0x80)
            sub_4096b0(0x3c, data_a5d910 + 0xe2921c, 0)
            sub_4050d0((*(((*(data_a5d910 + 4) & 0xfff) << 5) + 0x4af380)).b, 0xa)
            *(arg1 + 0x10) = 0x11
            sub_422800()
            return 0

sub_422800()
return 0
