// 函数: sub_432ba0
// 地址: 0x432ba0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

sub_4013b0()

switch (sx.d(*(arg1 + 0x10)))
    case 0
        sub_431820()
        void* eax_1 = data_4bf67c
        sub_426080(eax_1 + 0x1ba8, eax_1 + 0x23ba60, eax_1 + 0x28, 0x3c, 0, 1)
        sub_4050d0(2, 0xa)
        *(arg1 + 0x10) = 1
    label_432bfe:
        
        if (sub_405130() == 1)
            data_2b60388 = 0
            data_2b60384 = 0
            data_2b60380 = 0
            *(arg1 + 0x10) = 2
            sub_425330()
            return 0
    case 1
        goto label_432bfe
    case 2
        sub_423b40()
        int32_t eax_7 =
            sub_427ca0(data_4bf67c + 0x182c, 0, 0, "BISLPM-65549", &data_22366c0, 0xd400)
        int32_t* esi_1 = data_4bf67c
        *esi_1 = eax_7
        char* ecx_2 = data_4bf520
        void* edx_2 = &esi_1[0x89d18]
        
        do
            eax_7.b = *ecx_2
            *edx_2 = eax_7.b
            ecx_2 = &ecx_2[1]
            edx_2 += 1
        while (eax_7.b != 0)
        
        esi_1[0x89d13] = &esi_1[0x89d18]
        sub_43d220(&esi_1[0x88be6], &esi_1[0x89d13], 1, 0, 0xffffffff, 0x1000)
        *(arg1 + 0x10) = 3
        goto label_432cb1
    case 3
    label_432cb1:
        int32_t eax_9 = sub_446f90(*data_4bf67c)
        
        if (eax_9 == 1)
            data_2b60370 = 0
            int32_t eax_20 = sub_431920()
            
            if (eax_20 == 0)
                data_2b60370 = 1
                *(arg1 + 0x10) = 5
            else
                if (eax_20 == 1)
                    void* ebp_4 = data_4bf67c
                    *(ebp_4 + 0x18) = 0xb
                    char* ecx_16 = data_4bf588
                    void* edx_9 = ebp_4 + 0x227460
                    int32_t eax_22
                    
                    do
                        eax_22.b = *ecx_16
                        *edx_9 = eax_22.b
                        ecx_16 = &ecx_16[1]
                        edx_9 += 1
                    while (eax_22.b != 0)
                    char* eax_29 = *((sx.d(*(ebp_4 + 0x18)) << 2) + &data_4bf594)
                    char* esi_7 = eax_29
                    char i
                    
                    do
                        i = *eax_29
                        eax_29 = &eax_29[1]
                    while (i != 0)
                    
                    void* eax_30 = eax_29 - esi_7
                    void* edi_9 = ebp_4 + 0x22745f
                    
                    do
                        i = *(edi_9 + 1)
                        edi_9 += 1
                    while (i != 0)
                    
                    int32_t esi_8
                    int32_t edi_10
                    edi_10, esi_8 = __builtin_memcpy(edi_9, esi_7, eax_30 u>> 2 << 2)
                    __builtin_memcpy(edi_10, esi_8, eax_30 & 3)
                    *(ebp_4 + 0x22744c) = ebp_4 + 0x227460
                    sub_43d220(ebp_4 + 0x222f98, ebp_4 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
                    sub_4095a0(2)
                    *(data_4bf67c + 0x10) = 0
                    *(arg1 + 0x10) = 4
                    sub_432290()
                    sub_425330()
                    return 0
                
                if (eax_20 == 2)
                    void* ebp_2 = data_4bf67c
                    *(ebp_2 + 0x18) = 0xa
                    char* ecx_10 = data_4bf588
                    void* edx_7 = ebp_2 + 0x227460
                    char i_1
                    
                    do
                        i_1 = *ecx_10
                        *edx_7 = i_1
                        ecx_10 = &ecx_10[1]
                        edx_7 += 1
                    while (i_1 != 0)
                    char* eax_24 = *((sx.d(*(ebp_2 + 0x18)) << 2) + &data_4bf594)
                    char* esi_5 = eax_24
                    
                    do
                        ecx_10.b = *eax_24
                        eax_24 = &eax_24[1]
                    while (ecx_10.b != 0)
                    
                    void* eax_25 = eax_24 - esi_5
                    void* edi_6 = ebp_2 + 0x22745f
                    
                    do
                        ecx_10.b = *(edi_6 + 1)
                        edi_6 += 1
                    while (ecx_10.b != 0)
                    
                    int32_t esi_6
                    int32_t edi_7
                    edi_7, esi_6 = __builtin_memcpy(edi_6, esi_5, eax_25 u>> 2 << 2)
                    __builtin_memcpy(edi_7, esi_6, eax_25 & 3)
                    *(ebp_2 + 0x22744c) = ebp_2 + 0x227460
                    sub_43d220(ebp_2 + 0x222f98, ebp_2 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
                    sub_4095a0(2)
                    *(data_4bf67c + 0x10) = 0
                    *(arg1 + 0x10) = 4
                    sub_432290()
                    sub_425330()
                    return 0
        else if (eax_9 == 2)
            void* ebp = data_4bf67c
            data_2b60370 = eax_9 - 2
            char eax_13
            char edx_4
            edx_4:eax_13 = sx.q(*(ebp + 0x1a3c))
            char i_2 = (eax_13 ^ edx_4) - edx_4
            *(ebp + 0x18) = i_2
            
            if (i_2 s>= 0xa)
                *(ebp + 0x18) = 9
            
            char* ecx_4 = data_4bf588
            void* edx_5 = ebp + 0x227460
            
            do
                i_2 = *ecx_4
                *edx_5 = i_2
                ecx_4 = &ecx_4[1]
                edx_5 += 1
            while (i_2 != 0)
            
            char* eax_16 = *((sx.d(*(ebp + 0x18)) << 2) + &data_4bf594)
            char* esi_3 = eax_16
            
            do
                ecx_4.b = *eax_16
                eax_16 = &eax_16[1]
            while (ecx_4.b != 0)
            
            void* eax_17 = eax_16 - esi_3
            void* edi_3 = ebp + 0x22745f
            
            do
                ecx_4.b = *(edi_3 + 1)
                edi_3 += 1
            while (ecx_4.b != 0)
            
            int32_t esi_4
            int32_t edi_4
            edi_4, esi_4 = __builtin_memcpy(edi_3, esi_3, eax_17 u>> 2 << 2)
            __builtin_memcpy(edi_4, esi_4, eax_17 & 3)
            *(ebp + 0x22744c) = ebp + 0x227460
            sub_43d220(ebp + 0x222f98, ebp + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(2)
            *(data_4bf67c + 0x10) = 0
            *(arg1 + 0x10) = 4
            sub_432290()
            sub_425330()
            return 0
        
        sub_432290()
        sub_425330()
        return 0
    case 4
        data_e7e634 = 0xffffffff
        data_e7e630 = 0
        *(arg1 + 0x10) = 0xd
    label_432f65:
        int32_t eax_34 = data_e7e634
        
        if (eax_34 s< 4)
            data_e7e630 = 0
        else
            if (eax_34 - 4 != *(data_4bf67c + 0x10))
                sub_4095a0(3)
                *(data_4bf67c + 0x10) = data_e7e634 - 4
                eax_34 = data_e7e634
            
            if (eax_34 s< 4)
                data_e7e630 = 0
        
        if ((data_2b53610 & 0xf00af0) != 0)
        label_433086:
            sub_4095a0(3)
            void* eax_43 = data_4bf67c
            int32_t edx_13
            edx_13.b = *(eax_43 + 0x10) == 0
            *(eax_43 + 0x10) = edx_13
        label_43309e:
            sub_4322d0()
            sub_425330()
            return 0
        
        int32_t eax_37
        
        if ((data_2b53608 & 0x2100) == 0)
            eax_37 = sub_45c4e0()
        
        if ((data_2b53608 & 0x2100) != 0 || eax_37 != 0)
            if (*(data_4bf67c + 0x10) == 0)
                sub_4095a0(0)
                *(arg1 + 0x10) = 2
                sub_4322d0()
                sub_425330()
                return 0
            
            sub_4095a0(1)
            sub_4050d0(3, 0xa)
            *(data_4bf67c + 0x20) = 1
            *(arg1 + 0x10) = 0xb
            sub_4322d0()
            sub_425330()
            return 0
        
        int32_t eax_38
        
        if ((data_2b53608 & 0x4400) == 0)
            eax_38 = sub_45c4f0()
        
        if ((data_2b53608 & 0x4400) == 0 && eax_38 == 0)
            goto label_43309e
        
        sub_4095a0(1)
        sub_4050d0(3, 0xa)
        *(data_4bf67c + 0x20) = 1
        *(arg1 + 0x10) = 0xb
        sub_4322d0()
        sub_425330()
        return 0
    case 5
        sub_431970()
        sub_426700(zx.d(*(*(data_4bf67c + 0x1828) + 0x24fc)))
        *(arg1 + 0x10) = 6
        sub_425330()
        return 0
    case 6
        data_e7e638 = 0
        *(arg1 + 0x10) = 0xe
    label_4330f3:
        int32_t eax_47 = data_e7e634
        
        if (eax_47 s< 0)
            data_e7e630 = 0
        else
            if (eax_47 != *(data_4bf67c + 0x10))
                sub_4095a0(3)
                *(data_4bf67c + 0x10) = data_e7e634
                eax_47 = data_e7e634
            
            if (eax_47 s< 0)
                data_e7e630 = 0
        
        if (sub_431880(1) == 2)
            void* ebp_6 = data_4bf67c
            char eax_51
            char edx_16
            edx_16:eax_51 = sx.q(*(ebp_6 + 0x1a3c))
            char i_3 = (eax_51 ^ edx_16) - edx_16
            *(ebp_6 + 0x18) = i_3
            
            if (i_3 s>= 0xa)
                *(ebp_6 + 0x18) = 9
            
            void* ecx_27 = data_4bf588
            void* edx_17 = ebp_6 + 0x227460
            
            do
                i_3 = *ecx_27
                *edx_17 = i_3
                ecx_27 += 1
                edx_17 += 1
            while (i_3 != 0)
            
            char* eax_53 = *((sx.d(*(ebp_6 + 0x18)) << 2) + &data_4bf594)
            char* esi_9 = eax_53
            int32_t ecx_28
            
            do
                ecx_28.b = *eax_53
                eax_53 = &eax_53[1]
            while (ecx_28.b != 0)
            
            void* eax_54 = eax_53 - esi_9
            void* edi_12 = ebp_6 + 0x22745f
            
            do
                ecx_28.b = *(edi_12 + 1)
                edi_12 += 1
            while (ecx_28.b != 0)
            
            int32_t esi_10
            int32_t edi_13
            edi_13, esi_10 = __builtin_memcpy(edi_12, esi_9, eax_54 u>> 2 << 2)
            __builtin_memcpy(edi_13, esi_10, eax_54 & 3)
            *(ebp_6 + 0x22744c) = ebp_6 + 0x227460
            sub_43d220(ebp_6 + 0x222f98, ebp_6 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(2)
            *(data_4bf67c + 0x10) = 0
            *(arg1 + 0x10) = 4
            sub_425330()
            return 0
        
        int32_t eax_58 = data_2b53608
        
        if ((eax_58 & 0x2100) != 0 || data_e7e638 != 0)
            void* eax_63 = data_4bf67c
            data_e7e638 = 0
            
            if (*((*(eax_63 + 0x1bb0) << 5) + eax_63 + 0x2d) != 0)
                sub_4095a0(7)
                sub_425330()
                return 0
            
            sub_4095a0(0)
            void* esi_11 = data_4bf67c
            *(esi_11 + 0x10) = 1
            char* ecx_36 = data_4bf550
            void* edx_20 = esi_11 + 0x227460
            char i_4
            
            do
                i_4 = *ecx_36
                *edx_20 = i_4
                ecx_36 = &ecx_36[1]
                edx_20 += 1
            while (i_4 != 0)
            *(esi_11 + 0x22744c) = esi_11 + 0x227460
            sub_43d220(esi_11 + 0x222f98, esi_11 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            *(arg1 + 0x10) = 7
            sub_425330()
            return 0
        
        if ((eax_58 & 0x400) == 0)
            if ((eax_58 & 0x4400) == 0 && sub_45c4f0() == 0)
                sub_4263d0()
                sub_425330()
                return 0
            
            sub_4095a0(1)
            sub_4050d0(3, 0xa)
            *(data_4bf67c + 0x20) = 1
            *(arg1 + 0x10) = 0xb
            sub_425330()
            return 0
        
        sub_4095a0(0)
        sub_4050d0(3, 0xa)
        *(data_4bf67c + 0x20) = 3
        *(arg1 + 0x10) = 0xb
    case 7
        data_e7e634 = 0xffffffff
        data_e7e630 = 0
        *(arg1 + 0x10) = 0xc
    label_433352:
        int32_t eax_67 = data_e7e634
        
        if (eax_67 s< 2)
            data_e7e630 = 0
        else
            if (eax_67 - 2 != *(data_4bf67c + 0x10))
                sub_4095a0(3)
                *(data_4bf67c + 0x10) = data_e7e634 - 2
                eax_67 = data_e7e634
            
            if (eax_67 s< 2)
                data_e7e630 = 0
        
        if (sub_431880(1) != 2)
            if ((data_2b53610 & 0xf00af0) != 0)
                goto label_433086
            
            int32_t eax_78 = data_2b53608
            
            if ((eax_78 & 0x2100) == 0 && data_e7e630 == 0)
                if ((eax_78 & 0x4400) != 0)
                    goto label_4334a6
                
                if (sub_45c4f0() != 0)
                    goto label_4334a6
                
                goto label_43309e
            
            if (*(data_4bf67c + 0x10) == 0)
                sub_4095a0(0)
                *(arg1 + 0x10) = 8
                sub_4322d0()
                sub_425330()
                return 0
            
        label_4334a6:
            sub_4095a0(1)
            *(arg1 + 0x10) = 6
            sub_4322d0()
            sub_425330()
            return 0
        
        void* ebp_8 = data_4bf67c
        char eax_71
        char edx_24
        edx_24:eax_71 = sx.q(*(ebp_8 + 0x1a3c))
        char i_5 = (eax_71 ^ edx_24) - edx_24
        *(ebp_8 + 0x18) = i_5
        
        if (i_5 s>= 0xa)
            *(ebp_8 + 0x18) = 9
        
        void* ecx_38 = data_4bf588
        void* edx_25 = ebp_8 + 0x227460
        
        do
            i_5 = *ecx_38
            *edx_25 = i_5
            ecx_38 += 1
            edx_25 += 1
        while (i_5 != 0)
        
        char* eax_73 = *((sx.d(*(ebp_8 + 0x18)) << 2) + &data_4bf594)
        char* esi_13 = eax_73
        int32_t ecx_39
        
        do
            ecx_39.b = *eax_73
            eax_73 = &eax_73[1]
        while (ecx_39.b != 0)
        
        void* eax_74 = eax_73 - esi_13
        void* edi_16 = ebp_8 + 0x22745f
        
        do
            ecx_39.b = *(edi_16 + 1)
            edi_16 += 1
        while (ecx_39.b != 0)
        
        int32_t esi_14
        int32_t edi_17
        edi_17, esi_14 = __builtin_memcpy(edi_16, esi_13, eax_74 u>> 2 << 2)
        __builtin_memcpy(edi_17, esi_14, eax_74 & 3)
        *(ebp_8 + 0x22744c) = ebp_8 + 0x227460
        sub_43d220(ebp_8 + 0x222f98, ebp_8 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
        sub_4095a0(2)
        *(data_4bf67c + 0x10) = 0
        *(arg1 + 0x10) = 4
        sub_4322d0()
        sub_425330()
        return 0
    case 8
        int32_t eax_82 = sub_431880(0)
        
        if (eax_82 == 1)
            sub_4050d0(3, 0xa)
            *(data_4bf67c + 0x20) = 2
            *(arg1 + 0x10) = 0xb
            sub_425330()
            return 0
        
        if (eax_82 == 2)
            void* ebp_10 = data_4bf67c
            char eax_86
            char edx_27
            edx_27:eax_86 = sx.q(*(ebp_10 + 0x1a3c))
            char i_6 = (eax_86 ^ edx_27) - edx_27
            *(ebp_10 + 0x18) = i_6
            
            if (i_6 s>= 0xa)
                *(ebp_10 + 0x18) = 9
            
            char* ecx_45 = data_4bf588
            void* edx_28 = ebp_10 + 0x227460
            
            do
                i_6 = *ecx_45
                *edx_28 = i_6
                ecx_45 = &ecx_45[1]
                edx_28 += 1
            while (i_6 != 0)
            
            char* eax_89 = *((sx.d(*(ebp_10 + 0x18)) << 2) + &data_4bf594)
            char* esi_15 = eax_89
            
            do
                ecx_45.b = *eax_89
                eax_89 = &eax_89[1]
            while (ecx_45.b != 0)
            
            void* eax_90 = eax_89 - esi_15
            void* edi_19 = ebp_10 + 0x22745f
            
            do
                ecx_45.b = *(edi_19 + 1)
                edi_19 += 1
            while (ecx_45.b != 0)
            
            int32_t esi_16
            int32_t edi_20
            edi_20, esi_16 = __builtin_memcpy(edi_19, esi_15, eax_90 u>> 2 << 2)
            __builtin_memcpy(edi_20, esi_16, eax_90 & 3)
            *(ebp_10 + 0x22744c) = ebp_10 + 0x227460
            sub_43d220(ebp_10 + 0x222f98, ebp_10 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(2)
            *(data_4bf67c + 0x10) = 0
            *(arg1 + 0x10) = 4
            sub_425330()
            return 0
    case 9
        void* eax_95 = data_4bf67c
        
        if (*(eax_95 + 0x1bcc) == 0xffffffff)
            int32_t ecx_51 = *(eax_95 + 0x1bb0)
            *(eax_95 + 0x1bd0) = 1
            void* var_14_3 = eax_95 + 0x23ba60
            uint32_t var_18 = zx.d(*(*((ecx_51 << 5) + eax_95 + 0x34) + 0xd6))
            *data_4bf67c = 0
            *(arg1 + 0x10) = 0xa
            sub_425330()
            return 0
    case 0xa
        int32_t eax_99 = sub_446f90(*data_4bf67c)
        
        if (eax_99 s> 0)
            if (eax_99 s<= 2)
                sub_4050d0(3, 0xa)
                *(data_4bf67c + 0x20) = 2
                *(arg1 + 0x10) = 0xb
                sub_425330()
                return 0
            
            if (eax_99 == 3)
                void* ecx_55 = data_4bf67c
                *(arg1 + 0x10) = 6
                *(ecx_55 + 0x1bd0) = 0
                sub_425330()
                return 0
    case 0xb
        if (sub_405130() == 1)
            sub_405e20()
            void* eax_103 = data_4bf67c
            
            if (*(eax_103 + 0x20) == 2)
                sub_432100(*(eax_103 + 0x1bb0))
                sub_401620()
                void* var_14_5 = data_4bf67c + 0x23ba60
                sub_401350()
                eax_103 = data_4bf67c
            
            return *(eax_103 + 0x20)
    case 0xc
        goto label_433352
    case 0xd
        goto label_432f65
    case 0xe
        goto label_4330f3

sub_425330()
return 0
