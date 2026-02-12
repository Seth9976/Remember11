// 函数: sub_437990
// 地址: 0x437990
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

long double x87_r7 = float.t(0)
float var_60 = fconvert.s(x87_r7)
float var_5c = fconvert.s(x87_r7)
float var_58 = fconvert.s(x87_r7)
long double x87_r6 = float.t(1)
float var_54 = fconvert.s(x87_r6)
float var_44 = fconvert.s(x87_r6)
float var_50 = fconvert.s(x87_r7)
float var_4c = fconvert.s(x87_r7)
float var_48 = fconvert.s(x87_r7)
sub_437910()
sub_43d9d0(data_a5dd14 + 0x1871c)
long double x87_r7_1 = fconvert.t(65536f)
long double x87_r6_1 = float.t(1)
sub_43d850(data_a5dd14 + 0x1871c, fconvert.s(fconvert.t(900f)), fconvert.s(x87_r6_1), 
    fconvert.s(x87_r6_1), fconvert.s(fconvert.t(320f)), fconvert.s(fconvert.t(224f)), 
    fconvert.s(float.t(0)), fconvert.s(x87_r7_1), fconvert.s(x87_r6_1), fconvert.s(x87_r7_1))
sub_43d820(data_a5dd14 + 0x1871c, &var_50, &var_60)
void* eax_2 = data_a5dd14
void var_40
sub_45ba30(&var_40, eax_2 + 0x187dc, eax_2 + 0x1871c)

for (int32_t i = 0; i s< 0x186a0; i += 0x14)
    void* eax_4 = data_a5dd14
    long double x87_r7_4 = fconvert.t(32f)
    *(eax_4 + i + 0x88) -= 0xa
    int32_t ecx_4 = *(eax_4 + i + 0x88)
    *(eax_4 + i + 0x8c) += 1
    void* edi_1 = eax_4 + i
    
    if (ecx_4 s< 0)
        int32_t eax_6
        int32_t edx_1
        edx_1:eax_6 = sx.q(sub_448760())
        void* eax_7 = data_a5dd14
        void* esi_1 = eax_7 + i
        *(eax_7 + i + 0x80) = mods.dp.d(edx_1:eax_6, 0x1900) - 0xc80
        int32_t eax_9
        int32_t edx_4
        edx_4:eax_9 = sx.q(sub_448760())
        *(esi_1 + 0x88) = 0x1770
        *(esi_1 + 0x84) = mods.dp.d(edx_4:eax_9, 0x1180) - 0x8c0
        int32_t eax_11 = sub_448760()
        void* ecx_5 = data_a5dd14
        *(ecx_5 + i + 0x8c) = eax_11
        edi_1 = ecx_5 + i
        int32_t eax_13 = sub_448760() & 0x80000003
        
        if (eax_13 s< 0)
            eax_13 = ((eax_13 - 1) | 0xfffffffc) + 1
        
        x87_r7_4 = fconvert.t(32f)
        *(edi_1 + 0x7c) = eax_13
    
    int32_t ecx_6 = *(edi_1 + 0x88)
    int32_t esi_2 = 0x80
    
    if (ecx_6 s> 0x1388)
        esi_2 = ((0x1770 - ecx_6) << 7) s/ 0x3e8
    
    if (ecx_6 s< 0x3e8)
        esi_2 = (ecx_6 << 7) s/ 0x3e8
        
        if ((ecx_6 << 7) s/ 0x3e8 s< 0)
            esi_2 = 0
        else if (esi_2 s> 0x80)
            esi_2 = 0x80
    
    int32_t eax_18 = *(edi_1 + 0x84)
    long double x87_r6_6 = float.t(*(edi_1 + 0x80))
    long double x87_r5_2 = x87_r6_6 - x87_r7_4
    data_4bf858 = fconvert.s(x87_r5_2)
    long double x87_r4_1 = float.t(eax_18)
    long double x87_r3_2 = x87_r4_1 + x87_r7_4
    data_4bf85c = fconvert.s(x87_r3_2)
    long double x87_r3_4 = x87_r6_6 + x87_r7_4
    data_4bf868 = fconvert.s(x87_r3_4)
    data_4bf86c = fconvert.s(x87_r3_2)
    data_4bf878 = fconvert.s(x87_r5_2)
    long double x87_r7_5 = x87_r4_1 - x87_r7_4
    data_4bf87c = fconvert.s(x87_r7_5)
    data_4bf88c = fconvert.s(x87_r7_5)
    data_4bf888 = fconvert.s(x87_r3_4)
    long double x87_r7_7 = float.t(0x1770 - *(edi_1 + 0x88))
    data_4bf890 = fconvert.s(x87_r7_7)
    data_4bf880 = fconvert.s(x87_r7_7)
    data_4bf870 = fconvert.s(x87_r7_7)
    data_4bf860 = fconvert.s(x87_r7_7)
    int32_t var_a0
    sub_45bd50(&var_a0, &var_40, &data_4bf858, 4, 0)
    int32_t edx_14 = var_a0
    int32_t var_a8_2 = edx_14
    int32_t var_90
    
    if (edx_14 s<= var_90)
        var_a8_2 = var_90
    
    int32_t var_70
    int32_t ecx_9 = var_70
    int32_t var_80
    
    if (var_80 s> ecx_9)
        ecx_9 = var_80
    
    int32_t ecx_10
    
    if (var_a8_2 s<= ecx_9)
        ecx_10 = var_70
        
        if (var_80 s> ecx_10)
            ecx_10 = var_80
    else if (edx_14 s<= var_90)
        ecx_10 = var_90
    else
        ecx_10 = edx_14
    
    if (ecx_10 s>= 0)
        int32_t var_a8_3 = edx_14
        
        if (edx_14 s>= var_90)
            var_a8_3 = var_90
        
        int32_t ecx_11 = var_70
        
        if (var_80 s< ecx_11)
            ecx_11 = var_80
        
        int32_t eax_21
        
        if (var_a8_3 s>= ecx_11)
            eax_21 = var_80
            
            if (eax_21 s>= var_70)
                eax_21 = var_70
        else if (edx_14 s>= var_90)
            eax_21 = var_90
        else
            eax_21 = edx_14
        
        if (eax_21 s<= 0x2800)
            int32_t var_9c
            int32_t eax_22 = var_9c
            int32_t var_8c
            
            if (eax_22 s<= var_8c)
                eax_22 = var_8c
            
            int32_t var_7c
            int32_t ecx_14 = var_7c
            int32_t var_6c
            
            if (var_7c s<= var_6c)
                ecx_14 = var_6c
            
            int32_t eax_23 = var_9c
            int32_t ecx_15
            
            if (eax_22 s<= ecx_14)
                ecx_15 = var_7c
                
                if (var_7c s<= var_6c)
                    ecx_15 = var_6c
            else
                ecx_15 = var_8c
                
                if (eax_23 s> ecx_15)
                    ecx_15 = eax_23
            
            if (ecx_15 s>= 0)
                if (eax_23 s>= var_8c)
                    eax_23 = var_8c
                
                int32_t ecx_17 = var_7c
                
                if (var_7c s>= var_6c)
                    ecx_17 = var_6c
                
                int32_t eax_24
                
                if (eax_23 s>= ecx_17)
                    eax_24 = var_7c
                    
                    if (var_7c s>= var_6c)
                        eax_24 = var_6c
                else
                    eax_24 = var_9c
                    
                    if (eax_24 s>= var_8c)
                        eax_24 = var_8c
                
                if (eax_24 s<= 0x1c00)
                    int32_t eax_25 = *(data_a5dd14 + i + 0x7c)
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
                    int32_t eax_26 = eax_25 << 5
                    *(*data_c7bbcc + 0x40) = eax_26 << 0x14
                    *(*data_c7bbcc + 0x44) = 0
                    *(*data_c7bbcc + 0x48) = (data_c7bbd4 + var_9c) << 0x10 | (data_c7bbd0 + var_a0)
                    *(*data_c7bbcc + 0x4c) = data_c7bbdc.d << 0x18 | data_c7bbd8
                    *(*data_c7bbcc + 0x50) = (eax_26 + 0x20) << 0x14 | 0x200
                    *(*data_c7bbcc + 0x54) = 0
                    *(*data_c7bbcc + 0x58) = esi_2 << 0x18 | 0x808080
                    *(*data_c7bbcc + 0x5c) = fconvert.s(float.t(1))
                    *(*data_c7bbcc + 0x60) = (data_c7bbd4 + var_6c) << 0x10 | (data_c7bbd0 + var_70)
                    *(*data_c7bbcc + 0x64) = data_c7bbdc.d << 0x18 | data_c7bbd8
                    sub_448880(data_c7bbc8, 1, *data_c7bbcc)
                    int32_t* eax_38 = data_c7bbcc
                    *eax_38 += 0x70

sub_442c30(data_a5dd14 + 0x18b44, 1)
