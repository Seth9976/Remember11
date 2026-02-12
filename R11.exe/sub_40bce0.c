// 函数: sub_40bce0
// 地址: 0x40bce0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* edi = *(arg1[0x11] + 8)

switch (sx.d(arg1[4].w))
    case 0
        if (*edi == 0x73)
            *(data_e7e648 + 0x28f8) = &edi[0xa]
        else
            *(data_e7e648 + 0x28f8) = &edi[8]
        
        int16_t eax_3 = *(edi + 4)
        
        if (eax_3 != 0xffff)
            sub_4154b0(sx.d(eax_3))
            void* eax_4 = data_e7e648
            
            if (*(eax_4 + 0x28c1) == 0 && *(eax_4 + 0x28f4) == 0)
                sub_415550()
                *(data_e7e648 + 0x28f4) = 1
        
        int32_t var_18_1
        int32_t var_14_1
        
        if (*edi != 0x79)
            sub_41c710(0x22, 0x158)
            var_14_1 = 0x4e
            var_18_1 = 0x23c
        else
            sub_41c710(0xffffffff, 0xffffffff)
            var_14_1 = 0xffffffff
            var_18_1 = 0xffffffff
        
        sub_41c740(var_18_1, var_14_1)
        *(data_e7e648 + 0x28f5) = 0
        
        if (*edi == 0x73)
            *(data_e7e648 + 0x28f5) = sub_4169d0(zx.d(*(edi + 8)))
        
        arg1[4].w = 1
        goto label_40bdc3
    case 1
    label_40bdc3:
        int16_t eax_7 = *(edi + 6)
        void* ecx_5 = data_e7e648
        
        if (eax_7 == 0xffff || eax_7 == 0xfffe || *(ecx_5 + 0x289c) != 0)
            *(ecx_5 + 0x28c8) = 0
            arg1[4].w = 3
            *(arg1 + 0xd) = 1
            return 0
        
        if (sub_414880(1, eax_7) == 0)
            sub_409230()
            sub_41dcb0(*(data_e7e648 + 0xbf0be))
            sub_41dce0(2)
            *(data_e7e648 + 0x28c8) = 1
            *(data_e7e648 + 0x28dc) = 0xffffffff
            arg1[4].w = 2
            *(arg1 + 0xd) = 1
            return 0
    case 2
        if (*(data_e7e648 + 0x28dc) != 0xffffffff)
            arg1[4].w = 3
            *(arg1 + 0xe) = 0
            *(arg1 + 0xd) = 0
            return 0
    case 3
        void* eax_14 = data_e7e648
        
        if (*(eax_14 + 0x28d4) != 0)
            *(eax_14 + 0x28d0) = 0
            eax_14 = data_e7e648
        
        *(eax_14 + 0x28d4) = 0
        *(data_e7e648 + 0x28fc) = zx.d(*(edi + 2)) + *(arg1[0x11] + 0xc)
        *(data_e7e648 + 0x28e0) = sub_40ba20()
        
        if (*(edi + 6) == 0xffff)
            *(data_e7e648 + 0x28d0) = 0
        
        void* eax_18 = data_e7e648
        
        if (*(eax_18 + 0x28d0) == 0)
            *(eax_18 + 0x28cc) = zx.d(*(edi + 6))
            eax_18 = data_e7e648
        
        *(eax_18 + 0x28d0) += 1
        int32_t eax_19
        eax_19.b = *(edi + 4) == 0xffff
        *(data_e7e648 + 0x28d8) = eax_19
        
        if (sub_41c6c0() == 0)
            sub_41c690(2)
        
        sub_41c410(data_e7e648 + 0x2900, 1)
        
        if (*(data_e7e648 + 0x28e0) != 5)
            arg1[4].w = 4
            goto label_40bf5e
        
        *(data_e7e648 + 0x28ec) = data_2b603a4
        arg1[4].w = 8
        *(arg1 + 0xd) = 1
        return 0
    case 4
    label_40bf5e:
        
        if (sub_41b650() == 0)
            void* eax_23 = data_e7e648
            
            switch (sx.d(*(eax_23 + 0x28e0)) + 1)
                case 0
                    goto label_40c0f0
                case 1
                    *(data_e7e648 + 0x28e0) = sub_40ba20()
                    char* eax_27 = data_e7e648 + 0x2900
                    
                    if (*eax_27 != 0)
                        sub_41c410(eax_27, 1)
                        *(arg1 + 0xd) = 1
                        return 0
                case 2
                    sub_41c7e0()
                    sub_41c4d0()
                    *(data_e7e648 + 0x28d0) = 0
                    *(data_e7e648 + 0x28e0) = 0
                    *(data_e7e648 + 0x28f4) = 0
                    *(arg1 + 0xd) = 1
                    return 0
                case 3
                    *(eax_23 + 0x1324c) = 0
                    *(data_e7e648 + 0x28f0) = 1
                    *(data_e7e648 + 0x28e0) = 3
                    *(arg1 + 0xd) = 1
                    return 0
                case 4
                    *(eax_23 + 0x28f0) = 0
                    *(data_e7e648 + 0x28e0) = 0
                    arg1[4].w = 5
                    *(arg1 + 0xd) = 1
                    return 0
                case 5
                    *(eax_23 + 0x28e0) = 0
                    arg1[4].w = 6
                    *(arg1 + 0xd) = 1
                    return 0
                case 6
                    *(data_e7e648 + 0x28ec) = data_2b603a4
                    *(data_e7e648 + 0x28e0) = 0
                    arg1[4].w = 8
                    *(arg1 + 0xd) = 1
                    return 0
                case 7
                    sub_41aa10()
                    *(data_e7e648 + 0x1324c) = 1
                    *(data_e7e648 + 0x28e0) = 1
                    *(arg1 + 0xd) = 1
                    return 0
                case 8
                label_40c11a:
                    *(arg1[0x11] + 8) = *(eax_23 + 0x28f8)
                    sub_40a8a0(arg1)
                    return 0
                case 9
                    *(eax_23 + 0x13250) = 2
                    eax_23 = data_e7e648
                label_40c0f0:
                    
                    if (*(eax_23 + 0x28c8) != 0)
                        *(eax_23 + 0x28e0) = 7
                        arg1[4].w = 6
                        *(arg1 + 0xd) = 1
                        return 0
                    
                    if (*(edi + 6) == 0xffff)
                        *(eax_23 + 0x28d0) = 0
                        eax_23 = data_e7e648
                    
                    goto label_40c11a
            
            *(arg1 + 0xd) = 1
            return 0
    case 5
        int16_t eax_41 = *(edi + 6)
        
        if (eax_41 != 0xffff && eax_41 != 0xfffe)
            void* eax_42 = data_e7e648
            
            if (*(eax_42 + 0x28c8) != 0)
                char var_c_6
                
                if (*(eax_42 + 0x289b) != 0)
                    if (*(eax_42 + 0x13250) == 3)
                        var_c_6 = 0
                    else
                        var_c_6 = 3
                else if (*(eax_42 + 0x28e0) == 4)
                    var_c_6 = 0
                else
                    var_c_6 = 3
                
                sub_41dce0(var_c_6)
                arg1[4].w = 6
                *(arg1 + 0xd) = 1
                return 0
        
        goto label_40c265
    case 6
        if (sub_41dd00() == 0)
            sub_41dcd0()
            *(data_e7e648 + 0x28c8) = 0
            arg1[4].w = 7
            *(arg1 + 0xd) = 1
            return 0
        
        void* eax_47 = data_e7e648
        
        if (*(eax_47 + 0x289c) == 1)
            sub_41de40()
            *(arg1 + 0xe) = 0
            *(arg1 + 0xd) = 0
            return 0
        
        if ((data_2b53608 & 0x2100) != 0)
            goto label_40c20f
        
        if (sub_45c4e0() != 0)
            eax_47 = data_e7e648
        label_40c20f:
            
            if (*(eax_47 + 0x28c3) == 0 && *(eax_47 + 0x20996) != 3)
                sub_41dce0(3)
                *(arg1 + 0xe) = 0
                *(arg1 + 0xd) = 0
                return 0
    case 7
        int32_t eax_51 = sub_4148e0()
        
        if (eax_51 == 0)
            *(data_e7e648 + 0x28c8) = eax_51.b
            sub_4169d0(eax_51)
        label_40c265:
            arg1[4].w = 4
            *(arg1 + 0xd) = 1
            return 0
    case 8
        *(data_e7e648 + 0x28e4) = data_2b603a4 - *(data_e7e648 + 0x28ec)
        void* eax_55 = data_e7e648
        int32_t ecx_19 = *(eax_55 + 0x28e4)
        int32_t edi_1 = 0
        
        if (*(eax_55 + 0x28e8) s<= ecx_19)
            edi_1 = 1
        
        if (ecx_19 s< 0)
            edi_1 = 1
        
        if (*(eax_55 + 0x28c3) == 0)
            if (*(eax_55 + 0x289c) == 1)
                edi_1 = 1
            
            if ((data_2b53608 & 0x2100) != 0)
                goto label_40c265
            
            if (sub_45c4e0() != 0 || edi_1 == 1)
                goto label_40c265
        else if (edi_1 == 1)
            goto label_40c265

*(arg1 + 0xe) = 0
*(arg1 + 0xd) = 0
return 0
