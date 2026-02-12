// 函数: sub_425c10
// 地址: 0x425c10
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* var_208
int32_t eax_1 = __security_cookie ^ &var_208
int32_t* edi = data_4b1de0
void* eax_2 = edi[0x15]
int32_t ebx_1 = arg1 << 5
void* ecx = *(eax_2 + ebx_1 + 0xc)
void* ebp = &edi[arg2 * 8]
*(ebp + 0xc658) = *(eax_2 + ebx_1 + 0x18)
var_208 = ecx
char* edx_2 = *(ebx_1 + edi[0x15] + 0x1c)
*(ebp + 0xc668) = edx_2
char var_204[0x100]
char var_104[0x100]

if (*edi != 1 && *(ebx_1 + edi[0x15] + 5) == 0)
    char* eax_6 = edx_2
    void* edx_3 = &var_204 - eax_6
    int32_t ecx_1
    
    do
        ecx_1.b = *eax_6
        *(edx_3 + eax_6) = ecx_1.b
        eax_6 = &eax_6[1]
    while (ecx_1.b != 0)
    int32_t eax_7 = sub_423b60(arg1, 0x600a)
    
    if (eax_7 != 0xff)
        void* ecx_2 = &var_208:3
        char i
        
        do
            i = *(ecx_2 + 1)
            ecx_2 += 1
        while (i != 0)
        *ecx_2 = 0x4081
        *(ecx_2 + 2) = 0
        sub_4414c0(eax_7, &var_104, "%d")
        char (* eax_8)[0x100] = &var_104
        char i_1
        
        do
            i_1 = *eax_8
            eax_8 = &(*eax_8)[1]
        while (i_1 != 0)
        
        int32_t eax_9 = eax_8 - &var_104
        void* edi_1 = &var_208:3
        
        do
            i_1 = *(edi_1 + 1)
            edi_1 += 1
        while (i_1 != 0)
        
        int32_t esi_2
        int32_t edi_2
        edi_2, esi_2 = __builtin_memcpy(edi_1, &var_104, eax_9 u>> 2 << 2)
        __builtin_memcpy(edi_2, esi_2, eax_9 & 3)
        void* eax_10 = &var_208:3
        char i_2
        
        do
            i_2 = *(eax_10 + 1)
            eax_10 += 1
        while (i_2 != 0)
        *eax_10 = 0x5e81
        *(eax_10 + 2) = 0
        sub_4414c0(sub_423b60(arg1, 0x600b), &var_104, "%d")
        char (* eax_13)[0x100] = &var_104
        char i_3
        
        do
            i_3 = *eax_13
            eax_13 = &(*eax_13)[1]
        while (i_3 != 0)
        
        int32_t eax_14 = eax_13 - &var_104
        void* edi_3 = &var_208:3
        
        do
            i_3 = *(edi_3 + 1)
            edi_3 += 1
        while (i_3 != 0)
        
        int32_t esi_3
        int32_t edi_4
        edi_4, esi_3 = __builtin_memcpy(edi_3, &var_104, eax_14 u>> 2 << 2)
        __builtin_memcpy(edi_4, esi_3, eax_14 & 3)
        edi = data_4b1de0
    
    *(ebp + 0xc668) = &var_204

int32_t esi_5 = arg2 * 2
sub_43c280(&edi[esi_5 * 4 + 0x3196], 2, zx.d(*(&edi[esi_5 * 4] + 0xc65e)), 0x18)
sub_43bdf0(esi_5 * 0x21c + data_4b1de0 + 0xc778, &edi[esi_5 * 4 + 0x3196], 0x1000)
void* edx_7 = data_4b1de0
int32_t ecx_14 = (esi_5 + 1) << 4
sub_43c280(ecx_14 + edx_7 + 0xc658, 2, zx.d(*(ecx_14 + edx_7 + 0xc65e)), 0x18)
sub_43bdf0((esi_5 + 1) * 0x21c + data_4b1de0 + 0xc778, ecx_14 + edx_7 + 0xc658, 0x1000)

if (*(*(data_4b1de0 + 0x54) + ebx_1 + 5) != 0)
    char* eax_31 = data_4b1ca0
    void* edx_9 = &var_204 - eax_31
    int32_t ecx_16
    
    do
        ecx_16.b = *eax_31
        *(edx_9 + eax_31) = ecx_16.b
        eax_31 = &eax_31[1]
    while (ecx_16.b != 0)
else
    void* ebx_2 = var_208
    sub_4414c0(zx.d(*(ebx_2 + 0xe9)), &var_104, "%2d")
    int32_t eax_20 = 0
    char i_4
    
    do
        i_4 = var_104[eax_20]
        var_204[eax_20] = i_4
        eax_20 += 1
    while (i_4 != 0)
    
    void* eax_21 = &var_208:3
    
    do
        i_4 = *(eax_21 + 1)
        eax_21 += 1
    while (i_4 != 0)
    
    *eax_21 = 0x5e81
    *(eax_21 + 2) = 0
    sub_4414c0(zx.d(*(ebx_2 + 0xe8)), &var_104, "%2d")
    char (* eax_22)[0x100] = &var_104
    char i_5
    
    do
        i_5 = *eax_22
        eax_22 = &(*eax_22)[1]
    while (i_5 != 0)
    int32_t eax_23 = eax_22 - &var_104
    void* edi_7 = &var_208:3
    char i_6
    
    do
        i_6 = *(edi_7 + 1)
        edi_7 += 1
    while (i_6 != 0)
    int32_t esi_8
    int32_t edi_8
    edi_8, esi_8 = __builtin_memcpy(edi_7, &var_104, eax_23 u>> 2 << 2)
    __builtin_memcpy(edi_8, esi_8, eax_23 & 3)
    void* eax_24 = &var_208:3
    char i_7
    
    do
        i_7 = *(eax_24 + 1)
        eax_24 += 1
    while (i_7 != 0)
    *eax_24 = 0x4081
    *(eax_24 + 2) = 0
    sub_4414c0(zx.d(*(ebx_2 + 0xe7)), &var_104, "%2d")
    char (* eax_26)[0x100] = &var_104
    char i_8
    
    do
        i_8 = *eax_26
        eax_26 = &(*eax_26)[1]
    while (i_8 != 0)
    int32_t eax_27 = eax_26 - &var_104
    void* edi_9 = &var_208:3
    char i_9
    
    do
        i_9 = *(edi_9 + 1)
        edi_9 += 1
    while (i_9 != 0)
    int32_t esi_9
    int32_t edi_10
    edi_10, esi_9 = __builtin_memcpy(edi_9, &var_104, eax_27 u>> 2 << 2)
    __builtin_memcpy(edi_10, esi_9, eax_27 & 3)
    void* eax_28 = &var_208:3
    char i_10
    
    do
        i_10 = *(eax_28 + 1)
        eax_28 += 1
    while (i_10 != 0)
    *eax_28 = 0x4681
    *(eax_28 + 2) = 0
    sub_4414c0(zx.d(*(ebx_2 + 0xe6)), &var_104, "%02d")
    char (* eax_29)[0x100] = &var_104
    char i_11
    
    do
        i_11 = *eax_29
        eax_29 = &(*eax_29)[1]
    while (i_11 != 0)
    int32_t eax_30 = eax_29 - &var_104
    void* edi_11 = &var_208:3
    char i_12
    
    do
        i_12 = *(edi_11 + 1)
        edi_11 += 1
    while (i_12 != 0)
    int32_t esi_10
    int32_t edi_12
    edi_12, esi_10 = __builtin_memcpy(edi_11, &var_104, eax_30 u>> 2 << 2)
    __builtin_memcpy(edi_12, esi_10, eax_30 & 3)

void* eax_34 = (arg2 << 4) + data_4b1de0 + 0x11368
uint32_t edx_11 = zx.d(*(eax_34 + 6))
*eax_34 = &var_204
int32_t result = sub_43c280(eax_34, 2, edx_11, 0x13)
sub_480cd2(eax_1 ^ &var_208)
return result
