// 函数: sub_426850
// 地址: 0x426850
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(*(arg1 + 0x10))

if (eax u> 8)
    goto label_426d6a

int32_t* ecx_4

switch (eax)
    case 0
        sub_4267d0()
        *(data_a5d91c + 4) = 0
        sub_4050d0(2, 0xa)
        *(arg1 + 0x10) = 1
    label_426898:
        
        if (sub_405130() != 1)
            goto label_426d6a
        
        if (data_2b5aa70 != 0)
            int32_t* esi_1 = data_a5d91c
            esi_1[4] = 0
            *esi_1 = 0
            char* ecx_1 = data_4b1fd8
            char* edx_1 = &esi_1[0x1136]
            uint32_t eax_2
            
            do
                eax_2.b = *ecx_1
                *edx_1 = eax_2.b
                ecx_1 = &ecx_1[1]
                edx_1 = &edx_1[1]
            while (eax_2.b != 0)
            esi_1[0x1132] = &esi_1[0x1136]
            sub_43d220(&esi_1[5], &esi_1[0x1132], 1, 0, 0xffffffff, 0x1000)
            *(arg1 + 0x10) = 6
            goto label_426d6a
        
        int32_t eax_4 = sub_432b30(data_a5d91c + 0x2050d8, &__dos_header)
        ecx_4 = data_a5d91c
        ecx_4[2] = eax_4
        *(arg1 + 0x10) = 2
        data_2b6036c = 2
    case 1
        goto label_426898
    case 2
        int32_t eax_6 = sub_446f90(*(data_a5d91c + 8))
        
        if (eax_6 == 1 || eax_6 == 2)
            data_2b6036c = 0
            sub_4050d0(6, 0xa)
            *(arg1 + 0x10) = 3
        
        goto label_426d6a
    case 3
        uint32_t eax_9 = sub_405130()
        
        if (eax_9 != 1)
            goto label_426d6a
        
        ecx_4 = data_a5d91c
        ecx_4[1] = eax_9
        int32_t eax_10 = ecx_4[3]
        
        if (eax_10 u< 2)
            void* eax_14 = eax_10 * 0x18
            
            if (*(eax_14 + 0x4b1fa8) != 0)
                ecx_4[1] = 0
                sub_4010a0(&ecx_4[0x81436])
                *(arg1 + 0x10) = 8
            label_426d6a:
                ecx_4 = data_a5d91c
            else
                sub_426810(sub_4050d0((*(eax_14 + 0x4b1fb4)).b, 0xa), 
                    *(*(data_a5d91c + 0xc) * 0x18 + &data_4b1fac))
                ecx_4 = data_a5d91c
                *ecx_4 = 0
                *(arg1 + 0x10) = 4
        else
            *(arg1 + 0x10) = 5
    case 4
        ecx_4 = data_a5d91c
        int32_t edx_6 = *ecx_4
        char var_20_4
        
        if (edx_6 s<= 0xb4)
            void* eax_23 = ecx_4[3] * 0x18
            
            if (edx_6 s> *(eax_23 + 0x4b1fbc) && (*(data_c7cc70 + 8) & 8) != 0)
                int32_t var_1c_4 = 0xa
                var_20_4 = (*(eax_23 + &data_4b1fb8)).b
                goto label_426a97
        else
            int32_t var_1c_3 = 0xa
            var_20_4 = (*(ecx_4[3] * 0x18 + &data_4b1fb8)).b
        label_426a97:
            sub_4050d0(var_20_4, 0xa)
            ecx_4 = data_a5d91c
            ecx_4[3] += 1
            *(arg1 + 0x10) = 3
        *ecx_4 += 1
    case 5
        data_2b55e64 = 3
        return 1
    case 6
        void* edx_9 = data_c7cc70
        int32_t ecx_11 = *(edx_9 + 0x10)
        int32_t eax_26
        
        if ((ecx_11.b & 0x10) != 0 || (ecx_11 & 0x100800) != 0)
            eax_26 = 1
        else
            eax_26 = 0
        
        int32_t ecx_12
        
        if ((ecx_11.b & 0x40) != 0 || (ecx_11 & &__section_headers[0].virtualSize) != 0)
            ecx_12 = 1
        else
            ecx_12 = 0
        
        if ((eax_26 | ecx_12) == 0)
            int32_t eax_29 = *(edx_9 + 8)
            void* var_24_1
            
            if ((eax_29 & 0x2100) != 0)
                if (*(data_a5d91c + 0x10) != 0)
                    sub_4095a0(1)
                    struct DOS_Header* const var_20_6 = &__dos_header
                    var_24_1 = data_a5d91c + 0x2050d8
                label_426bf2:
                    *(data_a5d91c + 8) = sub_432b30(var_24_1, &__dos_header)
                    *(arg1 + 0x10) = 2
                    data_2b6036c = 2
                else
                    sub_4095a0(0)
                    sub_406f40(1)
                    int32_t* esi_3 = data_a5d91c
                    *esi_3 = 0x258
                    esi_3[4] = 1
                    char* ecx_14 = data_4b1fdc
                    char* edx_13 = &esi_3[0x1136]
                    char i
                    
                    do
                        i = *ecx_14
                        *edx_13 = i
                        ecx_14 = &ecx_14[1]
                        edx_13 = &edx_13[1]
                    while (i != 0)
                    esi_3[0x1132] = &esi_3[0x1136]
                    sub_43d220(&esi_3[5], &esi_3[0x1132], 1, 0, 0xffffffff, 0x1000)
                    *(arg1 + 0x10) = 7
            else if ((eax_29 & 0x4400) != 0)
                sub_4095a0(1)
                struct DOS_Header* const var_20_5 = &__dos_header
                var_24_1 = data_a5d91c + 0x2050d8
                goto label_426bf2
        else
            sub_4095a0(3)
            void* eax_28 = data_a5d91c
            int32_t ecx_13
            ecx_13.b = *(eax_28 + 0x10) == 0
            *(eax_28 + 0x10) = ecx_13
        
        sub_426790()
        goto label_426d6a
    case 7
        int32_t* ecx_16 = data_a5d91c
        int32_t eax_34 = *ecx_16
        void* ebp_3
        void* esi_5
        
        if (eax_34 == 0)
            sub_406f40(nullptr)
            esi_5 = data_a5d91c
            ebp_3 = esi_5 + 0x44d8
            *(esi_5 + 0x10) = 0
            char* ecx_18 = data_4b1fd8
            void* edx_16 = ebp_3
            char i_1
            
            do
                i_1 = *ecx_18
                *edx_16 = i_1
                ecx_18 = &ecx_18[1]
                edx_16 += 1
            while (i_1 != 0)
        label_426d39:
            *(esi_5 + 0x44c8) = ebp_3
            sub_43d220(esi_5 + 0x14, esi_5 + 0x44c8, 1, 0, 0xffffffff, 0x1000)
            *(arg1 + 0x10) = 6
        else
            *ecx_16 = eax_34 - 1
            void* edx_14 = data_c7cc70
            int32_t eax_36 = *(edx_14 + 0x10)
            
            if ((eax_36.b & 0x50) != 0 || (eax_36 & 0x500a00) != 0)
                sub_4095a0(3)
                void* eax_40 = data_a5d91c
                int32_t edx_20
                edx_20.b = *(eax_40 + 0x10) == 0
                *(eax_40 + 0x10) = edx_20
            else
                int32_t eax_37 = *(edx_14 + 8)
                
                if ((eax_37 & 0x2100) != 0)
                    if (ecx_16[4] != 0)
                        sub_4095a0(1)
                        sub_406f40(nullptr)
                        esi_5 = data_a5d91c
                        ebp_3 = esi_5 + 0x44d8
                        *(esi_5 + 0x10) = 0
                        char* ecx_20 = data_4b1fd8
                        void* edx_19 = ebp_3
                        char i_2
                        
                        do
                            i_2 = *ecx_20
                            *edx_19 = i_2
                            ecx_20 = &ecx_20[1]
                            edx_19 += 1
                        while (i_2 != 0)
                        goto label_426d39
                    
                    sub_4095a0(0)
                    *(data_a5d91c + 8) = sub_432b30(data_a5d91c + 0x2050d8, &__dos_header)
                    *(arg1 + 0x10) = 2
                    data_2b6036c = 2
                else if ((eax_37 & 0x4400) != 0)
                    sub_4095a0(1)
                    sub_406f40(nullptr)
                    esi_5 = data_a5d91c
                    ebp_3 = esi_5 + 0x44d8
                    *(esi_5 + 0x10) = 0
                    char* ecx_17 = data_4b1fd8
                    void* edx_15 = ebp_3
                    char i_3
                    
                    do
                        i_3 = *ecx_17
                        *edx_15 = i_3
                        ecx_17 = &ecx_17[1]
                        edx_15 += 1
                    while (i_3 != 0)
                    goto label_426d39
        sub_426790()
        goto label_426d6a
    case 8
        sub_4050d0((*(*(data_a5d91c + 0xc) * 0x18 + &data_4b1fb8)).b, 0x80)
        ecx_4 = data_a5d91c
        ecx_4[3] += 1
        *(arg1 + 0x10) = 3

if (ecx_4[1] == 1)
    void* ecx_21 = data_c7bbc0
    int32_t var_8 = 0
    int32_t var_4_1 = 0
    sub_444110(*(ecx_21 + 8), &var_8, nullptr, 1)
    sub_442c30(*(data_c7bbc0 + 8), 1)

return 0
