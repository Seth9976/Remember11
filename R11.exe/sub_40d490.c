// 函数: sub_40d490
// 地址: 0x40d490
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* esi = *(arg1 + 0x44)
void* eax_18

switch (sx.d(*(arg1 + 0x10)))
    case 0
        if (*(esi + 4) == 0xffff)
            if (sub_41c6c0() == 1)
                sub_41c690(3)
            
            *(arg1 + 0x10) = 0xa
            *(arg1 + 0xe) = 0
            *(arg1 + 0xd) = 0
            return 0
        
        if (*(zx.d(*esi) * 0x104 + data_e7e648 + 0x1f5dc) != 0xffff)
            goto label_40d530
        
        if (sub_41c6c0() == 1)
            sub_41c690(3)
        
        *(arg1 + 0x10) = 1
        *(arg1 + 0xe) = 0
        *(arg1 + 0xd) = 0
        return 0
    case 1
        if (sub_41b650() == 0)
        label_40d530:
            *(arg1 + 0x10) = 2
            *(arg1 + 0xe) = 0
            *(arg1 + 0xd) = 0
            return 0
    case 2
        *(arg1 + 0x10) = 3
    label_40d550:
        
        if (*(data_e7e648 + 0x3028) == 0)
            int32_t result = sub_414880(0, *(esi + 4))
            
            if (result == 0)
                *(data_e7e648 + 0x3028) = 1
                *(arg1 + 0x10) = 4
                *(arg1 + 0xe) = result.w
                *(arg1 + 0xd) = result.b
                return result
    case 3
        goto label_40d550
    case 4
        int32_t eax_8
        int32_t edx_3
        eax_8, edx_3 = sub_4148e0()
        
        if (eax_8 == 0)
            *(arg1 + 0x10) = 5
            void* eax_9 = data_e7e648
            int32_t ecx_4 = *(eax_9 + 0xbf0c0)
            sub_454930(eax_9, edx_3, ecx_4, ecx_4, eax_8)
            *(arg1 + 0xe) = 0
            *(arg1 + 0xd) = 0
            return 0
    case 5
        int32_t var_c_3 = 0
        
        if (sub_450c90() != 0)
            *(data_e7e648 + 0x3028) = 0
            uint32_t eax_12 = zx.d(*esi)
            
            if (esi[1] != 0xff)
                sub_416b50(eax_12)
                sub_416b30(zx.d(*esi), 0)
                sub_418740(zx.d(*esi), zx.d(*(esi + 4)), *(data_e7e648 + 0xbf0c0))
                sub_416860(zx.d(*esi), 0)
                *(arg1 + 0x10) = 8
            else if (*(eax_12 * 0x104 + data_e7e648 + 0x1f5dc) != 0xffff)
                sub_416b90(eax_12 + 6, eax_12)
                sub_416b30(zx.d(*esi), 0)
                sub_418740(zx.d(*esi), zx.d(*(esi + 4)), *(data_e7e648 + 0xbf0c0))
                sub_416860(zx.d(*esi), 0)
                *(arg1 + 0x10) = 7
            else
                sub_416b50(eax_12)
                sub_416b30(zx.d(*esi), 0)
                sub_418740(zx.d(*esi), zx.d(*(esi + 4)), *(data_e7e648 + 0xbf0c0))
                sub_416860(zx.d(*esi), 0)
                *(arg1 + 0x10) = 6
            
            eax_18 = data_e7e648
            *(eax_18 + 0x3034) += 1
    case 6
        void* eax_22 = data_e7e648
        
        if (*(eax_22 + 0x3034) s>= *(eax_22 + 0x3038))
            sub_416860(zx.d(*esi), 2)
            sub_4168c0(zx.d(*esi), sx.d(*(esi + 8)), sx.d(*(esi + 0xa)))
            sub_4181e0(zx.d(*esi))
            uint32_t var_10_4
            int32_t var_c_5
            
            if (esi[3] != 0)
                var_c_5 = 1
                var_10_4 = zx.d(*esi)
            else
                var_c_5 = 0x14
                var_10_4 = zx.d(*esi)
            
            sub_416890(var_10_4, var_c_5)
            char eax_25 = esi[2]
            
            if (eax_25 != 0xff)
                sub_416960(zx.d(*esi), zx.d(eax_25))
            
        label_40d765:
            *(arg1 + 0x10) = 9
            *(arg1 + 0xe) = 0
            *(arg1 + 0xd) = 0
            return 0
    case 7
        void* eax_28 = data_e7e648
        
        if (*(eax_28 + 0x3034) s>= *(eax_28 + 0x3038))
            sub_416860(zx.d(*esi) + 6, 7)
            sub_416860(zx.d(*esi), 6)
            uint32_t var_18_6
            int32_t var_14_4
            
            if (esi[3] != 0)
                sub_416890(zx.d(*esi) + 6, 1)
                var_14_4 = 1
                var_18_6 = zx.d(*esi)
            else
                sub_416890(zx.d(*esi) + 6, 0x14)
                var_14_4 = 0x14
                var_18_6 = zx.d(*esi)
            
            sub_416890(var_18_6, var_14_4)
            
            if (esi[7] != 0)
                sub_4168c0(zx.d(*esi), sx.d(*(esi + 8)), sx.d(*(esi + 0xa)))
                sub_4181e0(zx.d(*esi))
            
        label_40d80a:
            char eax_34 = esi[2]
            
            if (eax_34 == 0xff)
                goto label_40d765
            
            sub_416960(zx.d(*esi), zx.d(eax_34))
            *(arg1 + 0x10) = 9
            *(arg1 + 0xe) = 0
            *(arg1 + 0xd) = 0
            return 0
    case 8
        void* eax_36 = data_e7e648
        
        if (*(eax_36 + 0x3034) s>= *(eax_36 + 0x3038))
            sub_416860(zx.d(*esi), esi[1])
            sub_4168c0(zx.d(*esi), sx.d(*(esi + 8)), sx.d(*(esi + 0xa)))
            sub_4181e0(zx.d(*esi))
            
            if (esi[3] != 0)
                sub_416890(zx.d(*esi), 1)
            else
                sub_416890(zx.d(*esi), 0x14)
            
            goto label_40d80a
    case 9
        if (sub_417350(zx.d(*esi)) == 0)
            sub_416b50(zx.d(*esi) + 6)
            return 1
    case 0xa
        if (sub_41b650() == 0)
            *(arg1 + 0x10) = 0xb
            eax_18 = data_e7e648
            *(eax_18 + 0x3034) += 1
    case 0xb
        void* eax_44 = data_e7e648
        
        if (*(eax_44 + 0x3034) s>= *(eax_44 + 0x3038))
            eax_44.b = esi[1]
            uint32_t var_10_14
            char var_c_12
            
            if (eax_44.b != 0xff)
                var_c_12 = eax_44.b
                var_10_14 = zx.d(*esi)
            else
                var_c_12 = 3
                var_10_14 = zx.d(*esi)
            
            sub_416860(var_10_14, var_c_12)
            
            if (esi[3] != 0)
                sub_416890(zx.d(*esi), 1)
                *(arg1 + 0x10) = 0xc
                *(arg1 + 0xe) = 0
                *(arg1 + 0xd) = 0
                return 0
            
            sub_416890(zx.d(*esi), 0x14)
            *(arg1 + 0x10) = 0xc
            *(arg1 + 0xe) = 0
            *(arg1 + 0xd) = 0
            return 0
    case 0xc
        if (sub_417350(zx.d(*esi)) == 0)
            sub_416b50(zx.d(*esi))
            sub_416b50(zx.d(*esi) + 0xc)
            sub_416b50(zx.d(*esi) + 6)
            return 1

*(arg1 + 0xe) = 0
*(arg1 + 0xd) = 0
return 0
