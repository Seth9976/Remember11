// 函数: sub_433b70
// 地址: 0x433b70
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t edi
int32_t var_10 = edi
sub_4013b0()
void* eax_17
bool cond:24_1

switch (sx.d(*(arg1 + 0x10)))
    case 0
        sub_431820()
        void* eax_1 = data_4bf67c
        sub_426080(eax_1 + 0x1ba8, eax_1 + 0x23ba60, eax_1 + 0x28, 0x3c, 0, 0)
        void* eax_3 = data_4bf67c
        
        if (*(eax_3 + 8) != 0)
            *(eax_3 + 0x1bac) = 0
        
        sub_4050d0(2, 0xa)
        *(arg1 + 0x10) = 1
        goto label_433be5
    case 1
    label_433be5:
        
        if (sub_405130() == 1)
            void* esi_1 = data_4bf67c
            data_2b60388 = 0
            data_2b60384 = 0
            data_2b60380 = 0
            
            if (*(esi_1 + 8) == 0)
                *(arg1 + 0x10) = 3
                sub_425330()
                return 0
            
            *(esi_1 + 0x10) = 0
            char* ecx_2 = data_4bf538
            char* edx_2 = esi_1 + 0x227460
            uint32_t eax_4
            
            do
                eax_4.b = *ecx_2
                *edx_2 = eax_4.b
                ecx_2 = &ecx_2[1]
                edx_2 = &edx_2[1]
            while (eax_4.b != 0)
            *(esi_1 + 0x22744c) = esi_1 + 0x227460
            sub_43d220(esi_1 + 0x222f98, esi_1 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(0)
            *(arg1 + 0x10) = 2
            sub_425330()
            return 0
    case 2
        data_e7e634 = 0xffffffff
        data_e7e630 = 0
        *(arg1 + 0x10) = 0x24
    label_433c95:
        int32_t eax_8 = data_e7e634
        
        if (eax_8 s< 1)
            data_e7e630 = 0
        else
            if (eax_8 - 1 != *(data_4bf67c + 0x10))
                sub_4095a0(3)
                *(data_4bf67c + 0x10) = data_e7e634 - 1
                eax_8 = data_e7e634
            
            if (eax_8 s< 1)
                data_e7e630 = 0
        
        if ((data_2b53610 & 0xf00af0) != 0)
        label_433daa:
            sub_4095a0(3)
            eax_17 = data_4bf67c
            cond:24_1 = *(eax_17 + 0x10) == 0
        label_436ea4:
            int32_t edx_5
            edx_5.b = cond:24_1
            *(eax_17 + 0x10) = edx_5
            sub_4322d0()
        else
            int32_t eax_11 = data_2b53608
            
            if ((eax_11 & 0x2100) != 0 || data_e7e630 != 0)
                if (*(data_4bf67c + 0x10) == 0)
                label_433d57:
                    sub_4095a0(0)
                    *(arg1 + 0x10) = 3
                    sub_4322d0()
                    sub_425330()
                    return 0
                
                sub_4095a0(1)
                sub_4050d0(3, 0xa)
                *(data_4bf67c + 0x20) = 1
                *(arg1 + 0x10) = 0x1f
                sub_4322d0()
                sub_425330()
                return 0
            
            int32_t eax_12
            
            if ((eax_11 & 0x4400) == 0)
                eax_12 = sub_45c4f0()
            
            if ((eax_11 & 0x4400) != 0 || eax_12 != 0)
                sub_4095a0(1)
                sub_4050d0(3, 0xa)
                *(data_4bf67c + 0x20) = 1
                *(arg1 + 0x10) = 0x1f
                sub_4322d0()
                sub_425330()
                return 0
            
            sub_4322d0()
    case 3
        sub_423b40()
        int32_t eax_20 =
            sub_427ca0(data_4bf67c + 0x182c, 0, 0, "BISLPM-65549", &data_22366c0, 0xd400)
        int32_t* esi_3 = data_4bf67c
        *esi_3 = eax_20
        char* ecx_6 = data_4bf520
        void* edx_6 = &esi_3[0x89d18]
        
        do
            eax_20.b = *ecx_6
            *edx_6 = eax_20.b
            ecx_6 = &ecx_6[1]
            edx_6 += 1
        while (eax_20.b != 0)
        
        esi_3[0x89d13] = &esi_3[0x89d18]
        sub_43d220(&esi_3[0x88be6], &esi_3[0x89d13], 1, 0, 0xffffffff, 0x1000)
        *(arg1 + 0x10) = 4
        goto label_433e42
    case 4
    label_433e42:
        int32_t eax_22 = sub_446f90(*data_4bf67c)
        
        if (eax_22 == 1)
            data_2b60370 = 0
            int32_t eax_43 = sub_431920()
            
            if (eax_43 s>= 0)
                if (eax_43 s<= 1)
                    data_2b60370 = 1
                    *(arg1 + 0x10) = 0x14
                else if (eax_43 == 2)
                    void* esi_10 = data_4bf67c
                    char* ecx_20 = data_4bf53c
                    void* edx_15 = esi_10 + 0x227460
                    
                    do
                        eax_43.b = *ecx_20
                        *edx_15 = eax_43.b
                        ecx_20 = &ecx_20[1]
                        edx_15 += 1
                    while (eax_43.b != 0)
                    
                    *(esi_10 + 0x22744c) = esi_10 + 0x227460
                    sub_43d220(esi_10 + 0x222f98, esi_10 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
                    sub_4095a0(2)
                    *(data_4bf67c + 0x10) = 1
                    *(arg1 + 0x10) = 0xb
                    sub_432290()
                    sub_425330()
                    return 0
        else if (eax_22 == 2)
            void* ebx_6 = data_4bf67c
            data_2b60370 = 0
            int32_t eax_25 = *(ebx_6 + 0x1a3c)
            
            if (eax_25 == 0xfffffffa)
                char* ecx_19 = data_4bf58c
                char* edx_14 = ebx_6 + 0x227460
                
                do
                    eax_25.b = *ecx_19
                    *edx_14 = eax_25.b
                    ecx_19 = &ecx_19[1]
                    edx_14 = &edx_14[1]
                while (eax_25.b != 0)
                
                *(ebx_6 + 0x22744c) = ebx_6 + 0x227460
                sub_43d220(ebx_6 + 0x222f98, ebx_6 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
                sub_4095a0(2)
                *(data_4bf67c + 0x10) = 1
                *(arg1 + 0x10) = 0xd
                sub_432290()
                sub_425330()
                return 0
            
            if (eax_25 == 0xfffffffc)
                void* edx_12 = ebx_6 + 0x227460
                
                if (*(ebx_6 + 0x1a48) s>= 0x6e)
                    char* ecx_18 = data_4bf52c
                    
                    do
                        eax_25.b = *ecx_18
                        *edx_12 = eax_25.b
                        ecx_18 = &ecx_18[1]
                        edx_12 += 1
                    while (eax_25.b != 0)
                    
                    *(ebx_6 + 0x22744c) = ebx_6 + 0x227460
                    sub_43d220(ebx_6 + 0x222f98, ebx_6 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
                    sub_4095a0(0)
                    *(data_4bf67c + 0x10) = 1
                    *(arg1 + 0x10) = 8
                    sub_432290()
                    sub_425330()
                    return 0
                
                char* ecx_15 = data_4bf56c
                
                do
                    eax_25.b = *ecx_15
                    *edx_12 = eax_25.b
                    ecx_15 = &ecx_15[1]
                    edx_12 += 1
                while (eax_25.b != 0)
                
                *(ebx_6 + 0x22744c) = ebx_6 + 0x227460
                sub_43d220(ebx_6 + 0x222f98, ebx_6 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
                sub_4095a0(2)
                *(data_4bf67c + 0x10) = 0
                *(arg1 + 0x10) = 0x11
                sub_432290()
                sub_425330()
                return 0
            
            if (eax_25 == 0xfffffffe)
                char* ecx_14 = data_4bf524
                void* edx_11 = ebx_6 + 0x227460
                
                do
                    eax_25.b = *ecx_14
                    *edx_11 = eax_25.b
                    ecx_14 = &ecx_14[1]
                    edx_11 += 1
                while (eax_25.b != 0)
                
                *(ebx_6 + 0x22744c) = ebx_6 + 0x227460
                sub_43d220(ebx_6 + 0x222f98, ebx_6 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
                sub_4095a0(2)
                *(data_4bf67c + 0x10) = 1
                *(arg1 + 0x10) = 5
                sub_432290()
                sub_425330()
                return 0
            
            char eax_26
            char edx_8
            edx_8:eax_26 = sx.q(eax_25)
            char i = (eax_26 ^ edx_8) - edx_8
            *(ebx_6 + 0x18) = i
            
            if (i s>= 0xa)
                *(ebx_6 + 0x18) = 9
            
            char* ecx_8 = data_4bf588
            char* edx_9 = ebx_6 + 0x227460
            
            do
                i = *ecx_8
                *edx_9 = i
                ecx_8 = &ecx_8[1]
                edx_9 = &edx_9[1]
            while (i != 0)
            
            char* eax_29 = *((sx.d(*(ebx_6 + 0x18)) << 2) + &data_4bf594)
            char* esi_5 = eax_29
            
            do
                ecx_8.b = *eax_29
                eax_29 = &eax_29[1]
            while (ecx_8.b != 0)
            
            int32_t eax_30 = eax_29 - esi_5
            void* edi_9 = ebx_6 + 0x22745f
            
            do
                ecx_8.b = *(edi_9 + 1)
                edi_9 += 1
            while (ecx_8.b != 0)
            
            int32_t esi_6
            int32_t edi_10
            edi_10, esi_6 = __builtin_memcpy(edi_9, esi_5, eax_30 u>> 2 << 2)
            __builtin_memcpy(edi_10, esi_6, eax_30 & 3)
            *(ebx_6 + 0x22744c) = ebx_6 + 0x227460
            sub_43d220(ebx_6 + 0x222f98, ebx_6 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(2)
            *(data_4bf67c + 0x10) = 0
            *(arg1 + 0x10) = 0x11
            sub_432290()
            sub_425330()
            return 0
        
        sub_432290()
        sub_425330()
        return 0
    case 5
        data_e7e634 = 0xffffffff
        data_e7e630 = 0
        *(arg1 + 0x10) = 0x25
    label_4341b4:
        int32_t eax_47 = data_e7e634
        
        if (eax_47 s< 2)
            data_e7e630 = 0
        else
            if (eax_47 - 2 != *(data_4bf67c + 0x10))
                sub_4095a0(3)
                *(data_4bf67c + 0x10) = data_e7e634 - 2
                eax_47 = data_e7e634
            
            if (eax_47 s< 2)
                data_e7e630 = 0
        
        if (sub_431880(1) == 2)
            void* ebx_19 = data_4bf67c
            char eax_51
            char edx_19
            edx_19:eax_51 = sx.q(*(ebx_19 + 0x1a3c))
            char i_1 = (eax_51 ^ edx_19) - edx_19
            *(ebx_19 + 0x18) = i_1
            
            if (i_1 s>= 0xa)
                *(ebx_19 + 0x18) = 9
            
            void* ecx_23 = data_4bf588
            void* edx_20 = ebx_19 + 0x227460
            
            do
                i_1 = *ecx_23
                *edx_20 = i_1
                ecx_23 += 1
                edx_20 += 1
            while (i_1 != 0)
            
            char* eax_53 = *((sx.d(*(ebx_19 + 0x18)) << 2) + &data_4bf594)
            char* esi_12 = eax_53
            int32_t ecx_24
            
            do
                ecx_24.b = *eax_53
                eax_53 = &eax_53[1]
            while (ecx_24.b != 0)
            
            void* eax_54 = eax_53 - esi_12
            void* edi_20 = ebx_19 + 0x22745f
            
            do
                ecx_24.b = *(edi_20 + 1)
                edi_20 += 1
            while (ecx_24.b != 0)
            
            int32_t esi_13
            int32_t edi_21
            edi_21, esi_13 = __builtin_memcpy(edi_20, esi_12, eax_54 u>> 2 << 2)
            __builtin_memcpy(edi_21, esi_13, eax_54 & 3)
            *(ebx_19 + 0x22744c) = ebx_19 + 0x227460
            sub_43d220(ebx_19 + 0x222f98, ebx_19 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(2)
            *(data_4bf67c + 0x10) = 0
            *(arg1 + 0x10) = 0x11
            sub_4322d0()
            sub_425330()
            return 0
        
        if ((data_2b53610 & 0xf00af0) != 0)
        label_436e92:
            sub_4095a0(3)
            eax_17 = data_4bf67c
            cond:24_1 = *(eax_17 + 0x10) == 0
            goto label_436ea4
        
        int32_t eax_58 = data_2b53608
        
        if ((eax_58 & 0x2100) != 0 || data_e7e630 != 0)
            if (*(data_4bf67c + 0x10) == 0)
                sub_4095a0(0)
                void* eax_62 = data_4bf67c
                *(eax_62 + 0x1c) = 0
                *(eax_62 + 0x20) = 0
                *(arg1 + 0x10) = 6
                sub_4322d0()
                sub_425330()
                return 0
            
        label_434304:
            sub_4095a0(1)
            void* eax_60 = data_4bf67c
            *(eax_60 + 0x10) = 1
            *(eax_60 + 0x20) = 1
            *(arg1 + 0x10) = 6
            sub_4322d0()
            sub_425330()
            return 0
        
        if ((eax_58 & 0x4400) != 0)
            goto label_434304
        
        if (sub_45c4f0() != 0)
            goto label_434304
        
        sub_4322d0()
    case 6
        int32_t eax_64 = sub_431880(0)
        
        if (eax_64 == 1)
            void* esi_16 = data_4bf67c
            
            if (*(esi_16 + 0x20) != 0)
                char* ecx_37 = data_4bf534
                void* edx_26 = esi_16 + 0x227460
                int32_t eax_65
                
                do
                    eax_65.b = *ecx_37
                    *edx_26 = eax_65.b
                    ecx_37 = &ecx_37[1]
                    edx_26 += 1
                while (eax_65.b != 0)
                *(esi_16 + 0x22744c) = esi_16 + 0x227460
                sub_43d220(esi_16 + 0x222f98, esi_16 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
                sub_4095a0(0)
                *(data_4bf67c + 0x10) = 1
                *(arg1 + 0x10) = 0x12
                sub_425330()
                return 0
            
            int32_t eax_75 = sub_4276b0(esi_16 + 0x182c, 0, 0)
            int32_t* esi_18 = data_4bf67c
            *esi_18 = eax_75
            char* ecx_36 = data_4bf528
            void* edx_25 = &esi_18[0x89d18]
            
            do
                eax_75.b = *ecx_36
                *edx_25 = eax_75.b
                ecx_36 = &ecx_36[1]
                edx_25 += 1
            while (eax_75.b != 0)
            
            esi_18[0x89d13] = &esi_18[0x89d18]
            sub_43d220(&esi_18[0x88be6], &esi_18[0x89d13], 1, 0, 0xffffffff, 0x1000)
            *(arg1 + 0x10) = 7
            sub_425330()
            return 0
        
        if (eax_64 == 2)
            void* ebx_24 = data_4bf67c
            char eax_68
            char edx_22
            edx_22:eax_68 = sx.q(*(ebx_24 + 0x1a3c))
            char i_2 = (eax_68 ^ edx_22) - edx_22
            *(ebx_24 + 0x18) = i_2
            
            if (i_2 s>= 0xa)
                *(ebx_24 + 0x18) = 9
            
            char* ecx_30 = data_4bf588
            void* edx_23 = ebx_24 + 0x227460
            
            do
                i_2 = *ecx_30
                *edx_23 = i_2
                ecx_30 = &ecx_30[1]
                edx_23 += 1
            while (i_2 != 0)
            
            char* eax_71 = *((sx.d(*(ebx_24 + 0x18)) << 2) + &data_4bf594)
            char* esi_14 = eax_71
            
            do
                ecx_30.b = *eax_71
                eax_71 = &eax_71[1]
            while (ecx_30.b != 0)
            
            void* eax_72 = eax_71 - esi_14
            void* edi_26 = ebx_24 + 0x22745f
            
            do
                ecx_30.b = *(edi_26 + 1)
                edi_26 += 1
            while (ecx_30.b != 0)
            
            int32_t esi_15
            int32_t edi_27
            edi_27, esi_15 = __builtin_memcpy(edi_26, esi_14, eax_72 u>> 2 << 2)
            __builtin_memcpy(edi_27, esi_15, eax_72 & 3)
            *(ebx_24 + 0x22744c) = ebx_24 + 0x227460
            sub_43d220(ebx_24 + 0x222f98, ebx_24 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(2)
            *(data_4bf67c + 0x10) = 0
            *(arg1 + 0x10) = 0x11
            sub_425330()
            return 0
    case 7
        int32_t eax_81 = sub_446f90(*data_4bf67c)
        
        if (eax_81 == 1)
            int32_t eax_92 =
                sub_427d00(data_4bf67c + 0x182c, 0, 0, "BISLPM-65549", &data_22366c0, 0xd400)
            int32_t* esi_23 = data_4bf67c
            *esi_23 = eax_92
            char* ecx_46 = data_4bf530
            void* edx_32 = &esi_23[0x89d18]
            
            do
                eax_92.b = *ecx_46
                *edx_32 = eax_92.b
                ecx_46 = &ecx_46[1]
                edx_32 += 1
            while (eax_92.b != 0)
            
            esi_23[0x89d13] = &esi_23[0x89d18]
            sub_43d220(&esi_23[0x88be6], &esi_23[0x89d13], 1, 0, 0xffffffff, 0x1000)
            *(arg1 + 0x10) = 0xa
        else if (eax_81 == 2)
            void* ebx_30 = data_4bf67c
            char eax_85
            char edx_28
            edx_28:eax_85 = sx.q(*(ebx_30 + 0x1a3c))
            char i_3 = (eax_85 ^ edx_28) - edx_28
            *(ebx_30 + 0x18) = i_3
            
            if (i_3 s>= 0xa)
                *(ebx_30 + 0x18) = 9
            
            char* ecx_39 = data_4bf57c
            void* edx_29 = ebx_30 + 0x227460
            
            do
                i_3 = *ecx_39
                *edx_29 = i_3
                ecx_39 = &ecx_39[1]
                edx_29 += 1
            while (i_3 != 0)
            
            char* eax_88 = *((sx.d(*(ebx_30 + 0x18)) << 2) + &data_4bf594)
            char* esi_21 = eax_88
            char i_4
            
            do
                i_4 = *eax_88
                eax_88 = &eax_88[1]
            while (i_4 != 0)
            
            void* eax_89 = eax_88 - esi_21
            void* edi_35 = ebx_30 + 0x22745f
            
            do
                i_4 = *(edi_35 + 1)
                edi_35 += 1
            while (i_4 != 0)
            
            int32_t esi_22
            int32_t edi_36
            edi_36, esi_22 = __builtin_memcpy(edi_35, esi_21, eax_89 u>> 2 << 2)
            __builtin_memcpy(edi_36, esi_22, eax_89 & 3)
            *(ebx_30 + 0x22744c) = ebx_30 + 0x227460
            sub_43d220(ebx_30 + 0x222f98, ebx_30 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(2)
            *(data_4bf67c + 0x10) = 0
            *(arg1 + 0x10) = 0x11
            sub_432290()
            sub_425330()
            return 0
        
        sub_432290()
        sub_425330()
        return 0
    case 8
        data_e7e634 = 0xffffffff
        data_e7e630 = 0
        *(arg1 + 0x10) = 0x26
    label_4346b4:
        int32_t eax_95 = data_e7e634
        
        if (eax_95 s< 3)
            data_e7e630 = 0
        else
            if (eax_95 - 3 != *(data_4bf67c + 0x10))
                sub_4095a0(3)
                *(data_4bf67c + 0x10) = data_e7e634 - 3
                eax_95 = data_e7e634
            
            if (eax_95 s< 3)
                data_e7e630 = 0
        
        if (sub_431880(1) == 2)
            void* ebx_34 = data_4bf67c
            char eax_100
            char edx_34
            edx_34:eax_100 = sx.q(*(ebx_34 + 0x1a3c))
            char i_5 = (eax_100 ^ edx_34) - edx_34
            *(ebx_34 + 0x18) = i_5
            
            if (i_5 s>= 0xa)
                *(ebx_34 + 0x18) = 9
            
            char* ecx_49 = data_4bf588
            void* edx_35 = ebx_34 + 0x227460
            
            do
                i_5 = *ecx_49
                *edx_35 = i_5
                ecx_49 = &ecx_49[1]
                edx_35 += 1
            while (i_5 != 0)
            
            char* eax_102 = *((sx.d(*(ebx_34 + 0x18)) << 2) + &data_4bf594)
            char* esi_25 = eax_102
            
            do
                ecx_49.b = *eax_102
                eax_102 = &eax_102[1]
            while (ecx_49.b != 0)
            
            void* eax_103 = eax_102 - esi_25
            void* edi_42 = ebx_34 + 0x22745f
            
            do
                ecx_49.b = *(edi_42 + 1)
                edi_42 += 1
            while (ecx_49.b != 0)
            
            int32_t esi_26
            int32_t edi_43
            edi_43, esi_26 = __builtin_memcpy(edi_42, esi_25, eax_103 u>> 2 << 2)
            __builtin_memcpy(edi_43, esi_26, eax_103 & 3)
            *(ebx_34 + 0x22744c) = ebx_34 + 0x227460
            sub_43d220(ebx_34 + 0x222f98, ebx_34 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(2)
            *(data_4bf67c + 0x10) = 0
            *(arg1 + 0x10) = 0x11
            sub_4322d0()
            sub_425330()
            return 0
        
        if ((data_2b53610 & 0xf00af0) != 0)
        label_434865:
            sub_4095a0(3)
            void* eax_113 = data_4bf67c
            int32_t ecx_55
            ecx_55.b = *(eax_113 + 0x10) == 0
            *(eax_113 + 0x10) = ecx_55
            sub_4322d0()
            sub_425330()
            return 0
        
        int32_t eax_107 = data_2b53608
        
        if ((eax_107 & 0x2100) != 0 || data_e7e630 != 0)
            if (*(data_4bf67c + 0x10) == 0)
                sub_4095a0(0)
                void* eax_111 = data_4bf67c
                *(eax_111 + 0x1c) = 0
                *(eax_111 + 0x20) = 0
                *(arg1 + 0x10) = 9
                sub_4322d0()
                sub_425330()
                return 0
            
        label_434803:
            sub_4095a0(1)
            void* eax_109 = data_4bf67c
            *(eax_109 + 0x10) = 1
            *(eax_109 + 0x20) = 1
            *(arg1 + 0x10) = 9
            sub_4322d0()
            sub_425330()
            return 0
        
        if ((eax_107 & 0x4400) != 0)
            goto label_434803
        
        if (sub_45c4f0() != 0)
            goto label_434803
        
        sub_4322d0()
    case 9
        int32_t eax_115 = sub_431880(0)
        
        if (eax_115 == 1)
            void* esi_29 = data_4bf67c
            
            if (*(esi_29 + 0x20) != 0)
                char* ecx_63 = data_4bf534
                void* edx_42 = esi_29 + 0x227460
                int32_t eax_116
                
                do
                    eax_116.b = *ecx_63
                    *edx_42 = eax_116.b
                    ecx_63 = &ecx_63[1]
                    edx_42 += 1
                while (eax_116.b != 0)
                *(esi_29 + 0x22744c) = esi_29 + 0x227460
                sub_43d220(esi_29 + 0x222f98, esi_29 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
                sub_4095a0(0)
                *(data_4bf67c + 0x10) = 1
                *(arg1 + 0x10) = 0x12
                sub_425330()
                return 0
            
            int32_t eax_126 =
                sub_427d00(esi_29 + 0x182c, 0, 0, "BISLPM-65549", &data_22366c0, 0xd400)
            int32_t* esi_31 = data_4bf67c
            *esi_31 = eax_126
            char* ecx_62 = data_4bf530
            void* edx_41 = &esi_31[0x89d18]
            
            do
                eax_126.b = *ecx_62
                *edx_41 = eax_126.b
                ecx_62 = &ecx_62[1]
                edx_41 += 1
            while (eax_126.b != 0)
            
            esi_31[0x89d13] = &esi_31[0x89d18]
            sub_43d220(&esi_31[0x88be6], &esi_31[0x89d13], 1, 0, 0xffffffff, 0x1000)
            *(arg1 + 0x10) = 0xa
            sub_425330()
            return 0
        
        if (eax_115 == 2)
            void* ebx_40 = data_4bf67c
            char eax_119
            char edx_38
            edx_38:eax_119 = sx.q(*(ebx_40 + 0x1a3c))
            char i_6 = (eax_119 ^ edx_38) - edx_38
            *(ebx_40 + 0x18) = i_6
            
            if (i_6 s>= 0xa)
                *(ebx_40 + 0x18) = 9
            
            char* ecx_56 = data_4bf588
            void* edx_39 = ebx_40 + 0x227460
            
            do
                i_6 = *ecx_56
                *edx_39 = i_6
                ecx_56 = &ecx_56[1]
                edx_39 += 1
            while (i_6 != 0)
            
            char* eax_121 = *((sx.d(*(ebx_40 + 0x18)) << 2) + &data_4bf594)
            char* esi_27 = eax_121
            
            do
                ecx_56.b = *eax_121
                eax_121 = &eax_121[1]
            while (ecx_56.b != 0)
            
            void* eax_122 = eax_121 - esi_27
            void* edi_49 = ebx_40 + 0x22745f
            
            do
                ecx_56.b = *(edi_49 + 1)
                edi_49 += 1
            while (ecx_56.b != 0)
            
            int32_t esi_28
            int32_t edi_50
            edi_50, esi_28 = __builtin_memcpy(edi_49, esi_27, eax_122 u>> 2 << 2)
            __builtin_memcpy(edi_50, esi_28, eax_122 & 3)
            *(ebx_40 + 0x22744c) = ebx_40 + 0x227460
            sub_43d220(ebx_40 + 0x222f98, ebx_40 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(2)
            *(data_4bf67c + 0x10) = 0
            *(arg1 + 0x10) = 0x11
            sub_425330()
            return 0
    case 0xa
        int32_t eax_132 = sub_446f90(*data_4bf67c)
        
        if (eax_132 == 1)
            sub_423b40()
            sub_432140()
            *data_4bf67c = sub_4277c0(data_4bf67c + 0x182c, 0, 0, "/BISLPM-65549/BISLPM-65549", 
                &data_22366c0, 0xd400, 0xffffffff)
            *(arg1 + 0x10) = 0x10
        else if (eax_132 == 2)
            void* ebx_45 = data_4bf67c
            char eax_136
            char edx_44
            edx_44:eax_136 = sx.q(*(ebx_45 + 0x1a3c))
            char i_7 = (eax_136 ^ edx_44) - edx_44
            *(ebx_45 + 0x18) = i_7
            
            if (i_7 s>= 0xa)
                *(ebx_45 + 0x18) = 9
            
            char* ecx_65 = data_4bf580
            void* edx_45 = ebx_45 + 0x227460
            
            do
                i_7 = *ecx_65
                *edx_45 = i_7
                ecx_65 = &ecx_65[1]
                edx_45 += 1
            while (i_7 != 0)
            
            char* eax_138 = *((sx.d(*(ebx_45 + 0x18)) << 2) + &data_4bf594)
            char* esi_34 = eax_138
            
            do
                ecx_65.b = *eax_138
                eax_138 = &eax_138[1]
            while (ecx_65.b != 0)
            
            void* eax_139 = eax_138 - esi_34
            void* edi_57 = ebx_45 + 0x22745f
            
            do
                ecx_65.b = *(edi_57 + 1)
                edi_57 += 1
            while (ecx_65.b != 0)
            
            int32_t esi_35
            int32_t edi_58
            edi_58, esi_35 = __builtin_memcpy(edi_57, esi_34, eax_139 u>> 2 << 2)
            __builtin_memcpy(edi_58, esi_35, eax_139 & 3)
            *(ebx_45 + 0x22744c) = ebx_45 + 0x227460
            sub_43d220(ebx_45 + 0x222f98, ebx_45 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(2)
            *(data_4bf67c + 0x10) = 0
            *(arg1 + 0x10) = 0x11
            sub_432290()
            sub_425330()
            return 0
        
        sub_432290()
        sub_425330()
        return 0
    case 0xb
        data_e7e634 = 0xffffffff
        data_e7e630 = 0
        *(arg1 + 0x10) = 0x27
    label_434bac:
        
        if (sub_431880(1) == 2)
            void* ebx_49 = data_4bf67c
            char eax_147
            char edx_49
            edx_49:eax_147 = sx.q(*(ebx_49 + 0x1a3c))
            char i_8 = (eax_147 ^ edx_49) - edx_49
            *(ebx_49 + 0x18) = i_8
            
            if (i_8 s>= 0xa)
                *(ebx_49 + 0x18) = 9
            
            char* ecx_72 = data_4bf588
            void* edx_50 = ebx_49 + 0x227460
            
            do
                i_8 = *ecx_72
                *edx_50 = i_8
                ecx_72 = &ecx_72[1]
                edx_50 += 1
            while (i_8 != 0)
            
            char* eax_149 = *((sx.d(*(ebx_49 + 0x18)) << 2) + &data_4bf594)
            char* esi_36 = eax_149
            
            do
                ecx_72.b = *eax_149
                eax_149 = &eax_149[1]
            while (ecx_72.b != 0)
            
            void* eax_150 = eax_149 - esi_36
            void* edi_62 = ebx_49 + 0x22745f
            
            do
                ecx_72.b = *(edi_62 + 1)
                edi_62 += 1
            while (ecx_72.b != 0)
            
            int32_t esi_37
            int32_t edi_63
            edi_63, esi_37 = __builtin_memcpy(edi_62, esi_36, eax_150 u>> 2 << 2)
            __builtin_memcpy(edi_63, esi_37, eax_150 & 3)
            *(ebx_49 + 0x22744c) = ebx_49 + 0x227460
            sub_43d220(ebx_49 + 0x222f98, ebx_49 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(2)
            *(data_4bf67c + 0x10) = 0
            *(arg1 + 0x10) = 0x11
            sub_4322d0()
            sub_425330()
            return 0
        
        if ((data_2b53610 & 0xf00af0) != 0)
            goto label_434d18
        
        int32_t eax_154 = data_2b53608
        
        if ((eax_154 & 0x2100) != 0 || data_e7e630 != 0)
            if (*(data_4bf67c + 0x10) == 0)
                sub_4095a0(0)
                *(data_4bf67c + 0x20) = 0
                *(arg1 + 0x10) = 0xc
                sub_4322d0()
                sub_425330()
                return 0
            
        label_434cb3:
            sub_4095a0(1)
            void* eax_156 = data_4bf67c
            *(eax_156 + 0x10) = 1
            *(eax_156 + 0x20) = 1
            *(arg1 + 0x10) = 0xc
            sub_4322d0()
            sub_425330()
            return 0
        
        if ((eax_154 & 0x4400) != 0)
            goto label_434cb3
        
        if (sub_45c4f0() != 0)
            goto label_434cb3
        
        sub_4322d0()
    case 0xc
        int32_t eax_162 = sub_431880(0)
        
        if (eax_162 == 1)
            void* esi_40 = data_4bf67c
            
            if (*(esi_40 + 0x20) != 0)
                char* ecx_86 = data_4bf534
                void* edx_59 = esi_40 + 0x227460
                int32_t eax_163
                
                do
                    eax_163.b = *ecx_86
                    *edx_59 = eax_163.b
                    ecx_86 = &ecx_86[1]
                    edx_59 += 1
                while (eax_163.b != 0)
                *(esi_40 + 0x22744c) = esi_40 + 0x227460
                sub_43d220(esi_40 + 0x222f98, esi_40 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
                sub_4095a0(0)
                *(data_4bf67c + 0x10) = 1
                *(arg1 + 0x10) = 0x12
                sub_425330()
                return 0
            
            sub_423b40()
            sub_4321f0()
            int32_t eax_173 = sub_4277c0(data_4bf67c + 0x182c, 0, 0, "/BISLPM-65549/BISLPM-65549", 
                &data_22366c0, 0xd400, 0xffffffff)
            int32_t* esi_41 = data_4bf67c
            *esi_41 = eax_173
            char* ecx_85 = data_4bf540
            void* edx_58 = &esi_41[0x89d18]
            
            do
                eax_173.b = *ecx_85
                *edx_58 = eax_173.b
                ecx_85 = &ecx_85[1]
                edx_58 += 1
            while (eax_173.b != 0)
            
            esi_41[0x89d13] = &esi_41[0x89d18]
            sub_43d220(&esi_41[0x88be6], &esi_41[0x89d13], 1, 0, 0xffffffff, 0x1000)
            *(arg1 + 0x10) = 0x10
            sub_425330()
            return 0
        
        if (eax_162 == 2)
            void* ebx_55 = data_4bf67c
            char eax_166
            char edx_53
            edx_53:eax_166 = sx.q(*(ebx_55 + 0x1a3c))
            char i_9 = (eax_166 ^ edx_53) - edx_53
            *(ebx_55 + 0x18) = i_9
            
            if (i_9 s>= 0xa)
                *(ebx_55 + 0x18) = 9
            
            char* ecx_79 = data_4bf588
            void* edx_54 = ebx_55 + 0x227460
            
            do
                i_9 = *ecx_79
                *edx_54 = i_9
                ecx_79 = &ecx_79[1]
                edx_54 += 1
            while (i_9 != 0)
            
            char* eax_168 = *((sx.d(*(ebx_55 + 0x18)) << 2) + &data_4bf594)
            char* esi_38 = eax_168
            
            do
                ecx_79.b = *eax_168
                eax_168 = &eax_168[1]
            while (ecx_79.b != 0)
            
            void* eax_169 = eax_168 - esi_38
            void* edi_69 = ebx_55 + 0x22745f
            
            do
                ecx_79.b = *(edi_69 + 1)
                edi_69 += 1
            while (ecx_79.b != 0)
            
            int32_t esi_39
            int32_t edi_70
            edi_70, esi_39 = __builtin_memcpy(edi_69, esi_38, eax_169 u>> 2 << 2)
            __builtin_memcpy(edi_70, esi_39, eax_169 & 3)
            *(ebx_55 + 0x22744c) = ebx_55 + 0x227460
            sub_43d220(ebx_55 + 0x222f98, ebx_55 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(2)
            *(data_4bf67c + 0x10) = 0
            *(arg1 + 0x10) = 0x11
            sub_425330()
            return 0
    case 0xd
        data_e7e634 = 0xffffffff
        data_e7e630 = 0
        *(arg1 + 0x10) = 0x28
    label_434f33:
        int32_t eax_179 = data_e7e634
        
        if (eax_179 s< 3)
            data_e7e630 = 0
        else
            if (eax_179 - 3 != *(data_4bf67c + 0x10))
                sub_4095a0(3)
                *(data_4bf67c + 0x10) = data_e7e634 - 3
                eax_179 = data_e7e634
            
            if (eax_179 s< 3)
                data_e7e630 = 0
        
        if (sub_431880(1) == 2)
            void* ebx_60 = data_4bf67c
            char eax_184
            char edx_61
            edx_61:eax_184 = sx.q(*(ebx_60 + 0x1a3c))
            char i_10 = (eax_184 ^ edx_61) - edx_61
            *(ebx_60 + 0x18) = i_10
            
            if (i_10 s>= 0xa)
                *(ebx_60 + 0x18) = 9
            
            char* ecx_89 = data_4bf588
            void* edx_62 = ebx_60 + 0x227460
            
            do
                i_10 = *ecx_89
                *edx_62 = i_10
                ecx_89 = &ecx_89[1]
                edx_62 += 1
            while (i_10 != 0)
            
            char* eax_186 = *((sx.d(*(ebx_60 + 0x18)) << 2) + &data_4bf594)
            char* esi_44 = eax_186
            
            do
                ecx_89.b = *eax_186
                eax_186 = &eax_186[1]
            while (ecx_89.b != 0)
            
            void* eax_187 = eax_186 - esi_44
            void* edi_77 = ebx_60 + 0x22745f
            
            do
                ecx_89.b = *(edi_77 + 1)
                edi_77 += 1
            while (ecx_89.b != 0)
            
            int32_t esi_45
            int32_t edi_78
            edi_78, esi_45 = __builtin_memcpy(edi_77, esi_44, eax_187 u>> 2 << 2)
            __builtin_memcpy(edi_78, esi_45, eax_187 & 3)
            *(ebx_60 + 0x22744c) = ebx_60 + 0x227460
            sub_43d220(ebx_60 + 0x222f98, ebx_60 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(2)
            *(data_4bf67c + 0x10) = 0
            *(arg1 + 0x10) = 0x11
            sub_4322d0()
            sub_425330()
            return 0
        
        if ((data_2b53610 & 0xf00af0) != 0)
            goto label_434865
        
        int32_t eax_191 = data_2b53608
        
        if ((eax_191 & 0x2100) != 0 || data_e7e630 != 0)
            if (*(data_4bf67c + 0x10) == 0)
                sub_4095a0(0)
                void* eax_195 = data_4bf67c
                *(eax_195 + 0x1c) = 0
                *(eax_195 + 0x20) = 0
                *(arg1 + 0x10) = 0xe
                sub_4322d0()
                sub_425330()
                return 0
            
        label_435082:
            sub_4095a0(1)
            void* eax_193 = data_4bf67c
            *(eax_193 + 0x10) = 1
            *(eax_193 + 0x20) = 1
            *(arg1 + 0x10) = 0xe
            sub_4322d0()
            sub_425330()
            return 0
        
        if ((eax_191 & 0x4400) != 0)
            goto label_435082
        
        if (sub_45c4f0() != 0)
            goto label_435082
        
        sub_4322d0()
    case 0xe
        int32_t eax_197 = sub_431880(0)
        
        if (eax_197 == 1)
            void* esi_48 = data_4bf67c
            
            if (*(esi_48 + 0x20) != 0)
                char* ecx_102 = data_4bf534
                void* edx_69 = esi_48 + 0x227460
                int32_t eax_198
                
                do
                    eax_198.b = *ecx_102
                    *edx_69 = eax_198.b
                    ecx_102 = &ecx_102[1]
                    edx_69 += 1
                while (eax_198.b != 0)
                *(esi_48 + 0x22744c) = esi_48 + 0x227460
                sub_43d220(esi_48 + 0x222f98, esi_48 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
                sub_4095a0(0)
                *(data_4bf67c + 0x10) = 1
                *(arg1 + 0x10) = 0x12
                sub_425330()
                return 0
            
            int32_t eax_208 =
                sub_427d00(esi_48 + 0x182c, 0, 0, "BISLPM-65549", &data_22366c0, 0xd400)
            int32_t* esi_50 = data_4bf67c
            *esi_50 = eax_208
            char* ecx_101 = data_4bf590
            void* edx_68 = &esi_50[0x89d18]
            
            do
                eax_208.b = *ecx_101
                *edx_68 = eax_208.b
                ecx_101 = &ecx_101[1]
                edx_68 += 1
            while (eax_208.b != 0)
            
            esi_50[0x89d13] = &esi_50[0x89d18]
            sub_43d220(&esi_50[0x88be6], &esi_50[0x89d13], 1, 0, 0xffffffff, 0x1000)
            *(arg1 + 0x10) = 0xf
            sub_425330()
            return 0
        
        if (eax_197 == 2)
            void* ebx_65 = data_4bf67c
            char eax_201
            char edx_65
            edx_65:eax_201 = sx.q(*(ebx_65 + 0x1a3c))
            char i_11 = (eax_201 ^ edx_65) - edx_65
            *(ebx_65 + 0x18) = i_11
            
            if (i_11 s>= 0xa)
                *(ebx_65 + 0x18) = 9
            
            char* ecx_95 = data_4bf588
            void* edx_66 = ebx_65 + 0x227460
            
            do
                i_11 = *ecx_95
                *edx_66 = i_11
                ecx_95 = &ecx_95[1]
                edx_66 += 1
            while (i_11 != 0)
            
            char* eax_203 = *((sx.d(*(ebx_65 + 0x18)) << 2) + &data_4bf594)
            char* esi_46 = eax_203
            
            do
                ecx_95.b = *eax_203
                eax_203 = &eax_203[1]
            while (ecx_95.b != 0)
            
            void* eax_204 = eax_203 - esi_46
            void* edi_83 = ebx_65 + 0x22745f
            
            do
                ecx_95.b = *(edi_83 + 1)
                edi_83 += 1
            while (ecx_95.b != 0)
            
            int32_t esi_47
            int32_t edi_84
            edi_84, esi_47 = __builtin_memcpy(edi_83, esi_46, eax_204 u>> 2 << 2)
            __builtin_memcpy(edi_84, esi_47, eax_204 & 3)
            *(ebx_65 + 0x22744c) = ebx_65 + 0x227460
            sub_43d220(ebx_65 + 0x222f98, ebx_65 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(2)
            *(data_4bf67c + 0x10) = 0
            *(arg1 + 0x10) = 0x11
            sub_425330()
            return 0
    case 0xf
        int32_t eax_214 = sub_446f90(*data_4bf67c)
        
        if (eax_214 == 1)
            sub_423b40()
            sub_431c20(&data_2b5aa20)
            data_22366c0 = 0x48
            data_223c2bc = sub_441550(&data_22366c0, 0x5bfc)
            sub_480ea0(&data_2b5aa20, &data_22366c4, 0x590c)
            *data_4bf67c = sub_4277c0(data_4bf67c + 0x182c, 0, 0, "/BISLPM-65549/BISLPM-65549", 
                &data_22366c0, 0xd400, 0xffffffff)
            *(arg1 + 0x10) = 0x10
        else if (eax_214 == 2)
            void* ebx_70 = data_4bf67c
            char eax_218
            char edx_71
            edx_71:eax_218 = sx.q(*(ebx_70 + 0x1a3c))
            char i_12 = (eax_218 ^ edx_71) - edx_71
            *(ebx_70 + 0x18) = i_12
            
            if (i_12 s>= 0xa)
                *(ebx_70 + 0x18) = 9
            
            char* ecx_104 = data_4bf584
            void* edx_72 = ebx_70 + 0x227460
            
            do
                i_12 = *ecx_104
                *edx_72 = i_12
                ecx_104 = &ecx_104[1]
                edx_72 += 1
            while (i_12 != 0)
            
            char* eax_220 = *((sx.d(*(ebx_70 + 0x18)) << 2) + &data_4bf594)
            char* esi_53 = eax_220
            
            do
                ecx_104.b = *eax_220
                eax_220 = &eax_220[1]
            while (ecx_104.b != 0)
            
            void* eax_221 = eax_220 - esi_53
            void* edi_91 = ebx_70 + 0x22745f
            
            do
                ecx_104.b = *(edi_91 + 1)
                edi_91 += 1
            while (ecx_104.b != 0)
            
            int32_t esi_54
            int32_t edi_92
            edi_92, esi_54 = __builtin_memcpy(edi_91, esi_53, eax_221 u>> 2 << 2)
            __builtin_memcpy(edi_92, esi_54, eax_221 & 3)
            *(ebx_70 + 0x22744c) = ebx_70 + 0x227460
            sub_43d220(ebx_70 + 0x222f98, ebx_70 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(2)
            *(data_4bf67c + 0x10) = 0
            *(arg1 + 0x10) = 0x11
            sub_432290()
            sub_425330()
            return 0
        
        sub_432290()
        sub_425330()
        return 0
    case 0x10
        int32_t eax_229 = sub_446f90(*data_4bf67c)
        
        if (eax_229 == 1)
            sub_4095a0(8)
            void* esi_57 = data_4bf67c
            
            if (*(esi_57 + 8) == 1)
                *(arg1 + 0x10) = 0x14
                sub_432290()
                sub_425330()
                return 0
            
            char* ecx_117 = data_4bf560
            void* edx_80 = esi_57 + 0x227460
            char i_13
            
            do
                i_13 = *ecx_117
                *edx_80 = i_13
                ecx_117 = &ecx_117[1]
                edx_80 += 1
            while (i_13 != 0)
            *(esi_57 + 0x22744c) = esi_57 + 0x227460
            sub_43d220(esi_57 + 0x222f98, esi_57 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            *(arg1 + 0x10) = 0x13
        else if (eax_229 == 2)
            void* ebx_74 = data_4bf67c
            char eax_233
            char edx_77
            edx_77:eax_233 = sx.q(*(ebx_74 + 0x1a3c))
            char i_14 = (eax_233 ^ edx_77) - edx_77
            *(ebx_74 + 0x18) = i_14
            
            if (i_14 s>= 0xa)
                *(ebx_74 + 0x18) = 9
            
            char* ecx_111 = data_4bf574
            void* edx_78 = ebx_74 + 0x227460
            
            do
                i_14 = *ecx_111
                *edx_78 = i_14
                ecx_111 = &ecx_111[1]
                edx_78 += 1
            while (i_14 != 0)
            
            char* eax_235 = *((sx.d(*(ebx_74 + 0x18)) << 2) + &data_4bf594)
            char* esi_55 = eax_235
            int32_t ecx_112
            
            do
                ecx_112.b = *eax_235
                eax_235 = &eax_235[1]
            while (ecx_112.b != 0)
            
            void* eax_236 = eax_235 - esi_55
            void* edi_96 = ebx_74 + 0x22745f
            
            do
                ecx_112.b = *(edi_96 + 1)
                edi_96 += 1
            while (ecx_112.b != 0)
            
            int32_t esi_56
            int32_t edi_97
            edi_97, esi_56 = __builtin_memcpy(edi_96, esi_55, eax_236 u>> 2 << 2)
            __builtin_memcpy(edi_97, esi_56, eax_236 & 3)
            *(ebx_74 + 0x22744c) = ebx_74 + 0x227460
            sub_43d220(ebx_74 + 0x222f98, ebx_74 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(2)
            *(data_4bf67c + 0x10) = 0
            *(arg1 + 0x10) = 0x11
            sub_432290()
            sub_425330()
            return 0
        
        sub_432290()
        sub_425330()
        return 0
    case 0x11
        if ((data_2b53610 & 0xf00af0) != 0)
        label_434d18:
            sub_4095a0(3)
            void* eax_160 = data_4bf67c
            int32_t ecx_78
            ecx_78.b = *(eax_160 + 0x10) == 0
            *(eax_160 + 0x10) = ecx_78
            sub_4322d0()
            sub_425330()
            return 0
        
        int32_t eax_243 = data_2b53608
        
        if ((eax_243 & 0x2100) != 0 || data_e7e630 != 0)
            void* esi_61 = data_4bf67c
            
            if (*(esi_61 + 0x10) == 0)
                goto label_433d57
            
            char* ecx_120 = data_4bf534
            void* edx_82 = esi_61 + 0x227460
            
            do
                eax_243.b = *ecx_120
                *edx_82 = eax_243.b
                ecx_120 = &ecx_120[1]
                edx_82 += 1
            while (eax_243.b != 0)
            
            *(esi_61 + 0x22744c) = esi_61 + 0x227460
            sub_43d220(esi_61 + 0x222f98, esi_61 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(1)
            *(data_4bf67c + 0x10) = 1
            *(arg1 + 0x10) = 0x12
            sub_4322d0()
            sub_425330()
            return 0
        
        if ((eax_243 & 0x4400) != 0)
        label_4355be:
            void* esi_59 = data_4bf67c
            char* ecx_118 = data_4bf534
            void* edx_81 = esi_59 + 0x227460
            
            do
                eax_243.b = *ecx_118
                *edx_81 = eax_243.b
                ecx_118 = &ecx_118[1]
                edx_81 += 1
            while (eax_243.b != 0)
            
            *(esi_59 + 0x22744c) = esi_59 + 0x227460
            sub_43d220(esi_59 + 0x222f98, esi_59 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(1)
            *(data_4bf67c + 0x10) = 1
            *(arg1 + 0x10) = 0x12
            sub_4322d0()
            sub_425330()
            return 0
        
        if (sub_45c4f0() != 0)
            goto label_4355be
        
        sub_4322d0()
    case 0x12
        data_e7e634 = 0xffffffff
        data_e7e630 = 0
        *(arg1 + 0x10) = 0x29
    label_4356c6:
        int32_t eax_248 = data_e7e634
        
        if (eax_248 s< 1)
            data_e7e630 = 0
        else
            if (eax_248 - 1 != *(data_4bf67c + 0x10))
                sub_4095a0(3)
                *(data_4bf67c + 0x10) = data_e7e634 - 1
                eax_248 = data_e7e634
            
            if (eax_248 s< 1)
                data_e7e630 = 0
        
        if ((data_2b53610 & 0xf00af0) != 0)
            int32_t var_14_6 = 3
        label_4357ac:
            sub_4095a0(3)
            void* eax_254 = data_4bf67c
            int32_t ecx_123
            ecx_123.b = *(eax_254 + 0x10) == 0
            *(eax_254 + 0x10) = ecx_123
            sub_4322d0()
            sub_425330()
            return 0
        
        int32_t eax_250 = data_2b53608
        
        if ((eax_250 & 0x2100) != 0 || data_e7e630 != 0)
            if (*(data_4bf67c + 0x10) != 0)
            label_43574c:
                sub_4095a0(1)
                *(arg1 + 0x10) = 3
                sub_4322d0()
                sub_425330()
                return 0
            
            sub_4095a0(0)
            sub_4050d0(3, 0xa)
            *(data_4bf67c + 0x20) = 1
            *(arg1 + 0x10) = 0x1f
            sub_4322d0()
            sub_425330()
            return 0
        
        if ((eax_250 & 0x4400) != 0)
            goto label_43574c
        
        if (sub_45c4f0() != 0)
            goto label_43574c
        
        sub_4322d0()
    case 0x13
        if (sub_431880(1) != 2)
            if ((data_2b53610 & 0xf00af0) != 0 || (data_2b53608 & 0x6500) != 0)
                *(arg1 + 0x10) = 0x14
            else if (sub_45c4f0() != 0)
                *(arg1 + 0x10) = 0x14
            else if (sub_45c4e0() != 0)
                *(arg1 + 0x10) = 0x14
            
            sub_432290()
            sub_425330()
            return 0
        
        void* ebx_84 = data_4bf67c
        char eax_258
        char edx_88
        edx_88:eax_258 = sx.q(*(ebx_84 + 0x1a3c))
        char i_15 = (eax_258 ^ edx_88) - edx_88
        *(ebx_84 + 0x18) = i_15
        
        if (i_15 s>= 0xa)
            *(ebx_84 + 0x18) = 9
        
        char* ecx_124 = data_4bf588
        void* edx_89 = ebx_84 + 0x227460
        
        do
            i_15 = *ecx_124
            *edx_89 = i_15
            ecx_124 = &ecx_124[1]
            edx_89 += 1
        while (i_15 != 0)
        
        char* eax_260 = *((sx.d(*(ebx_84 + 0x18)) << 2) + &data_4bf594)
        char* esi_63 = eax_260
        char i_16
        
        do
            i_16 = *eax_260
            eax_260 = &eax_260[1]
        while (i_16 != 0)
        
        void* eax_261 = eax_260 - esi_63
        void* edi_110 = ebx_84 + 0x22745f
        
        do
            i_16 = *(edi_110 + 1)
            edi_110 += 1
        while (i_16 != 0)
        
        int32_t esi_64
        int32_t edi_111
        edi_111, esi_64 = __builtin_memcpy(edi_110, esi_63, eax_261 u>> 2 << 2)
        __builtin_memcpy(edi_111, esi_64, eax_261 & 3)
        *(ebx_84 + 0x22744c) = ebx_84 + 0x227460
        sub_43d220(ebx_84 + 0x222f98, ebx_84 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
        sub_4095a0(2)
        *(data_4bf67c + 0x10) = 0
        *(arg1 + 0x10) = 0x11
        sub_432290()
        sub_425330()
        return 0
    case 0x14
        int32_t eax_268 = *(data_4bf67c + 8)
        
        if (eax_268 == 0)
            sub_431970()
            sub_426700(zx.d(*(*(data_4bf67c + 0x1828) + 0x24fc)))
            *(arg1 + 0x10) = 0x15
            sub_425330()
            return 0
        
        if (eax_268 == 1)
            sub_431c20(&data_2b5aa20)
            data_22366c0 = 0x48
            data_223c2bc = sub_441550(&data_22366c0, 0x5bfc)
            sub_480ea0(&data_2b5aa20, &data_22366c4, 0x590c)
            void* esi_65 = data_4bf67c
            char* ecx_130 = data_4bf540
            void* edx_92 = esi_65 + 0x227460
            char i_17
            
            do
                i_17 = *ecx_130
                *edx_92 = i_17
                ecx_130 = &ecx_130[1]
                edx_92 += 1
            while (i_17 != 0)
            *(esi_65 + 0x22744c) = esi_65 + 0x227460
            sub_43d220(esi_65 + 0x222f98, esi_65 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            *(arg1 + 0x10) = 0x19
            sub_425330()
            return 0
    case 0x15
        if (sub_431880(1) == 2)
            void* ebx_90 = data_4bf67c
            char eax_278
            char edx_94
            edx_94:eax_278 = sx.q(*(ebx_90 + 0x1a3c))
            char i_18 = (eax_278 ^ edx_94) - edx_94
            *(ebx_90 + 0x18) = i_18
            
            if (i_18 s>= 0xa)
                *(ebx_90 + 0x18) = 9
            
            char* ecx_132 = data_4bf588
            void* edx_95 = ebx_90 + 0x227460
            
            do
                i_18 = *ecx_132
                *edx_95 = i_18
                ecx_132 = &ecx_132[1]
                edx_95 += 1
            while (i_18 != 0)
            
            char* eax_281 = *((sx.d(*(ebx_90 + 0x18)) << 2) + &data_4bf594)
            char* esi_67 = eax_281
            
            do
                ecx_132.b = *eax_281
                eax_281 = &eax_281[1]
            while (ecx_132.b != 0)
            
            void* eax_282 = eax_281 - esi_67
            void* edi_119 = ebx_90 + 0x22745f
            
            do
                ecx_132.b = *(edi_119 + 1)
                edi_119 += 1
            while (ecx_132.b != 0)
            
            int32_t esi_68
            int32_t edi_120
            edi_120, esi_68 = __builtin_memcpy(edi_119, esi_67, eax_282 u>> 2 << 2)
            __builtin_memcpy(edi_120, esi_68, eax_282 & 3)
            *(ebx_90 + 0x22744c) = ebx_90 + 0x227460
            sub_43d220(ebx_90 + 0x222f98, ebx_90 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(2)
            *(data_4bf67c + 0x10) = 0
            *(arg1 + 0x10) = 0x11
            sub_425330()
            return 0
        
        int32_t eax_285 = data_2b53608
        
        if ((eax_285 & 0x2100) != 0 || data_e7e638 != 0)
            data_e7e638 = 0
            sub_4095a0(0)
            void* esi_71 = data_4bf67c
            
            if (*((*(esi_71 + 0x1bb0) << 5) + esi_71 + 0x2d) != 0)
                sub_423b40()
                sub_431fe0(*(data_4bf67c + 0x1bb0))
                *(arg1 + 0x10) = 0x16
                sub_425330()
                return 0
            
            char* ecx_140 = data_4bf548
            void* edx_100 = esi_71 + 0x227460
            char i_19
            
            do
                i_19 = *ecx_140
                *edx_100 = i_19
                ecx_140 = &ecx_140[1]
                edx_100 += 1
            while (i_19 != 0)
            *(esi_71 + 0x22744c) = esi_71 + 0x227460
            sub_43d220(esi_71 + 0x222f98, esi_71 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            *(data_4bf67c + 0x10) = 1
            *(arg1 + 0x10) = 0x1e
            sub_425330()
            return 0
        
        if ((eax_285 & 0x400) != 0)
            sub_4095a0(0)
            sub_4050d0(3, 0xa)
            *(data_4bf67c + 0x20) = 3
            *(arg1 + 0x10) = 0x1f
            sub_425330()
            return 0
        
        int32_t eax_288
        
        if ((eax_285 & 0x4400) == 0)
            eax_288 = sub_45c4f0()
        
        if ((eax_285 & 0x4400) != 0 || eax_288 != 0)
            sub_4095a0(1)
            sub_4050d0(3, 0xa)
            *(data_4bf67c + 0x20) = 1
            *(arg1 + 0x10) = 0x1f
            sub_425330()
            return 0
        
        if ((data_2b53608.b & 8) == 0)
        label_435b96:
            sub_4263d0()
            sub_425330()
            return 0
        
        sub_4095a0(4)
        sub_432350()
        void* esi_69 = data_4bf67c
        *(esi_69 + 0x14) = 0
        *(esi_69 + 0x1bb8) = 8
        char* ecx_138 = data_4bf5c8
        void* edx_97 = esi_69 + 0x227460
        char i_20
        
        do
            i_20 = *ecx_138
            *edx_97 = i_20
            ecx_138 = &ecx_138[1]
            edx_97 += 1
        while (i_20 != 0)
        *(esi_69 + 0x22744c) = esi_69 + 0x227460
        sub_43d220(esi_69 + 0x222f98, esi_69 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
        *(arg1 + 0x10) = 0x21
        sub_425330()
        return 0
    case 0x16
        if (data_2b60340 == 1)
            *(arg1 + 0x10) = 0x18
            sub_425330()
            return 0
        
        void* esi_73 = data_4bf67c
        char* ecx_142 = data_4bf570
        char* edx_102 = esi_73 + 0x227460
        int32_t eax
        
        do
            eax.b = *ecx_142
            *edx_102 = eax.b
            ecx_142 = &ecx_142[1]
            edx_102 = &edx_102[1]
        while (eax.b != 0)
        *(esi_73 + 0x22744c) = esi_73 + 0x227460
        sub_43d220(esi_73 + 0x222f98, esi_73 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
        sub_4095a0(2)
        *(data_4bf67c + 0x10) = 1
        *(arg1 + 0x10) = 0x17
        sub_425330()
        return 0
    case 0x17
        data_e7e634 = 0xffffffff
        data_e7e630 = 0
        *(arg1 + 0x10) = 0x2a
    label_435d20:
        int32_t eax_301 = data_e7e634
        
        if (eax_301 s< 2)
            data_e7e630 = 0
        else
            if (eax_301 - 2 != *(data_4bf67c + 0x10))
                sub_4095a0(3)
                *(data_4bf67c + 0x10) = data_e7e634 - 2
                eax_301 = data_e7e634
            
            if (eax_301 s< 2)
                data_e7e630 = 0
        
        if (sub_431880(1) == 2)
            void* ebx_101 = data_4bf67c
            char eax_306
            char edx_104
            edx_104:eax_306 = sx.q(*(ebx_101 + 0x1a3c))
            char i_21 = (eax_306 ^ edx_104) - edx_104
            *(ebx_101 + 0x18) = i_21
            
            if (i_21 s>= 0xa)
                *(ebx_101 + 0x18) = 9
            
            char* ecx_145 = data_4bf588
            void* edx_105 = ebx_101 + 0x227460
            
            do
                i_21 = *ecx_145
                *edx_105 = i_21
                ecx_145 = &ecx_145[1]
                edx_105 += 1
            while (i_21 != 0)
            
            char* eax_308 = *((sx.d(*(ebx_101 + 0x18)) << 2) + &data_4bf594)
            char* esi_75 = eax_308
            
            do
                ecx_145.b = *eax_308
                eax_308 = &eax_308[1]
            while (ecx_145.b != 0)
            
            void* eax_309 = eax_308 - esi_75
            void* edi_134 = ebx_101 + 0x22745f
            
            do
                ecx_145.b = *(edi_134 + 1)
                edi_134 += 1
            while (ecx_145.b != 0)
            
            int32_t esi_76
            int32_t edi_135
            edi_135, esi_76 = __builtin_memcpy(edi_134, esi_75, eax_309 u>> 2 << 2)
            __builtin_memcpy(edi_135, esi_76, eax_309 & 3)
            *(ebx_101 + 0x22744c) = ebx_101 + 0x227460
            sub_43d220(ebx_101 + 0x222f98, ebx_101 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(2)
            *(data_4bf67c + 0x10) = 0
            *(arg1 + 0x10) = 0x11
            sub_4322d0()
            sub_425330()
            return 0
        
        if ((data_2b53610 & 0xf00af0) != 0)
            int32_t var_14_9 = 3
            goto label_4357ac
        
        int32_t eax_313 = data_2b53608
        
        if ((eax_313 & 0x2100) != 0 || data_e7e630 != 0)
            if (*(data_4bf67c + 0x10) == 0)
                sub_4095a0(0)
                *(arg1 + 0x10) = 0x18
                sub_4322d0()
                sub_425330()
                return 0
            
        label_435e74:
            sub_4095a0(1)
            *(arg1 + 0x10) = 0x15
            sub_4322d0()
            sub_425330()
            return 0
        
        if ((eax_313 & 0x4400) != 0)
            goto label_435e74
        
        if (sub_45c4f0() != 0)
            goto label_435e74
        
        sub_4322d0()
    case 0x18
        int32_t eax_317 = sub_431880(0)
        
        if (eax_317 == 1)
            void* esi_79 = data_4bf67c
            char* ecx_158 = data_4bf540
            void* edx_111 = esi_79 + 0x227460
            int32_t eax_318
            
            do
                eax_318.b = *ecx_158
                *edx_111 = eax_318.b
                ecx_158 = &ecx_158[1]
                edx_111 += 1
            while (eax_318.b != 0)
            *(esi_79 + 0x22744c) = esi_79 + 0x227460
            sub_43d220(esi_79 + 0x222f98, esi_79 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            *(arg1 + 0x10) = 0x19
            sub_425330()
            return 0
        
        if (eax_317 == 2)
            void* ebx_106 = data_4bf67c
            char eax_321
            char edx_108
            edx_108:eax_321 = sx.q(*(ebx_106 + 0x1a3c))
            char i_22 = (eax_321 ^ edx_108) - edx_108
            *(ebx_106 + 0x18) = i_22
            
            if (i_22 s>= 0xa)
                *(ebx_106 + 0x18) = 9
            
            void* edx_109 = ebx_106 + 0x227460
            char* ecx_152 = data_4bf574
            
            do
                i_22 = *ecx_152
                *edx_109 = i_22
                ecx_152 = &ecx_152[1]
                edx_109 += 1
            while (i_22 != 0)
            
            char* eax_323 = *((sx.d(*(ebx_106 + 0x18)) << 2) + &data_4bf594)
            char* esi_77 = eax_323
            
            do
                ecx_152.b = *eax_323
                eax_323 = &eax_323[1]
            while (ecx_152.b != 0)
            
            void* eax_324 = eax_323 - esi_77
            void* edi_140 = ebx_106 + 0x22745f
            
            do
                ecx_152.b = *(edi_140 + 1)
                edi_140 += 1
            while (ecx_152.b != 0)
            
            int32_t esi_78
            int32_t edi_141
            edi_141, esi_78 = __builtin_memcpy(edi_140, esi_77, eax_324 u>> 2 << 2)
            __builtin_memcpy(edi_141, esi_78, eax_324 & 3)
            *(ebx_106 + 0x22744c) = ebx_106 + 0x227460
            sub_43d220(ebx_106 + 0x222f98, ebx_106 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(2)
            *(data_4bf67c + 0x10) = 0
            *(arg1 + 0x10) = 0x11
            sub_425330()
            return 0
    case 0x19
        *data_4bf67c = sub_4277c0(data_4bf67c + 0x182c, 0, 0, "/BISLPM-65549/BISLPM-65549", 
            &data_22366c0, 0x5c00, 0)
        *(arg1 + 0x10) = 0x1a
    label_43603c:
        int32_t eax_332 = sub_446f90(*data_4bf67c)
        
        if (eax_332 == 1)
            int32_t eax_343 = *(data_4bf67c + 8)
            
            if (eax_343 == 0)
                *(arg1 + 0x10) = 0x1b
            else if (eax_343 == 1)
                sub_4095a0(8)
                sub_4050d0(3, 0xa)
                *(data_4bf67c + 0x20) = 1
                *(arg1 + 0x10) = 0x1f
                sub_432290()
                sub_425330()
                return 0
        else if (eax_332 == 2)
            void* ebx_110 = data_4bf67c
            char eax_336
            char edx_115
            edx_115:eax_336 = sx.q(*(ebx_110 + 0x1a3c))
            char i_23 = (eax_336 ^ edx_115) - edx_115
            *(ebx_110 + 0x18) = i_23
            
            if (i_23 s>= 0xa)
                *(ebx_110 + 0x18) = 9
            
            char* ecx_160 = data_4bf574
            void* edx_116 = ebx_110 + 0x227460
            
            do
                i_23 = *ecx_160
                *edx_116 = i_23
                ecx_160 = &ecx_160[1]
                edx_116 += 1
            while (i_23 != 0)
            
            char* eax_338 = *((sx.d(*(ebx_110 + 0x18)) << 2) + &data_4bf594)
            char* esi_81 = eax_338
            int32_t ecx_161
            
            do
                ecx_161.b = *eax_338
                eax_338 = &eax_338[1]
            while (ecx_161.b != 0)
            
            void* eax_339 = eax_338 - esi_81
            void* edi_146 = ebx_110 + 0x22745f
            
            do
                ecx_161.b = *(edi_146 + 1)
                edi_146 += 1
            while (ecx_161.b != 0)
            
            int32_t esi_82
            int32_t edi_147
            edi_147, esi_82 = __builtin_memcpy(edi_146, esi_81, eax_339 u>> 2 << 2)
            __builtin_memcpy(edi_147, esi_82, eax_339 & 3)
            *(ebx_110 + 0x22744c) = ebx_110 + 0x227460
            sub_43d220(ebx_110 + 0x222f98, ebx_110 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(2)
            *(data_4bf67c + 0x10) = 0
            *(arg1 + 0x10) = 0x11
            sub_432290()
            sub_425330()
            return 0
        
        sub_432290()
        sub_425330()
        return 0
    case 0x1a
        goto label_43603c
    case 0x1b
        void* ecx_167 = data_4bf67c
        int32_t eax_350 = (*(ecx_167 + 0x1bb0) + 0x2e) << 9
        *data_4bf67c = sub_4277c0(ecx_167 + 0x182c, 0, 0, "/BISLPM-65549/BISLPM-65549", 
            &(&data_22366c0)[(eax_350 u>> 2) * 2], 0x200, eax_350)
        *(arg1 + 0x10) = 0x1c
    label_4361cd:
        int32_t eax_355 = sub_446f90(*data_4bf67c)
        
        if (eax_355 == 1)
            if (*(data_4bf67c + 8) u<= 1)
                sub_431970()
                sub_426390(*(data_4bf67c + 0x1bb0))
                void* eax_367 = data_4bf67c
                int32_t ecx_179 = (*(eax_367 + 0x1bbc) + *(eax_367 + 0x1bb4)) & 0x80000007
                
                if (ecx_179 s< 0)
                    ecx_179 = ((ecx_179 - 1) | 0xfffffff8) + 1
                
                sub_425c10(*(eax_367 + 0x1bb0), ecx_179)
                sub_4095a0(8)
                void* esi_85 = data_4bf67c
                char* ecx_182 = data_4bf558
                void* edx_125 = esi_85 + 0x227460
                char i_24
                
                do
                    i_24 = *ecx_182
                    *edx_125 = i_24
                    ecx_182 = &ecx_182[1]
                    edx_125 += 1
                while (i_24 != 0)
                *(esi_85 + 0x22744c) = esi_85 + 0x227460
                sub_43d220(esi_85 + 0x222f98, esi_85 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
                *(arg1 + 0x10) = 0x1d
        else if (eax_355 == 2)
            void* ebx_115 = data_4bf67c
            char eax_359
            char edx_120
            edx_120:eax_359 = sx.q(*(ebx_115 + 0x1a3c))
            char i_25 = (eax_359 ^ edx_120) - edx_120
            *(ebx_115 + 0x18) = i_25
            
            if (i_25 s>= 0xa)
                *(ebx_115 + 0x18) = 9
            
            char* ecx_170 = data_4bf574
            void* edx_121 = ebx_115 + 0x227460
            
            do
                i_25 = *ecx_170
                *edx_121 = i_25
                ecx_170 = &ecx_170[1]
                edx_121 += 1
            while (i_25 != 0)
            
            char* eax_361 = *((sx.d(*(ebx_115 + 0x18)) << 2) + &data_4bf594)
            char* esi_83 = eax_361
            int32_t ecx_171
            
            do
                ecx_171.b = *eax_361
                eax_361 = &eax_361[1]
            while (ecx_171.b != 0)
            
            void* eax_362 = eax_361 - esi_83
            void* edi_152 = ebx_115 + 0x22745f
            
            do
                ecx_171.b = *(edi_152 + 1)
                edi_152 += 1
            while (ecx_171.b != 0)
            
            int32_t esi_84
            int32_t edi_153
            edi_153, esi_84 = __builtin_memcpy(edi_152, esi_83, eax_362 u>> 2 << 2)
            __builtin_memcpy(edi_153, esi_84, eax_362 & 3)
            *(ebx_115 + 0x22744c) = ebx_115 + 0x227460
            sub_43d220(ebx_115 + 0x222f98, ebx_115 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(2)
            *(data_4bf67c + 0x10) = 0
            *(arg1 + 0x10) = 0x11
            sub_432290()
            sub_425330()
            return 0
        
        sub_432290()
        sub_425330()
        return 0
    case 0x1c
        goto label_4361cd
    case 0x1d
        if (sub_431880(1) != 2)
            if ((data_2b53610 & 0xf00af0) != 0 || (data_2b53608 & 0x6500) != 0)
                sub_4095a0(0)
                *(arg1 + 0x10) = 0x15
            else if (sub_45c4f0() != 0)
                sub_4095a0(0)
                *(arg1 + 0x10) = 0x15
            else if (sub_45c4e0() != 0)
                sub_4095a0(0)
                *(arg1 + 0x10) = 0x15
            
            sub_432290()
            sub_425330()
            return 0
        
        void* ebx_120 = data_4bf67c
        char eax_372
        char edx_126
        edx_126:eax_372 = sx.q(*(ebx_120 + 0x1a3c))
        char i_26 = (eax_372 ^ edx_126) - edx_126
        *(ebx_120 + 0x18) = i_26
        
        if (i_26 s>= 0xa)
            *(ebx_120 + 0x18) = 9
        
        char* ecx_183 = data_4bf588
        void* edx_127 = ebx_120 + 0x227460
        
        do
            i_26 = *ecx_183
            *edx_127 = i_26
            ecx_183 = &ecx_183[1]
            edx_127 += 1
        while (i_26 != 0)
        
        char* eax_375 = *((sx.d(*(ebx_120 + 0x18)) << 2) + &data_4bf594)
        char* esi_87 = eax_375
        
        do
            ecx_183.b = *eax_375
            eax_375 = &eax_375[1]
        while (ecx_183.b != 0)
        
        void* eax_376 = eax_375 - esi_87
        void* edi_158 = ebx_120 + 0x22745f
        
        do
            ecx_183.b = *(edi_158 + 1)
            edi_158 += 1
        while (ecx_183.b != 0)
        
        int32_t esi_88
        int32_t edi_159
        edi_159, esi_88 = __builtin_memcpy(edi_158, esi_87, eax_376 u>> 2 << 2)
        __builtin_memcpy(edi_159, esi_88, eax_376 & 3)
        *(ebx_120 + 0x22744c) = ebx_120 + 0x227460
        sub_43d220(ebx_120 + 0x222f98, ebx_120 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
        sub_4095a0(2)
        *(data_4bf67c + 0x10) = 0
        *(arg1 + 0x10) = 0x11
        sub_432290()
        sub_425330()
        return 0
    case 0x1e
        data_e7e634 = 0xffffffff
        data_e7e630 = 0
        *(arg1 + 0x10) = 0x2b
    label_43649f:
        int32_t eax_382 = data_e7e634
        
        if (eax_382 s< 1)
            data_e7e630 = 0
        else
            if (eax_382 - 1 != *(data_4bf67c + 0x10))
                sub_4095a0(3)
                *(data_4bf67c + 0x10) = data_e7e634 - 1
                eax_382 = data_e7e634
            
            if (eax_382 s< 1)
                data_e7e630 = 0
        
        if (sub_431880(1) == 2)
            void* ebx_124 = data_4bf67c
            char eax_387
            char edx_130
            edx_130:eax_387 = sx.q(*(ebx_124 + 0x1a3c))
            char i_27 = (eax_387 ^ edx_130) - edx_130
            *(ebx_124 + 0x18) = i_27
            
            if (i_27 s>= 0xa)
                *(ebx_124 + 0x18) = 9
            
            char* ecx_191 = data_4bf588
            void* edx_131 = ebx_124 + 0x227460
            
            do
                i_27 = *ecx_191
                *edx_131 = i_27
                ecx_191 = &ecx_191[1]
                edx_131 += 1
            while (i_27 != 0)
            
            char* eax_389 = *((sx.d(*(ebx_124 + 0x18)) << 2) + &data_4bf594)
            char* esi_89 = eax_389
            
            do
                ecx_191.b = *eax_389
                eax_389 = &eax_389[1]
            while (ecx_191.b != 0)
            
            void* eax_390 = eax_389 - esi_89
            void* edi_164 = ebx_124 + 0x22745f
            
            do
                ecx_191.b = *(edi_164 + 1)
                edi_164 += 1
            while (ecx_191.b != 0)
            
            int32_t esi_90
            int32_t edi_165
            edi_165, esi_90 = __builtin_memcpy(edi_164, esi_89, eax_390 u>> 2 << 2)
            __builtin_memcpy(edi_165, esi_90, eax_390 & 3)
            *(ebx_124 + 0x22744c) = ebx_124 + 0x227460
            sub_43d220(ebx_124 + 0x222f98, ebx_124 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(2)
            *(data_4bf67c + 0x10) = 0
            *(arg1 + 0x10) = 0x11
            sub_4322d0()
            sub_425330()
            return 0
        
        if ((data_2b53610 & 0xf00af0) != 0)
            goto label_433daa
        
        int32_t eax_394 = data_2b53608
        
        if ((eax_394 & 0x2100) != 0 || data_e7e630 != 0)
            if (*(data_4bf67c + 0x10) != 0)
            label_4365f4:
                sub_4095a0(1)
                *(arg1 + 0x10) = 0x15
                sub_4322d0()
                sub_425330()
                return 0
            
            sub_4095a0(0)
            sub_423b40()
            sub_431fe0(*(data_4bf67c + 0x1bb0))
            *(arg1 + 0x10) = 0x16
            sub_4322d0()
            sub_425330()
            return 0
        
        if ((eax_394 & 0x4400) != 0)
            goto label_4365f4
        
        if (sub_45c4f0() != 0)
            goto label_4365f4
        
        sub_4322d0()
    case 0x1f
        if (sub_405130() == 1)
            sub_405e20()
            return *(data_4bf67c + 0x20)
    case 0x20
        if (sub_431880(1) == 2)
            void* ebx_130 = data_4bf67c
            char eax_404
            char edx_134
            edx_134:eax_404 = sx.q(*(ebx_130 + 0x1a3c))
            char i_28 = (eax_404 ^ edx_134) - edx_134
            *(ebx_130 + 0x18) = i_28
            
            if (i_28 s>= 0xa)
                *(ebx_130 + 0x18) = 9
            
            void* ecx_198 = data_4bf588
            void* edx_135 = ebx_130 + 0x227460
            
            do
                i_28 = *ecx_198
                *edx_135 = i_28
                ecx_198 += 1
                edx_135 += 1
            while (i_28 != 0)
            
            char* eax_406 = *((sx.d(*(ebx_130 + 0x18)) << 2) + &data_4bf594)
            char* esi_91 = eax_406
            int32_t ecx_199
            
            do
                ecx_199.b = *eax_406
                eax_406 = &eax_406[1]
            while (ecx_199.b != 0)
            
            void* eax_407 = eax_406 - esi_91
            void* edi_172 = ebx_130 + 0x22745f
            
            do
                ecx_199.b = *(edi_172 + 1)
                edi_172 += 1
            while (ecx_199.b != 0)
            
            int32_t esi_92
            int32_t edi_173
            edi_173, esi_92 = __builtin_memcpy(edi_172, esi_91, eax_407 u>> 2 << 2)
            __builtin_memcpy(edi_173, esi_92, eax_407 & 3)
            *(ebx_130 + 0x22744c) = ebx_130 + 0x227460
            sub_43d220(ebx_130 + 0x222f98, ebx_130 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(2)
            void* eax_409 = data_4bf67c
            *(eax_409 + 0x10) = 0
            *(eax_409 + 0x1bb8) = 0
            *(arg1 + 0x10) = 0x11
            sub_425330()
            return 0
        
        int32_t eax_411
        
        if ((data_2b53608 & 0x2100) == 0)
            eax_411 = sub_45c4e0()
        
        if ((data_2b53608 & 0x2100) != 0 || eax_411 != 0)
            sub_4095a0(0)
            void* esi_95 = data_4bf67c
            char* ecx_205 = data_4bf5c8
            void* edx_138 = esi_95 + 0x227460
            char i_29
            
            do
                i_29 = *ecx_205
                *edx_138 = i_29
                ecx_205 = &ecx_205[1]
                edx_138 += 1
            while (i_29 != 0)
            *(esi_95 + 0x22744c) = esi_95 + 0x227460
            sub_43d220(esi_95 + 0x222f98, esi_95 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            *(arg1 + 0x10) = 0x21
            sub_425330()
            return 0
        
        int32_t eax_412
        
        if ((data_2b53608 & 0x4400) == 0)
            eax_412 = sub_45c4f0()
        
        if ((data_2b53608 & 0x4400) == 0 && eax_412 == 0 && (data_2b53608.b & 8) == 0)
            goto label_435b96
        
        sub_4095a0(7)
        void* esi_93 = data_4bf67c
        *(esi_93 + 0x10) = 1
        char* ecx_204 = data_4bf5d0
        void* edx_137 = esi_93 + 0x227460
        char i_30
        
        do
            i_30 = *ecx_204
            *edx_137 = i_30
            ecx_204 = &ecx_204[1]
            edx_137 += 1
        while (i_30 != 0)
        *(esi_93 + 0x22744c) = esi_93 + 0x227460
        sub_43d220(esi_93 + 0x222f98, esi_93 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
        *(arg1 + 0x10) = 0x23
        sub_425330()
        return 0
    case 0x21
        data_e7e634 = 0xffffffff
        data_e7e630 = 0
        *(arg1 + 0x10) = 0x2c
    label_43686e:
        int32_t eax_417 = data_e7e634
        
        if (eax_417 s< 0)
            data_e7e630 = 0
        else
            if (eax_417 != *(data_4bf67c + 0x10))
                sub_4095a0(3)
                *(data_4bf67c + 0x10) = data_e7e634
                eax_417 = data_e7e634
            
            if (eax_417 s< 0)
                data_e7e630 = 0
        
        *(data_4bf67c + 0x22745c) = 1
        void* ebx_138
        
        if (sub_431880(1) != 2)
            int32_t eax_427 = data_2b53610
            
            if ((eax_427 & 0x900890) != 0)
                sub_4095a0(3)
                ebx_138 = data_4bf67c
                *(ebx_138 + 0x14) = mods.dp.d(sx.q(*(ebx_138 + 0x14) + 4), 5)
            else if ((eax_427 & 0x600260) == 0)
                int32_t eax_436 = data_2b53608
                
                if ((eax_436 & 0x2100) != 0 || data_e7e630 != 0)
                    ebx_138 = data_4bf67c
                    
                    switch (*(ebx_138 + 0x14))
                        case 0
                            if (*((*(ebx_138 + 0x1bb0) << 5) + ebx_138 + 0x2d) == 2)
                                sub_4095a0(7)
                                ebx_138 = data_4bf67c
                            else
                                sub_4095a0(0)
                                ebx_138 = data_4bf67c
                                __builtin_memcpy(ebx_138 + 0x23b860, 
                                    (*(ebx_138 + 0x1bb0) << 9) + &data_223c2c0, 0x200)
                                *(arg1 + 0x10) = 0x20
                        case 1
                            sub_4095a0(0)
                            void* eax_440 = data_4bf67c
                            __builtin_memcpy((*(eax_440 + 0x1bb0) << 9) + &data_223c2c0, 
                                eax_440 + 0x23b860, 0x200)
                            sub_423b40()
                            sub_431970()
                            sub_426390(*(data_4bf67c + 0x1bb0))
                            void* eax_442 = data_4bf67c
                            int32_t edx_151 =
                                (*(eax_442 + 0x1bbc) + *(eax_442 + 0x1bb4)) & 0x80000007
                            
                            if (edx_151 s< 0)
                                edx_151 = ((edx_151 - 1) | 0xfffffff8) + 1
                            
                            sub_425c10(*(eax_442 + 0x1bb0), edx_151)
                            *(arg1 + 0x10) = 0x20
                            ebx_138 = data_4bf67c
                        case 2
                            sub_4095a0(0)
                            sub_480cf0((*(data_4bf67c + 0x1bb0) << 9) + &data_223c2c0, 0, 0x200)
                            sub_423b40()
                            sub_431970()
                            sub_426390(*(data_4bf67c + 0x1bb0))
                            void* eax_445 = data_4bf67c
                            int32_t edx_159 =
                                (*(eax_445 + 0x1bbc) + *(eax_445 + 0x1bb4)) & 0x80000007
                            
                            if (edx_159 s< 0)
                                edx_159 = ((edx_159 - 1) | 0xfffffff8) + 1
                            
                            sub_425c10(*(eax_445 + 0x1bb0), edx_159)
                            *(arg1 + 0x10) = 0x20
                            ebx_138 = data_4bf67c
                        case 3
                            sub_4095a0(0)
                            void* esi_103 = data_4bf67c
                            *(esi_103 + 0x10) = 1
                            char* ecx_216 = data_4bf5cc
                            void* edx_162 = esi_103 + 0x227460
                            char i_31
                            
                            do
                                i_31 = *ecx_216
                                *edx_162 = i_31
                                ecx_216 = &ecx_216[1]
                                edx_162 += 1
                            while (i_31 != 0)
                            *(esi_103 + 0x22744c) = esi_103 + 0x227460
                            sub_43d220(esi_103 + 0x222f98, esi_103 + 0x22744c, 1, 0, 0xffffffff, 
                                0x1000)
                            *(arg1 + 0x10) = 0x22
                            ebx_138 = data_4bf67c
                            *(ebx_138 + 0x22745c) = 0
                        case 4
                            sub_4095a0(7)
                            void* esi_105 = data_4bf67c
                            *(esi_105 + 0x10) = 1
                            char* ecx_217 = data_4bf5d0
                            void* edx_163 = esi_105 + 0x227460
                            char i_32
                            
                            do
                                i_32 = *ecx_217
                                *edx_163 = i_32
                                ecx_217 = &ecx_217[1]
                                edx_163 += 1
                            while (i_32 != 0)
                            *(esi_105 + 0x22744c) = esi_105 + 0x227460
                            sub_43d220(esi_105 + 0x222f98, esi_105 + 0x22744c, 1, 0, 0xffffffff, 
                                0x1000)
                            *(arg1 + 0x10) = 0x23
                            ebx_138 = data_4bf67c
                            *(ebx_138 + 0x22745c) = 0
                else
                    int32_t eax_437
                    
                    if ((eax_436 & 0x4400) == 0)
                        eax_437 = sub_45c4f0()
                    
                    if ((eax_436 & 0x4400) == 0 && eax_437 == 0)
                        ebx_138 = data_4bf67c
                    else
                        sub_4095a0(1)
                        *(arg1 + 0x10) = 0x20
                        ebx_138 = data_4bf67c
            else
                sub_4095a0(3)
                ebx_138 = data_4bf67c
                *(ebx_138 + 0x14) = mods.dp.d(sx.q(*(ebx_138 + 0x14) + 6), 5)
        else
            void* ebx_135 = data_4bf67c
            char eax_421
            char edx_140
            edx_140:eax_421 = sx.q(*(ebx_135 + 0x1a3c))
            char i_33 = (eax_421 ^ edx_140) - edx_140
            *(ebx_135 + 0x18) = i_33
            
            if (i_33 s>= 0xa)
                *(ebx_135 + 0x18) = 9
            
            char* ecx_208 = data_4bf588
            void* edx_141 = ebx_135 + 0x227460
            
            do
                i_33 = *ecx_208
                *edx_141 = i_33
                ecx_208 = &ecx_208[1]
                edx_141 += 1
            while (i_33 != 0)
            
            char* eax_423 = *((sx.d(*(ebx_135 + 0x18)) << 2) + &data_4bf594)
            char* esi_97 = eax_423
            
            do
                ecx_208.b = *eax_423
                eax_423 = &eax_423[1]
            while (ecx_208.b != 0)
            
            void* eax_424 = eax_423 - esi_97
            void* edi_180 = ebx_135 + 0x22745f
            
            do
                ecx_208.b = *(edi_180 + 1)
                edi_180 += 1
            while (ecx_208.b != 0)
            
            int32_t esi_98
            int32_t edi_181
            edi_181, esi_98 = __builtin_memcpy(edi_180, esi_97, eax_424 u>> 2 << 2)
            __builtin_memcpy(edi_181, esi_98, eax_424 & 3)
            *(ebx_135 + 0x22744c) = ebx_135 + 0x227460
            sub_43d220(ebx_135 + 0x222f98, ebx_135 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(2)
            ebx_138 = data_4bf67c
            *(ebx_138 + 0x10) = 0
            *(ebx_138 + 0x1bb8) = 0
            *(arg1 + 0x10) = 0x11
        
        if (*(ebx_138 + 0x22745c) == 1)
            sub_432310(5)
            sub_425330()
            return 0
    case 0x22, 0x23
        data_e7e634 = 0xffffffff
        data_e7e630 = 0
        int16_t ecx_218
        ecx_218.b = *(arg1 + 0x10) == 0x22
        *(arg1 + 0x10) = ecx_218 + 0x2d
    label_436c9d:
        int32_t eax_449 = data_e7e634
        
        if (eax_449 s< 2)
            data_e7e630 = 0
        else
            if (eax_449 - 2 != *(data_4bf67c + 0x10))
                sub_4095a0(3)
                *(data_4bf67c + 0x10) = data_e7e634 - 2
                eax_449 = data_e7e634
            
            if (eax_449 s< 2)
                data_e7e630 = 0
        
        if (sub_431880(1) == 2)
            void* ebx_141 = data_4bf67c
            char eax_453
            char edx_167
            edx_167:eax_453 = sx.q(*(ebx_141 + 0x1a3c))
            char i_34 = (eax_453 ^ edx_167) - edx_167
            *(ebx_141 + 0x18) = i_34
            
            if (i_34 s>= 0xa)
                *(ebx_141 + 0x18) = 9
            
            void* edx_168 = ebx_141 + 0x227460
            char* ecx_222 = data_4bf588
            
            do
                i_34 = *ecx_222
                *edx_168 = i_34
                ecx_222 = &ecx_222[1]
                edx_168 += 1
            while (i_34 != 0)
            
            char* eax_455 = *((sx.d(*(ebx_141 + 0x18)) << 2) + &data_4bf594)
            char* esi_107 = eax_455
            int32_t ecx_223
            
            do
                ecx_223.b = *eax_455
                eax_455 = &eax_455[1]
            while (ecx_223.b != 0)
            
            void* eax_456 = eax_455 - esi_107
            void* edi_190 = ebx_141 + 0x22745f
            
            do
                ecx_223.b = *(edi_190 + 1)
                edi_190 += 1
            while (ecx_223.b != 0)
            
            int32_t esi_108
            int32_t edi_191
            edi_191, esi_108 = __builtin_memcpy(edi_190, esi_107, eax_456 u>> 2 << 2)
            __builtin_memcpy(edi_191, esi_108, eax_456 & 3)
            *(ebx_141 + 0x22744c) = ebx_141 + 0x227460
            sub_43d220(ebx_141 + 0x222f98, ebx_141 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
            sub_4095a0(2)
            void* eax_458 = data_4bf67c
            *(eax_458 + 0x10) = 0
            *(eax_458 + 0x1bb8) = 0
            *(arg1 + 0x10) = 0x11
            sub_4322d0()
            sub_425330()
            return 0
        
        if ((data_2b53610 & 0xf00af0) != 0)
            goto label_436e92
        
        int32_t eax_460 = data_2b53608
        
        if ((eax_460 & 0x2100) != 0 || data_e7e630 != 0)
            if (*(data_4bf67c + 0x10) != 0)
            label_436df7:
                sub_4095a0(1)
                *(arg1 + 0x10) = 0x20
                sub_4322d0()
                sub_425330()
                return 0
            
            sub_4095a0(0)
            
            if (*(arg1 + 0x10) != 0x22)
                void* esi_109 = data_4bf67c
                sub_480ea0(&data_22366c0, esi_109 + 0x22e460, 0xd400)
                *(esi_109 + 0x1bb8) = 0
                *(arg1 + 0x10) = 0x14
                sub_4322d0()
                sub_425330()
                return 0
            
            void* eax_464 = data_4bf67c
            *(eax_464 + 0x20) = 0
            *(eax_464 + 0x1bb8) = 0
            *(arg1 + 0x10) = 0xc
            sub_4322d0()
            sub_425330()
            return 0
        
        if ((eax_460 & 0x4400) != 0)
            goto label_436df7
        
        if (sub_45c4f0() != 0)
            goto label_436df7
        
        sub_4322d0()
    case 0x24
        goto label_433c95
    case 0x25
        goto label_4341b4
    case 0x26
        goto label_4346b4
    case 0x27
        goto label_434bac
    case 0x28
        goto label_434f33
    case 0x29
        goto label_4356c6
    case 0x2a
        goto label_435d20
    case 0x2b
        goto label_43649f
    case 0x2c
        goto label_43686e
    case 0x2d, 0x2e
        goto label_436c9d

sub_425330()
return 0
