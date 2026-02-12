// 函数: sub_463230
// 地址: 0x463230
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* edi = arg2

if (*(edi + 0x95) == 1)
    return 0x80004005

int32_t eax_1 = edi[4]
int32_t ecx = edi[5]
int32_t edx = edi[2]
int32_t eax_2 = edi[3]
int32_t ebx = edi[0x10]
int32_t edx_1 = edi[1]
int32_t eax_3 = edi[0xe]
int32_t var_28 = *edi
int32_t* ebp = edi[0x11]
int32_t edx_2 = edi[0xa]
int32_t eax_4 = edi[0xb]
int32_t var_1c = edi[0xf]
int32_t* esi_1
void* edi_1
esi_1, edi_1 = sub_4621e0(arg1, edi)
int32_t eax_7 = (eax_1 u>> 4 | ecx << 0x1c) & 1

if (eax_7 != 0)
    sub_451df0(*(edi_1 + 0xa8))

int32_t var_5c_1

if ((eax_1 & 8) != 0)
    var_5c_1 = 2
else
    var_5c_1 = 1

(*(*esi_1 + 0x18))(9, var_5c_1)
int32_t** var_5c_2 = &arg2
arg2 = nullptr
sub_462ea0(esi_1, ebx, ebp)
(*(*esi_1 + 0x28))(arg2, 0)
(*(*esi_1 + 0x18))(7, 0)
(*(*esi_1 + 0x18))(0xe, 0)
int32_t ecx_11 = *(edi_1 + 0x6c)
*(edi_1 + 0x96) = 0
(*(*esi_1 + 0x18))(0x16, ecx_11)

if (ebp u> 0xffffff00)
label_463d15:
    
    if (data_4cade4 == 1)
        sub_464790(".\render.cpp", 0x52e)
        data_4cade4 = 0
else
    int32_t var_5c_4
    
    if (ebp u<= 0xff00ffff)
        if (ebp == 0xff00ffff)
            var_5c_4 = 4
            goto label_4633b1
        
        if (ebp == 0)
            var_5c_4 = 0xf
            goto label_4633b1
        
        if (ebp == 0xffffff)
            var_5c_4 = 8
            goto label_4633b1
        
        if (ebp != 0xff000000)
            goto label_463d15
        
        var_5c_4 = 7
        goto label_4633b1
    
    if (ebp != 0xffff00ff)
        if (ebp != 0xffffff00)
            goto label_463d15
        
        var_5c_4 = 1
        goto label_4633b1
    
    var_5c_4 = 2
label_4633b1:
    (*(*esi_1 + 0x18))(0xa8, var_5c_4)
    int32_t ebx_1 = eax_3
    
    if ((ebx_1 & 1) != 0)
        sub_465480(".\render.cpp", 0x531)
    
    (*(*esi_1 + 0x18))(0xf, 1)
    (*(*esi_1 + 0x18))(0x18, 1)
    (*(*esi_1 + 0x18))(0x19, 7)
    int32_t ecx_17 = *(edi_1 + 0x50)
    int32_t edx_13 = *(edi_1 + 0x54)
    
    if ((ecx_17 & 0x7ff) != 0 || (ecx_17 & 0x7ff0000) u< 0x27f0000 || (edx_13 & 0x7ff) != 0
            || (edx_13 u>> 0x10 & 0x7ff) u< 0x1bf)
        (*(*esi_1 + 0x18))(0xae, 1)
        void* eax_30 = (*(*esi_1 + 0x38))()
        int32_t ebx_2 = *(edi_1 + 0x54)
        int32_t eax_31 = *(edi_1 + 0x50)
        int32_t eax_33
        int32_t edx_19
        edx_19:eax_33 = sx.q(*(eax_30 + 8))
        int32_t eax_34
        uint32_t edx_20
        eax_34, edx_20 = __allmul(eax_31 & 0x7ff, 0, eax_33, edx_19)
        int32_t var_10 = __aulldiv(eax_34, edx_20, 0x280, 0) + *eax_30
        int32_t eax_40
        int32_t edx_21
        edx_21:eax_40 = sx.q(*(eax_30 + 8))
        int32_t ecx_27 = (eax_31 u>> 0x10 | ebx_2 << 0x10) & 0x7ff
        int32_t eax_41
        uint32_t edx_22
        eax_41, edx_22 = __allmul(ecx_27 + 1, adc.d(0, 0, ecx_27 u>= 0xffffffff), eax_40, edx_21)
        int32_t var_8_1 = __aulldiv(eax_41, edx_22, 0x280, 0) + *eax_30
        int32_t eax_45
        int32_t edx_23
        edx_23:eax_45 = sx.q(*(eax_30 + 0xc))
        int32_t eax_46
        uint32_t edx_24
        eax_46, edx_24 = __allmul(ebx_2 & 0x7ff, 0, eax_45, edx_23)
        int32_t var_c_1 = __aulldiv(eax_46, edx_24, 0x1c0, 0) + *(eax_30 + 4)
        int32_t eax_50
        int32_t edx_25
        edx_25:eax_50 = sx.q(*(eax_30 + 0xc))
        int32_t ebx_6 = ebx_2 u>> 0x10 & 0x7ff
        int32_t eax_51
        uint32_t edx_26
        eax_51, edx_26 = __allmul(ebx_6 + 1, adc.d(0, 0, ebx_6 u>= 0xffffffff), eax_50, edx_25)
        int32_t var_4_1 = __aulldiv(eax_51, edx_26, 0x1c0, 0) + *(eax_30 + 4)
        int32_t* eax_54 = esi_1[1]
        (*(*eax_54 + 0x12c))(eax_54, &var_10)
        ebx_1 = eax_3
    else
        (*(*esi_1 + 0x18))(0xae, 0)
    
    int32_t ebx_8 = ebx_1 & 0x4000
    int32_t var_20_1 = ebx_8
    
    if (ebx_8 == 0)
        if (eax_7 != 1)
        label_46361e:
            int32_t var_48_2 = 0
            
            if (eax_7 == 1)
                void* ecx_36 = *(edi_1 + 0xa8)
                arg2.b = *(ecx_36 + 0x48)
                sub_4512f0(ecx_36, 0)
            
            int32_t ebx_10
            int32_t ebp_5
            
            if (eax_7 != 1 || eax_7 != 1)
                ebx_10 = edx
                ebp_5 = (eax_1 u>> 6 | ecx << 0x1a) & 1
                
                if (ebp_5 != 0)
                    int32_t eax_72 = (ebx_10 u>> 4 | eax_2 << 0x1c) & 3
                    
                    if (eax_72 == 0)
                        var_48_2 = 7
                    
                    if (eax_72 == 2)
                        var_48_2 = 8
                        sub_465480(".\render.cpp", 0x5cb)
                else
                    var_48_2 = 6
            else
                ebx_10 = edx
                ebp_5 = (eax_1 u>> 6 | ecx << 0x1a) & 1
                
                if (ebp_5 != 0)
                    int32_t eax_68 = (ebx_10 u>> 4 | eax_2 << 0x1c) & 3
                    
                    if (eax_68 == 0)
                        var_48_2 = 0
                    
                    if (eax_68 == 2)
                        var_48_2 = 3
                else
                    var_48_2 = 0
            
            int32_t var_60_7
            int32_t var_5c_12
            int32_t edx_40
            
            if (ebp_5 != 0)
                int32_t edx_42 = (ebx_10 u>> 4 | eax_2 << 0x1c) & 3
                int32_t var_40_1 = 1
                
                if (edx_42 == 0 || edx_42 == 2)
                    int32_t ecx_46 = ebx_10 & 3
                    
                    if (ecx_46 == 0 && (ebx_10 & 0xc) == 4 && ecx_46 == 0 && (ebx_10 & 0xc0) == 0x40
                            && ecx_46 == 0)
                        int32_t eax_83
                        
                        if (edx_42 == 0 && eax_7 == 1)
                            eax_83 = edx_1 u>> 2 & 1
                            int32_t var_18_1 = eax_83
                        
                        if (edx_42 != 0 || eax_7 != 1 || eax_83 == 0 || arg2.b != 1
                                || *(edi_1 + 0xa4) != 1)
                            int32_t ebx_12
                            
                            if (edx_42 == 0)
                                ebx_12 = eax_7 | edx_42
                            
                            if (edx_42 == 0 && ebx_12 == 0 && *(edi_1 + 0xa4) == 1)
                                (*(*esi_1 + 0x18))(0x1b, ebx_12)
                            else if (edx_42 != 2 || zx.d(eax_2.b) u< 0x80)
                                (*(*esi_1 + 0x18))(0x1b, 1)
                                (*(*esi_1 + 0x18))(0x13, 5)
                                (*(*esi_1 + 0x18))(0x14, 6)
                            else
                                (*(*esi_1 + 0x18))(0x1b, 0)
                        else
                            (*(*esi_1 + 0x18))(0x1b, 0)
                    else if (ecx_46 == 0 && (ebx_10 & 0xc) == 8 && ecx_46 == 0
                            && (ebx_10 & 0xc0) == 0x40 && ecx_46 == 0)
                        (*(*esi_1 + 0x18))(0x1b, 1)
                        (*(*esi_1 + 0x18))(0x13, 5)
                        (*(*esi_1 + 0x18))(0x14, 2)
                    else if (ecx_46 == 2)
                        if ((ebx_10 & 0xc) == 4 && edx_42 == 0 && ((ebx_10 & 0xc0) | edx_42) == 0)
                            (*(*esi_1 + 0x18))(0x1b, 1)
                            (*(*esi_1 + 0x18))(0x13, 2)
                            (*(*esi_1 + 0x18))(0x14, 5)
                            var_40_1 = 2
                        else if (ecx_46 == 2)
                            int32_t eax_109 = ebx_10 & 0xc
                            
                            if (eax_109 == 0 && (ebx_10 & 0xc0) == 0x40 && eax_109 == 0)
                                (*(*esi_1 + 0x18))(0x1b, 1)
                                (*(*esi_1 + 0x18))(0x13, 5)
                                (*(*esi_1 + 0x18))(0x14, 2)
                                var_40_1 = 3
                                sub_465480(".\render.cpp", 0x5fb)
                else
                    sub_465480(".\render.cpp", 0x5fe)
                
                edx_40 = *(*esi_1 + 0x18)
                var_5c_12 = var_40_1
                var_60_7 = 0xab
            else
                edx_40 = *(*esi_1 + 0x18)
                var_5c_12 = ebp_5
                var_60_7 = 0x1b
            
            edx_40(var_60_7, var_5c_12)
            int32_t ebx_14 = 0
            int32_t edx_62
            
            if (eax_7 == 0)
                edx_62 = var_48_2
            label_463bbd:
                
                if (edx_62 != 3)
                    goto label_463bef
                
                if (ebx_14 != 0)
                    sub_465480(".\render.cpp", 0x654)
                    edx_62 = 5
                
                goto label_463bef
            
            int32_t eax_116 = edx_1 u>> 3 & 3
            
            if (eax_116 == 0)
                edx_62 = var_48_2
            label_463ae0:
                int32_t eax_122 = edx_1 u>> 2 & 1
                
                if (eax_122 != 0)
                    if (eax_122 != 1 || (edx_1 & 0x780000) == 0)
                        goto label_463bbd
                    
                    if (data_4cade7 == 1)
                        sub_464790(".\render.cpp", 0x63d)
                        data_4cade7 = 0
                else if (edx_62 u<= 8)
                    switch (edx_62)
                        case 0
                            sub_465480(".\render.cpp", 0x64a)
                            edx_62 = 1
                        label_463bef:
                            
                            if (*(edi_1 + 0x88) == 0 && eax_7 != 1)
                                *(edi_1 + 0x88) = 1
                            
                            *(edi_1 + 0x8c) = edx_62
                            int32_t var_5c_15
                            int32_t var_5c_16
                            int32_t eax_130
                            
                            switch (edx_62)
                                case 0
                                    (*(*esi_1 + 0x20))(0, 1, 5)
                                    (*(*esi_1 + 0x20))(0, 2, 2)
                                    (*(*esi_1 + 0x20))(0, 3, 0)
                                    eax_130 = *(*esi_1 + 0x20)
                                    
                                    if (*(*(edi_1 + 0xa8) + 0x78) != 0)
                                        var_5c_16 = 4
                                    else
                                        var_5c_16 = 5
                                    
                                    goto label_463c4b
                                case 3
                                    var_5c_15 = 5
                                    goto label_463c1e
                                case 6, 7
                                    var_5c_15 = 3
                                label_463c1e:
                                    (*(*esi_1 + 0x20))(0, 1, var_5c_15)
                                    (*(*esi_1 + 0x20))(0, 2, 2)
                                    (*(*esi_1 + 0x20))(0, 3, 0)
                                    eax_130 = *(*esi_1 + 0x20)
                                    var_5c_16 = 3
                                label_463c4b:
                                    eax_130(0, 4, var_5c_16)
                                    (*(*esi_1 + 0x20))(0, 5, 2)
                                    (*(*esi_1 + 0x20))(0, 6, 0)
                                    return 0
                            
                            sub_465480(".\render.cpp", 0x685)
                            return 0
                        case 3
                            sub_465480(".\render.cpp", 0x64e)
                            edx_62 = 4
                            goto label_463bef
                        case 6, 7, 8
                            goto label_463bbd
                else if (data_4cade6 == 1)
                    sub_464790(".\render.cpp", 0x633)
                    data_4cade6 = 0
            else if (eax_116 == 1)
                edx_62 = var_48_2
                
                if (edx_62 == 3)
                    ebx_14 = 1
                    goto label_463ae0
                
                if (data_4cade8 == 1)
                    sub_464790(".\render.cpp", 0x612)
                    data_4cade8 = 0
            else if (eax_116 != 2)
                if (data_4cadea == 1)
                    sub_464790(".\render.cpp", 0x61e)
                    data_4cadea = 0
            else if (data_4cade9 == 1)
                sub_464790(".\render.cpp", 0x619)
                data_4cade9 = 0
        else
            int32_t eax_56 = edx_2 & 3
            
            if (eax_56 u<= 3 && eax_56 u<= 3)
                int32_t edx_29
                
                switch (eax_56)
                    case 0, 3
                        edx_29 = 1
                    case 1, 2
                        edx_29 = 3
                
                int32_t eax_59 = (edx_2 u>> 2 | eax_4 << 0x1e) & 3
                
                if (eax_59 u<= 3 && eax_59 u<= 3)
                    int32_t ebx_9
                    
                    switch (eax_59)
                        case 0, 3
                            ebx_9 = 1
                        case 1, 2
                            ebx_9 = 3
                    
                    (*(*esi_1 + 0x1c))(0, 1, edx_29)
                    (*(*esi_1 + 0x1c))(0, 2, ebx_9)
                    goto label_46361e
                
                if (data_4cadec == 1)
                    sub_464790(".\render.cpp", 0x5a8)
                    data_4cadec = 0
            else if (data_4cadeb == 1)
                sub_464790(".\render.cpp", 0x598)
                data_4cadeb = 0
    else if (data_4cade5 == 1)
        sub_464790(".\render.cpp", 0x581)
        data_4cade5 = 0

return 0x80004005
