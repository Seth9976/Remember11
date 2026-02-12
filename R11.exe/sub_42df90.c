// 函数: sub_42df90
// 地址: 0x42df90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_4 = ecx
void* ebp = arg1
void* edi = data_4bf344
int32_t eax_1 = *((*(edi + 0xb218) << 2) + &data_4bf2e0)
int32_t eax_2 = sx.d(*(ebp + 0x10))
int32_t i = 0

if (eax_2 == 0)
    sub_43d220(edi + 0x15788, 0x4be7c8, 2, 0, 0xffffffff, 0x1000)
    sub_441740(data_4bf344 + 0x1f0f0, 0x280, 0xa)
    sub_441760(data_4bf344 + 0x1f0f0, 0, 0)
    sub_43d220(data_4bf344 + 0x19c3c, 0x4be7d8, 3, 0, 0xffffffff, 0xe14)
    edi = data_4bf344
    *(ebp + 0x10) = 1
label_42e9f4:
    
    if (*(edi + 0xb224) == 1)
        sub_480ea0(edi + 0x590c, &data_2b5aa20, 0x590c)
        *(edi + 0xb224) = 3
        *(ebp + 0x10) = 2
else
    if (eax_2 == 1)
        goto label_42e9f4
    
    if (eax_2 == 2)
        if (*(eax_1 * 0x18 + 0x4bf014) s> 0)
            int32_t ebp_1 = 0
            var_4 = 0x8e
            
            do
                int32_t eax_7 =
                    sub_45e380(0x10e, var_4, 0x10f, 0x12, *((&data_4bf018)[eax_1 * 6] + ebp_1 + 8))
                
                if (eax_7 s>= 0 && sub_45c4d0() != 0)
                    void* eax_10 = data_4bf344 + 0xb21c
                    
                    if (*eax_10 != i)
                        sub_4095a0(3)
                        eax_10 = data_4bf344 + 0xb21c
                        *eax_10 = i
                    
                    int32_t edx_2 = (&data_4bf018)[eax_1 * 6]
                    int32_t ecx_3 = *eax_10 << 4
                    
                    if (eax_7 != *(ecx_3 + edx_2 + 4))
                        *(ecx_3 + edx_2 + 4) = eax_7
                        sub_4095a0(3)
                        
                        switch (*(data_4bf344 + 0xb21c))
                            case 0
                                data_2b5cf04 = *((&data_4bf018)[eax_1 * 6] + 4)
                                sub_409010(0, 0xffff)
                            case 1
                                int32_t eax_14
                                eax_14.b = *((&data_4bf018)[eax_1 * 6] + 0x14)
                                data_2b5cf03 = eax_14.b
                                sub_409010(3, 0xffff)
                                sub_409010(4, 0xffff)
                                sub_409010(5, 0xffff)
                                sub_409010(2, sub_4090b0(3))
                            case 2
                                data_2b5cf02 = *((&data_4bf018)[eax_1 * 6] + 0x24)
                                sub_408f30(0xffff)
                                sub_409010(3, 0xffff)
                                sub_409010(4, 0xffff)
                                sub_409010(5, 0xffff)
                            case 3
                                data_2b5cf05 = *((&data_4bf018)[eax_1 * 6] + 0x34)
                                sub_408c50(0xffffffff)
                
                var_4 += 0x20
                i += 1
                ebp_1 += 0x10
            while (i s< *(eax_1 * 0x18 + 0x4bf014))
            
            ebp = arg1
        
        int32_t eax_17
        int32_t eax_18
        
        if ((data_2b53608 & 0x2100) == 0)
            eax_17 = sub_45e350(0x40, 0x99, 0x42, 0x42, 0)
            
            if (eax_17 != 0)
                eax_18 = sub_45c4e0()
        
        if ((data_2b53608 & 0x2100) != 0 || (eax_17 != 0 && eax_18 != 0))
            sub_4095a0(0)
            sub_4090d0(0)
            sub_4090d0(2)
            void* eax_25 = data_4bf344
            *(eax_1 * 0x18 + &data_4bf010) = *(eax_25 + 0xb21c)
            *(eax_25 + 0xb224) = 0
            *(ebp + 0x10) = 1
        else
            int32_t eax_19
            
            if ((data_2b53608 & 0x4400) == 0)
                eax_19 = sub_45c4f0()
            
            if ((data_2b53608 & 0x4400) != 0 || eax_19 != 0)
                sub_4095a0(1)
                sub_480ea0(&data_2b5aa20, data_4bf344 + 0x590c, 0x590c)
                sub_4090d0(0)
                sub_4090d0(2)
                sub_408f30(0xffff)
                sub_409010(0, 0xffff)
                sub_409010(3, 0xffff)
                sub_409010(4, 0xffff)
                sub_409010(5, 0xffff)
                sub_408c50(0xffffffff)
                *((&data_4bf018)[eax_1 * 6] + 0x24) = zx.d(data_2b5cf02)
                *((&data_4bf018)[eax_1 * 6] + 4) = zx.d(data_2b5cf04)
                *((&data_4bf018)[eax_1 * 6] + 0x14) = zx.d(data_2b5cf03)
                void* eax_24 = data_4bf344
                *((&data_4bf018)[eax_1 * 6] + 0x34) = zx.d(data_2b5cf05)
                *(eax_24 + 0xb224) = 0
                *(ebp + 0x10) = 1
        
        int32_t eax_26 = data_2b53608
        
        if ((eax_26 & 0x2100) == 0)
            int32_t eax_28
            
            if ((eax_26 & 0x4400) == 0)
                eax_28 = sub_45c4f0()
            
            if ((eax_26 & 0x4400) != 0 || eax_28 != 0)
                sub_4095a0(1)
                sub_480ea0(&data_2b5aa20, data_4bf344 + 0x590c, 0x590c)
                sub_4090d0(0)
                sub_4090d0(2)
                sub_408f30(0xffff)
                sub_409010(0, 0xffff)
                sub_409010(3, 0xffff)
                sub_409010(4, 0xffff)
                sub_409010(5, 0xffff)
                sub_408c50(0xffffffff)
                *((&data_4bf018)[eax_1 * 6] + 0x24) = zx.d(data_2b5cf02)
                *((&data_4bf018)[eax_1 * 6] + 4) = zx.d(data_2b5cf04)
                *((&data_4bf018)[eax_1 * 6] + 0x14) = zx.d(data_2b5cf03)
                void* eax_113 = data_4bf344
                *((&data_4bf018)[eax_1 * 6] + 0x34) = zx.d(data_2b5cf05)
                *(eax_113 + 0xb224) = 0
                *(ebp + 0x10) = 1
                sub_42b560(0x1a)
                return 0
            
            if ((data_2b53608 & 0x8000) == 0)
                int32_t eax_39 = *(data_c7cc70 + 0xb4)
                
                if ((eax_39.b & 0x10) == 0)
                    if ((eax_39.b & 0x40) == 0)
                        if (eax_39.b s>= 0)
                            if ((eax_39.b & 0x20) == 0)
                                if ((eax_39 & 0x1000) == 0)
                                    if ((eax_39 & 0x4000) == 0)
                                        if ((eax_39 & 0x8000) == 0)
                                            if ((eax_39 & 0x2000) == 0)
                                                int32_t eax_78 = data_2b53610
                                                
                                                if ((eax_78 & 0x100810) != 0)
                                                    sub_4095a0(3)
                                                    void* ecx_21 = data_4bf344
                                                    int32_t esi_2 = *(eax_1 * 0x18 + 0x4bf014)
                                                    *(ecx_21 + 0xb21c) = mods.dp.d(
                                                        sx.q(esi_2 + *(ecx_21 + 0xb21c) - 1), esi_2)
                                                    sub_42b560(0x1a)
                                                    return 0
                                                
                                                if ((eax_78 &
                                                        &__section_headers[1].numberOfRelocations) != 0)
                                                    sub_4095a0(3)
                                                    void* ecx_23 = data_4bf344
                                                    int32_t esi_3 = *(eax_1 * 0x18 + 0x4bf014)
                                                    *(ecx_23 + 0xb21c) = mods.dp.d(
                                                        sx.q(esi_3 + *(ecx_23 + 0xb21c) + 1), esi_3)
                                                    sub_42b560(0x1a)
                                                    return 0
                                                
                                                int32_t ecx_29
                                                int32_t edx_32
                                                
                                                if ((eax_78 & 0x800080) != 0)
                                                    void* eax_86 = data_4bf344
                                                    
                                                    if (*((*(eax_86 + 0xb21c) << 4)
                                                            + (&data_4bf018)[eax_1 * 6] + 4) s> 0)
                                                        sub_4095a0(3)
                                                        void* eax_87 = data_4bf344
                                                        edx_32 = (&data_4bf018)[eax_1 * 6]
                                                        int32_t ecx_28 = *(eax_87 + 0xb21c) << 4
                                                        *(ecx_28 + edx_32 + 4) -= 1
                                                        ecx_29 = *(eax_87 + 0xb21c)
                                                        
                                                        switch (ecx_29)
                                                            case 0
                                                            label_42e83a:
                                                                edx_32.b = *((ecx_29 << 4)
                                                                    + (&data_4bf018)[eax_1 * 6] + 4)
                                                                data_2b5cf04 = edx_32.b
                                                                sub_409010(0, 0xffff)
                                                                sub_42b560(0x1a)
                                                                return 0
                                                            case 1
                                                            label_42e72b:
                                                                edx_32.b = *((ecx_29 << 4)
                                                                    + (&data_4bf018)[eax_1 * 6] + 4)
                                                                data_2b5cf03 = edx_32.b
                                                                sub_409010(3, 0xffff)
                                                                sub_409010(4, 0xffff)
                                                                sub_409010(5, 0xffff)
                                                                sub_409010(2, sub_4090b0(3))
                                                                sub_42b560(0x1a)
                                                                return 0
                                                            case 2
                                                            label_42e6e2:
                                                                edx_32.b = *((ecx_29 << 4)
                                                                    + (&data_4bf018)[eax_1 * 6] + 4)
                                                                data_2b5cf02 = edx_32.b
                                                                sub_408f30(0xffff)
                                                                sub_409010(3, 0xffff)
                                                                sub_409010(4, 0xffff)
                                                                sub_409010(5, 0xffff)
                                                                sub_42b560(0x1a)
                                                                return 0
                                                            case 3
                                                            label_42e77c:
                                                                edx_32.b = *((ecx_29 << 4)
                                                                    + (&data_4bf018)[eax_1 * 6] + 4)
                                                                data_2b5cf05 = edx_32.b
                                                                sub_408c50(0xffffffff)
                                                                sub_42b560(0x1a)
                                                                return 0
                                                    else if (*(eax_86 + 0xb238) == 0)
                                                        *(eax_86 + 0xb238) = 1
                                                        sub_4095a0(2)
                                                        sub_42b560(0x1a)
                                                        return 0
                                                else if ((eax_78 & 0x200020) == 0)
                                                    void* eax_107 = data_4bf344
                                                    
                                                    if (*(eax_107 + 0xb238) == 1
                                                            && (data_2b53604 & 0xf00af0) == 0)
                                                        *(eax_107 + 0xb238) = 0
                                                        sub_42b560(0x1a)
                                                        return 0
                                                else
                                                    void* ecx_37 = data_4bf344
                                                    void* eax_101 = (*(ecx_37 + 0xb21c) << 4)
                                                        + (&data_4bf018)[eax_1 * 6]
                                                    
                                                    if (*(eax_101 + 4) s< *(eax_101 + 8) - 1)
                                                        sub_4095a0(3)
                                                        void* eax_102 = data_4bf344
                                                        edx_32 = (&data_4bf018)[eax_1 * 6]
                                                        int32_t ecx_39 = *(eax_102 + 0xb21c) << 4
                                                        *(ecx_39 + edx_32 + 4) += 1
                                                        ecx_29 = *(eax_102 + 0xb21c)
                                                        
                                                        switch (ecx_29)
                                                            case 0
                                                                goto label_42e83a
                                                            case 1
                                                                goto label_42e72b
                                                            case 2
                                                                goto label_42e6e2
                                                            case 3
                                                                goto label_42e77c
                                                    else if (*(ecx_37 + 0xb238) == 0)
                                                        *(ecx_37 + 0xb238) = 1
                                                        sub_4095a0(2)
                                                        sub_42b560(0x1a)
                                                        return 0
                                            else if (*(data_4bf344 + 0xb21c) == 0)
                                                sub_409010(0, 0x80)
                                                int32_t var_18_10 = 0
                                                int32_t eax_74 = sub_448760() & 0x80000001
                                                
                                                if (eax_74 s< 0)
                                                    eax_74 = ((eax_74 - 1) | 0xfffffffe) + 1
                                                
                                                sub_409100(0, *(eax_74 * 0xc + &data_4be860))
                                        else if (*(data_4bf344 + 0xb21c) == 0)
                                            sub_409010(0, 0x80)
                                            int32_t var_18_9 = 0
                                            int32_t eax_69 = sub_448760() & 0x80000001
                                            
                                            if (eax_69 s< 0)
                                                eax_69 = ((eax_69 - 1) | 0xfffffffe) + 1
                                            
                                            sub_409100(0, *(eax_69 * 0xc + &data_4be8c0))
                                    else if (*(data_4bf344 + 0xb21c) == 0)
                                        sub_409010(0, 0x80)
                                        int32_t var_18_8 = 0
                                        sub_409100(0, 
                                            *(mods.dp.d(sx.q(sub_448760()), 3) * 0xc +
                                                &data_4be8d8))
                                else if (*(data_4bf344 + 0xb21c) == 0)
                                    sub_409010(0, 0x80)
                                    int32_t var_18_7 = 0
                                    int32_t eax_61 = sub_448760() & 0x80000001
                                    
                                    if (eax_61 s< 0)
                                        eax_61 = ((eax_61 - 1) | 0xfffffffe) + 1
                                    
                                    sub_409100(0, *(eax_61 * 0xc + &data_4be848))
                            else if (*(data_4bf344 + 0xb21c) == 0)
                                sub_409010(0, 0x80)
                                int32_t var_18_6 = 0
                                int32_t eax_56 = sub_448760() & 0x80000001
                                
                                if (eax_56 s< 0)
                                    eax_56 = ((eax_56 - 1) | 0xfffffffe) + 1
                                
                                sub_409100(0, *(eax_56 * 0xc + &data_4be860))
                        else if (*(data_4bf344 + 0xb21c) == 0)
                            sub_409010(0, 0x80)
                            int32_t var_18_5 = 0
                            int32_t eax_51 = sub_448760() & 0x80000001
                            
                            if (eax_51 s< 0)
                                eax_51 = ((eax_51 - 1) | 0xfffffffe) + 1
                            
                            sub_409100(0, *(eax_51 * 0xc + &data_4be878))
                    else if (*(data_4bf344 + 0xb21c) == 0)
                        sub_409010(0, 0x80)
                        int32_t var_18_4 = 0
                        int32_t eax_46 = sub_448760() & 0x80000001
                        
                        if (eax_46 s< 0)
                            eax_46 = ((eax_46 - 1) | 0xfffffffe) + 1
                        
                        sub_409100(0, *(eax_46 * 0xc + &data_4be8a8))
                else if (*(data_4bf344 + 0xb21c) == 0)
                    sub_409010(0, 0x80)
                    int32_t var_18_3 = 0
                    int32_t eax_41 = sub_448760() & 0x80000001
                    
                    if (eax_41 s< 0)
                        eax_41 = ((eax_41 - 1) | 0xfffffffe) + 1
                    
                    sub_409100(0, *(eax_41 * 0xc + &data_4be890))
            else
                int32_t eax_30 = *(data_4bf344 + 0xb21c)
                
                if (eax_30 == 0)
                    sub_409010(0, 0x80)
                    int32_t var_18_2 = 0
                    int32_t eax_36 = sub_448760()
                    void* ecx_12 = data_4bf344
                    sub_409100(0, 
                        *(ecx_12 + (mods.dp.d(sx.q(eax_36), *(ecx_12 + 0xb23c)) << 2) + 0xb240))
                else if (eax_30 == 1)
                    sub_409010(3, 0x80)
                    sub_409010(4, 0x80)
                    sub_409010(5, 0x80)
                    sub_409010(2, 0x80)
                    sub_409100(2, *((modu.dp.d(0:(sub_448760()), 0xd) << 2) + &data_4be8fc) & 0xfff)
                    sub_42b560(0x1a)
                    return 0
        else
            sub_4095a0(0)
            sub_4090d0(0)
            sub_4090d0(2)
            void* eax_27 = data_4bf344
            *(eax_1 * 0x18 + &data_4bf010) = *(eax_27 + 0xb21c)
            *(eax_27 + 0xb224) = 0
            *(ebp + 0x10) = 1

sub_42b560(0x1a)
return 0
