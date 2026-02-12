// 函数: sub_407f40
// 地址: 0x407f40
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_4_4 = ecx
int32_t ecx_1 = sx.d(*(arg1 + 0x10))
int32_t i = 0
int32_t* ecx_4

if (ecx_1 == 0)
    ecx_4 = &data_e7e660
    data_e7e664 = 0
    data_e7e660 = 0
    data_886f1c = &data_e7e660
    *(arg1 + 0x10) = 1
label_407f5f:
    void* esi_1 = data_c7cc70
    int32_t edx_1 = *(esi_1 + 8)
    
    if ((edx_1.b & 1) != 0)
        data_2b55e64 = 0x17
        return 1
    
    if ((edx_1.b & 8) != 0)
        sub_407ea0()
        sub_407b50()
        data_2b55e64 = 0x17
        return 1
    
    int32_t edi
    int32_t var_10_1 = edi
    
    if ((edx_1 & 0x800) != 0)
        do
            (&data_2243af0)[i] = *((i + *ecx_4 * 0xa) * 0x14 + &data_4afa10)
            void* esi_3 = (i + *ecx_4 * 0xa) * 0xa
            char edi_2 = (*(esi_3 * 2 + 0x4afa1c)).b
            char ebx_1 = *(esi_3 * 2 + 0x4afa14)
            *((i << 2) + &data_2243ac3) = (*(esi_3 * 2 + 0x4afa20)).b
            *((i << 2) + &data_2243ac0) = ebx_1
            *((i << 2) + &data_2243ac1) = (*(esi_3 * 2 + 0x4afa18)).b
            *((i << 2) + &data_2243ac2) = edi_2
            (&data_2243af1)[i] = *((i + *ecx_4 * 0xa) * 0x14 + &data_4afa24)
            void* esi_6 = (i + *ecx_4 * 0xa) * 0xa
            char edi_4 = (*(esi_6 * 2 + 0x4afa30)).b
            char edx_19 = (*(esi_6 * 2 + 0x4afa34)).b
            void* edi_5 = *(esi_6 * 2 + 0x4afa2c)
            *((i << 2) + &data_2243ac4) = *(esi_6 * 2 + 0x4afa28)
            *((i << 2) + &data_2243ac7) = edx_19
            *((i << 2) + &data_2243ac5) = edi_5.b
            *((i << 2) + &data_2243ac6) = edi_4
            (&data_2243af2)[i] = *((i + *ecx_4 * 0xa) * 0x14 + &data_4afa38)
            void* esi_9 = (i + *ecx_4 * 0xa) * 0xa
            char edi_6 = (*(esi_9 * 2 + 0x4afa44)).b
            char edx_28 = (*(esi_9 * 2 + 0x4afa48)).b
            void* edi_7 = *(esi_9 * 2 + 0x4afa40)
            *((i << 2) + &data_2243ac8) = *(esi_9 * 2 + 0x4afa3c)
            *((i << 2) + &data_2243ac9) = edi_7.b
            *((i << 2) + &data_2243acb) = edx_28
            *((i << 2) + &data_2243aca) = edi_6
            (&data_2243af3)[i] = *((i + *ecx_4 * 0xa) * 0x14 + &data_4afa4c)
            void* esi_12 = (i + *ecx_4 * 0xa) * 0xa
            char edi_8 = (*(esi_12 * 2 + 0x4afa58)).b
            char edx_37 = (*(esi_12 * 2 + 0x4afa5c)).b
            void* edi_9 = *(esi_12 * 2 + 0x4afa54)
            *((i << 2) + &data_2243acc) = *(esi_12 * 2 + 0x4afa50)
            *((i << 2) + &data_2243acd) = edi_9.b
            *((i << 2) + &data_2243acf) = edx_37
            *((i << 2) + &data_2243ace) = edi_8
            (&data_2243af4)[i] = *((i + *ecx_4 * 0xa) * 0x14 + &data_4afa60)
            void* esi_15 = (i + *ecx_4 * 0xa) * 0xa
            char edx_46 = (*(esi_15 * 2 + 0x4afa70)).b
            var_4_4 = *(esi_15 * 2 + 0x4afa6c)
            void* edi_11 = *(esi_15 * 2 + 0x4afa68)
            *((i << 2) + &data_2243ad0) = *(esi_15 * 2 + 0x4afa64)
            *((i << 2) + &data_2243ad1) = edi_11.b
            *((i << 2) + &data_2243ad2) = var_4_4.b
            *((i << 2) + &data_2243ad3) = edx_46
            i += 5
        while (i s< 0xa)
        
        *ecx_4 = (*ecx_4 + 1) & 3
    else if ((edx_1 & 0x200) == 0)
        int32_t eax_7 = *(esi_1 + 0x10)
        
        if ((eax_7 & 0x2000) != 0)
            sub_407ac0(1)
        else if ((eax_7 & 0x4000) != 0)
            sub_407ac0(0xffffffff)
        else if ((eax_7.b & 0x10) != 0)
            ecx_4[1] = mods.dp.d(sx.q(ecx_4[1] + 9), 0xa)
        else if ((eax_7.b & 0x40) != 0)
            ecx_4[1] = mods.dp.d(sx.q(ecx_4[1] + 0xb), 0xa)
        else
            int32_t esi_32
            
            if (eax_7.b s< 0)
                esi_32 = ecx_4[1]
                
                if ((&data_2243af0)[esi_32] == 6)
                    ecx_4[esi_32 + 2] = mods.dp.d(sx.q(ecx_4[esi_32 + 2] + 4), 5)
            else if ((eax_7.b & 0x20) != 0)
                esi_32 = ecx_4[1]
                
                if ((&data_2243af0)[esi_32] == 6)
                    ecx_4[esi_32 + 2] = mods.dp.d(sx.q(ecx_4[esi_32 + 2] + 6), 5)
    else
        do
            (&data_2243af0)[i] = *((i + *ecx_4 * 0xa) * 0x14 + &data_4afa10)
            void* esi_18 = (i + *ecx_4 * 0xa) * 0xa
            char edi_12 = (*(esi_18 * 2 + 0x4afa1c)).b
            char ebx_16 = *(esi_18 * 2 + 0x4afa14)
            *((i << 2) + &data_2243ac3) = (*(esi_18 * 2 + 0x4afa20)).b
            *((i << 2) + &data_2243ac0) = ebx_16
            *((i << 2) + &data_2243ac1) = (*(esi_18 * 2 + 0x4afa18)).b
            *((i << 2) + &data_2243ac2) = edi_12
            (&data_2243af1)[i] = *((i + *ecx_4 * 0xa) * 0x14 + &data_4afa24)
            void* esi_21 = (i + *ecx_4 * 0xa) * 0xa
            char edi_14 = (*(esi_21 * 2 + 0x4afa30)).b
            char edx_64 = (*(esi_21 * 2 + 0x4afa34)).b
            void* edi_15 = *(esi_21 * 2 + 0x4afa2c)
            *((i << 2) + &data_2243ac4) = *(esi_21 * 2 + 0x4afa28)
            *((i << 2) + &data_2243ac7) = edx_64
            *((i << 2) + &data_2243ac5) = edi_15.b
            *((i << 2) + &data_2243ac6) = edi_14
            (&data_2243af2)[i] = *((i + *ecx_4 * 0xa) * 0x14 + &data_4afa38)
            void* esi_24 = (i + *ecx_4 * 0xa) * 0xa
            char edi_16 = (*(esi_24 * 2 + 0x4afa44)).b
            char edx_73 = (*(esi_24 * 2 + 0x4afa48)).b
            void* edi_17 = *(esi_24 * 2 + 0x4afa40)
            *((i << 2) + &data_2243ac8) = *(esi_24 * 2 + 0x4afa3c)
            *((i << 2) + &data_2243ac9) = edi_17.b
            *((i << 2) + &data_2243acb) = edx_73
            *((i << 2) + &data_2243aca) = edi_16
            (&data_2243af3)[i] = *((i + *ecx_4 * 0xa) * 0x14 + &data_4afa4c)
            void* esi_27 = (i + *ecx_4 * 0xa) * 0xa
            char edi_18 = (*(esi_27 * 2 + 0x4afa58)).b
            char edx_82 = (*(esi_27 * 2 + 0x4afa5c)).b
            void* edi_19 = *(esi_27 * 2 + 0x4afa54)
            *((i << 2) + &data_2243acc) = *(esi_27 * 2 + 0x4afa50)
            *((i << 2) + &data_2243acd) = edi_19.b
            *((i << 2) + &data_2243acf) = edx_82
            *((i << 2) + &data_2243ace) = edi_18
            (&data_2243af4)[i] = *((i + *ecx_4 * 0xa) * 0x14 + &data_4afa60)
            void* esi_30 = (i + *ecx_4 * 0xa) * 0xa
            char edx_91 = (*(esi_30 * 2 + 0x4afa70)).b
            var_4_4 = *(esi_30 * 2 + 0x4afa6c)
            void* edi_21 = *(esi_30 * 2 + 0x4afa68)
            *((i << 2) + &data_2243ad0) = *(esi_30 * 2 + 0x4afa64)
            *((i << 2) + &data_2243ad1) = edi_21.b
            *((i << 2) + &data_2243ad2) = var_4_4.b
            *((i << 2) + &data_2243ad3) = edx_91
            i += 5
        while (i s< 0xa)
        
        *ecx_4 = (*ecx_4 - 1) & 3
    
    sub_4079e0(0, "macro")
    sub_4079e0(1, "bg   ")
    sub_4079e0(2, "ev   ")
    sub_4079e0(3, "chr  ")
    sub_4079e0(4, "bgm  ")
    sub_4079e0(5, "se   ")
    sub_4079e0(6, "voice")
    sub_4079e0(7, "etc  ")
    sub_4079e0(8, "init ")
else if (ecx_1 == 1)
    ecx_4 = data_886f1c
    goto label_407f5f
return 0
