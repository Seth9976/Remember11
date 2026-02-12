// 函数: sub_425410
// 地址: 0x425410
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_20c
int32_t eax_1 = __security_cookie ^ &var_20c
int32_t* eax_2 = data_4b1de0
int32_t ecx_1 = arg2 << 5
void* ebp = *(eax_2[0x15] + ecx_1 + 0xc)
var_20c = ecx_1

if (arg1 != 0)
    if (*eax_2 == 1)
        sub_43c280(&eax_2[0x31d6], 2, zx.d(*(eax_2 + 0xc75e)), 0x16)
        void* eax_11 = data_4b1de0
        sub_43bda0(eax_11 + 0xed70, eax_11 + 0xc758, 0xe66, 2, 4)
    else
        sub_43c280(&eax_2[0x31d6], 2, zx.d(*(eax_2 + 0xc75e)), 0x1d)
        void* eax_4 = data_4b1de0
        sub_43c280(eax_4 + 0xc768, 2, zx.d(*(eax_4 + 0xc76e)), 0x1a)
        void* eax_6 = data_4b1de0
        sub_43bdf0(eax_6 + 0xe938, eax_6 + 0xc758, 0x1199)
        void* eax_8 = data_4b1de0
        sub_43bdf0(eax_8 + 0xeb54, eax_8 + 0xc768, 0x1199)
    
    eax_2 = data_4b1de0

char var_204[0xff]
sub_4414c0(arg2 + 1, &var_204, "%d")
char (* var_22c_3)[0xff] = &var_204
char var_104[0x100]
sub_480b92(&var_104, 0x49f2bc)
uint32_t edx_4 = zx.d(*(eax_2 + 0xc5ce))
eax_2[0x3172] = &var_104
sub_43c280(&eax_2[0x3172], 2, edx_4, 0x12)
sub_43bdf0(data_4b1de0 + 0x104a4, &eax_2[0x3172], 0xc00)
void* result

if (arg1 != 0)
    result = data_4b1de0
    *(result + 0x32) = 0xffff
    *(result + 0x34) = 0xffff
    *(result + 0x36) = 0xffff
    *(result + 0x38) = 0xffff
    *(result + 0x3a) = 0xffff
    *(result + 0x18) = 0xffffffff
    *(result + 0x30) = 0xff
else
    int32_t* esi_1 = data_4b1de0
    void var_105
    
    if (*esi_1 == 1)
        sub_43c280(&esi_1[0x31d6], 2, zx.d(*(esi_1 + 0xc75e)), 0x1a)
        void* eax_30 = data_4b1de0
        sub_43c280(eax_30 + 0xc768, 2, zx.d(*(eax_30 + 0xc76e)), 0x1a)
        void* eax_32 = data_4b1de0
        sub_43bda0(eax_32 + 0xed70, eax_32 + 0xc758, 0xccc, 2, 4)
    else
        char* ecx_6 = esi_1[0x31da]
        char (* edx_5)[0x100] = &var_104
        char i
        
        do
            i = *ecx_6
            *edx_5 = i
            ecx_6 = &ecx_6[1]
            edx_5 = &(*edx_5)[1]
        while (i != 0)
        int32_t eax_15 = sub_423b60(arg2, 0x600a)
        
        if (eax_15 != 0xff)
            void* ecx_7 = &var_105
            char i_1
            
            do
                i_1 = *(ecx_7 + 1)
                ecx_7 += 1
            while (i_1 != 0)
            *ecx_7 = 0x4081
            *(ecx_7 + 2) = 0
            sub_4414c0(eax_15, &var_204, "%d")
            char (* eax_16)[0xff] = &var_204
            char i_2
            
            do
                i_2 = *eax_16
                eax_16 = &(*eax_16)[1]
            while (i_2 != 0)
            int32_t eax_17 = eax_16 - &var_204
            void* edi_2 = &var_105
            char i_3
            
            do
                i_3 = *(edi_2 + 1)
                edi_2 += 1
            while (i_3 != 0)
            int32_t esi_2
            int32_t edi_3
            edi_3, esi_2 = __builtin_memcpy(edi_2, &var_204, eax_17 u>> 2 << 2)
            __builtin_memcpy(edi_3, esi_2, eax_17 & 3)
            void* eax_18 = &var_105
            char i_4
            
            do
                i_4 = *(eax_18 + 1)
                eax_18 += 1
            while (i_4 != 0)
            *eax_18 = 0x5e81
            *(eax_18 + 2) = 0
            sub_4414c0(sub_423b60(arg2, 0x600b), &var_204, "%d")
            char (* eax_20)[0xff] = &var_204
            char i_5
            
            do
                i_5 = *eax_20
                eax_20 = &(*eax_20)[1]
            while (i_5 != 0)
            int32_t eax_21 = eax_20 - &var_204
            void* edi_4 = &var_105
            char i_6
            
            do
                i_6 = *(edi_4 + 1)
                edi_4 += 1
            while (i_6 != 0)
            int32_t esi_3
            int32_t edi_5
            edi_5, esi_3 = __builtin_memcpy(edi_4, &var_204, eax_21 u>> 2 << 2)
            __builtin_memcpy(edi_5, esi_3, eax_21 & 3)
            esi_1 = data_4b1de0
        
        esi_1[0x31da] = &var_104
        sub_43c280(&esi_1[0x31d6], 2, zx.d(*(esi_1 + 0xc75e)), 0x1a)
        void* eax_23 = data_4b1de0
        sub_43c280(eax_23 + 0xc768, 2, zx.d(*(eax_23 + 0xc76e)), 0x1a)
        void* eax_25 = data_4b1de0
        sub_43bdf0(eax_25 + 0xe938, eax_25 + 0xc758, 0x1000)
        void* eax_27 = data_4b1de0
        sub_43bdf0(eax_27 + 0xeb54, eax_27 + 0xc768, 0x1000)
    
    sub_4414c0(zx.d(*(ebp + 0xea)) + 0x7d0, &var_204, "%04d")
    int32_t eax_36 = 0
    char i_7
    
    do
        i_7 = var_204[eax_36]
        var_104[eax_36] = i_7
        eax_36 += 1
    while (i_7 != 0)
    
    void* eax_37 = &var_105
    
    do
        i_7 = *(eax_37 + 1)
        eax_37 += 1
    while (i_7 != 0)
    
    *eax_37 = 0x5e81
    *(eax_37 + 2) = 0
    sub_4414c0(zx.d(*(ebp + 0xe9)), &var_204, "%02d")
    char (* eax_38)[0xff] = &var_204
    char i_8
    
    do
        i_8 = *eax_38
        eax_38 = &(*eax_38)[1]
    while (i_8 != 0)
    int32_t eax_39 = eax_38 - &var_204
    void* edi_6 = &var_105
    char i_9
    
    do
        i_9 = *(edi_6 + 1)
        edi_6 += 1
    while (i_9 != 0)
    int32_t esi_4
    int32_t edi_7
    edi_7, esi_4 = __builtin_memcpy(edi_6, &var_204, eax_39 u>> 2 << 2)
    __builtin_memcpy(edi_7, esi_4, eax_39 & 3)
    void* eax_40 = &var_105
    char i_10
    
    do
        i_10 = *(eax_40 + 1)
        eax_40 += 1
    while (i_10 != 0)
    *eax_40 = 0x5e81
    *(eax_40 + 2) = 0
    sub_4414c0(zx.d(*(ebp + 0xe8)), &var_204, "%02d")
    char (* eax_42)[0xff] = &var_204
    char i_11
    
    do
        i_11 = *eax_42
        eax_42 = &(*eax_42)[1]
    while (i_11 != 0)
    int32_t eax_43 = eax_42 - &var_204
    void* edi_8 = &var_105
    char i_12
    
    do
        i_12 = *(edi_8 + 1)
        edi_8 += 1
    while (i_12 != 0)
    int32_t esi_5
    int32_t edi_9
    edi_9, esi_5 = __builtin_memcpy(edi_8, &var_204, eax_43 u>> 2 << 2)
    __builtin_memcpy(edi_9, esi_5, eax_43 & 3)
    void* eax_44 = &var_105
    char i_13
    
    do
        i_13 = *(eax_44 + 1)
        eax_44 += 1
    while (i_13 != 0)
    *eax_44 = 0x4081
    *(eax_44 + 2) = 0
    sub_4414c0(zx.d(*(ebp + 0xe7)), &var_204, "%02d")
    char (* eax_45)[0xff] = &var_204
    char i_14
    
    do
        i_14 = *eax_45
        eax_45 = &(*eax_45)[1]
    while (i_14 != 0)
    int32_t eax_46 = eax_45 - &var_204
    void* edi_10 = &var_105
    char i_15
    
    do
        i_15 = *(edi_10 + 1)
        edi_10 += 1
    while (i_15 != 0)
    int32_t esi_6
    int32_t edi_11
    edi_11, esi_6 = __builtin_memcpy(edi_10, &var_204, eax_46 u>> 2 << 2)
    __builtin_memcpy(edi_11, esi_6, eax_46 & 3)
    void* eax_47 = &var_105
    char i_16
    
    do
        i_16 = *(eax_47 + 1)
        eax_47 += 1
    while (i_16 != 0)
    *eax_47 = 0x4681
    *(eax_47 + 2) = 0
    sub_4414c0(zx.d(*(ebp + 0xe6)), &var_204, "%02d")
    char (* eax_49)[0xff] = &var_204
    char i_17
    
    do
        i_17 = *eax_49
        eax_49 = &(*eax_49)[1]
    while (i_17 != 0)
    
    int32_t eax_50 = eax_49 - &var_204
    void* edi_12 = &var_105
    
    do
        i_17 = *(edi_12 + 1)
        edi_12 += 1
    while (i_17 != 0)
    
    int32_t esi_7
    int32_t edi_13
    edi_13, esi_7 = __builtin_memcpy(edi_12, &var_204, eax_50 u>> 2 << 2)
    __builtin_memcpy(edi_13, esi_7, eax_50 & 3)
    char (* var_220_1)[0x100] = &var_104
    void* esi_9 = data_4b1de0 + 0xc5d8
    sub_480b92(&var_204, 0x49f2a4)
    uint32_t ecx_39 = zx.d(*(esi_9 + 6))
    *esi_9 = &var_204
    sub_43c280(esi_9, 2, ecx_39, 0x13)
    sub_43bdf0(data_4b1de0 + 0x106c0, esi_9, 0xb33)
    int32_t eax_51
    int32_t edx_11
    edx_11:eax_51 = mulu.dp.d(0x91a2b3c5, *(ebp + 0xec))
    sub_4414c0(edx_11 u/ 0x1e000, &var_204, "%4d")
    int32_t eax_53 = 0
    char i_18
    
    do
        i_18 = var_204[eax_53]
        var_104[eax_53] = i_18
        eax_53 += 1
    while (i_18 != 0)
    
    void* eax_54 = &var_105
    
    do
        i_18 = *(eax_54 + 1)
        eax_54 += 1
    while (i_18 != 0)
    
    *eax_54 = 0x4681
    *(eax_54 + 2) = 0
    int32_t eax_55
    int32_t edx_15
    edx_15:eax_55 = mulu.dp.d(0x91a2b3c5, *(ebp + 0xec))
    sub_4414c0(modu.dp.d(0:(edx_15 u>> 0xb), 0x3c), &var_204, "%02d")
    char (* eax_59)[0xff] = &var_204
    char i_19
    
    do
        i_19 = *eax_59
        eax_59 = &(*eax_59)[1]
    while (i_19 != 0)
    
    int32_t eax_60 = eax_59 - &var_204
    void* edi_14 = &var_105
    
    do
        i_19 = *(edi_14 + 1)
        edi_14 += 1
    while (i_19 != 0)
    
    int32_t esi_10
    int32_t edi_15
    edi_15, esi_10 = __builtin_memcpy(edi_14, &var_204, eax_60 u>> 2 << 2)
    char (* var_220_2)[0x100] = &var_104
    __builtin_memcpy(edi_15, esi_10, eax_60 & 3)
    void* esi_12 = data_4b1de0 + 0xc5e8
    sub_480b92(&var_204, 0x49f288)
    uint32_t edx_18 = zx.d(*(esi_12 + 6))
    *esi_12 = &var_204
    sub_43c280(esi_12, 2, edx_18, 0x13)
    sub_43bdf0(data_4b1de0 + 0x108dc, esi_12, 0xb33)
    result = data_4b1de0
    *(result + 0x32) = *(ebp + 0x104)
    *(result + 0x34) = *(ebp + 0x116)
    *(result + 0x36) = *(ebp + 0x128)
    *(result + 0x38) = *(ebp + 0x13a)
    *(result + 0x3a) = *(ebp + 0xd2)
    *(result + 0x2c) = ebp
    *(result + 0x18) = *(ebp + 0xec)
    
    if (*(ebp + 0xd6) == 2)
        *(result + 0x30) = 0xff
    else
        int16_t ecx_46
        ecx_46.b = *(ebp + 0xd6)
        *(result + 0x30) = ecx_46.b

int32_t ecx_47 = var_20c
int32_t edx_22 = *(result + 0x54)
*(result + 0x46) = 0
*(result + 0x48) = 0
*(result + 0x4a) = 0
*(result + 0x4c) = 0
*(result + 0x4e) = 0
*(result + 0x1c) = 0
*(result + 0x28) = 0
*(result + 0x20) = 1
*(result + 0x5c) = 0
int32_t edx_23 = sx.d(*(edx_22 + ecx_47 + 4))
*(result + 0xc3fc) = 0
*(result + 0xc3f8) = edx_23
sub_480cd2(eax_1 ^ &var_20c)
return result
