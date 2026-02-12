// 函数: sub_438980
// 地址: 0x438980
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(*(arg2 + 0x10))
data_a5dd14 = &data_e7e660

switch (eax)
    case 0
        sub_438930()
        *(arg2 + 0x10) = 1
        int32_t* eax_3
        
        switch (data_2b55e60 - 5)
            case 0
                eax_3 = data_a5dd14
                eax_3[0x1b] = 2
                eax_3[0x1c] = 2
                *(arg2 + 0x10) = 2
            case 2
                eax_3 = data_a5dd14
                eax_3[0x1b] = 3
                eax_3[0x1c] = 0
                *(arg2 + 0x10) = 2
            case 3
                sub_4380d0()
                eax_3 = data_a5dd14
                eax_3[0x1b] = 3
                eax_3[0x1c] = 1
                *(arg2 + 0x10) = 2
            case 4
                eax_3 = data_a5dd14
                eax_3[0x1b] = 3
                eax_3[0x1c] = 2
                *(arg2 + 0x10) = 2
            case 5
                sub_4380d0()
                eax_3 = data_a5dd14
                eax_3[0x1b] = 3
                eax_3[0x1c] = 3
                *(arg2 + 0x10) = 2
            case 7, 8, 9, 0xa
                eax_3 = data_a5dd14
                eax_3[0x1b] = 1
                eax_3[0x1c] = 2
                *(arg2 + 0x10) = 2
            case 0xb
                eax_3 = data_a5dd14
                eax_3[0x1b] = 2
                eax_3[0x1c] = 1
                *(arg2 + 0x10) = 2
            case 0xc
                eax_3 = data_a5dd14
                eax_3[0x1b] = 1
                eax_3[0x1c] = 0
                *(arg2 + 0x10) = 2
            case 0xd
                eax_3 = data_a5dd14
                eax_3[0x1b] = 1
                eax_3[0x1c] = 1
                *(arg2 + 0x10) = 2
            case 0xe
                eax_3 = data_a5dd14
                eax_3[0x1b] = 2
                eax_3[0x1c] = 0
                *(arg2 + 0x10) = 2
            default
                eax_3 = data_a5dd14
        
        char var_18_1
        
        if (*(arg2 + 0x10) != 2)
            sub_4380d0()
            int32_t var_14_2 = 0xa
            
            if (data_2b55e60 != 2)
                var_18_1 = 2
            else
                var_18_1 = 5
        else
            int32_t ecx_1 = eax_3[0x1b]
            int32_t edx_1 = eax_3[0x1c]
            eax_3[0x1a] = ecx_1
            eax_3[0x19] = edx_1
            eax_3[0x18] = (ecx_1 << 3) + &data_4bf7f0
            *eax_3 = 1
            eax_3[0x1d] = 1
            eax_3[0x1e] = 0
            int32_t var_14_1 = 0xa
            var_18_1 = 2
        
        sub_4050d0(var_18_1, 0xa)
    case 1, 9
        if (sub_405130() == 1)
            *(arg2 + 0x10) = 3
    case 2
        if (sub_405130() == 1)
            *(arg2 + 0x10) = 5
    case 3
        int32_t eax_10
        
        if ((*(data_c7cc70 + 8) & 8) == 0)
            eax_10 = sub_45c4e0()
        
        if ((*(data_c7cc70 + 8) & 8) != 0 || eax_10 != 0)
            sub_4095a0(4)
            int32_t* eax_16 = data_a5dd14
            eax_16[2] = 0
            *eax_16 = 3
            *(arg2 + 0x10) = 4
        else
            void* ecx_3 = data_a5dd14
            int32_t eax_11 = *(ecx_3 + 8)
            
            if (eax_11 s<= 0x5dc)
                *(ecx_3 + 8) = eax_11 + 1
            else
                *(ecx_3 + 0x18) = 1
                
                if (sub_401ff0(data_4af394) == 0)
                    *(data_a5dd14 + 8) = 0
                else
                    sub_4050d0((*(((*(data_a5dd14 + 0x18) & 0xfff) << 5) + 0x4af37c)).b, 0xa)
                    *(data_a5dd14 + 0x14) = 3
                    *(arg2 + 0x10) = 0xb
    case 4
        if (data_e7e668 s<= 0x3c)
            data_e7e668 += 1
        else
            data_e7e6c8 = 0
            data_e7e6c4 = 0
            data_e7e6c0 = &data_4bf7f0
            data_e7e6d4 = 1
            data_e7e6d8 = 0
            data_e7e660 = 1
            *(arg2 + 0x10) = 5
    case 5
        *(arg2 + 0x10) = 0xf
        data_a5dd10 = 1
    label_438c4a:
        int32_t eax_18 = *(data_c7cc70 + 0x10)
        int32_t eax_19
        
        if ((eax_18.b & 0x10) == 0 && (eax_18 & 0x100800) == 0)
            eax_19 = sub_45c510()
        
        void* ecx_7
        int32_t eax_25
        int32_t edi
        
        if ((eax_18.b & 0x10) != 0 || (eax_18 & 0x100800) != 0 || eax_19 != 0)
            sub_4095a0(3)
            ecx_7 = data_a5dd14
            edi = **(ecx_7 + 0x60)
            eax_25 = edi + *(ecx_7 + 0x64) - 1
        label_438d31:
            int32_t temp1_1 = mods.dp.d(sx.q(eax_25), edi)
            bool cond:6_1 = *(ecx_7 + 0x68) != 4
            *(ecx_7 + 0x64) = temp1_1
            
            if (not(cond:6_1))
                *(ecx_7 + 0x10) = 0
                *(ecx_7 + 0xc) = temp1_1
        else
            int32_t eax_20 = *(data_c7cc70 + 0x10)
            int32_t eax_21
            
            if ((eax_20.b & 0x40) == 0 && (eax_20 & &__section_headers[0].virtualSize) == 0)
                eax_21 = sub_45c520()
            
            if ((eax_20.b & 0x40) != 0 || (eax_20 & &__section_headers[0].virtualSize) != 0
                    || eax_21 != 0)
                sub_4095a0(3)
                ecx_7 = data_a5dd14
                edi = **(ecx_7 + 0x60)
                eax_25 = edi + *(ecx_7 + 0x64) + 1
                goto label_438d31
            
            ecx_7 = data_a5dd14
            int32_t i = 0
            
            if (**(ecx_7 + 0x60) s> 0)
                int32_t ebx_1 = 0x10a
                
                do
                    int32_t eax_22 = sub_45e320(0xe0, ebx_1, 0xc0, 0x1e, 0)
                    ecx_7 = data_a5dd14
                    
                    if (eax_22 != 0 && i != *(ecx_7 + 0x64))
                        sub_4095a0(3)
                        ecx_7 = data_a5dd14
                        bool cond:8_1 = *(ecx_7 + 0x68) != 4
                        *(ecx_7 + 0x64) = i
                        
                        if (not(cond:8_1))
                            *(ecx_7 + 0xc) = i
                            *(ecx_7 + 0x10) = 0
                    
                    i += 1
                    ebx_1 += 0x1e
                while (i s< **(ecx_7 + 0x60))
            
            data_a5dd10 = 0
        
        if ((*(data_c7cc70 + 8) & 0x2100) != 0)
            goto label_438e51
        
        int32_t eax_31
        
        if ((*(data_c7cc70 + 8) & 8) == 0)
            eax_31 = sub_45c4b0()
        
        if ((*(data_c7cc70 + 8) & 8) != 0 || eax_31 != 0)
            ecx_7 = data_a5dd14
        label_438e51:
            
            if (*(ecx_7 + (sx.d(*(*(*(ecx_7 + 0x60) + 4) + *(ecx_7 + 0x64) + 1)) << 2) + 0x1c) != 1)
                sub_4095a0(2)
            else
                sub_4095a0(0)
                void* eax_36 = data_a5dd14
                int32_t ecx_10 = *(eax_36 + 0x68)
                *(eax_36 + 0x74) = 2
                *(eax_36 + 0x78) = 0
                
                switch (ecx_10)
                    case 0
                        switch (sx.d(*(*(*(eax_36 + 0x60) + 4) + *(eax_36 + 0x64) + 1)) - 1)
                            case 0
                                if (sub_401e00(0xffff8020) != 0)
                                    void* eax_38 = data_a5dd14
                                    *(eax_38 + 0xc) = 0
                                    *(eax_38 + 0x10) = 0
                                    *(eax_38 + 0x6c) = 4
                                    *(eax_38 + 0x70) = 0
                                    *(arg2 + 0x10) = 6
                                else
                                    sub_401620()
                                    sub_4016c0()
                                    sub_401eb0(0x602a, 0)
                                    data_2b55e64 = 1
                                    sub_4050d0(3, 0xa)
                                    *(arg2 + 0x10) = 0xa
                            case 1
                                *(eax_36 + 0x6c) = 1
                                *(eax_36 + 0x70) = 0
                                *(arg2 + 0x10) = 6
                            case 2
                                *(eax_36 + 0x6c) = 3
                                *(eax_36 + 0x70) = 0
                                *(arg2 + 0x10) = 6
                            case 3
                                *(eax_36 + 0x6c) = 2
                                *(eax_36 + 0x70) = 0
                                *(arg2 + 0x10) = 6
                    case 1
                        void* edx_16 = *(eax_36 + 0x60)
                        *(eax_36 + 0x6c) = 1
                        *(eax_36 + 0x70) = 0
                        int32_t eax_39 = sx.d(*(*(edx_16 + 4) + *(eax_36 + 0x64) + 1))
                        
                        if (eax_39 == 9)
                            data_2b55e64 = 0x11
                            sub_4050d0(3, 0xa)
                            *(arg2 + 0x10) = 0xa
                        else if (eax_39 == 0xa)
                            data_2b55e64 = 0x12
                            sub_4050d0(3, 0xa)
                            *(arg2 + 0x10) = 0xa
                        else if (eax_39 == 0xb)
                            data_2b55e64 = 0xc
                            sub_4050d0(3, 0xa)
                            *(arg2 + 0x10) = 0xa
                    case 2
                        int32_t eax_47 = sx.d(*(*(*(eax_36 + 0x60) + 4) + *(eax_36 + 0x64) + 1))
                        
                        if (eax_47 == 0xc)
                            data_2b55e64 = 0x13
                        else if (eax_47 == 0xd)
                            data_2b55e64 = 0x10
                        else if (eax_47 == 0xe)
                            data_2b55e64 = 5
                        
                        sub_4050d0(3, 0xa)
                        *(arg2 + 0x10) = 0xa
                    case 3
                        switch (sx.d(*(*(*(eax_36 + 0x60) + 4) + *(eax_36 + 0x64) + 1)) - 5)
                            case 0
                                data_2b55e64 = 7
                                sub_4050d0(3, 0xa)
                                *(arg2 + 0x10) = 0xa
                            case 1
                                data_2b55e64 = 8
                                sub_4050d0(3, 0xa)
                                *(arg2 + 0x10) = 0xa
                            case 2
                                data_2b55e64 = 9
                                sub_4050d0(3, 0xa)
                                *(arg2 + 0x10) = 0xa
                            case 3
                                data_2b55e64 = 0xa
                                sub_4050d0(3, 0xa)
                                *(arg2 + 0x10) = 0xa
                    case 4
                        sub_401620()
                        sub_4016c0()
                        void* eax_51 = data_a5dd14
                        int32_t eax_53 = sx.d(*(*(*(eax_51 + 0x60) + 4) + *(eax_51 + 0x64) + 1))
                        
                        if (eax_53 == 0xf)
                            sub_401eb0(0x602a, 0)
                        else if (eax_53 == 0x10)
                            sub_401eb0(0x602a, 1)
                        
                        data_2b55e64 = 1
                        sub_4050d0(3, 0xa)
                        *(arg2 + 0x10) = 0xa
        else
            int32_t eax_32
            
            if ((*(data_c7cc70 + 8) & 0x4400) == 0)
                eax_32 = sub_45c4f0()
            
            if ((*(data_c7cc70 + 8) & 0x4400) != 0 || eax_32 != 0)
                int32_t edi_1 = 1
                sub_4095a0(1)
                int32_t* eax_33 = data_a5dd14
                int32_t ecx_9 = eax_33[0x1a]
                eax_33[0x1d] = 0
                eax_33[0x1e] = 0
                
                switch (ecx_9)
                    case 0
                        *eax_33 = 0
                        eax_33[2] = 0
                        *(arg2 + 0x10) = 3
                    case 1
                        goto label_438ddf
                    case 2
                        edi_1 = 2
                    label_438ddf:
                        eax_33[0x1c] = edi_1
                        eax_33[0x19] = edi_1
                        eax_33[0x1b] = 0
                        eax_33[0x1a] = 0
                        eax_33[0x18] = &data_4bf7f0
                    case 3
                        eax_33[0x1c] = 3
                        eax_33[0x19] = 3
                        eax_33[0x1b] = 0
                        eax_33[0x1a] = 0
                        eax_33[0x18] = &data_4bf7f0
                    case 4
                        eax_33[3] = 0xffffffff
                        eax_33[4] = 0
                        eax_33[0x1c] = 0
                        eax_33[0x19] = 0
                        eax_33[0x1b] = 0
                        eax_33[0x1a] = 0
                        eax_33[0x18] = &data_4bf7f0
    case 6
        if (data_e7e6d4 == 0xffffffff)
            int32_t eax_56 = data_e7e6cc
            int32_t ecx_19 = data_e7e6d0
            data_e7e6d8 = 0
            data_e7e6d4 = 1
            data_e7e6c8 = eax_56
            data_e7e6c4 = ecx_19
            data_e7e6c0 = (eax_56 << 3) + &data_4bf7f0
            *(arg2 + 0x10) = 5
    case 7
        if (sub_405130() == 1)
            int32_t* eax_58 = data_a5dd14
            *(arg2 + 0x10) = 8
            *eax_58 = 0xffffffff
            *(data_a5dd14 + 4) = sub_433750(&eax_58[0x1c62dc], arg1)
    case 8
        int32_t eax_61 = sub_446f90(data_e7e664)
        
        if (eax_61 == 1)
            sub_4050d0(2, 0xa)
            sub_437fc0()
            sub_437f30()
            sub_437820()
            int32_t* eax_64 = data_a5dd14
            eax_64[0x19] = 0
            eax_64[2] = 0
            *eax_64 = 0
            *(arg2 + 0x10) = 9
        else if (eax_61 == 2)
            data_2b55e64 = 1
            *(arg2 + 0x10) = 0xd
    case 0xa
        if (sub_405130() == 1)
            *(arg2 + 0x10) = 0xd
    case 0xb
        if (sub_405bd0(0xffffffff) != 0 && sub_405130() == 1)
            sub_408ef0()
            sub_4010a0(data_a5dd14 + 0x718b70)
            int32_t var_18_3 = 1
            sub_4010b0(*(((*(data_a5dd14 + 0x18) & 0xfff) << 5) + 0x4af370))
            *(arg2 + 0x10) = 0xe
    case 0xc
        if (sub_405130() == 1)
            *(arg2 + 0x10) = *(data_a5dd14 + 0x14)
    case 0xd
        sub_405e20()
        int32_t eax_80 = data_2b55e64
        
        if (eax_80 == 1 || eax_80 == 8 || eax_80 == 0xa)
            sub_408ef0()
            sub_4090d0(3)
            sub_4090d0(2)
        
        return 1
    case 0xe
        int32_t var_14_8 = 0
        int32_t eax_70 = sub_44c8d0()
        int32_t eax_71
        
        if (eax_70 != 3 && eax_70 != 4 && (*(data_c7cc70 + 8) & 8) == 0)
            eax_71 = sub_45c4e0()
        
        if (eax_70 == 3 || eax_70 == 4 || (*(data_c7cc70 + 8) & 8) != 0 || eax_71 != 0)
            int32_t var_14_9 = 0
            sub_44c890()
            int32_t eax_75 = *(((*(data_a5dd14 + 0x18) & 0xfff) << 5) + &data_4af374)
            
            if (eax_75 != 0)
                sub_402020(eax_75, 1)
            
            sub_4050d0((*(((*(data_a5dd14 + 0x18) & 0xfff) << 5) + 0x4af380)).b, 0xa)
            sub_4380d0()
            void* eax_77 = data_a5dd14
            *(eax_77 + 8) = 0
            *(eax_77 + 0x78) = 0
            *(eax_77 + 0x74) = 1
            *(arg2 + 0x10) = 0xc
    case 0xf
        goto label_438c4a

sub_438860()

switch (*data_a5dd14)
    case 0, 3
        sub_438130()
        sub_438200()
        sub_4387b0()
        return 0
    case 1, 2
        sub_438780()
        sub_438200()

sub_4387b0()
return 0
