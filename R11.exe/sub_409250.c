// 函数: sub_409250
// 地址: 0x409250
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi_1 = arg1 * 0x4b1ec

if (*(esi_1 + 0x8969fb) != 0 && sub_44f850(*(esi_1 + 0x8969fc)) == 3)
    if (data_2b603ac s> data_8969e8)
        sub_44fbc0(*(esi_1 + 0x8969fc))
        void* ecx_1 = *(esi_1 + 0x8969fc)
        int32_t i_3 = *(ecx_1 + 0x34)
        int16_t* edx_2 = *(ecx_1 + 0x2c)
        int32_t esi_2 = 0
        int16_t* eax_3 = edx_2
        int32_t var_34_1 = 0
        int32_t i_4 = i_3
        
        if (i_3 s> 0)
            int32_t i_2 = i_3
            int32_t i
            
            do
                esi_2 += zx.d(*eax_3) u>> 1
                eax_3 = &eax_3[1]
                i = i_2
                i_2 -= 1
            while (i != 1)
            var_34_1 = esi_2
        
        int16_t* esi_3 = edx_2
        int32_t ebp_1 = 0
        int32_t j_2 = i_3 s/ 0xa
        int32_t var_28
        int32_t* edi_3 = &var_28
        arg1 = 0xa
        int32_t i_1
        
        do
            *edi_3 = 0
            
            if (j_2 s> 0)
                uint32_t edx_5 = 0
                int32_t j_1 = j_2
                int32_t j
                
                do
                    uint32_t eax_6 = zx.d(*esi_3) u>> 1
                    
                    if (edx_5 s< eax_6)
                        edx_5 = eax_6
                    
                    esi_3 = &esi_3[1]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                i_3 = i_4
                *edi_3 = edx_5
            
            ebp_1 += *edi_3
            edi_3 = &edi_3[1]
            i_1 = arg1
            arg1 -= 1
        while (i_1 != 1)
        int32_t esi_6 = ebp_1 s/ 0xa
        int32_t eax_9 = esi_6 - var_28
        
        if (esi_6 - var_28 s< 0)
            eax_9 += 0x10000
        
        int32_t eax_10
        int32_t edx_8
        edx_8:eax_10 = sx.q(eax_9)
        int32_t var_24
        int32_t eax_13 = esi_6 - var_24
        
        if (esi_6 - var_24 s< 0)
            eax_13 += 0x10000
        
        int32_t eax_14
        int32_t edx_9
        edx_9:eax_14 = sx.q(eax_13)
        int32_t var_20
        int32_t eax_18 = esi_6 - var_20
        
        if (esi_6 - var_20 s< 0)
            eax_18 += 0x10000
        
        int32_t eax_19
        int32_t edx_10
        edx_10:eax_19 = sx.q(eax_18)
        int32_t var_1c
        int32_t eax_23 = esi_6 - var_1c
        
        if (esi_6 - var_1c s< 0)
            eax_23 += 0x10000
        
        int32_t eax_24
        int32_t edx_11
        edx_11:eax_24 = sx.q(eax_23)
        int32_t var_18
        int32_t eax_28 = esi_6 - var_18
        
        if (esi_6 - var_18 s< 0)
            eax_28 += 0x10000
        
        int32_t eax_29
        int32_t edx_12
        edx_12:eax_29 = sx.q(eax_28)
        int32_t var_14
        int32_t eax_33 = esi_6 - var_14
        
        if (esi_6 - var_14 s< 0)
            eax_33 += 0x10000
        
        int32_t eax_34
        int32_t edx_13
        edx_13:eax_34 = sx.q(eax_33)
        int32_t ecx_11 = ((eax_10 - edx_8) s>> 1) + ((eax_14 - edx_9) s>> 1)
            + ((eax_19 - edx_10) s>> 1) + ((eax_24 - edx_11) s>> 1) + ((eax_29 - edx_12) s>> 1)
            + ((eax_34 - edx_13) s>> 1)
        int32_t var_10
        int32_t eax_38 = esi_6 - var_10
        
        if (esi_6 - var_10 s< 0)
            eax_38 += 0x10000
        
        int32_t eax_39
        int32_t edx_14
        edx_14:eax_39 = sx.q(eax_38)
        int32_t var_c
        int32_t eax_43 = esi_6 - var_c
        
        if (esi_6 - var_c s< 0)
            eax_43 += 0x10000
        
        int32_t eax_44
        int32_t edx_15
        edx_15:eax_44 = sx.q(eax_43)
        int32_t var_8
        int32_t eax_48 = esi_6 - var_8
        
        if (esi_6 - var_8 s< 0)
            eax_48 += 0x10000
        
        int32_t eax_49
        int32_t edx_16
        edx_16:eax_49 = sx.q(eax_48)
        int32_t var_4
        int32_t esi_7 = esi_6 - var_4
        
        if (esi_6 - var_4 s< 0)
            esi_7 += 0x10000
        
        int32_t eax_53
        int32_t edx_17
        edx_17:eax_53 = sx.q(esi_7)
        int32_t ecx_18 = (ecx_11 + ((eax_39 - edx_14) s>> 1) + ((eax_44 - edx_15) s>> 1)
            + ((eax_49 - edx_16) s>> 1) + ((eax_53 - edx_17) s>> 1)) s/ 0xa
        int32_t temp0_1 = divs.dp.d(sx.q(var_34_1), i_3)
        int32_t esi_8
        
        if (temp0_1 s>= 0x3e8)
            int32_t edx_22
            edx_22.b = temp0_1 s>= 0x1388
            esi_8 = edx_22 + 1
        else
            esi_8 = 0
        
        if (esi_8 != 0)
            if (esi_8 != 1)
                int32_t edx_30
                
                if (ecx_18 s> 0x2bc)
                    int32_t eax_67
                    int32_t edx_29
                    edx_29:eax_67 = muls.dp.d(0x51eb851f, ecx_18)
                    edx_30 = edx_29 s>> 7
                label_4094c8:
                    int32_t esi_10 = ((edx_30 u>> 0x1f) + edx_30) & 0x80000001
                    
                    if (esi_10 s< 0)
                        esi_10 = ((esi_10 - 1) | 0xfffffffe) + 1
                    
                    esi_8 = esi_10 + 1
                else if (ecx_18 s> 0x12c)
                    int32_t eax_68
                    int32_t edx_31
                    edx_31:eax_68 = muls.dp.d(0x51eb851f, ecx_18)
                    edx_30 = edx_31 s>> 4
                    goto label_4094c8
            else if (ecx_18 s> 0x2bc)
                esi_8 = mods.dp.d(sx.q(ecx_18 s/ 0x190), 3)
            else if (ecx_18 s> 0x12c)
                esi_8 = mods.dp.d(sx.q(ecx_18 s/ 0x32), 3)
        else if (ecx_18 s> 0x12c)
            esi_8 = 1
        
        int32_t eax_72 = 0x3e8 - ecx_18
        
        if (0x3e8 - ecx_18 s< 0)
            eax_72 = 0
        
        int32_t eax_77 = eax_72 * 0x19 s/ 0x3e8
        
        if (eax_77 s< 5)
            eax_77 = 5
        
        bool cond:4_1 = data_8969f0 != 0
        data_8969e8 = eax_77 + data_2b603ac
        
        if (not(cond:4_1))
            if (esi_8 == 0)
                data_8969e8 = data_2b603ac
            else
                data_8969f0 = 1
        
        void* eax_79 = *(esi_1 + 0x8969fc)
        data_8969ec = esi_8
        sub_44fc40(eax_79)
    
    return data_8969ec

data_8969e8 = data_2b603ac
data_8969f0 = 0
return 0
