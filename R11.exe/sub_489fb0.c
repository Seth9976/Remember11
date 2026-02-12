// 函数: sub_489fb0
// 地址: 0x489fb0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* esi = arg2
char* edi = arg1
uint32_t eax_1

if (edi u> esi && edi u< arg3 + esi)
    void* esi_2 = arg3 + esi - 4
    void* edi_2 = arg3 + edi - 4
    uint32_t ecx_5
    
    if ((edi_2 & 3) == 0)
        ecx_5 = arg3 u>> 2
        
        if (ecx_5 u< 8)
            jump((&jump_table_48a270)[neg.d(ecx_5)])
        
        edi_2, esi_2 = __builtin_memcpy(edi_2 - (ecx_5 << 2), esi_2 - (ecx_5 << 2), ecx_5 << 2)
        
        switch (arg3 & 3)
            case nullptr
                return arg1
            case 1
                goto label_48a2d8
            case 2
                goto label_48a2e8
            case 3
                goto label_48a2fc
    else if (arg3 u< 4)
        switch (arg3)
            case nullptr
                return arg1
            case 1
            label_48a2d8:
                eax_1.b = *(esi_2 + 3)
                *(edi_2 + 3) = eax_1.b
                return arg1
            case 2
            label_48a2e8:
                eax_1.b = *(esi_2 + 3)
                *(edi_2 + 3) = eax_1.b
                eax_1.b = *(esi_2 + 2)
                *(edi_2 + 2) = eax_1.b
                return arg1
            case 3
            label_48a2fc:
                eax_1.b = *(esi_2 + 3)
                *(edi_2 + 3) = eax_1.b
                eax_1.b = *(esi_2 + 2)
                *(edi_2 + 2) = eax_1.b
                eax_1.b = *(esi_2 + 1)
                *(edi_2 + 1) = eax_1.b
                return arg1
    else
        eax_1 = edi_2 & 3
        void* ecx_7 = arg3 - eax_1
        
        switch (jump_table_48a1c4[eax_1])
            case 0x48a1d4
                eax_1.b = *(esi_2 + 3)
                *(edi_2 + 3) = eax_1.b
                ecx_5 = ecx_7 u>> 2
                
                if (ecx_5 u< 8)
                    jump((&jump_table_48a270)[neg.d(ecx_5)])
                
                edi_2, esi_2 =
                    __builtin_memcpy(edi_2 - 1 - (ecx_5 << 2), esi_2 - 1 - (ecx_5 << 2), ecx_5 << 2)
                
                switch (3 & ecx_7)
                    case nullptr
                        return arg1
                    case 1
                        goto label_48a2d8
                    case 2
                        goto label_48a2e8
                    case 3
                        goto label_48a2fc
            case 0x48a1f8
                eax_1.b = *(esi_2 + 3)
                *(edi_2 + 3) = eax_1.b
                eax_1.b = *(esi_2 + 2)
                ecx_5 = ecx_7 u>> 2
                *(edi_2 + 2) = eax_1.b
                
                if (ecx_5 u< 8)
                    jump((&jump_table_48a270)[neg.d(ecx_5)])
                
                edi_2, esi_2 =
                    __builtin_memcpy(edi_2 - 2 - (ecx_5 << 2), esi_2 - 2 - (ecx_5 << 2), ecx_5 << 2)
                
                switch (3 & ecx_7)
                    case nullptr
                        return arg1
                    case 1
                        goto label_48a2d8
                    case 2
                        goto label_48a2e8
                    case 3
                        goto label_48a2fc
            case 0x48a220
                eax_1.b = *(esi_2 + 3)
                *(edi_2 + 3) = eax_1.b
                eax_1.b = *(esi_2 + 2)
                *(edi_2 + 2) = eax_1.b
                eax_1.b = *(esi_2 + 1)
                ecx_5 = ecx_7 u>> 2
                *(edi_2 + 1) = eax_1.b
                
                if (ecx_5 u< 8)
                    jump((&jump_table_48a270)[neg.d(ecx_5)])
                
                edi_2, esi_2 =
                    __builtin_memcpy(edi_2 - 3 - (ecx_5 << 2), esi_2 - 3 - (ecx_5 << 2), ecx_5 << 2)
                
                switch (3 & ecx_7)
                    case nullptr
                        return arg1
                    case 1
                        goto label_48a2d8
                    case 2
                        goto label_48a2e8
                    case 3
                        goto label_48a2fc

if (arg3 u>= 0x100 && data_2b6a9c0 != 0 && (edi & 0xf) == (esi & 0xf))
    return sub_486146(arg1, arg2, arg3) __tailcall

uint32_t ecx_2
void* edx_2

if ((edi & 3) != 0)
    if (arg3 u< 4)
        jump(*(((arg3 - 4) << 2) + &data_48a134))
    
    eax_1 = edi & 3
    void* ecx_4 = arg3 - 4 + eax_1
    
    switch (jump_table_48a038[eax_1])
        case 0x48a048
            edx_2 = 3 & ecx_4
            eax_1.b = *esi
            *edi = eax_1.b
            eax_1.b = esi[1]
            edi[1] = eax_1.b
            eax_1.b = esi[2]
            ecx_2 = ecx_4 u>> 2
            edi[2] = eax_1.b
            esi = &esi[3]
            edi = &edi[3]
            
            if (ecx_2 u>= 8)
                edi, esi = __builtin_memcpy(edi, esi, ecx_2 << 2)
                
                switch (edx_2)
                    case nullptr
                        return arg1
                    case 1
                        goto label_48a13c
                    case 2
                        goto label_48a148
                    case 3
                        goto label_48a15c
        case 0x48a074
            edx_2 = 3 & ecx_4
            eax_1.b = *esi
            *edi = eax_1.b
            eax_1.b = esi[1]
            ecx_2 = ecx_4 u>> 2
            edi[1] = eax_1.b
            esi = &esi[2]
            edi = &edi[2]
            
            if (ecx_2 u>= 8)
                edi, esi = __builtin_memcpy(edi, esi, ecx_2 << 2)
                
                switch (edx_2)
                    case nullptr
                        return arg1
                    case 1
                        goto label_48a13c
                    case 2
                        goto label_48a148
                    case 3
                        goto label_48a15c
        case 0x48a098
            edx_2 = 3 & ecx_4
            eax_1.b = *esi
            *edi = eax_1.b
            esi = &esi[1]
            ecx_2 = ecx_4 u>> 2
            edi = &edi[1]
            
            if (ecx_2 u>= 8)
                edi, esi = __builtin_memcpy(edi, esi, ecx_2 << 2)
                
                switch (edx_2)
                    case nullptr
                        return arg1
                    case 1
                        goto label_48a13c
                    case 2
                        goto label_48a148
                    case 3
                        goto label_48a15c
else
    ecx_2 = arg3 u>> 2
    edx_2 = arg3 & 3
    
    if (ecx_2 u>= 8)
        edi, esi = __builtin_memcpy(edi, esi, ecx_2 << 2)
        
        switch (edx_2)
            case nullptr
                return arg1
            case 1
                goto label_48a13c
            case 2
                goto label_48a148
            case 3
                goto label_48a15c

switch (ecx_2)
    case 0
        goto label_48a11b
    case 1
        goto label_48a10c
    case 2
        goto label_48a104
    case 3
        goto label_48a0fc
    case 4
        goto label_48a0f4
    case 5
        goto label_48a0ec
    case 6
        goto label_48a0e4
    case 7
        *(edi + (ecx_2 << 2) - 0x1c) = *(esi + (ecx_2 << 2) - 0x1c)
    label_48a0e4:
        *(edi + (ecx_2 << 2) - 0x18) = *(esi + (ecx_2 << 2) - 0x18)
    label_48a0ec:
        *(edi + (ecx_2 << 2) - 0x14) = *(esi + (ecx_2 << 2) - 0x14)
    label_48a0f4:
        *(edi + (ecx_2 << 2) - 0x10) = *(esi + (ecx_2 << 2) - 0x10)
    label_48a0fc:
        *(edi + (ecx_2 << 2) - 0xc) = *(esi + (ecx_2 << 2) - 0xc)
    label_48a104:
        *(edi + (ecx_2 << 2) - 8) = *(esi + (ecx_2 << 2) - 8)
    label_48a10c:
        *(edi + (ecx_2 << 2) - 4) = *(esi + (ecx_2 << 2) - 4)
        eax_1 = ecx_2 << 2
        esi = &esi[eax_1]
        edi = &edi[eax_1]
    label_48a11b:
        
        switch (edx_2)
            case nullptr
                return arg1
            case 1
            label_48a13c:
                eax_1.b = *esi
                *edi = eax_1.b
                return arg1
            case 2
            label_48a148:
                eax_1.b = *esi
                *edi = eax_1.b
                eax_1.b = esi[1]
                edi[1] = eax_1.b
                return arg1
            case 3
            label_48a15c:
                eax_1.b = *esi
                *edi = eax_1.b
                eax_1.b = esi[1]
                edi[1] = eax_1.b
                eax_1.b = esi[2]
                edi[2] = eax_1.b
                return arg1
