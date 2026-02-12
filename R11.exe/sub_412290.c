// 函数: sub_412290
// 地址: 0x412290
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax_1 = data_a59af8 + 0x20
char var_3c
int32_t var_20

if (arg1 != 0)
    sub_442e20()
    void* eax_2 = data_a59af8
    data_c7bbf0 = 1
    int32_t ecx_1 = sx.d(*(eax_2 + 4))
    int32_t eax_3 = data_2b603ac
    int32_t var_38_1
    int32_t var_34_1
    int32_t var_30_1
    int32_t ecx_3
    int32_t edx_19
    int32_t edi_2
    
    if (*eax_2 s> 0)
        int32_t eax_80
        char edx_20
        edx_20:eax_80 = sx.q(eax_3 * ecx_1 * 0xc)
        int32_t ecx_7 = (eax_80 + zx.d(edx_20)) s>> 8 & 0x800003ff
        
        if (ecx_7 s< 0)
            ecx_7 = ((ecx_7 - 1) | 0xfffffc00) + 1
        
        ecx_3 = (ecx_7 + 0x400) & 0x800003ff
        
        if (ecx_3 s< 0)
            ecx_3 = ((ecx_3 - 1) | 0xfffffc00) + 1
        
        int32_t eax_89
        char edx_23
        edx_23:eax_89 = sx.q(data_2b603ac * sx.d(*(data_a59af8 + 4)) * 0xc)
        int32_t eax_92 = (eax_89 + zx.d(edx_23)) s>> 8 & 0x800003ff
        
        if (eax_92 s< 0)
            eax_92 = ((eax_92 - 1) | 0xfffffc00) + 1
        
        edi_2 = (0x400 - eax_92) & 0x800003ff
        
        if (edi_2 s< 0)
            edi_2 = ((edi_2 - 1) | 0xfffffc00) + 1
        
        int32_t eax_101
        char edx_27
        edx_27:eax_101 = sx.q(data_2b603ac * sx.d(*(data_a59af8 + 4)) * 0x18)
        int32_t eax_104 = (eax_101 + zx.d(edx_27)) s>> 8 & 0x800003ff
        
        if (eax_104 s< 0)
            eax_104 = ((eax_104 - 1) | 0xfffffc00) + 1
        
        int32_t eax_108 = (eax_104 + 0x400) & 0x800003ff
        
        if (eax_108 s< 0)
            eax_108 = ((eax_108 - 1) | 0xfffffc00) + 1
        
        var_38_1 = eax_108
        int32_t eax_118
        char edx_30
        edx_30:eax_118 = sx.q(data_2b603ac * sx.d(*(data_a59af8 + 4)) * 0x18)
        int32_t eax_121 = (eax_118 + zx.d(edx_30)) s>> 8 & 0x800003ff
        
        if (eax_121 s< 0)
            eax_121 = ((eax_121 - 1) | 0xfffffc00) + 1
        
        int32_t eax_125 = (0x400 - eax_121) & 0x800003ff
        
        if (eax_125 s< 0)
            eax_125 = ((eax_125 - 1) | 0xfffffc00) + 1
        
        var_34_1 = eax_125
        int32_t eax_134
        char edx_34
        edx_34:eax_134 = sx.q(data_2b603ac * sx.d(*(data_a59af8 + 4)) * 8)
        int32_t eax_137 = (eax_134 + zx.d(edx_34)) s>> 8 & 0x800003ff
        
        if (eax_137 s< 0)
            eax_137 = ((eax_137 - 1) | 0xfffffc00) + 1
        
        int32_t eax_141 = (eax_137 + 0x400) & 0x800003ff
        
        if (eax_141 s< 0)
            eax_141 = ((eax_141 - 1) | 0xfffffc00) + 1
        
        edx_19 = sx.d(*(data_a59af8 + 4))
        var_30_1 = eax_141
    else
        int32_t eax_8
        char edx_1
        edx_1:eax_8 = sx.q(eax_3 * ecx_1 * 0xc)
        int32_t eax_11 = (eax_8 + zx.d(edx_1)) s>> 8 & 0x800003ff
        
        if (eax_11 s< 0)
            eax_11 = ((eax_11 - 1) | 0xfffffc00) + 1
        
        ecx_3 = (0x400 - eax_11) & 0x800003ff
        
        if (ecx_3 s< 0)
            ecx_3 = ((ecx_3 - 1) | 0xfffffc00) + 1
        
        int32_t eax_19
        char edx_5
        edx_5:eax_19 = sx.q(data_2b603ac * sx.d(*(data_a59af8 + 4)) * 0xc)
        int32_t eax_22 = (eax_19 + zx.d(edx_5)) s>> 8 & 0x800003ff
        
        if (eax_22 s< 0)
            eax_22 = ((eax_22 - 1) | 0xfffffc00) + 1
        
        edi_2 = (0x400 - eax_22) & 0x800003ff
        
        if (edi_2 s< 0)
            edi_2 = ((edi_2 - 1) | 0xfffffc00) + 1
        
        int32_t eax_32
        char edx_8
        edx_8:eax_32 = sx.q(data_2b603ac * sx.d(*(data_a59af8 + 4)) * 0x18)
        int32_t eax_35 = (eax_32 + zx.d(edx_8)) s>> 8 & 0x800003ff
        
        if (eax_35 s< 0)
            eax_35 = ((eax_35 - 1) | 0xfffffc00) + 1
        
        int32_t eax_39 = (0x400 - eax_35) & 0x800003ff
        
        if (eax_39 s< 0)
            eax_39 = ((eax_39 - 1) | 0xfffffc00) + 1
        
        var_38_1 = eax_39
        int32_t eax_49
        char edx_12
        edx_12:eax_49 = sx.q(data_2b603ac * sx.d(*(data_a59af8 + 4)) * 0x18)
        int32_t eax_52 = (eax_49 + zx.d(edx_12)) s>> 8 & 0x800003ff
        
        if (eax_52 s< 0)
            eax_52 = ((eax_52 - 1) | 0xfffffc00) + 1
        
        int32_t eax_56 = (0x400 - eax_52) & 0x800003ff
        
        if (eax_56 s< 0)
            eax_56 = ((eax_56 - 1) | 0xfffffc00) + 1
        
        var_34_1 = eax_56
        int32_t eax_65
        char edx_16
        edx_16:eax_65 = sx.q(data_2b603ac * sx.d(*(data_a59af8 + 4)) * 8)
        int32_t eax_68 = (eax_65 + zx.d(edx_16)) s>> 8 & 0x800003ff
        
        if (eax_68 s< 0)
            eax_68 = ((eax_68 - 1) | 0xfffffc00) + 1
        
        int32_t eax_72 = (0x400 - eax_68) & 0x800003ff
        
        if (eax_72 s< 0)
            eax_72 = ((eax_72 - 1) | 0xfffffc00) + 1
        
        var_30_1 = eax_72
        edx_19 = sx.d(*(data_a59af8 + 4))
    
    int32_t eax_149
    char edx_37
    edx_37:eax_149 = sx.q(data_2b603ac * edx_19 * 8)
    int32_t eax_152 = (eax_149 + zx.d(edx_37)) s>> 8 & 0x800003ff
    
    if (eax_152 s< 0)
        eax_152 = ((eax_152 - 1) | 0xfffffc00) + 1
    
    int32_t eax_156 = (0x400 - eax_152) & 0x800003ff
    
    if (eax_156 s< 0)
        eax_156 = ((eax_156 - 1) | 0xfffffc00) + 1
    
    int32_t var_10_1 = ecx_3
    int32_t var_18_1 = 0x2800
    int32_t var_14_1 = 0x2800
    int32_t var_8_1 = 0x400
    int32_t var_4_1 = 0x400
    void* eax_159 = data_a59af8
    var_20 = 0
    int32_t var_1c_1 = 0
    int32_t var_c_1 = edi_2
    char var_3a_1 = 0x80
    char var_3b_1 = 0x80
    var_3c = 0x80
    int32_t var_50_1 = 3
    char var_39_1 = (sx.d(*(eax_159 + 2)) * 0x18 s/ 0xf).b
    sub_4454d0(data_e7e648 + 0x10f190, &var_20, &var_3c)
    int16_t* ebp_1 = *data_c7bbcc
    void* edi_9 = eax_1 & 0xfffffff0
    int32_t eax_161 = sub_448f10(ebp_1, 1)
    *(ebp_1 + 0x28) = 8
    *(ebp_1 + 0x2c) = 0
    *(ebp_1 + 0x20) = edi_9
    int32_t var_24
    *(ebp_1 + 0x24) = var_24
    sub_448880(data_c7bbc8, 3, ebp_1)
    int32_t* eax_164 = data_c7bbcc
    *eax_164 += eax_161 << 4
    int32_t var_18_2 = 0x2800
    int32_t var_14_2 = 0x2800
    int32_t var_8_2 = 0x400
    int32_t var_4_2 = 0x400
    void* eax_165 = data_a59af8
    int32_t var_10_2 = var_38_1
    int32_t var_c_2 = var_34_1
    var_20 = 0
    int32_t var_1c_2 = 0
    char var_3a_2 = 0x80
    char var_3b_2 = 0x80
    var_3c = 0x80
    int32_t var_74_1 = 3
    char var_39_2 = (sx.d(*(eax_165 + 2)) * 0x18 s/ 0xf).b
    sub_4454d0(data_e7e648 + 0x10f190, &var_20, &var_3c)
    int16_t* ebp_2 = *data_c7bbcc
    void* edi_10 = edi_9 & 0xfffffff0
    int32_t eax_167 = sub_448f10(ebp_2, 1)
    *(ebp_2 + 0x28) = 8
    *(ebp_2 + 0x2c) = 0
    *(ebp_2 + 0x20) = edi_10
    *(ebp_2 + 0x24) = var_24
    sub_448880(data_c7bbc8, 3, ebp_2)
    int32_t* eax_170 = data_c7bbcc
    *eax_170 += eax_167 << 4
    sub_442c30(data_e7e648 + 0x10f190, 3)
    void* ecx_36 = data_a59af8
    int32_t var_18_3 = 0x2800
    int32_t var_14_3 = 0x2800
    int32_t var_c_3 = eax_156
    int32_t var_10_3 = var_30_1
    int32_t var_8_3 = 0x400
    int32_t var_4_3 = 0x400
    var_20 = 0
    int32_t var_1c_3 = 0
    char var_3a_3 = 0x80
    char var_3b_3 = 0x80
    var_3c = 0x80
    int32_t ecx_39 = sx.d(*(ecx_36 + 2)) * 0x60
    int32_t eax_172
    int32_t edx_50
    edx_50:eax_172 = muls.dp.d(0x88888889, ecx_39)
    int32_t edx_52 = (edx_50 + ecx_39) s>> 3
    int32_t var_58_2 = 1
    char var_39_3 = (edx_52 u>> 0x1f).b + edx_52.b
    sub_4454d0(data_e7e648 + 0x10f190, &var_20, &var_3c)
    int16_t* ebp_3 = *data_c7bbcc
    int32_t eax_178 = sub_448f10(ebp_3, 1)
    *(ebp_3 + 0x28) = 8
    *(ebp_3 + 0x2c) = 0
    *(ebp_3 + 0x20) = edi_10 & 0xfffffff0
    *(ebp_3 + 0x24) = var_24
    sub_448880(data_c7bbc8, 1, ebp_3)
    int32_t* eax_180 = data_c7bbcc
    *eax_180 += eax_178 << 4
    sub_442c30(data_e7e648 + 0x10f190, 1)

int32_t result = 0
int32_t ecx_41
ecx_41.b = *data_a59af8 s<= 0
int32_t i_1 = 0x662
int16_t* edi_13 = eax_1 + 8
int32_t i

do
    if (edi_13[-3] s<= 0x1e0)
        goto label_4128e2
    
    if (arg1 == 2)
        result += 1
    label_4128f5:
        int16_t ebx_8 = *edi_13
        int32_t ecx_44 = sx.d(ebx_8)
        var_20 = mods.dp.d(sx.q(sx.d(edi_13[-4]) + 0x1900), 0x280)
        int32_t edx_57 = sx.d(edi_13[-3])
        int32_t eax_188
        int32_t edx_58
        edx_58:eax_188 = sx.q(ecx_44 << 5)
        int32_t eax_190 = (eax_188 + (edx_58 & 0x3f)) s>> 6
        int32_t eax_192 = ecx_44 & 0x80000001
        
        if (eax_192 s< 0)
            eax_192 = ((eax_192 - 1) | 0xfffffffe) + 1
        
        char var_3a_4 = 0x80
        int32_t eax_196 = (eax_192 + ((ecx_41 - 1) & 2)) << 4
        int32_t edx_60 = *(eax_196 + 0x4b0e68)
        int32_t edx_61 = *(eax_196 + 0x4b0e6c)
        int32_t edx_62 = *(eax_196 + 0x4b0e70)
        int32_t eax_197 = *(eax_196 + 0x4b0e74)
        int32_t eax_200
        int32_t edx_63
        edx_63:eax_200 = sx.q(ecx_44 << 7)
        char var_3b_4 = 0x80
        var_3c = 0x80
        char var_39_4 = ((eax_200 + (edx_63 & 0x3f)) s>> 6).b + 0x18
        
        if (((eax_200 + (edx_63 & 0x3f)) s>> 6).b + 0x18 u> 0x80)
            var_39_4 = 0x80
        
        **data_c7bbcc = 0x20000006
        *(*data_c7bbcc + 4) = 0
        *(*data_c7bbcc + 8) = 0
        *(*data_c7bbcc + 0xc) = 0x50000006
        *(*data_c7bbcc + 0x10) = 1
        *(*data_c7bbcc + 0x14) = 0x10ab4000
        *(*data_c7bbcc + 0x18) = 0xe
        *(*data_c7bbcc + 0x1c) = 0
        *(*data_c7bbcc + 0x20) = 0
        *(*data_c7bbcc + 0x24) = 0
        *(*data_c7bbcc + 0x28) = 0xf
        *(*data_c7bbcc + 0x2c) = 0
        *(*data_c7bbcc + 0x30) = 0x8001
        *(*data_c7bbcc + 0x34) = 0x54000000
        *(*data_c7bbcc + 0x38) = 0x41343
        *(*data_c7bbcc + 0x3c) = 0
        int32_t eax_203
        eax_203.b = ebx_8 s> 0x20
        *(*data_c7bbcc + 0x40) = edx_61 << 0x14 | edx_60 << 4
        *(*data_c7bbcc + 0x44) = 0
        *(*data_c7bbcc + 0x48) =
            ((edx_57 << 4) + data_c7bbd4) << 0x10 | ((var_20 << 4) + data_c7bbd0)
        *(*data_c7bbcc + 0x4c) = data_c7bbdc.d << 0x18 | data_c7bbd8
        *(*data_c7bbcc + 0x50) = (eax_197 + edx_61) << 0x14 | (edx_62 + edx_60) << 4
        *(*data_c7bbcc + 0x54) = 0
        *(*data_c7bbcc + 0x58) =
            ((zx.d(var_39_4) << 8 | zx.d(var_3a_4)) << 8 | zx.d(var_3b_4)) << 8 | zx.d(var_3c)
        *(*data_c7bbcc + 0x5c) = fconvert.s(float.t(1))
        *(*data_c7bbcc + 0x60) = (((eax_190 + edx_57) << 4) + data_c7bbd4) << 0x10
            | (((eax_190 + var_20) << 4) + data_c7bbd0)
        *(*data_c7bbcc + 0x64) = data_c7bbdc.d << 0x18 | data_c7bbd8
        sub_448880(data_c7bbc8, eax_203 * 2 + 1, *data_c7bbcc)
        int32_t* eax_206 = data_c7bbcc
        *eax_206 += 0x70
    else
        edi_13[-4] = 0
        edi_13[-3] = 0
        sub_412180()
    label_4128e2:
        
        if (arg1 != 0)
            goto label_4128f5
    
    int32_t ecx_94 = sx.d(*edi_13)
    int32_t eax_207
    int32_t edx_114
    edx_114:eax_207 = muls.dp.d(0x2aaaaaab, sx.d(edi_13[-2]))
    void* ebx_16 = data_a59af8
    int32_t eax_212
    int32_t edx_115
    edx_115:eax_212 = sx.q((edx_114 + (edx_114 u>> 0x1f) + 1) * ecx_94)
    int32_t eax_216
    char edx_118
    edx_118:eax_216 = sx.q(((eax_212 + (edx_115 & 0x3f)) s>> 6) * sx.d(*(ebx_16 + 4)))
    int32_t edx_120 = sx.d(edi_13[-1])
    edi_13[-4] += ((eax_216 + zx.d(edx_118)) s>> 8).w
    int32_t eax_224
    int32_t edx_122
    edx_122:eax_224 = sx.q((edx_120 s/ 6 + 1) * ecx_94)
    int32_t eax_228
    char edx_124
    edx_124:eax_228 = sx.q(((eax_224 + (edx_122 & 0x3f)) s>> 6) * sx.d(*(ebx_16 + 4)))
    edi_13[-3] += ((eax_228 + zx.d(edx_124)) s>> 8).w
    edi_13 = &edi_13[5]
    i = i_1
    i_1 -= 1
while (i != 1)

if (arg1 != 0)
    sub_442c30(data_e7e648 + 0x10f214, 3)
    sub_442c30(data_e7e648 + 0x10f214, 1)
    sub_442f40()

return result
