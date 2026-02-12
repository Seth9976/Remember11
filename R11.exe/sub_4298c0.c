// 函数: sub_4298c0
// 地址: 0x4298c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(*(arg1 + 0x10))
int32_t* ebx = &data_e7e660
data_a5dce4 = &data_e7e660
int32_t ecx

switch (eax)
    case 0
        sub_428560()
        sub_4050d0(2, 4)
        ebx = data_a5dce4
        ebx[0x281] = 0
        *(arg1 + 0x10) = 1
    case 1
        if (sub_405120() == 0)
            *(arg1 + 0x10) = 2
        
        ebx = data_a5dce4
    case 2
        int32_t ebx_1 = 0
        
        for (int32_t i = 0x72; i s< 0x18a; )
            if (sub_45e320(0x1e, i, 0x246, 0x1c, 0) != 0 && *(data_a5dce4 + 0xa28) != ebx_1)
                sub_4095a0(3)
                void* eax_9 = data_a5dce4
                *(eax_9 + 0xa28) = ebx_1
                *(eax_9 + 0xa34) = 1
                *(eax_9 + 0xa24) = 0
            
            i += 0x1c
            ebx_1 += 1
        
        int32_t eax_10 = sub_45c4b0()
        
        if (sub_45c510() == 0)
            bool cond:6_1 = sub_45c520() == 0
            ebx = data_a5dce4
            
            if (not(cond:6_1))
                int32_t eax_15 = ebx[0x28b]
                
                if (eax_15 != ebx[0x28c] - 0xa)
                    ebx[0x28d] = 1
                    ebx[0x28b] = eax_15 + 1
        else
            ebx = data_a5dce4
            int32_t eax_12 = ebx[0x28b]
            
            if (eax_12 != 0)
                ebx[0x28d] = 1
                ebx[0x28b] = eax_12 - 1
        
        void* ecx_3 = data_c7cc70
        int32_t eax_16 = *(ecx_3 + 0x10)
        int32_t eax_31
        
        if ((eax_16.b & 0x90) != 0 || (eax_16 & 0x900000) != 0)
            if (ebx[0x28a] == 0)
                ecx = *(ecx_3 + 8)
                
                if ((ecx.b & 0x90) == 0 && (ecx & 0x900000) == 0)
                    goto label_429e4a
                
                sub_4095a0(3)
                ebx = data_a5dce4
                int32_t eax_33 = ebx[0x28c] - 0xa
                ebx[0x28a] = 9
                ebx[0x28b] = eax_33
                goto label_429e44
            
            sub_4095a0(3)
            ebx = data_a5dce4
            int32_t eax_34 = ebx[0x28a]
            
            if (eax_34 == 1)
                int32_t eax_35 = ebx[0x28b]
                ebx[0x28d] = 1
                
                if (eax_35 != 0)
                    ebx[0x28b] = eax_35 - 1
                else
                    ebx[0x28a] = 0
                
                goto label_429e4a
            
            eax_31 = eax_34 - 1
        label_429e3e:
            ebx[0x28a] = eax_31
        label_429e44:
            ebx[0x28d] = 1
        label_429e4a:
            ebx[0x289] = 0
        label_429e50:
            int32_t eax_37 = ebx[0x289]
            
            if (eax_37 s< 0x3c)
                ebx[0x289] = eax_37 + 1
            else if (*(&ebx[(ebx[0x28b] + ebx[0x28a]) * 8] + 0x8266) == 1 && ebx[0x28d] == 1)
                if (ebx[0x285] != 1)
                    sub_4296a0()
                    return 0
                
                sub_408ef0()
                sub_4090d0(1)
                void* ecx_11 = data_a5dce4
                uint32_t eax_38 =
                    zx.d(*(((*(ecx_11 + 0xa2c) + *(ecx_11 + 0xa28)) << 5) + ecx_11 + 0x8268))
                int32_t eax_39 = eax_38 & 0xfff
                
                if ((eax_38 & 0xf000) u< 0x5000)
                    sub_409a80(eax_39, ecx_11 + 0xb43e50, 0x200000)
                    ebx = data_a5dce4
                    ebx[0x285] = 0
                    ebx[0x287] = 0
                    *(arg1 + 0x10) = 3
                else
                    sub_409100(1, eax_39)
                    ebx = data_a5dce4
                    int32_t eax_41 = ebx[0x28b] + ebx[0x28a]
                    ebx[0x285] = 1
                    ebx[0x286] = eax_41
                    ebx[0x28d] = 0
                    ebx[0x287] = 0
                    data_2b603a4 = 0
            
            if (ebx[0x285] != 1)
                sub_4296a0()
                return 0
            
            int32_t eax_43 = ebx[0x283]
            
            if (eax_43 == 1 && ebx[0x287] s>= 0x1a4)
            label_429f95:
                int32_t eax_46 = ebx[0x282]
                
                if (eax_46 == 0)
                    sub_4285a0()
                    
                    if (ebx[0x28b] != 0 || ebx[0x28a] != 0)
                        sub_408ef0()
                        sub_4090d0(1)
                    label_42a0b6:
                        ebx = data_a5dce4
                        ecx = (ebx[0x28b] + ebx[0x28a]) << 5
                        
                        if (*(ecx + ebx + 0x8266) == 1)
                            uint32_t eax_55 = zx.d(*(ecx + ebx + 0x8268))
                            int32_t eax_56 = eax_55 & 0xfff
                            
                            if ((eax_55 & 0xf000) u>= 0x5000)
                                sub_409100(1, eax_56)
                                ebx = data_a5dce4
                                ebx[0x286] = ebx[0x28b] + ebx[0x28a]
                                goto label_42a11a
                            
                            sub_409a80(eax_56, &ebx[0x2d0f94], 0x200000)
                            ebx = data_a5dce4
                            ebx[0x285] = 0
                            ebx[0x287] = 0
                            *(arg1 + 0x10) = 3
                    else
                        sub_408ef0()
                        sub_4090d0(1)
                        ebx = data_a5dce4
                        ebx[0x285] = 0
                else if (eax_46 == 1)
                    sub_408ef0()
                    sub_4090d0(1)
                    ebx = data_a5dce4
                    ebx[0x28b] + ebx[0x28a]
                    
                    if (*(&ebx[(ebx[0x28b] + ebx[0x28a]) * 8] + 0x8266) == 1)
                        uint32_t eax_51 = zx.d(ebx[(ebx[0x28b] + ebx[0x28a]) * 8 + 0x209a].w)
                        int32_t eax_52 = eax_51 & 0xfff
                        
                        if ((eax_51 & 0xf000) u< 0x5000)
                            sub_409a80(eax_52, &ebx[0x2d0f94], 0x200000)
                            ebx = data_a5dce4
                            ebx[0x285] = 0
                            ebx[0x287] = 0
                            *(arg1 + 0x10) = 3
                        else
                            sub_409100(1, eax_52)
                            ebx = data_a5dce4
                            ebx[0x286] = ebx[0x28b] + ebx[0x28a]
                        label_42a11a:
                            ebx[0x285] = 1
                            ebx[0x28d] = 0
                            ebx[0x287] = 0
                            data_2b603a4 = 0
                else if (eax_46 == 2)
                    sub_408ef0()
                    sub_4090d0(1)
                    sub_4285a0()
                    goto label_42a0b6
            else if (eax_43 == 0 && ebx[0x287] u>= ebx[ebx[0x286] * 8 + 0x209c] + 0x3b)
                goto label_429f95
        else
            if ((eax_16.b & 0x60) != 0 || (eax_16 & 0x600000) != 0)
                if (ebx[0x28a] == 9)
                    ecx = *(ecx_3 + 8)
                    
                    if ((ecx.b & 0x60) != 0 || (ecx & 0x600000) != 0)
                        sub_4095a0(3)
                        ebx = data_a5dce4
                        ebx[0x28a] = 0
                        ebx[0x28b] = 0
                        goto label_429e44
                    
                    goto label_429e4a
                
                sub_4095a0(3)
                ebx = data_a5dce4
                int32_t eax_28 = ebx[0x28a]
                
                if (eax_28 != 8)
                    eax_31 = eax_28 + 1
                    goto label_429e3e
                
                int32_t eax_29 = ebx[0x28b]
                bool cond:10_1 = eax_29 != ebx[0x28c] - 0xa
                ebx[0x28d] = 1
                
                if (cond:10_1)
                    ebx[0x28b] = eax_29 + 1
                else
                    ebx[0x28a] = 9
                
                goto label_429e4a
            
            ecx = *(ecx_3 + 8)
            
            if ((ecx & 0x8000) != 0)
                sub_4095a0(3)
                ebx = data_a5dce4
                int32_t eax_17 = ebx[0x282]
                
                if (eax_17 != 2)
                    ebx[0x282] = eax_17 + 1
                else
                    ebx[0x282] = 0
                
                goto label_429e50
            
            if ((ecx & 0x1000) != 0)
                sub_4095a0(3)
                ebx = data_a5dce4
                int32_t edx_2
                edx_2.b = ebx[0x283] == 0
                ebx[0x283] = edx_2
                goto label_429e50
            
            if ((ecx & 0x800) != 0)
                if (ebx[0x285] == 0)
                    sub_4095a0(3)
                    ebx = data_a5dce4
                    int32_t eax_19 = ebx[0x284]
                    
                    if (eax_19 != 2)
                        ebx[0x284] = eax_19 + 1
                    else
                        ebx[0x284] = 0
                
                goto label_429e50
            
            if ((ecx & 0x2000) == 0 && eax_10 == 0)
                bool cond:13_1
                
                if ((ecx & 0x4000) == 0)
                    cond:13_1 = sub_45c4f0() == 0
                    ebx = data_a5dce4
                
                if ((ecx & 0x4000) != 0 || not(cond:13_1))
                    if (ebx[0x285] != 1)
                        sub_4095a0(1)
                        sub_4050d0(3, 4)
                        ebx = data_a5dce4
                        *(arg1 + 0x10) = 0xe
                    else
                        sub_408ef0()
                        sub_4090d0(1)
                        ebx = data_a5dce4
                        ebx[0x285] = 0
                
                goto label_429e50
            
            if (*(&ebx[(ebx[0x28b] + ebx[0x28a]) * 8] + 0x8266) != 1)
                sub_4095a0(2)
                ebx = data_a5dce4
                goto label_429e50
            
            if (ebx[0x283] == 1 && ebx[0x284] != 0)
                ebx[0x284] = 0
            
            if (ebx[0x285] != 1)
                sub_428660(ebx[0x284])
            
            if (ebx[0x285] == 1 || ebx[0x284] == 0 || ebx[0x280].w == 0)
                sub_408ef0()
                sub_4090d0(1)
                void* ecx_7 = data_a5dce4
                uint32_t eax_23 =
                    zx.d(*(((*(ecx_7 + 0xa2c) + *(ecx_7 + 0xa28)) << 5) + ecx_7 + 0x8268))
                int32_t eax_24 = eax_23 & 0xfff
                
                if ((eax_23 & 0xf000) u< 0x5000)
                    sub_409a80(eax_24, ecx_7 + 0xb43e50, 0x200000)
                    ebx = data_a5dce4
                    ebx[0x285] = 0
                    ebx[0x287] = 0
                    *(arg1 + 0x10) = 3
                else
                    sub_409100(1, eax_24)
                    ebx = data_a5dce4
                    ebx[0x286] = ebx[0x28b] + ebx[0x28a]
                    ebx[0x285] = 1
                    ebx[0x28d] = 0
                    ebx[0x287] = 0
                    data_2b603a4 = 0
                
                goto label_429e50
            
            sub_428350()
            void* ebx_2 = data_a5dce4
            sub_428600(zx.d(*(ebx_2 + 0xa00)), ebx_2 + 0x500)
            ebx = data_a5dce4
            ebx[0x28f] = 0
            ebx[0x28e] = 0
            ebx[0x292] = 0
            ebx[0x287] = 0
            ebx[0x297] = 0xffffffff
            ebx[0x298] = 0xffffffff
            ebx[0x28d] = 2
            data_2b603a4 = 0
            *(arg1 + 0x10) = 4
    case 3
        int32_t eax_59
        eax_59, ecx = sub_408f90(0x19c24b0)
        
        if (eax_59 == 0)
            ebx = data_a5dce4
        else
            ebx = data_a5dce4
            ebx[0x286] = ebx[0x28b] + ebx[0x28a]
            ebx[0x285] = 1
            ebx[0x28d] = 0
            ebx[0x287] = 0
            data_2b603a4 = 0
            *(arg1 + 0x10) = 2
    case 4
        uint32_t eax_61 = zx.d(*((data_e7f098 << 1) + &data_e7e660))
        
        if ((eax_61 & 0xf000) != 0x2000)
            int32_t ecx_20 = data_e7f09c & 0x80000001
            
            if (ecx_20 s< 0)
                ecx_20 = ((ecx_20 - 1) | 0xfffffffe) + 1
            
            sub_405c80(1, (eax_61 & 0xfff) * 2, (ecx_20 << 0x16) + 0x11c24b0, 0x19c24b0)
            *(arg1 + 0x10) = 5
        else
            int32_t edx_28 = data_e7f09c & 0x80000001
            
            if (edx_28 s< 0)
                edx_28 = ((edx_28 - 1) | 0xfffffffe) + 1
            
            sub_405c80(2, (eax_61 & 0xfff) * 2, (edx_28 << 0x16) + 0x11c24b0, 0x19c24b0)
            *(arg1 + 0x10) = 5
        
        ebx = data_a5dce4
    case 5
        int32_t eax_66
        eax_66, ecx = sub_405bd0(0xffffffff)
        
        if (eax_66 == 0)
            ebx = data_a5dce4
        else
            ebx = data_a5dce4
            ebx[0x290] = 0
            ebx[0x291] = 0
            ebx[0x281] = 1
            *(arg1 + 0x10) = 6
    case 6
        int32_t eax_68 = data_e7f0a4 + 4
        data_e7f0a4 = eax_68
        
        if (eax_68 s>= 0x80)
            data_e7f0a4 = 0x80
            data_e7f064 = 2
            *(arg1 + 0x10) = 7
    case 7
        *(arg1 + 0x10) = 8
    case 8
        sub_408ef0()
        sub_4090d0(1)
        void* ecx_25 = data_a5dce4
        uint32_t eax_69 = zx.d(*(((*(ecx_25 + 0xa2c) + *(ecx_25 + 0xa28)) << 5) + ecx_25 + 0x8268))
        int32_t eax_70 = eax_69 & 0xfff
        
        if ((eax_69 & 0xf000) u< 0x5000)
            sub_4096b0(eax_70, ecx_25 + 0xb43e50, 0)
        else
            sub_409100(1, eax_70)
        
        ebx = data_a5dce4
        ebx[0x286] = ebx[0x28b] + ebx[0x28a]
        ebx[0x285] = 1
        ebx[0x28d] = 0
        ebx[0x287] = 0
        data_2b603a4 = 0
        ebx[0x292] = 0
        ebx[0x297] = 0xffffffff
        ebx[0x298] = 0xffffffff
        *(arg1 + 0x10) = 0xc
    case 9
        uint32_t eax_73 = zx.d(*((data_e7f098 << 1) + &data_e7e660))
        
        if ((eax_73 & 0xf000) != 0x2000)
            int32_t ecx_31 = (data_e7f09c + 1) & 0x80000001
            
            if (ecx_31 s< 0)
                ecx_31 = ((ecx_31 - 1) | 0xfffffffe) + 1
            
            sub_405c80(1, (eax_73 & 0xfff) * 2, (ecx_31 << 0x16) + 0x11c24b0, 0x19c24b0)
            *(arg1 + 0x10) = 0xa
        else
            int32_t edx_41 = (data_e7f09c + 1) & 0x80000001
            
            if (edx_41 s< 0)
                edx_41 = ((edx_41 - 1) | 0xfffffffe) + 1
            
            sub_405c80(2, (eax_73 & 0xfff) * 2, (edx_41 << 0x16) + 0x11c24b0, 0x19c24b0)
            *(arg1 + 0x10) = 0xa
        
        ebx = data_a5dce4
    case 0xa
        int32_t eax_78
        eax_78, ecx = sub_405bd0(0xffffffff)
        
        if (eax_78 == 0)
            ebx = data_a5dce4
        else
            ebx = data_a5dce4
            ebx[0x290] = 0
            ebx[0x291] = 0
            ebx[0x281] = 3
            *(arg1 + 0x10) = 0xb
    case 0xb
        int32_t eax_80 = data_e7f0a4 + 4
        data_e7f0a4 = eax_80
        
        if (eax_80 s>= 0x80)
            data_e7f09c += 1
            data_e7f0a4 = 0x80
            data_e7f064 = 2
            *(arg1 + 0x10) = 0xc
    case 0xc
        void* ecx_36 = data_c7cc70
        int32_t eax_81 = *(ecx_36 + 0x10)
        int32_t eax_96
        
        if ((eax_81.b & 0x90) != 0 || (eax_81 & 0x900000) != 0)
            if (data_e7f088 != 0)
                sub_4095a0(3)
                ebx = data_a5dce4
                int32_t eax_99 = ebx[0x28a]
                
                if (eax_99 != 1)
                    eax_96 = eax_99 - 1
                label_42a73c:
                    ebx[0x28a] = eax_96
                    ebx[0x28d] = 1
                label_42a748:
                    ebx[0x289] = 0
                    goto label_42a5a8
                
                int32_t eax_100 = ebx[0x28b]
                ebx[0x28d] = 1
                
                if (eax_100 != 0)
                    ebx[0x28b] = eax_100 - 1
                    ebx[0x289] = 0
                else
                    ebx[0x28a] = 0
                    ebx[0x289] = 0
                
                goto label_42a5a8
            
            ecx = *(ecx_36 + 8)
            
            if ((ecx.b & 0x90) == 0 && (ecx & 0x900000) == 0)
                goto label_42a748
            
            sub_4095a0(3)
            ebx = data_a5dce4
            int32_t eax_98 = ebx[0x28c] - 0xa
            ebx[0x28a] = 9
            ebx[0x28b] = eax_98
            ebx[0x28d] = 1
            ebx[0x289] = 0
        label_42a5a8:
            int32_t eax_89 = ebx[0x289]
            
            if (eax_89 s< 0x3c)
                ebx[0x289] = eax_89 + 1
            else
                if (*(&ebx[(ebx[0x28b] + ebx[0x28a]) * 8] + 0x8266) != 1 || ebx[0x28d] != 1)
                    goto label_42a85a
                
                if (ebx[0x285] != 1)
                    goto label_42aa72
                
                sub_428350()
                sub_408ef0()
                sub_4090d0(1)
                void* ecx_41 = data_a5dce4
                uint32_t eax_90 =
                    zx.d(*(((*(ecx_41 + 0xa2c) + *(ecx_41 + 0xa28)) << 5) + ecx_41 + 0x8268))
                int32_t eax_91 = eax_90 & 0xfff
                
                if ((eax_90 & 0xf000) u< 0x5000)
                    sub_4096b0(eax_91, ecx_41 + 0xb43e50, 0)
                else
                    sub_409100(1, eax_91)
                
                ebx = data_a5dce4
                int32_t eax_103 = ebx[0x28b] + ebx[0x28a]
                ebx[0x285] = 1
                ebx[0x286] = eax_103
                ebx[0x28d] = 0
                ebx[0x287] = 0
                data_2b603a4 = 0
                ebx[0x292] = 0
                ebx[0x297] = 0xffffffff
                ebx[0x298] = 0xffffffff
            
        label_42a85a:
            
            if (ebx[0x285] != 1)
                goto label_42aa72
            
            int32_t eax_105 = ebx[0x283]
            
            if ((eax_105 != 1 || ebx[0x287] s< 0x1a4)
                    && (eax_105 != 0 || ebx[0x287] u< ebx[ebx[0x286] * 8 + 0x209c] + 0x3b))
                goto label_42aa72
            
            int32_t eax_106 = ebx[0x282]
            
            if (eax_106 != 0)
                if (eax_106 != 1)
                    if (eax_106 != 2)
                        goto label_42aa72
                    
                    sub_408ef0()
                    sub_4090d0(1)
                    sub_4285a0()
                    sub_428350()
                    goto label_42a8d9
                
                sub_428350()
                sub_408ef0()
                sub_4090d0(1)
            label_42a8d9:
                ebx = data_a5dce4
                void* eax_113 = &ebx[(ebx[0x28b] + ebx[0x28a]) * 8]
                
                if (*(eax_113 + 0x8266) != 1)
                    goto label_42aa72
                
                uint32_t eax_114 = zx.d(*(eax_113 + 0x8268))
                int32_t eax_115 = eax_114 & 0xfff
                
                if ((eax_114 & 0xf000) u< 0x5000)
                    sub_4096b0(eax_115, &ebx[0x2d0f94], 0)
                else
                    sub_409100(1, eax_115)
                
                ebx = data_a5dce4
                ebx[0x286] = ebx[0x28b] + ebx[0x28a]
                goto label_42aa48
            
            sub_4285a0()
            sub_428350()
            void* eax_116 = data_a5dce4
            
            if (*(eax_116 + 0xa2c) != 0 || *(eax_116 + 0xa28) != 0)
                sub_408ef0()
                sub_4090d0(1)
                ebx = data_a5dce4
                ecx = (ebx[0x28b] + ebx[0x28a]) << 5
                
                if (*(ecx + ebx + 0x8266) != 1)
                    goto label_42aa72
                
                uint32_t eax_119 = zx.d(*(ecx + ebx + 0x8268))
                int32_t eax_120 = eax_119 & 0xfff
                
                if ((eax_119 & 0xf000) u< 0x5000)
                    sub_4096b0(eax_120, &ebx[0x2d0f94], 0)
                else
                    sub_409100(1, eax_120)
                
                ebx = data_a5dce4
                ebx[0x286] = ebx[0x28b] + ebx[0x28a]
            label_42aa48:
                ebx[0x285] = 1
                ebx[0x28d] = 0
                ebx[0x287] = 0
                data_2b603a4 = 0
                ebx[0x298] = 0xffffffff
                ebx[0x297] = 0xffffffff
                ebx[0x292] = 0
            label_42aa72:
                int32_t eax_123 = ebx[0x290]
                
                if (eax_123 s< 0x1a4)
                    ebx[0x290] = eax_123 + 1
                else
                    ebx[0x28e] += 1
                    uint32_t esi_3 = zx.d(ebx[0x280].w)
                    
                    if (ebx[0x28e] == esi_3)
                        sub_428600(esi_3, &ebx[0x140])
                        ebx = data_a5dce4
                        ebx[0x28e] = 0
                    
                    *(arg1 + 0x10) = 9
            else
                sub_408ef0()
                sub_4090d0(1)
                ebx = data_a5dce4
                ebx[0x285] = 0
                ebx[0x291] = 0x80
                ebx[0x281] = 1
                *(arg1 + 0x10) = 0xd
        else
            if ((eax_81.b & 0x60) != 0 || (eax_81 & 0x600000) != 0)
                if (data_e7f088 == 9)
                    ecx = *(ecx_36 + 8)
                    
                    if ((ecx.b & 0x60) != 0 || (ecx & 0x600000) != 0)
                        sub_4095a0(3)
                        ebx = data_a5dce4
                        ebx[0x28a] = 0
                        ebx[0x28b] = 0
                        ebx[0x28d] = 1
                        ebx[0x289] = 0
                        goto label_42a5a8
                    
                    goto label_42a748
                
                sub_4095a0(3)
                ebx = data_a5dce4
                int32_t eax_93 = ebx[0x28a]
                
                if (eax_93 != 8)
                    eax_96 = eax_93 + 1
                    goto label_42a73c
                
                int32_t eax_94 = ebx[0x28b]
                bool cond:8_1 = eax_94 != ebx[0x28c] - 0xa
                ebx[0x28d] = 1
                
                if (cond:8_1)
                    ebx[0x28b] = eax_94 + 1
                    ebx[0x289] = 0
                else
                    ebx[0x28a] = 9
                    ebx[0x289] = 0
                
                goto label_42a5a8
            
            ecx = *(ecx_36 + 8)
            
            if ((ecx & 0x2000) != 0)
                if (*(((data_e7f088 + data_e7f08c) << 5) + 0xe868c6) != 1)
                    sub_4095a0(2)
                label_42a5a2:
                    ebx = data_a5dce4
                    goto label_42a5a8
                
                sub_428350()
                sub_408ef0()
                sub_4090d0(1)
                void* ecx_37 = data_a5dce4
                uint32_t eax_85 =
                    zx.d(*(((*(ecx_37 + 0xa2c) + *(ecx_37 + 0xa28)) << 5) + ecx_37 + 0x8268))
                int32_t eax_86 = eax_85 & 0xfff
                
                if ((eax_85 & 0xf000) u< 0x5000)
                    sub_4096b0(eax_86, ecx_37 + 0xb43e50, 0)
                else
                    sub_409100(1, eax_86)
                
                ebx = data_a5dce4
                int32_t eax_88 = ebx[0x28b] + ebx[0x28a]
                ebx[0x285] = 1
                ebx[0x286] = eax_88
                ebx[0x28d] = 0
                ebx[0x287] = 0
                data_2b603a4 = 0
                ebx[0x292] = 0
                ebx[0x297] = 0xffffffff
                ebx[0x298] = 0xffffffff
                goto label_42a5a8
            
            int32_t eax_92
            
            if ((ecx & 0x4000) == 0)
                eax_92 = sub_45c4f0()
            
            if ((ecx & 0x4000) == 0 && eax_92 == 0)
                goto label_42a5a2
            
            sub_408ef0()
            sub_4090d0(1)
            ebx = data_a5dce4
            ebx[0x285] = 0
            ebx[0x291] = 0x80
            ebx[0x281] = 1
            *(arg1 + 0x10) = 0xd
    case 0xd
        int32_t eax_127 = data_e7f0a4 - 4
        data_e7f0a4 = eax_127
        
        if (eax_127 s<= 0)
            data_e7f0a4 = 0
            data_e7f064 = 0
            *(arg1 + 0x10) = 2
    case 0xe
        if (sub_405130() == 1)
            *(arg1 + 0x10) = 0xf
        
        ebx = data_a5dce4
    case 0xf
        data_2b55e64 = 3
        return 1

if (ebx[0x285] != 1)
    sub_4296a0()
    return 0

ecx.w = ebx[(ebx[0x28b] + ebx[0x28a]) * 8 + 0x209a].w
ecx.w &= 0xf000

if (ecx.w u>= 0x5000)
    *(data_a5dce4 + 0xa1c) = sub_409580(1.40129846e-45f)
    sub_4296a0()
    return 0

*(data_a5dce4 + 0xa1c) = sub_44fc50(data_c5f718)
sub_4296a0()
return 0
