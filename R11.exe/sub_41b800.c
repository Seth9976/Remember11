// 函数: sub_41b800
// 地址: 0x41b800
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* ecx = data_a5d8f8
char edx = *ecx
*(ecx + 0x14) = arg2
*(ecx + 0x18) = 0
ecx[0x5c2c] = edx
void* esi = &ecx[*ecx * 0x5c10 + 0x1c]
int32_t eax_3 = *(esi + 0x58)
void* ebp = eax_3 * 0x34 + esi + 0x80
void* edi_2 = esi + *(esi + 0x74) * 0x1c + 0x59e0
void* var_10 = &ecx[(eax_3 << 1) + 0x5c2e]
int32_t var_4 = *(edi_2 + 0x14)
int32_t var_c = 0

if (eax_3 != 0)
    int32_t eax_5
    int32_t edx_6
    edx_6:eax_5 = sx.q(eax_3 + 1)
    int32_t eax_9
    int32_t edx_7
    edx_7:eax_9 = sx.q(*(esi + 0x54))
    
    if ((eax_5 - edx_6) s>> 1 == (eax_9 - edx_7) s>> 1)
        int32_t eax_13 = *(esi + 0x58) & 0x80000001
        
        if (eax_13 s< 0)
            eax_13 = ((eax_13 - 1) | 0xfffffffe) + 1
        
        if (eax_13 == 1)
            *(esi + 0x54) -= 2

if (arg3 != 0)
    arg3 = 0
else if (arg4 == 0)
    int32_t ecx_1 = *(ecx + 4)
    
    if (ecx_1 == 0xffffffff)
        arg3 = *((zx.d(data_2b5cf0c) << 2) + &data_4b171c)
    else
        arg3 = ecx_1 << 4
else
    arg3 = arg4

void* ebx_2 = arg1
int32_t edx_5

if (*(esi + 0x74) == 0)
    if (*(esi + 5) == 0)
        arg2 = 0
    
    if (*(esi + 5) != 0 || data_2b55e94 u<= 0)
    label_41b981:
        int32_t ecx_8 = data_a5d8f8
        edx_5.b = arg7
        *(*(esi + 0x74) + ecx_8 + 0x5fee) = edx_5.b
        *(edi_2 + 0x1c) = *(esi + 0x5c)
        edi_2 += 0x1c
        *(edi_2 + 4) = *(esi + 0x58)
        edx_5.w = arg5
        *(edi_2 + 8) = 0
        *(edi_2 + 0x14) = 0
        *(edi_2 + 0x18) = 0x1a
        *(esi + 0x74) += 1
        *(esi + 0x70) = 0
        *(ecx_8 + (*(esi + 0x74) << 2) + 0x5f9e) = edx_5.w
        edx_5.w = arg6
        *(ecx_8 + (*(esi + 0x74) << 2) + 0x5fa0) = edx_5.w
        *(esi + 8) = 0
    else
        while (true)
            char* eax_20
            eax_20, edx_5 = sub_481240(ebx_2, *(data_2b55e90 + (arg2 << 2)))
            
            if (eax_20 == ebx_2)
                char* ecx_6 = *(data_2b55e90 + (arg2 << 2))
                
                do
                    edx_5.b = *ecx_6
                    ecx_6 = &ecx_6[1]
                while (edx_5.b != 0)
                
                void* eax_21 = &eax_20[ecx_6 - &ecx_6[1]]
                
                if (*eax_21 == 0x81)
                    eax_21.b = *(eax_21 + 1)
                    
                    if (eax_21.b == 0x75 || eax_21.b == 0x77 || eax_21.b == 0x69)
                        int32_t eax_28 = data_a5d8f8
                        edx_5.w = arg5
                        *(eax_28 + (*(esi + 0x74) << 2) + 0x5f9e) = edx_5.w
                        edx_5.w = arg6
                        *(eax_28 + (*(esi + 0x74) << 2) + 0x5fa0) = edx_5.w
                        break
            
            bool cond:4_1 = arg2 + 1 u< data_2b55e94
            arg2 += 1
            
            if (not(cond:4_1))
                goto label_41b981

int32_t var_8 = 0xffffffff

if (*ebx_2 != 0)
    void* ecx_11 = data_a5d8f8
    
    do
        edx_5.b = arg7
        *(*(esi + 0x74) + ecx_11 + 0x5fee) = edx_5.b
        int32_t eax_29
        
        if (*(esi + 0x74) == 0 && *ebx_2 == 0x81)
            eax_29.b = *(ebx_2 + 1)
            
            if (eax_29.b == 0x75 || eax_29.b == 0x77 || eax_29.b == 0x69)
                *(esi + 8) = *(edi_2 + 0x14)
                *(ecx_11 + 0x5fee) = edx_5.b
                *(edi_2 + 0x1c) = *(esi + 0x5c)
                edx_5.w = arg5
                edi_2 += 0x1c
                *(edi_2 + 4) = *(esi + 0x58)
                *(edi_2 + 8) = 0
                *(edi_2 + 0x14) = 0
                *(edi_2 + 0x18) = 0x1a
                *(esi + 0x74) += 1
                *(esi + 0x70) = 0
                *(ecx_11 + (*(esi + 0x74) << 2) + 0x5f9e) = edx_5.w
                edx_5.w = arg6
                *(ecx_11 + (*(esi + 0x74) << 2) + 0x5fa0) = edx_5.w
                edx_5.b = arg7
        
        if (*ebx_2 != 0x25)
            int32_t eax_116 = *(esi + 0x74)
            
            if (eax_116 != 0)
                edx_5.w = arg5
                *(ecx_11 + (eax_116 << 2) + 0x5f9e) = edx_5.w
                edx_5.w = arg6
                *(ecx_11 + (*(esi + 0x74) << 2) + 0x5fa0) = edx_5.w
            
            char* eax_120 = var_10
            
            if (sub_441a20(*ebx_2) == 0)
                edx_5.b = *ebx_2
                *eax_120 = edx_5.b
                eax_120[1] = *(ebx_2 + 1)
                ebx_2 += 2
            else
                *eax_120 = *ebx_2
                eax_120[1] = 0x20
                ebx_2 += 1
            
            *(ebp + 0x18) = *(data_a5d8f8 + 0xc)
            *(ebp + 0x10) = *(esi + 0x64)
            *(ebp + 0x14) = *(esi + 0x68)
            *(ebp + 0x2c) = *(esi + 0x60)
            int16_t eax_123 = sub_441db0(*(esi + 0x78), var_10)
            int32_t edx_52 = *(ebp + 0x2c)
            *(ebp + 0x28) = eax_123
            uint32_t ecx_52 = zx.d(*(ebp + 0x28))
            *(ebp + 0x30) = *(esi + 0x6c)
            int32_t eax_128
            int32_t edx_53
            edx_53:eax_128 = sx.q((zx.d(*(ebp + 0x29)) - ecx_52) * *((edx_52 << 3) + &data_4b1734))
            
            if (((eax_128 + (edx_53 & 0xfff)) s>> 0xc) + *(edi_2 + 0x14) + 2 s>= *(esi + 0x20))
                void* eax_130
                eax_130.b = data_4b16a8
                char* ecx_54 = &data_4b16a8
                
                if (eax_130.b == 0)
                label_41bffd:
                    
                    if (sub_41b750(var_10 - 2, 0x4b16ec) != 1)
                        int32_t ecx_68 = data_a5d8f8
                        *(*(esi + 0x74) + ecx_68 + 0x5fee) = arg7
                        edi_2 += 0x1c
                        *edi_2 = *(esi + 0x5c)
                        *(edi_2 + 4) = *(esi + 0x58)
                        edx_5.w = arg5
                        *(edi_2 + 8) = 0
                        *(edi_2 + 0x14) = 0
                        *(edi_2 + 0x18) = 0x1a
                        *(esi + 0x74) += 1
                        *(esi + 0x70) = 0
                        *(ecx_68 + (*(esi + 0x74) << 2) + 0x5f9e) = edx_5.w
                        edx_5.w = arg6
                        *(ecx_68 + (*(esi + 0x74) << 2) + 0x5fa0) = edx_5.w
                    else
                        *(edi_2 + 8) -= 1
                        void* eax_135 = *(edi_2 + 4) + *(edi_2 + 8)
                        int32_t eax_136 = eax_135 * 0x34
                        *(edi_2 + 0x14) = *(eax_136 + esi + 0xa0)
                        int32_t ecx_57 = data_a5d8f8
                        void* ebp_1 = eax_136 + esi + 0x80
                        eax_136.b = arg7
                        *(*(esi + 0x74) + ecx_57 + 0x5fee) = eax_136.b
                        *(edi_2 + 0x1c) = *(esi + 0x5c)
                        int32_t edx_58
                        edx_58.w = arg5
                        *(edi_2 + 0x20) = *(esi + 0x58)
                        edi_2 += 0x1c
                        *(edi_2 + 8) = 0
                        *(edi_2 + 0x14) = 0
                        *(edi_2 + 0x18) = 0x1a
                        *(esi + 0x74) += 1
                        *(esi + 0x70) = 0
                        *(ecx_57 + (*(esi + 0x74) << 2) + 0x5f9e) = edx_58.w
                        edx_58.w = arg6
                        *(ecx_57 + (*(esi + 0x74) << 2) + 0x5fa0) = edx_58.w
                        *(edi_2 + 4) = eax_135
                        *(edi_2 + 8) = 1
                        int32_t eax_143
                        int32_t edx_59
                        edx_59:eax_143 = sx.q(*((*(ebp_1 + 0x2c) << 3) + &data_4b1734) * 0x1a)
                        int32_t eax_145 = (eax_143 + (edx_59 & 0xfff)) s>> 0xc
                        
                        if (*(edi_2 + 0x18) s< eax_145)
                            *(edi_2 + 0x18) = eax_145
                        
                        int32_t ecx_59 = *(ebp_1 + 0x2c)
                        int32_t eax_148
                        int32_t edx_62
                        edx_62:eax_148 =
                            sx.q(*((ecx_59 << 3) + &data_4b1730) * zx.d(*(ebp_1 + 0x28)))
                        uint32_t eax_151 = zx.d(*(ebp_1 + 0x29))
                        *(ebp_1 + 0x20) =
                            *(edi_2 + 0x14) - ((eax_148 + (edx_62 & 0xfff)) s>> 0xc) - 2
                        uint32_t eax_152 = eax_151 - zx.d(*(ebp_1 + 0x28))
                        *(ebp_1 + 0x24) = 0
                        int32_t eax_154
                        int32_t edx_68
                        edx_68:eax_154 = sx.q(eax_152 * *((ecx_59 << 3) + &data_4b1730))
                        *(edi_2 + 0x14) += ((eax_154 + (edx_68 & 0xfff)) s>> 0xc) + 4
                        ebp = ebp_1 + 0x34
                else
                    void* edx_55
                    edx_55.b = *var_10
                    arg2.b = edx_55.b
                    
                    while (true)
                        if (arg2.b == eax_130.b)
                            edx_55.b = *(var_10 + 1)
                            
                            if (edx_55.b == ecx_54[1])
                                void* eax_158 = var_10 - 2
                                int32_t i = 0
                                arg1 = eax_158
                                
                                if (*(edi_2 + 8) s> 0)
                                    do
                                        arg2.b = *eax_158
                                        void* eax_159
                                        eax_159.b = data_4b16a8
                                        void* ebp_2 = &data_4b16a8
                                        
                                        while (true)
                                            if (arg2.b == eax_159.b)
                                                edx_55.b = *(arg1 + 1)
                                                
                                                if (edx_55.b == *(ebp_2 + 1))
                                                    break
                                            
                                            eax_159.b = *(ebp_2 + 2)
                                            ebp_2 += 2
                                            
                                            if (eax_159.b == 0)
                                                goto label_41c161
                                        
                                        eax_158 = arg1 - 2
                                        i += 1
                                        arg1 = eax_158
                                    while (i s< *(edi_2 + 8))
                                
                            label_41c161:
                                void* eax_160 = *(edi_2 + 4)
                                edx_55.b = arg7
                                *(edi_2 + 8) -= i + 1
                                void* eax_161 = eax_160 + *(edi_2 + 8)
                                ebp = eax_161 * 0x34 + esi + 0x80
                                *(edi_2 + 0x14) = *(ebp + 0x20)
                                int32_t eax_164 = data_a5d8f8
                                *(*(esi + 0x74) + eax_164 + 0x5fee) = edx_55.b
                                edi_2 += 0x1c
                                *edi_2 = *(esi + 0x5c)
                                *(edi_2 + 4) = *(esi + 0x58)
                                edx_5.w = arg5
                                *(edi_2 + 8) = 0
                                *(edi_2 + 0x14) = 0
                                *(edi_2 + 0x18) = 0x1a
                                *(esi + 0x74) += 1
                                *(esi + 0x70) = 0
                                *(eax_164 + (*(esi + 0x74) << 2) + 0x5f9e) = edx_5.w
                                edx_5.w = arg6
                                *(eax_164 + (*(esi + 0x74) << 2) + 0x5fa0) = edx_5.w
                                *(edi_2 + 4) = eax_161
                                *(edi_2 + 8) = i + 1
                                
                                if (i + 1 s> 0)
                                    arg2 = i + 1
                                    int32_t i_1
                                    
                                    do
                                        int32_t eax_169
                                        int32_t edx_69
                                        edx_69:eax_169 =
                                            sx.q(*((*(ebp + 0x2c) << 3) + &data_4b1734) * 0x1a)
                                        int32_t eax_171 = (eax_169 + (edx_69 & 0xfff)) s>> 0xc
                                        
                                        if (*(edi_2 + 0x18) s< eax_171)
                                            *(edi_2 + 0x18) = eax_171
                                        
                                        int32_t ecx_67 = *(ebp + 0x2c)
                                        int32_t eax_174
                                        int32_t edx_72
                                        edx_72:eax_174 = sx.q(*((ecx_67 << 3) + &data_4b1730)
                                            * zx.d(*(ebp + 0x28)))
                                        uint32_t eax_177 = zx.d(*(ebp + 0x29))
                                        *(ebp + 0x20) = *(edi_2 + 0x14)
                                            - ((eax_174 + (edx_72 & 0xfff)) s>> 0xc) - 2
                                        uint32_t eax_178 = eax_177 - zx.d(*(ebp + 0x28))
                                        *(ebp + 0x24) = 0
                                        int32_t eax_180
                                        int32_t edx_78
                                        edx_78:eax_180 =
                                            sx.q(eax_178 * *((ecx_67 << 3) + &data_4b1730))
                                        *(edi_2 + 0x14) +=
                                            ((eax_180 + (edx_78 & 0xfff)) s>> 0xc) + 4
                                        ebp += 0x34
                                        i_1 = arg2
                                        arg2 -= 1
                                    while (i_1 != 1)
                                
                                break
                        
                        eax_130.b = ecx_54[2]
                        ecx_54 = &ecx_54[2]
                        
                        if (eax_130.b == 0)
                            goto label_41bffd
            
            if (*(esi + 0x70) != 0 || *var_10 != 0x81 || *(var_10 + 1) != 0x40)
                int32_t eax_192
                int32_t edx_79
                edx_79:eax_192 = sx.q(*((*(ebp + 0x2c) << 3) + &data_4b1734) * 0x1a)
                int32_t eax_194 = (eax_192 + (edx_79 & 0xfff)) s>> 0xc
                
                if (*(edi_2 + 0x18) s< eax_194)
                    *(edi_2 + 0x18) = eax_194
                
                int32_t ecx_69 = *(ebp + 0x2c)
                int32_t eax_197
                int32_t edx_82
                edx_82:eax_197 = sx.q(*((ecx_69 << 3) + &data_4b1730) * zx.d(*(ebp + 0x28)))
                uint32_t eax_200 = zx.d(*(ebp + 0x29))
                *(ebp + 0x20) = *(edi_2 + 0x14) - ((eax_197 + (edx_82 & 0xfff)) s>> 0xc) - 2
                uint32_t eax_201 = eax_200 - zx.d(*(ebp + 0x28))
                *(ebp + 0x24) = 0
                int32_t eax_203
                int32_t edx_88
                edx_88:eax_203 = sx.q(eax_201 * *((ecx_69 << 3) + &data_4b1730))
                *(edi_2 + 0x14) += ((eax_203 + (edx_88 & 0xfff)) s>> 0xc) + 4
                
                if (*(esi + 0x74) == 0)
                    *ebp = 0
                    *(ebp + 0xc) = 0x80
                else if (var_8 != 0xffffffff)
                    *ebp = (var_8 * arg3) s>> 4
                    ecx_69.b = *(esi + 5)
                    char temp0_1 = ecx_69.b
                    ecx_69.b = neg.b(ecx_69.b)
                    *(ebp + 0xc) = (sbb.d(ecx_69, ecx_69, temp0_1 != 0) & 0xfffffffa) + 8
                else
                    *ebp = (arg3 * var_c) s>> 4
                    *(ebp + 0xc) = 8
                
                var_10 += 2
                *(edi_2 + 8) += 1
                var_c += 1
                *(esi + 0x58) += 1
                ebp += 0x34
                *(esi + 0x70) += 1
            label_41c3df:
                ecx_11 = data_a5d8f8
                goto label_41c3e5
            
            *(edi_2 + 8) = 0
            *(edi_2 + 0x14) = 0
            ecx_11 = data_a5d8f8
        else
            eax_29.b = *(ebx_2 + 1)
            
            if (eax_29.b != 0x4e)
                if (eax_29.b == 0x46)
                    if (*(ebx_2 + 2) != 0x53)
                        var_8 = 0xffffffff
                        ebx_2 += 3
                    else
                        var_8 = var_c
                        ebx_2 += 3
                    
                    goto label_41c3e5
                
                if (eax_29.b == 0x54)
                    eax_29.b = *(ebx_2 + 2)
                    
                    if (eax_29.b != 0x53)
                        if (eax_29.b != 0x45)
                            ebx_2 += 4
                        else
                            *(esi + 0x6c) = 0xffffffff
                            *(esi + 0x68) = 0x80
                            *(esi + 0x64) = 0x80
                            *(esi + 0x69) = 0x80
                            *(esi + 0x65) = 0x80
                            *(esi + 0x6a) = 0x80
                            *(esi + 0x66) = 0x80
                            *(esi + 0x6b) = 0x80
                            *(esi + 0x67) = 0x80
                            ebx_2 += 3
                        
                        goto label_41c3e5
                    
                    int32_t eax_41 = zx.d(*(ebx_2 + 5))
                        + (zx.d(*(ebx_2 + 4)) + zx.d(*(ebx_2 + 3)) * 0xa) * 0xa - 0x14d0
                    *(esi + 0x6c) = eax_41
                    int32_t eax_42
                    
                    if (arg8 != 0)
                        eax_42 = sub_4021e0(eax_41)
                    else
                        sub_4161d0(eax_41, 1)
                        eax_42 = sub_4153c0(*(esi + 0x6c))
                    
                    char ecx_14 = *((eax_42 << 2) + &data_4b1790)
                    edx_5 = *(esi + 0x6c)
                    *(esi + 0x68) = ecx_14
                    *(esi + 0x64) = ecx_14
                    ecx_14 = *((eax_42 << 2) + &data_4b1791)
                    *(esi + 0x69) = ecx_14
                    *(esi + 0x65) = ecx_14
                    ecx_14 = *((eax_42 << 2) + &data_4b1792)
                    *(esi + 0x6a) = ecx_14
                    *(esi + 0x66) = ecx_14
                    eax_42.b = *((eax_42 << 2) + &data_4b1793)
                    *(esi + 0x6b) = eax_42.b
                    *(esi + 0x67) = eax_42.b
                    void* eax_43 = data_a5d8f8
                    ebx_2 += 6
                    *(eax_43 + (*(eax_43 + 0xa4d4) << 2) + 0xa4d8) = edx_5
                    *(eax_43 + 0xa4d4) += 1
                    goto label_41c3df
                
                if (eax_29.b == 0x4c)
                    eax_29.b = *(ebx_2 + 2)
                    
                    if (eax_29.b == 0x43)
                        *(esi + 0x5c) = 1
                        *edi_2 = *(esi + 0x5c)
                        ebx_2 += 3
                    else if (eax_29.b != 0x52)
                        *(esi + 0x5c) = 0
                        *edi_2 = *(esi + 0x5c)
                        ebx_2 += 3
                    else
                        *(esi + 0x5c) = 2
                        *edi_2 = *(esi + 0x5c)
                        ebx_2 += 3
                    
                    goto label_41c3e5
                
                if (eax_29.b != 0x43)
                    if (eax_29.b == 0x58)
                        *(edi_2 + 0x14) = zx.d(*(ebx_2 + 4))
                            + (zx.d(*(ebx_2 + 3)) + zx.d(*(ebx_2 + 2)) * 0xa) * 0xa - 0x14d0
                        ebx_2 += 5
                    else if (eax_29.b == 0x4b)
                        ebx_2 += 2
                    else if (eax_29.b == 0x42)
                        ebx_2 += 2
                    else if (eax_29.b == 0x50)
                        ebx_2 += 2
                    else if (eax_29.b == 0x70)
                        ebx_2 += 2
                    else if (eax_29.b == 0x4f)
                        ebx_2 += 2
                    else if (eax_29.b == 0x56)
                        ebx_2 += 2
                    else if (eax_29.b == 0x57)
                        ebx_2 += 2
                    else if (eax_29.b == 0x53)
                        ebx_2 += 2
                    else if (eax_29.b != 0x44)
                        *(esi + 0x60) = zx.d(*(ebx_2 + 2)) + zx.d(eax_29.b) * 0xa - 0x210
                        ebx_2 += 3
                    else
                        ebx_2 += 2
                    
                    goto label_41c3e5
                
                if (*(ebx_2 + 2) != 0x47)
                    char eax_92 = ((sub_41b790(ebx_2 + 2) << 7) s/ 0xf).b
                    *(esi + 0x68) = eax_92
                    *(esi + 0x64) = eax_92
                    char eax_97 = ((sub_41b790(ebx_2 + 3) << 7) s/ 0xf).b
                    *(esi + 0x69) = eax_97
                    *(esi + 0x65) = eax_97
                    char eax_102 = ((sub_41b790(ebx_2 + 4) << 7) s/ 0xf).b
                    *(esi + 0x6a) = eax_102
                    *(esi + 0x66) = eax_102
                    char eax_108 = ((sub_41b790(ebx_2 + 5) << 7) s/ 0xf).b
                    *(esi + 0x6b) = eax_108
                    *(esi + 0x67) = eax_108
                    ebx_2 += 6
                else
                    *(esi + 0x64) = ((sub_41b790(ebx_2 + 3) << 7) s/ 0xf).b
                    *(esi + 0x65) = ((sub_41b790(ebx_2 + 4) << 7) s/ 0xf).b
                    *(esi + 0x66) = ((sub_41b790(ebx_2 + 5) << 7) s/ 0xf).b
                    *(esi + 0x67) = ((sub_41b790(ebx_2 + 6) << 7) s/ 0xf).b
                    *(esi + 0x68) = ((sub_41b790(ebx_2 + 7) << 7) s/ 0xf).b
                    *(esi + 0x69) = ((sub_41b790(ebx_2 + 8) << 7) s/ 0xf).b
                    *(esi + 0x6a) = ((sub_41b790(ebx_2 + 9) << 7) s/ 0xf).b
                    *(esi + 0x6b) = ((sub_41b790(ebx_2 + 0xa) << 7) s/ 0xf).b
                    ebx_2 += 0xb
                
                goto label_41c3df
            
            *(*(esi + 0x74) + ecx_11 + 0x5fee) = edx_5.b
            *(edi_2 + 0x1c) = *(esi + 0x5c)
            edx_5.w = arg5
            edi_2 += 0x1c
            *(edi_2 + 4) = *(esi + 0x58)
            *(edi_2 + 8) = 0
            *(edi_2 + 0x14) = 0
            *(edi_2 + 0x18) = 0x1a
            *(esi + 0x74) += 1
            *(esi + 0x70) = 0
            *(ecx_11 + (*(esi + 0x74) << 2) + 0x5f9e) = edx_5.w
            edx_5.w = arg6
            *(ecx_11 + (*(esi + 0x74) << 2) + 0x5fa0) = edx_5.w
            ebx_2 += 2
        label_41c3e5:
            int32_t eax_213 = *(edi_2 + 0x14)
            
            if (var_4 s< eax_213)
                var_4 = eax_213
    while (*ebx_2 != 0)

return sub_41b6c0(var_4)
