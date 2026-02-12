// 函数: sub_432390
// 地址: 0x432390
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

sub_4013b0()
void* ebx = arg1

switch (sx.d(*(ebx + 0x10)))
    case 0
        sub_431820()
        sub_4050d0(2, 0xa)
        *(ebx + 0x10) = 1
    label_4323c9:
        
        if (sub_405130() == 1)
            int32_t eax_4 =
                sub_427ca0(data_4bf67c + 0x182c, 0, 0, "BISLPM-65549", &data_22366c0, 0xd400)
            int32_t* esi_1 = data_4bf67c
            *esi_1 = eax_4
            char* ecx_1 = data_4bf520
            void* edx_1 = &esi_1[0x89d18]
            
            do
                eax_4.b = *ecx_1
                *edx_1 = eax_4.b
                ecx_1 = &ecx_1[1]
                edx_1 += 1
            while (eax_4.b != 0)
            
            esi_1[0x89d13] = &esi_1[0x89d18]
            sub_43d220(&esi_1[0x88be6], &esi_1[0x89d13], 1, 0, 0xffffffff, 0x1000)
            *(ebx + 0x10) = 2
    case 1
        goto label_4323c9
    case 2
        int32_t eax_7 = sub_446f90(*data_4bf67c)
        
        if (eax_7 == 1)
            data_2b60370 = 0
            int32_t eax_31 = sub_431920()
            
            if (eax_31 == 0)
                void* eax_44 = data_4bf67c
                data_2b60370 = 1
                
                if (*(eax_44 + 8) == 0)
                    *(eax_44 + 0x20) = 1
                label_4328cc:
                    sub_4050d0(3, 0xa)
                    *(ebx + 0x10) = 5
                    sub_432290()
                    return 0
                
                sub_4095a0(8)
                void* esi_14 = data_4bf67c
                char* ecx_31 = data_4bf55c
                void* edx_16 = esi_14 + 0x227460
                char i
                
                do
                    i = *ecx_31
                    *edx_16 = i
                    ecx_31 = &ecx_31[1]
                    edx_16 += 1
                while (i != 0)
                *(esi_14 + 0x22744c) = esi_14 + 0x227460
                sub_43d220(esi_14 + 0x222f98, esi_14 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
                *(ebx + 0x10) = 4
            else
                if (eax_31 == 1)
                    void* ebp_9 = data_4bf67c
                    *(ebp_9 + 0x18) = 0xb
                    void* edx_14 = ebp_9 + 0x227460
                    void* ecx_25 = data_4bf588
                    int32_t eax_33
                    
                    do
                        eax_33.b = *ecx_25
                        *edx_14 = eax_33.b
                        ecx_25 += 1
                        edx_14 += 1
                    while (eax_33.b != 0)
                    char* eax_39 = *((sx.d(*(ebp_9 + 0x18)) << 2) + &data_4bf594)
                    char* esi_12 = eax_39
                    int32_t ecx_26
                    
                    do
                        ecx_26.b = *eax_39
                        eax_39 = &eax_39[1]
                    while (ecx_26.b != 0)
                    
                    void* eax_40 = eax_39 - esi_12
                    void* edi_12 = ebp_9 + 0x22745f
                    
                    do
                        ecx_26.b = *(edi_12 + 1)
                        edi_12 += 1
                    while (ecx_26.b != 0)
                    
                    int32_t esi_13
                    int32_t edi_13
                    edi_13, esi_13 = __builtin_memcpy(edi_12, esi_12, eax_40 u>> 2 << 2)
                    __builtin_memcpy(edi_13, esi_13, eax_40 & 3)
                    *(ebp_9 + 0x22744c) = ebp_9 + 0x227460
                    sub_43d220(ebp_9 + 0x222f98, ebp_9 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
                    sub_4095a0(2)
                    *(data_4bf67c + 0x10) = 0
                    *(arg1 + 0x10) = 3
                    sub_432290()
                    return 0
                
                if (eax_31 == 2)
                    void* ebp_7 = data_4bf67c
                    *(ebp_7 + 0x18) = 0xa
                    void* ecx_18 = data_4bf588
                    void* edx_12 = ebp_7 + 0x227460
                    char i_1
                    
                    do
                        i_1 = *ecx_18
                        *edx_12 = i_1
                        ecx_18 += 1
                        edx_12 += 1
                    while (i_1 != 0)
                    char* eax_34 = *((sx.d(*(ebp_7 + 0x18)) << 2) + &data_4bf594)
                    char* esi_10 = eax_34
                    int32_t ecx_19
                    
                    do
                        ecx_19.b = *eax_34
                        eax_34 = &eax_34[1]
                    while (ecx_19.b != 0)
                    
                    void* eax_35 = eax_34 - esi_10
                    void* edi_9 = ebp_7 + 0x22745f
                    
                    do
                        ecx_19.b = *(edi_9 + 1)
                        edi_9 += 1
                    while (ecx_19.b != 0)
                    
                    int32_t esi_11
                    int32_t edi_10
                    edi_10, esi_11 = __builtin_memcpy(edi_9, esi_10, eax_35 u>> 2 << 2)
                    __builtin_memcpy(edi_10, esi_11, eax_35 & 3)
                    *(ebp_7 + 0x22744c) = ebp_7 + 0x227460
                    sub_43d220(ebp_7 + 0x222f98, ebp_7 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
                    sub_4095a0(2)
                    *(data_4bf67c + 0x10) = 0
                    *(arg1 + 0x10) = 3
                    sub_432290()
                    return 0
        else if (eax_7 == 2)
            void* ebp_1 = data_4bf67c
            data_2b60370 = 0
            int32_t eax_10 = *(ebp_1 + 0x1a3c)
            
            if (*(ebp_1 + 8) != 0)
                char eax_24
                char edx_9
                edx_9:eax_24 = sx.q(eax_10)
                char i_2 = (eax_24 ^ edx_9) - edx_9
                *(ebp_1 + 0x18) = i_2
                
                if (i_2 s>= 0xa)
                    *(ebp_1 + 0x18) = 9
                
                void* ecx_12 = data_4bf588
                char* edx_10 = ebp_1 + 0x227460
                
                do
                    i_2 = *ecx_12
                    *edx_10 = i_2
                    ecx_12 += 1
                    edx_10 = &edx_10[1]
                while (i_2 != 0)
                
                char* eax_26 = *((sx.d(*(ebp_1 + 0x18)) << 2) + &data_4bf594)
                char* esi_8 = eax_26
                int32_t ecx_13
                
                do
                    ecx_13.b = *eax_26
                    eax_26 = &eax_26[1]
                while (ecx_13.b != 0)
                
                void* eax_27 = eax_26 - esi_8
                void* edi_6 = ebp_1 + 0x22745f
                
                do
                    ecx_13.b = *(edi_6 + 1)
                    edi_6 += 1
                while (ecx_13.b != 0)
                
                int32_t esi_9
                int32_t edi_7
                edi_7, esi_9 = __builtin_memcpy(edi_6, esi_8, eax_27 u>> 2 << 2)
                __builtin_memcpy(edi_7, esi_9, eax_27 & 3)
                *(ebp_1 + 0x22744c) = ebp_1 + 0x227460
                sub_43d220(ebp_1 + 0x222f98, ebp_1 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
                sub_4095a0(2)
                *(data_4bf67c + 0x10) = 0
                *(arg1 + 0x10) = 3
                sub_432290()
                return 0
            
            if (eax_10 == 0xfffffffb)
                char* ecx_11 = data_4bf564
                void* edx_8 = ebp_1 + 0x227460
                
                do
                    eax_10.b = *ecx_11
                    *edx_8 = eax_10.b
                    ecx_11 = &ecx_11[1]
                    edx_8 += 1
                while (eax_10.b != 0)
                
                *(ebp_1 + 0x22744c) = ebp_1 + 0x227460
                sub_43d220(ebp_1 + 0x222f98, ebp_1 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
                sub_4095a0(2)
                *(data_4bf67c + 0x10) = 0
                *(ebx + 0x10) = 3
                sub_432290()
                return 0
            
            if (eax_10 == 0xfffffffc)
                if (*(ebp_1 + 0x1a48) s< 0x6e)
                    char* ecx_10 = data_4bf56c
                    void* edx_6 = ebp_1 + 0x227460
                    
                    do
                        eax_10.b = *ecx_10
                        *edx_6 = eax_10.b
                        ecx_10 = &ecx_10[1]
                        edx_6 += 1
                    while (eax_10.b != 0)
                    
                    *(ebp_1 + 0x22744c) = ebp_1 + 0x227460
                    sub_43d220(ebp_1 + 0x222f98, ebp_1 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
                    sub_4095a0(2)
                    *(data_4bf67c + 0x10) = 0
                    *(ebx + 0x10) = 3
                    sub_432290()
                    return 0
                
                *(ebp_1 + 0x20) = 2
            else
                if (eax_10 != 0xfffffffe)
                    char eax_11
                    char edx_3
                    edx_3:eax_11 = sx.q(eax_10)
                    char i_3 = (eax_11 ^ edx_3) - edx_3
                    *(ebp_1 + 0x18) = i_3
                    
                    if (i_3 s>= 0xa)
                        *(ebp_1 + 0x18) = 9
                    
                    if (*(ebp_1 + 0x18) != 9)
                        char* ecx_4 = data_4bf588
                        char* edx_5 = ebp_1 + 0x227460
                        
                        do
                            i_3 = *ecx_4
                            *edx_5 = i_3
                            ecx_4 = &ecx_4[1]
                            edx_5 = &edx_5[1]
                        while (i_3 != 0)
                        
                        char* eax_15 = *((sx.d(*(ebp_1 + 0x18)) << 2) + &data_4bf594)
                        char* esi_4 = eax_15
                        
                        do
                            ecx_4.b = *eax_15
                            eax_15 = &eax_15[1]
                        while (ecx_4.b != 0)
                        
                        void* eax_16 = eax_15 - esi_4
                        void* edi_3 = ebp_1 + 0x22745f
                        
                        do
                            ecx_4.b = *(edi_3 + 1)
                            edi_3 += 1
                        while (ecx_4.b != 0)
                        
                        int32_t esi_5
                        int32_t edi_4
                        edi_4, esi_5 = __builtin_memcpy(edi_3, esi_4, eax_16 u>> 2 << 2)
                        __builtin_memcpy(edi_4, esi_5, eax_16 & 3)
                        *(ebp_1 + 0x22744c) = ebp_1 + 0x227460
                        sub_43d220(ebp_1 + 0x222f98, ebp_1 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
                        ebx = arg1
                    else
                        char* ecx_3 = data_4bf564
                        void* edx_4 = ebp_1 + 0x227460
                        
                        do
                            i_3 = *ecx_3
                            *edx_4 = i_3
                            ecx_3 = &ecx_3[1]
                            edx_4 += 1
                        while (i_3 != 0)
                        
                        *(ebp_1 + 0x22744c) = ebp_1 + 0x227460
                        sub_43d220(ebp_1 + 0x222f98, ebp_1 + 0x22744c, 1, 0, 0xffffffff, 0x1000)
                    
                    sub_4095a0(2)
                    *(data_4bf67c + 0x10) = 0
                    *(ebx + 0x10) = 3
                    sub_432290()
                    return 0
                
                *(ebp_1 + 0x20) = 0
            
            goto label_4328cc
        
        sub_432290()
    case 3
        data_e7e634 = 0xffffffff
        data_e7e630 = 0
        *(ebx + 0x10) = 7
    label_432967:
        
        if ((data_2b53610 & 0xf00af0) != 0)
            sub_4095a0(3)
            void* eax_53 = data_4bf67c
            int32_t ecx_33
            ecx_33.b = *(eax_53 + 0x10) == 0
            *(eax_53 + 0x10) = ecx_33
        else
            int32_t eax_48
            
            if ((data_2b53608 & 0x2100) == 0)
                eax_48 = sub_45c4e0()
            
            if ((data_2b53608 & 0x2100) != 0 || eax_48 != 0)
                if (*(data_4bf67c + 0x10) == 0)
                    sub_4095a0(0)
                    *(ebx + 0x10) = 0
                    sub_4322d0()
                    return 0
                
                sub_4095a0(1)
                *(data_4bf67c + 0x20) = 0
            label_4329df:
                sub_4050d0(3, 0xa)
                *(ebx + 0x10) = 5
                sub_4322d0()
                return 0
            
            int32_t eax_49
            
            if ((data_2b53608 & 0x4400) == 0)
                eax_49 = sub_45c4f0()
            
            if ((data_2b53608 & 0x4400) != 0 || eax_49 != 0)
                sub_4095a0(1)
                *(data_4bf67c + 0x20) = 0
                goto label_4329df
        
        sub_4322d0()
    case 4
        if ((data_2b53610 & 0xf00af0) != 0 || (data_2b53608 & 0x6500) != 0)
        label_432a49:
            sub_4095a0(0)
            *(data_4bf67c + 0x20) = 1
            sub_4050d0(3, 0xa)
            *(ebx + 0x10) = 5
        else
            if (sub_45c4f0() != 0)
                goto label_432a49
            
            if (sub_45c4e0() != 0)
                goto label_432a49
        
        sub_432290()
    case 5
        if (sub_405130() == 1)
            sub_405e20()
            void* esi_16 = data_4bf67c
            int32_t eax_59 = *(esi_16 + 0x20)
            
            if (eax_59 != 0 && eax_59 != 2)
                sub_431c20(&data_22366c4)
                void* var_14_1 = esi_16 + 0x23ba60
                sub_401350()
                return 1
            
            if (*(esi_16 + 8) == 0)
                sub_401680()
                sub_4016c0()
                sub_432140()
                void* __saved_ebp_1 = data_4bf67c + 0x23ba60
                sub_401350()
                esi_16 = data_4bf67c
            
            int32_t eax_65 = *(esi_16 + 0x20)
            int32_t eax_66 = neg.d(eax_65)
            return sbb.d(eax_66, eax_66, eax_65 != 0) + 2
    case 7
        goto label_432967

return 0
