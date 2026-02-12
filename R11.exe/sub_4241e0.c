// 函数: sub_4241e0
// 地址: 0x4241e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* ebp = arg1
char var_4c = 0xff
char var_4b = 0xff
char var_4a = 0xff
char var_49 = 0x80
sub_409c40(1)
void* eax = data_4b1de0
int32_t var_20

if (*(eax + 0x20) == 0)
    void* edi_1 = *(eax + 0x2c)
    uint32_t ecx_2 = zx.d(*(edi_1 + 0x1ba))
    void* var_34_1 = edi_1
    char var_50
    
    if ((ecx_2 & 0xf00) == 0 && (0x80 & ecx_2.b) != 0)
        eax.w = *(edi_1 + 0x1b8)
        eax.w &= 0xfff
        
        if (eax.w == 0xfff)
            char var_4e_2 = 0xff
            char var_4f_2 = 0xff
            var_50 = 0xff
        else
            ecx_2.b = *(edi_1 + 0x1b9)
            ecx_2.b &= 0xf
            ecx_2.b <<= 4
            var_50 = ecx_2.b
            uint8_t var_4f_1 = (*(edi_1 + 0x1b8) u>> 4 & 0xf) << 4
            eax.b = *(edi_1 + 0x1b8)
            eax.b &= 0xf
            eax.b <<= 4
            char var_4e_1 = eax.b
        
        int32_t edx_6 = ebp[1]
        var_20 = *ebp + 0x16e
        char var_4d_1 = 0x80
        int32_t var_1c_2 = edx_6 + 3
        int32_t var_18_2 = 0xa0
        int32_t var_14_2 = 0x78
        sub_4437c0(&var_20, &var_50, 1)
        eax = data_4b1de0
    
    switch (zx.d(*(edi_1 + 0x194)) - 0x13)
        case 0
            var_50 = 0
            char var_4f_3 = 0
            char var_4e_3 = 0
            char var_4d_2 = 0x40
        label_42435f:
            int32_t eax_2 = ebp[1]
            var_20 = *ebp + 0x16e
            int32_t var_1c_3 = eax_2 + 3
            int32_t var_18_3 = 0xa0
            int32_t var_14_3 = 0x78
            sub_4437c0(&var_20, &var_50, 1)
            eax = data_4b1de0
        case 1
            sub_442e20()
            data_c7bbf0 = 1
            int32_t var_1c_4 = ebp[1] + 3
            void* ecx_9 = data_4b1de0
            var_20 = *ebp + 0x16e
            char var_4d_3 = 0x80
            char var_4e_4 = 0x80
            char var_4f_4 = 0x80
            var_50 = 0x80
            int32_t var_18_4 = 0xa0
            int32_t var_14_4 = 0x78
            sub_444420(ecx_9 + 0xc4b0, &var_20, &var_50, 1)
            sub_442c30(data_4b1de0 + 0xc4b0, 1)
            sub_442f40()
            int32_t var_7c_1 = 1
            var_50 = 0xff
            char var_4f_5 = 0x80
            char var_4e_5 = 0x80
            char var_4d_4 = 0x20
            sub_4437c0(&var_20, &var_50, 1)
            eax = data_4b1de0
        case 2
            var_50 = (zx.d(*(edi_1 + 0x198)) * 0xff s/ 0xf).b
            char var_4f_6 = (zx.d(*(edi_1 + 0x19a)) * 0xff s/ 0xf).b
            char var_4e_6 = (zx.d(*(edi_1 + 0x19c)) * 0xff s/ 0xf).b
            char var_4d_5 = ((zx.d(*(edi_1 + 0x19e)) << 7) s/ 0xf).b
            goto label_42435f
        case 3
            sub_442e20()
            data_c7bbf0 = 1
            int32_t var_1c_5 = ebp[1] + 3
            void* ecx_27 = data_4b1de0
            var_20 = *ebp + 0x16e
            char var_4d_6 = 0x80
            char var_4e_7 = 0x80
            char var_4f_7 = 0x80
            var_50 = 0x80
            int32_t var_18_5 = 0xa0
            int32_t var_14_5 = 0x78
            sub_444420(ecx_27 + 0xc4b0, &var_20, &var_50, 1)
            sub_442c30(data_4b1de0 + 0xc4b0, 1)
            sub_442f40()
            eax = data_4b1de0
        case 5
            sub_442e20()
            data_c7bbf0 = 1
            char var_4e_8 = 0x80
            char var_4f_8 = 0x80
            var_50 = 0x80
            char var_4d_7 = ((zx.d(*(edi_1 + 0x1a0)) << 7) s/ 0xf).b
            int32_t var_1c_6 = ebp[1] + 3
            void* edx_31 = data_4b1de0
            var_20 = *ebp + 0x16e
            int32_t var_18_6 = 0xa0
            int32_t var_14_6 = 0x78
            sub_444420(edx_31 + 0xc4b0, &var_20, &var_50, 1)
            sub_442c30(data_4b1de0 + 0xc4b0, 1)
            sub_442f40()
            var_50 = (zx.d(*(edi_1 + 0x198)) * 0xff s/ 0xf).b
            char var_4f_9 = (zx.d(*(edi_1 + 0x19a)) * 0xff s/ 0xf).b
            char var_4e_9 = (zx.d(*(edi_1 + 0x19c)) * 0xff s/ 0xf).b
            int32_t var_7c_2 = 1
            char var_4d_8 = ((zx.d(*(edi_1 + 0x19e)) << 7) s/ 0xf).b
            sub_4437c0(&var_20, &var_50, 1)
            eax = data_4b1de0
    
    int32_t i = 0
    int32_t i_1 = 0
    
    do
        int16_t* j = 0x4c
        int32_t var_48_1 = 0x84
        int16_t* j_1 = 0x4c
        void* esi_1 = edi_1 + 0x140
        
        do
            if (*(j + eax) == 1 && zx.d(*(esi_1 + 9)) == i)
                int32_t edx_45 = sx.d(*(esi_1 + 6))
                int32_t ebx_2 = sx.d(*(esi_1 + 2))
                int32_t ecx_48 = sx.d(*esi_1)
                int32_t eax_34 = sx.d(*(esi_1 + 4))
                var_20 = *ebp + 0x16e
                int32_t edx_49 = ebp[1] + 3
                int32_t eax_35
                int32_t edx_50
                edx_50:eax_35 = sx.q(eax_34)
                int32_t eax_38
                int32_t edx_51
                edx_51:eax_38 =
                    muls.dp.d(0x66666667, (sx.d(*(esi_1 - 4)) - ((eax_35 - edx_50) s>> 1)) * 0xa0)
                int32_t edx_52 = edx_51 s>> 8
                var_20 += (edx_52 u>> 0x1f) + edx_52
                int32_t ebp_6 = sx.d(*(esi_1 - 2)) * 0xffffff88
                int32_t eax_42
                int32_t edx_53
                edx_53:eax_42 = muls.dp.d(0x88888889, ebp_6)
                int32_t edx_55 = (edx_53 + ebp_6) s>> 8
                int32_t var_1c_8 = edx_49 + (edx_55 u>> 0x1f) + edx_55
                int32_t eax_50
                int32_t edx_57
                edx_57:eax_50 = muls.dp.d(0x66666667, 
                    (ecx_48 - divs.dp.d(sx.q(eax_34 * ecx_48), *(var_48_1 + eax + 0xc52c) * 4))
                        * 0xa0)
                int32_t edx_58 = edx_57 s>> 8
                var_20 += (edx_58 u>> 0x1f) + edx_58
                int32_t var_1c_9 = var_1c_8
                    + (ebx_2 - divs.dp.d(sx.q(edx_45 * ebx_2), *(var_48_1 + eax + 0xc530) * 4))
                    * 0x78 s/ 0x1e0
                int32_t var_18_7 = eax_34 * 0xa0 s/ 0x280
                int32_t var_14_7 = edx_45 * 0x78 s/ 0x1e0
                sub_444420(var_48_1 + eax + 0xc508, &var_20, 
                    data_2b5670c + (zx.d(*(esi_1 + 8)) << 2), 1)
                sub_442c30(var_48_1 + eax + 0xc508, 1)
                eax = data_4b1de0
                j = j_1
                i = i_1
                edi_1 = var_34_1
                ebp = arg1
            
            var_48_1 -= 0x2c
            j -= 2
            esi_1 -= 0x12
            j_1 = j
        while (j s>= 0x48)
        
        i += 1
        i_1 = i
    while (i s< 0xa)
    
    if (*(eax + 0x46) == 1)
        sub_442e20()
        data_c7bbf0 = 1
        int32_t var_1c_10 = ebp[1] + 3
        var_20 = *ebp + 0x16e
        int32_t var_18_8 = 0xa0
        int32_t var_14_8 = 0x78
        int32_t eax_68
        int32_t edx_71
        edx_71:eax_68 = muls.dp.d(0x66666667, sx.d(*(edi_1 + 0x10a)) * 0xa0)
        int32_t edx_72 = edx_71 s>> 8
        int32_t var_10_1 = (edx_72 u>> 0x1f) + edx_72
        int32_t var_c_1 = sx.d(*(edi_1 + 0x10c)) * 0x78 s/ 0x1e0
        int32_t eax_74
        int32_t edx_76
        edx_76:eax_74 = muls.dp.d(0x66666667, sx.d(*(edi_1 + 0x10e)) * 0xa0)
        int32_t edx_77 = edx_76 s>> 8
        int32_t var_8_1 = (edx_77 u>> 0x1f) + edx_77
        int32_t var_4_1 = sx.d(*(edi_1 + 0x110)) * 0x78 s/ 0x1e0
        sub_445790(data_4b1de0 + 0xc508, &var_20, data_2b5670c, 1)
        sub_442c30(data_4b1de0 + 0xc508, 1)
        sub_442f40()
else
    int32_t edx_2 = ebp[1]
    var_20 = *ebp + 0x16e
    int32_t var_1c_1 = edx_2 + 3
    int32_t var_18_1 = 0xa0
    int32_t var_14_1 = 0x78
    sub_444420(eax + 0xc400, &var_20, nullptr, 1)
    sub_442c30(data_4b1de0 + 0xc400, 1)

int32_t eax_83 = ebp[1] + 3
int32_t var_30 = *ebp + 0x16e
int32_t var_2c = eax_83
int32_t var_28 = 0xa0
int32_t var_24 = 0x70
sub_409b90(&var_30, 1)
int32_t eax_84 = ebp[1]
var_20 = *ebp + 0x16a
int32_t var_1c_11 = eax_84 - 1
int32_t var_18_9 = 0xa8
int32_t var_14_9 = 0x78
return sub_4437c0(&var_20, &var_4c, 1)
