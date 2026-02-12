// 函数: sub_40cd70
// 地址: 0x40cd70
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* esi = *(arg1 + 0x44)

switch (sx.d(*(arg1 + 0x10)))
    case 0
        sub_420540()
        sub_40a3f0()
        sub_40f960()
        
        if (*(esi + 4) == 0xffff)
            *(arg1 + 0x10) = 5
            *(arg1 + 0xe) = 0
            *(arg1 + 0xd) = 0
            return 0
        
        if (*(data_e7e648 + 0x3040) != 0)
            goto label_40cdfd
        
        if (sub_41c6c0() == 1)
            sub_41c690(3)
        
        *(arg1 + 0x10) = 1
        *(arg1 + 0xe) = 0
        *(arg1 + 0xd) = 0
        return 0
    case 1
        if (sub_41b650() == 0)
        label_40cdfd:
            *(arg1 + 0x10) = 2
            *(arg1 + 0xe) = 0
            *(arg1 + 0xd) = 0
            return 0
    case 2
        sub_418260(1)
        *(arg1 + 0x10) = 3
    label_40ce28:
        
        if (*(data_e7e648 + 0x3028) == 0 && sub_414880(0, *(esi + 4)) == 0)
            *(data_e7e648 + 0x3028) = 1
            *(arg1 + 0x10) = 4
            *(arg1 + 0xe) = 0
            *(arg1 + 0xd) = 0
            return 0
    case 3
        goto label_40ce28
    case 4
        int32_t eax_10 = sub_4148e0()
        
        if (eax_10 == 0)
            *(arg1 + 0x10) = 5
            void* ecx_2 = data_e7e648
            int32_t edx_2 = *(ecx_2 + 0xbf0c0)
            sub_454930(eax_10, edx_2, ecx_2, edx_2, 1)
            *(arg1 + 0xe) = 0
            *(arg1 + 0xd) = 0
            return 0
    case 5
        int32_t __saved_ebp_2 = 0
        
        if (sub_450c90() != 0)
            *(arg1 + 0x10) = 6
        label_40cec5:
            
            if (sub_417350(zx.d(*esi)) == 0)
                if (sub_4024a0(data_e7e648 + 0x3048) == 1 || *(data_e7e648 + 0x289c) == 1)
                label_40cefe:
                    *(arg1 + 0x10) = 8
                    
                    if (*(data_e7e648 + 0x3040) != 0)
                        *(arg1 + 0x10) = 0xe
                        *(arg1 + 0xe) = 0
                        *(arg1 + 0xd) = 0
                        return 0
                    
                    for (int32_t i = 1; i s< 6; i += 1)
                        if (sub_416cc0(i) != 0xffff)
                            if (esi[1] == 1)
                                sub_416890(i, 1)
                            else
                                sub_416860(i, 3)
                                sub_416890(i, 0x14)
                            
                            *(arg1 + 0x10) = 7
                    
                    *(arg1 + 0xe) = 0
                    *(arg1 + 0xd) = 0
                    return 0
            else if (*(data_e7e648 + 0x289c) == 1)
                goto label_40cefe
    case 6
        goto label_40cec5
    case 7
        if (sub_417350(0xffffffff) == 0)
            for (int32_t i_1 = 1; i_1 s< 0x12; i_1 += 1)
                sub_416b50(i_1)
            
            *(arg1 + 0x10) = 8
            *(arg1 + 0xe) = 0
            *(arg1 + 0xd) = 0
            return 0
    case 8
        *(data_e7e648 + 0x3028) = 0
        
        if (*(esi + 4) == 0xffff)
            sub_416b50(zx.d(*esi))
            return 1
        
        sub_416b50(zx.d(*esi))
        sub_4187a0(zx.d(*esi), zx.d(*(esi + 4)), *(data_e7e648 + 0xbf0c0))
        sub_418260(0)
        sub_416860(zx.d(*esi), 1)
        sub_4181e0(zx.d(*esi))
        
        if (*(data_e7e648 + 0x3030) == 1)
            int32_t eax_25 = sub_414cf0(sx.d(*(esi + 0x12)))
            int32_t eax_26 = sub_414cf0(sx.d(*(esi + 0x10)))
            int32_t eax_28 = sub_414cf0(sx.d(*(esi + 0xe)))
            int32_t eax_29 = sub_414cf0(sx.d(*(esi + 0xc)))
            sub_418070(zx.d(*esi), 1, eax_29, eax_28, eax_26, eax_25, 1, 0)
            sub_418180(zx.d(*esi))
        
        char var_10_4
        uint32_t __saved_ebp_7
        
        switch (zx.d(esi[1]))
            case 0
                sub_409b20()
                sub_4023e0(data_e7e648 + 0x3048, 0x16, zx.d(esi[3]))
                *(arg1 + 0x10) = 9
            case 1
                *(arg1 + 0x10) = 0xc
            case 2
                sub_409b20()
                sub_4023e0(data_e7e648 + 0x3048, 0x17, zx.d(esi[3]))
                *(arg1 + 0x10) = 9
            case 3
                sub_409b20()
                __saved_ebp_7 = zx.d(esi[3])
                var_10_4 = 0x18
            label_40d12e:
                sub_4023e0(data_e7e648 + 0x3048, var_10_4, __saved_ebp_7)
                *(arg1 + 0x10) = 9
            case 4
                sub_409b20()
                sub_4023e0(data_e7e648 + 0x3048, 0x1a, zx.d(esi[3]))
                *(arg1 + 0x10) = 9
            case 5
                sub_409b20()
                sub_4023e0(data_e7e648 + 0x3048, 0x1b, zx.d(esi[3]))
                *(arg1 + 0x10) = 9
            case 6
                sub_409b20()
                __saved_ebp_7 = zx.d(esi[3])
                var_10_4 = 0x1c
                goto label_40d12e
        
        sub_4168c0(zx.d(*esi), sx.d(*(esi + 8)), sx.d(*(esi + 0xa)))
        char eax_37 = esi[2]
        
        if (eax_37 != 0xff)
            sub_416960(zx.d(*esi), zx.d(eax_37))
        
        *(arg1 + 0xd) = 1
        return 0
    case 9
        *(arg1 + 0x10) = 0xa
    label_40d1a2:
        bool cond:1_1 = sub_4024a0(data_e7e648 + 0x3048) == 1
        void* eax_42 = data_e7e648
        
        if (cond:1_1 || *(eax_42 + 0x289c) == 1)
            sub_4023e0(eax_42 + 0x3048, 0, 1)
            *(arg1 + 0x10) = 0xc
    case 0xa
        goto label_40d1a2
    case 0xb
        if (sub_4079d0() == 0 || *(data_e7e648 + 0x289c) == 1)
            sub_407990(0, 0x80)
            *(arg1 + 0x10) = 0xc
    case 0xc
        int32_t eax_47 = sub_417350(zx.d(*esi))
        
        if (eax_47 == 0)
            sub_416960(eax_47, eax_47)
            sub_416b50(6)
            return 1
    case 0xd
        int32_t eax_49 = sub_417f40(zx.d(*esi))
        
        if (eax_49 == 0)
            sub_407990(eax_49, 0xa)
            sub_4168c0(zx.d(*esi), 0xffffff60, 0)
            sub_4181e0(zx.d(*esi))
            sub_416860(zx.d(*esi), 9)
            return 1
    case 0xe
        *(data_e7e648 + 0x3028) = 0
        
        if (esi[1] != 2)
            sub_416b90(6, zx.d(*esi))
            sub_416b50(zx.d(*esi))
            sub_4187a0(zx.d(*esi), zx.d(*(esi + 4)), *(data_e7e648 + 0xbf0c0))
            sub_418260(0)
            sub_416860(zx.d(*esi), 2)
            sub_4168c0(zx.d(*esi), sx.d(*(esi + 8)), sx.d(*(esi + 0xa)))
            sub_416890(zx.d(*esi), zx.d(esi[3]))
            sub_4181e0(zx.d(*esi))
            sub_416960(zx.d(*esi), 0)
            sub_416960(6, 1)
            *(arg1 + 0x10) = 0xf
            *(arg1 + 0xe) = 0
            *(arg1 + 0xd) = 0
            return 0
        
        sub_416b90(6, zx.d(*esi))
        sub_416b50(zx.d(*esi))
        sub_4187a0(zx.d(*esi), zx.d(*(esi + 4)), *(data_e7e648 + 0xbf0c0))
        sub_418260(0)
        sub_416860(zx.d(*esi), 1)
        sub_416860(6, 7)
        sub_4168c0(zx.d(*esi), sx.d(*(esi + 8)), sx.d(*(esi + 0xa)))
        sub_4181e0(zx.d(*esi))
        sub_416890(zx.d(*esi), zx.d(esi[3]))
        sub_416960(zx.d(*esi), 1)
        sub_416960(6, 0)
        *(arg1 + 0x10) = 0x10
        *(arg1 + 0xe) = 0
        *(arg1 + 0xd) = 0
        return 0
    case 0xf
        int32_t eax_64 = sub_417350(zx.d(*esi))
        
        if (eax_64 == 0)
            sub_416960(zx.d(*esi), eax_64)
            sub_416b50(6)
            return 1
    case 0x10
        int32_t eax_66 = sub_417350(6)
        
        if (eax_66 == 0)
            sub_416960(zx.d(*esi), eax_66)
            sub_416b50(6)
            return 1

*(arg1 + 0xe) = 0
*(arg1 + 0xd) = 0
return 0
