// 函数: sub_466970
// 地址: 0x466970
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* ebx
char* var_88 = ebx
int32_t esi = *(arg2 + 0x24)
int32_t ecx = *(arg2 + 0x20)
void* var_54 = nullptr
long double x87_r0
sub_466550(&var_54, x87_r0, ecx, fconvert.d(float.t(0)), fconvert.d(float.t(ecx)), arg3, arg4)
int32_t var_70 = 0

if (esi s> 0)
    bool cond:3_1
    
    do
        void* ecx_4 = *(arg1 + 0x28) * var_70 + *(arg1 + 0x10)
        int32_t eax_3 = *(arg1 + 0x30)
        int32_t* edi_1 = var_54
        void* var_40_1 = ecx_4
        int32_t var_50
        
        if (eax_3 == 0x32 || eax_3 == 0x35545846)
            char* var_64_2 = nullptr
            
            if (arg3 s> 0)
                ebx = nullptr
                
                do
                    int32_t esi_5 = *edi_1
                    edi_1 = &edi_1[1]
                    int32_t var_80_3 = 0
                    
                    if (var_50 s> 0)
                        int32_t i_5 = var_50
                        int32_t i
                        
                        do
                            int32_t eax_54 = ecx - 1
                            
                            if (esi_5 s< eax_54)
                                eax_54 = esi_5
                            
                            int32_t edx_33 = *edi_1
                            edi_1 = &edi_1[1]
                            var_80_3 += zx.d(*(*(arg2 + 0x2c) * eax_54 + *(arg2 + 0x10)
                                + *(arg2 + 0x28) * var_70)) * edx_33
                            esi_5 += 1
                            i = i_5
                            i_5 -= 1
                        while (i != 1)
                        ebx = var_64_2
                        ecx_4 = var_40_1
                    
                    int32_t eax_58
                    int32_t edx_34
                    edx_34:eax_58 = sx.q(var_80_3)
                    int32_t eax_60 = (eax_58 + (edx_34 & 0x7f)) s>> 7
                    
                    if (eax_60 s>= 0xff)
                        eax_60 = 0xff
                    else if (eax_60 s< 0)
                        eax_60 = 0
                    else if (eax_60 s>= 0xff)
                        eax_60 = 0xff
                    
                    *(ebx + ecx_4) = eax_60.b
                    ebx = &ebx[1]
                    var_64_2 = ebx
                while (ebx s< arg3)
        else if (eax_3 != 0x35545847)
            if (eax_3 != 0x15)
                sub_465480(".\picture.cpp", 0x1af)
            else if (arg3 s> 0)
                void* esi_3 = ecx_4 + 2
                void* var_80_2 = esi_3
                int32_t i_4 = arg3
                int32_t i_1
                
                do
                    int32_t ecx_17 = *edi_1
                    edi_1 = &edi_1[1]
                    int32_t var_48_1 = 0
                    int32_t var_44_1 = 0
                    int32_t var_74_1 = 0
                    int32_t var_6c_2 = 0
                    int32_t var_4c_1 = 0
                    int16_t var_1c_1 = 0
                    int16_t var_1e_1 = 0
                    int16_t var_20_1 = 0
                    
                    if (var_50 s<= 0)
                        goto label_466d3b
                    
                    int32_t eax_25 = *(arg2 + 0x28) * var_70
                    int32_t var_40_2 = eax_25
                    int32_t var_2c_1 = ecx_17
                    int32_t var_64_1 = var_50
                    
                    while (true)
                        int32_t edx_15 = ecx - 1
                        
                        if (ecx_17 s< edx_15)
                            edx_15 = ecx_17
                        
                        int32_t esi_4 = *edi_1
                        void* ecx_20 = *(arg2 + 0x2c) * edx_15 + *(arg2 + 0x10)
                        char* ecx_21 = ecx_20 + eax_25
                        int32_t edx_17 = zx.d(*(ecx_20 + eax_25 + 3)) * esi_4
                        eax_25.b = *ecx_21
                        ebx.b = ecx_21[1]
                        ecx_21.b = ecx_21[2]
                        var_48_1 += zx.d(eax_25.b) * edx_17
                        var_4c_1 += edx_17
                        var_6c_2 += edx_17
                        var_44_1 += zx.d(ebx.b) * edx_17
                        eax_25.w = zx.w(eax_25.b)
                        eax_25.w *= esi_4.w
                        var_20_1 += eax_25.w
                        var_74_1 += zx.d(ecx_21.b) * edx_17
                        eax_25.w = zx.w(ecx_21.b)
                        eax_25.w *= esi_4.w
                        var_1c_1 += eax_25.w
                        edx_17.w = zx.w(ebx.b)
                        edx_17.w *= esi_4.w
                        var_1e_1 += edx_17.w
                        ecx_17 = var_2c_1 + 1
                        int32_t temp4_1 = var_64_1
                        var_64_1 -= 1
                        char var_79_1 = ebx.b
                        var_2c_1 = ecx_17
                        
                        if (temp4_1 == 1)
                            break
                        
                        edi_1 = &edi_1[1]
                        eax_25 = var_40_2
                    
                    if (var_4c_1 == 0)
                        edi_1 = &edi_1[1]
                        esi_3 = var_80_2
                    label_466d3b:
                        int32_t eax_40
                        int32_t edx_26
                        edx_26:eax_40 = sx.q(var_20_1)
                        int32_t eax_42 = (eax_40 + (edx_26 & 0x7f)) s>> 7
                        
                        if (eax_42 s>= 0xff)
                            eax_42 = 0xff
                        else if (eax_42 s< 0)
                            eax_42 = 0
                        else if (eax_42 s>= 0xff)
                            eax_42 = 0xff
                        
                        *(esi_3 - 2) = eax_42.b
                        int32_t eax_44
                        int32_t edx_28
                        edx_28:eax_44 = sx.q(var_1e_1)
                        int32_t eax_46 = (eax_44 + (edx_28 & 0x7f)) s>> 7
                        
                        if (eax_46 s>= 0xff)
                            eax_46 = 0xff
                        else if (eax_46 s< 0)
                            eax_46 = 0
                        else if (eax_46 s>= 0xff)
                            eax_46 = 0xff
                        
                        *(esi_3 - 1) = eax_46.b
                        int32_t eax_48
                        int32_t edx_30
                        edx_30:eax_48 = sx.q(var_1c_1)
                        int32_t eax_50 = (eax_48 + (edx_30 & 0x7f)) s>> 7
                        
                        if (eax_50 s>= 0xff)
                            eax_50 = 0xff
                        else if (eax_50 s< 0)
                            eax_50 = 0
                        else if (eax_50 s>= 0xff)
                            eax_50 = 0xff
                        
                        *esi_3 = eax_50.b
                        *(esi_3 + 1) = 0
                    else
                        int32_t eax_28 = divs.dp.d(sx.q(var_48_1), var_4c_1)
                        
                        if (eax_28 s>= 0xff)
                            eax_28 = 0xff
                        else if (eax_28 s< 0)
                            eax_28 = 0
                        else if (eax_28 s>= 0xff)
                            eax_28 = 0xff
                        
                        esi_3 = var_80_2
                        *(esi_3 - 2) = eax_28.b
                        int32_t eax_31 = divs.dp.d(sx.q(var_44_1), var_4c_1)
                        
                        if (eax_31 s>= 0xff)
                            eax_31 = 0xff
                        else if (eax_31 s< 0)
                            eax_31 = 0
                        else if (eax_31 s>= 0xff)
                            eax_31 = 0xff
                        
                        *(esi_3 - 1) = eax_31.b
                        int32_t eax_34 = divs.dp.d(sx.q(var_74_1), var_4c_1)
                        
                        if (eax_34 s>= 0xff)
                            eax_34 = 0xff
                        else if (eax_34 s< 0)
                            eax_34 = 0
                        else if (eax_34 s>= 0xff)
                            eax_34 = 0xff
                        
                        *esi_3 = eax_34.b
                        int32_t eax_36
                        int32_t edx_24
                        edx_24:eax_36 = sx.q(var_6c_2)
                        int32_t eax_38 = (eax_36 + (edx_24 & 0x7f)) s>> 7
                        
                        if (eax_38 s>= 0xff)
                        label_466d1d:
                            edi_1 = &edi_1[1]
                            *(esi_3 + 1) = 0xff.b
                        else if (eax_38 s>= 0)
                            if (eax_38 s>= 0xff)
                                goto label_466d1d
                            
                            edi_1 = &edi_1[1]
                            *(esi_3 + 1) = eax_38.b
                        else
                            edi_1 = &edi_1[1]
                            *(esi_3 + 1) = 0
                    
                    esi_3 += 4
                    i_1 = i_4
                    i_4 -= 1
                    var_80_2 = esi_3
                while (i_1 != 1)
        else if (arg3 s> 0)
            char* ecx_5 = ecx_4 + 2
            char* var_6c_1 = ecx_5
            int32_t i_3 = arg3
            int32_t i_2
            
            do
                int32_t eax_5 = *edi_1
                edi_1 = &edi_1[1]
                int32_t var_34_1 = 0
                int32_t var_38_1 = 0
                int32_t var_3c_1 = 0
                
                if (var_50 s> 0)
                    int32_t esi_2 = *(arg2 + 0x28) * var_70
                    int32_t var_80_1 = eax_5
                    int32_t j_1 = var_50
                    int32_t j
                    
                    do
                        if (eax_5 s>= ecx - 1)
                            eax_5 = ecx - 1
                        
                        int32_t edx_3 = *edi_1
                        void* ecx_12 = *(arg2 + 0x2c) * eax_5 + *(arg2 + 0x10)
                        void* ecx_13 = ecx_12 + esi_2
                        var_3c_1 += zx.d(*(ecx_12 + esi_2)) * edx_3
                        var_38_1 += zx.d(*(ecx_13 + 1)) * edx_3
                        var_34_1 += zx.d(*(ecx_13 + 2)) * edx_3
                        eax_5 = var_80_1 + 1
                        edi_1 = &edi_1[1]
                        j = j_1
                        j_1 -= 1
                        var_80_1 = eax_5
                    while (j != 1)
                    ecx_5 = var_6c_1
                
                int32_t eax_12
                int32_t edx_4
                edx_4:eax_12 = sx.q(var_3c_1)
                int32_t eax_14 = (eax_12 + (edx_4 & 0x7f)) s>> 7
                
                if (eax_14 s>= 0xff)
                    eax_14 = 0xff
                else if (eax_14 s< 0)
                    eax_14 = 0
                else if (eax_14 s>= 0xff)
                    eax_14 = 0xff
                
                ecx_5[0xfffffffe] = eax_14.b
                int32_t eax_16
                int32_t edx_6
                edx_6:eax_16 = sx.q(var_38_1)
                int32_t eax_18 = (eax_16 + (edx_6 & 0x7f)) s>> 7
                
                if (eax_18 s>= 0xff)
                    eax_18 = 0xff
                else if (eax_18 s< 0)
                    eax_18 = 0
                else if (eax_18 s>= 0xff)
                    eax_18 = 0xff
                
                ecx_5[0xffffffff] = eax_18.b
                int32_t eax_20
                int32_t edx_8
                edx_8:eax_20 = sx.q(var_34_1)
                int32_t eax_22 = (eax_20 + (edx_8 & 0x7f)) s>> 7
                
                if (eax_22 s>= 0xff)
                    eax_22 = 0xff
                else if (eax_22 s< 0)
                    eax_22 = 0
                else if (eax_22 s>= 0xff)
                    eax_22 = 0xff
                
                *ecx_5 = eax_22.b
                ecx_5 = &ecx_5[3]
                i_2 = i_3
                i_3 -= 1
                var_6c_1 = ecx_5
            while (i_2 != 1)
        cond:3_1 = var_70 + 1 s< esi
        var_70 += 1
    while (cond:3_1)

void* eax_63 = var_54

if (eax_63 != 0)
    j_sub_4813df(eax_63)

return 0
