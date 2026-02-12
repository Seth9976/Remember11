// 函数: sub_466ee0
// 地址: 0x466ee0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edi = *(arg2 + 0x20)
int32_t eax_1 = *(arg2 + 0x24)
int32_t* var_64 = nullptr
long double x87_r0
sub_466550(&var_64, x87_r0, eax_1, fconvert.d(float.t(0)), fconvert.d(float.t(eax_1)), arg3, arg4)
int32_t var_74 = 0

if (edi s> 0)
    bool cond:2_1
    
    do
        int32_t* edi_1 = var_64
        int32_t var_54_1 = 0
        
        if (arg3 s> 0)
            bool cond:7_1
            
            do
                char* ebx_4 = *(arg1 + 0x28) * var_54_1 + *(arg1 + 0x2c) * var_74 + *(arg1 + 0x10)
                int32_t eax_3 = *(arg1 + 0x30)
                char* var_5c_1 = ebx_4
                int32_t i_4
                
                if (eax_3 == 0x32 || eax_3 == 0x35545846)
                    int32_t esi_5 = *edi_1
                    edi_1 = &edi_1[1]
                    int32_t var_80_3 = 0
                    
                    if (i_4 s> 0)
                        int32_t i_3 = i_4
                        int32_t i
                        
                        do
                            int32_t eax_53 = eax_1 - 1
                            
                            if (esi_5 s< eax_53)
                                eax_53 = esi_5
                            
                            int32_t edx_32 = *edi_1
                            edi_1 = &edi_1[1]
                            var_80_3 += zx.d(*(*(arg2 + 0x28) * eax_53 + *(arg2 + 0x10)
                                + *(arg2 + 0x2c) * var_74)) * edx_32
                            esi_5 += 1
                            i = i_3
                            i_3 -= 1
                        while (i != 1)
                        ebx_4 = var_5c_1
                    
                    int32_t eax_57
                    int32_t edx_33
                    edx_33:eax_57 = sx.q(var_80_3)
                    int32_t eax_59 = (eax_57 + (edx_33 & 0x7f)) s>> 7
                    
                    if (eax_59 s>= 0xff)
                        eax_59 = 0xff
                    else if (eax_59 s< 0)
                        eax_59 = 0
                    else if (eax_59 s>= 0xff)
                        eax_59 = 0xff
                    
                    *ebx_4 = eax_59.b
                else if (eax_3 == 0x35545847)
                    int32_t eax_4 = *edi_1
                    edi_1 = &edi_1[1]
                    int32_t var_34_1 = 0
                    int32_t var_38_1 = 0
                    int32_t var_3c_1 = 0
                    
                    if (i_4 s> 0)
                        int32_t esi_2 = *(arg2 + 0x2c) * var_74
                        int32_t var_80_1 = eax_4
                        int32_t i_2 = i_4
                        int32_t i_1
                        
                        do
                            if (eax_4 s>= eax_1 - 1)
                                eax_4 = eax_1 - 1
                            
                            int32_t edx_3 = *edi_1
                            void* ecx_10 = *(arg2 + 0x28) * eax_4 + *(arg2 + 0x10)
                            void* ecx_11 = ecx_10 + esi_2
                            var_3c_1 += zx.d(*(ecx_10 + esi_2)) * edx_3
                            var_38_1 += zx.d(*(ecx_11 + 1)) * edx_3
                            var_34_1 += zx.d(*(ecx_11 + 2)) * edx_3
                            eax_4 = var_80_1 + 1
                            edi_1 = &edi_1[1]
                            i_1 = i_2
                            i_2 -= 1
                            var_80_1 = eax_4
                        while (i_1 != 1)
                        ebx_4 = var_5c_1
                    
                    int32_t eax_11
                    int32_t edx_4
                    edx_4:eax_11 = sx.q(var_3c_1)
                    int32_t eax_13 = (eax_11 + (edx_4 & 0x7f)) s>> 7
                    
                    if (eax_13 s>= 0xff)
                        eax_13 = 0xff
                    else if (eax_13 s< 0)
                        eax_13 = 0
                    else if (eax_13 s>= 0xff)
                        eax_13 = 0xff
                    
                    *ebx_4 = eax_13.b
                    int32_t eax_15
                    int32_t edx_6
                    edx_6:eax_15 = sx.q(var_38_1)
                    int32_t eax_17 = (eax_15 + (edx_6 & 0x7f)) s>> 7
                    
                    if (eax_17 s>= 0xff)
                        eax_17 = 0xff
                    else if (eax_17 s< 0)
                        eax_17 = 0
                    else if (eax_17 s>= 0xff)
                        eax_17 = 0xff
                    
                    ebx_4[1] = eax_17.b
                    int32_t eax_19
                    int32_t edx_8
                    edx_8:eax_19 = sx.q(var_34_1)
                    int32_t eax_21 = (eax_19 + (edx_8 & 0x7f)) s>> 7
                    
                    if (eax_21 s>= 0xff)
                        ebx_4[2] = 0xff.b
                    else if (eax_21 s< 0)
                        ebx_4[2] = 0
                    else if (eax_21 s< 0xff)
                        ebx_4[2] = eax_21.b
                    else
                        ebx_4[2] = 0xff.b
                else if (eax_3 != 0x15)
                    sub_465480(".\picture.cpp", 0x1fe)
                else
                    int32_t ecx_14 = *edi_1
                    edi_1 = &edi_1[1]
                    int32_t var_44_1 = 0
                    int32_t var_50_1 = 0
                    int32_t var_4c_1 = 0
                    int32_t var_78_1 = 0
                    int32_t var_48_1 = 0
                    int16_t var_1c_1 = 0
                    int16_t var_1e_1 = 0
                    int16_t var_20_1 = 0
                    
                    if (i_4 s<= 0)
                        goto label_46727e
                    
                    int32_t eax_24 = *(arg2 + 0x2c) * var_74
                    int32_t var_28_1 = eax_24
                    int32_t var_40_1 = ecx_14
                    int32_t i_5 = i_4
                    
                    while (true)
                        int32_t edx_14 = eax_1 - 1
                        
                        if (ecx_14 s< edx_14)
                            edx_14 = ecx_14
                        
                        int32_t esi_3 = *edi_1
                        void* ecx_17 = *(arg2 + 0x28) * edx_14 + *(arg2 + 0x10)
                        char* ecx_18 = ecx_17 + eax_24
                        int32_t edx_16 = zx.d(*(ecx_17 + eax_24 + 3)) * esi_3
                        eax_24.b = *ecx_18
                        ebx_4.b = ecx_18[1]
                        ecx_18.b = ecx_18[2]
                        var_44_1 += zx.d(eax_24.b) * edx_16
                        var_48_1 += edx_16
                        var_78_1 += edx_16
                        var_50_1 += zx.d(ebx_4.b) * edx_16
                        eax_24.w = zx.w(eax_24.b)
                        eax_24.w *= esi_3.w
                        var_20_1 += eax_24.w
                        var_4c_1 += zx.d(ecx_18.b) * edx_16
                        eax_24.w = zx.w(ecx_18.b)
                        eax_24.w *= esi_3.w
                        var_1c_1 += eax_24.w
                        edx_16.w = zx.w(ebx_4.b)
                        edx_16.w *= esi_3.w
                        var_1e_1 += edx_16.w
                        ecx_14 = var_40_1 + 1
                        int32_t i_6 = i_5
                        i_5 -= 1
                        char var_79_1 = ebx_4.b
                        var_40_1 = ecx_14
                        
                        if (i_6 == 1)
                            break
                        
                        edi_1 = &edi_1[1]
                        eax_24 = var_28_1
                    
                    if (var_48_1 == 0)
                        edi_1 = &edi_1[1]
                        ebx_4 = var_5c_1
                    label_46727e:
                        int32_t eax_39
                        int32_t edx_25
                        edx_25:eax_39 = sx.q(var_20_1)
                        int32_t eax_41 = (eax_39 + (edx_25 & 0x7f)) s>> 7
                        
                        if (eax_41 s>= 0xff)
                            eax_41 = 0xff
                        else if (eax_41 s< 0)
                            eax_41 = 0
                        else if (eax_41 s>= 0xff)
                            eax_41 = 0xff
                        
                        *ebx_4 = eax_41.b
                        int32_t eax_43
                        int32_t edx_27
                        edx_27:eax_43 = sx.q(var_1e_1)
                        int32_t eax_45 = (eax_43 + (edx_27 & 0x7f)) s>> 7
                        
                        if (eax_45 s>= 0xff)
                            eax_45 = 0xff
                        else if (eax_45 s< 0)
                            eax_45 = 0
                        else if (eax_45 s>= 0xff)
                            eax_45 = 0xff
                        
                        ebx_4[1] = eax_45.b
                        int32_t eax_47
                        int32_t edx_29
                        edx_29:eax_47 = sx.q(var_1c_1)
                        int32_t eax_49 = (eax_47 + (edx_29 & 0x7f)) s>> 7
                        
                        if (eax_49 s>= 0xff)
                        label_4672fd:
                            ebx_4[2] = 0xff.b
                            ebx_4[3] = 0
                        else if (eax_49 s>= 0)
                            if (eax_49 s>= 0xff)
                                goto label_4672fd
                            
                            ebx_4[2] = eax_49.b
                            ebx_4[3] = 0
                        else
                            ebx_4[2] = 0
                            ebx_4[3] = 0
                    else
                        int32_t eax_27 = divs.dp.d(sx.q(var_44_1), var_48_1)
                        
                        if (eax_27 s>= 0xff)
                            eax_27 = 0xff
                        else if (eax_27 s< 0)
                            eax_27 = 0
                        else if (eax_27 s>= 0xff)
                            eax_27 = 0xff
                        
                        *var_5c_1 = eax_27.b
                        int32_t eax_30 = divs.dp.d(sx.q(var_50_1), var_48_1)
                        
                        if (eax_30 s>= 0xff)
                            eax_30 = 0xff
                        else if (eax_30 s< 0)
                            eax_30 = 0
                        else if (eax_30 s>= 0xff)
                            eax_30 = 0xff
                        
                        var_5c_1[1] = eax_30.b
                        int32_t eax_33 = divs.dp.d(sx.q(var_4c_1), var_48_1)
                        
                        if (eax_33 s>= 0xff)
                            eax_33 = 0xff
                        else if (eax_33 s< 0)
                            eax_33 = 0
                        else if (eax_33 s>= 0xff)
                            eax_33 = 0xff
                        
                        var_5c_1[2] = eax_33.b
                        int32_t eax_35
                        int32_t edx_23
                        edx_23:eax_35 = sx.q(var_78_1)
                        int32_t eax_37 = (eax_35 + (edx_23 & 0x7f)) s>> 7
                        
                        if (eax_37 s>= 0xff)
                        label_467260:
                            edi_1 = &edi_1[1]
                            var_5c_1[3] = 0xff.b
                        else if (eax_37 s>= 0)
                            if (eax_37 s>= 0xff)
                                goto label_467260
                            
                            edi_1 = &edi_1[1]
                            var_5c_1[3] = eax_37.b
                        else
                            edi_1 = &edi_1[1]
                            var_5c_1[3] = 0
                cond:7_1 = var_54_1 + 1 s< arg3
                var_54_1 += 1
            while (cond:7_1)
        
        cond:2_1 = var_74 + 1 s< edi
        var_74 += 1
    while (cond:2_1)

int32_t* eax_64 = var_64

if (eax_64 != 0)
    j_sub_4813df(eax_64)

return 0
