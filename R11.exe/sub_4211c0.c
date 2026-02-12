// 函数: sub_4211c0
// 地址: 0x4211c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx = data_a5d910
int32_t edi
int32_t var_10 = edi

if (arg2 s< 0)
    int32_t eax_2 = *(ecx + 0x7850) + (*(ecx + 0x24) << 2)
    int32_t temp1_1
    
    do
        temp1_1 = mods.dp.d(sx.q(*(ecx + 0x784c) + arg2 + 5), 5)
        *(ecx + 0x784c) = temp1_1
    while (*((eax_2 * 5 + temp1_1) * 0x30 + ecx + 0x50) == 0)
else if (arg2 s> 0)
    int32_t eax_8 = *(ecx + 0x7850) + (*(ecx + 0x24) << 2)
    int32_t temp1_2
    
    do
        temp1_2 = mods.dp.d(sx.q(*(ecx + 0x784c) + arg2), 5)
        *(ecx + 0x784c) = temp1_2
    while (*((temp1_2 + eax_8 * 5) * 0x30 + ecx + 0x50) == 0)

if (arg1 s< 0)
    edi = *(ecx + 0x784c)
    int32_t esi_2 = *(ecx + 0x24) * 2
    int32_t eax_16
    
    do
        eax_16 = (*(ecx + 0x7850) + arg1 + 4) & 0x80000003
        
        if (eax_16 s< 0)
            eax_16 = ((eax_16 - 1) | 0xfffffffc) + 1
        
        *(ecx + 0x7850) = eax_16
    while (*(((eax_16 + esi_2 * 2) * 5 + edi) * 0x30 + ecx + 0x50) == 0)
else if (arg1 s> 0)
    edi = *(ecx + 0x784c)
    int32_t esi_5 = *(ecx + 0x24) * 2
    int32_t eax_25
    
    do
        eax_25 = (*(ecx + 0x7850) + arg1) & 0x80000003
        
        if (eax_25 s< 0)
            eax_25 = ((eax_25 - 1) | 0xfffffffc) + 1
        
        *(ecx + 0x7850) = eax_25
    while (*(((eax_25 + esi_5 * 2) * 5 + edi) * 0x30 + ecx + 0x50) == 0)

sub_441760(ecx + 0x7858, *(ecx + 0x784c) * 0x78 + 0x16, 0)
void* eax_32 = data_a5d910
sub_441760(eax_32 + 0x786c, *(eax_32 + 0x7850) * 0x5a + 0x30, 0)
void* eax_34 = data_a5d910
void* ebp = eax_34 + 0x27b00
void* ecx_9 =
    ((*(eax_34 + 0x7850) + (*(eax_34 + 0x24) << 2)) * 5 + *(eax_34 + 0x784c)) * 0x30 + eax_34
*ebp = 0

if (*(ecx_9 + 0x4c) != 1)
    char* ebx_1 = *(ecx_9 + 0x64)
    char* ecx_38 = ebx_1
    int32_t i = 0
    int32_t edx_18
    
    do
        edx_18.b = *ecx_38
        ecx_38 = &ecx_38[1]
    while (edx_18.b != 0)
    
    if (((ecx_38 - &ecx_38[1]) & 0xfffffffe) u> 0)
        char* ecx_42
        
        do
            void* ecx_41 = ebp - 1
            
            do
                edx_18.b = *(ecx_41 + 1)
                ecx_41 += 1
            while (edx_18.b != 0)
            
            edx_18.w = 0x4881
            *ecx_41 = 0x4881
            edx_18.b = 0
            *(ecx_41 + 2) = 0
            ecx_42 = ebx_1
            i += 1
            
            do
                edx_18.b = *ecx_42
                ecx_42 = &ecx_42[1]
            while (edx_18.b != 0)
        while (i u< (ecx_42 - &ecx_42[1]) u>> 1)
else
    int32_t esi_7 = 0
    
    if (*(((*(eax_34 + 0x7850) + (*(eax_34 + 0x24) << 2)) * 5 + *(eax_34 + 0x784c)) * 0x30 + eax_34
            + 0x50) != 0)
        do
            sub_401ff0(sx.d(*(eax_34 + ((esi_7
                + ((*(eax_34 + 0x7850) + (*(eax_34 + 0x24) << 2)) * 5 + *(eax_34 + 0x784c)) * 0x18)
                << 1) + 0x50)))
            eax_34 = data_a5d910
            esi_7 += 1
        while (*(eax_34 + ((esi_7
            + ((*(eax_34 + 0x7850) + (*(eax_34 + 0x24) << 2)) * 5 + *(eax_34 + 0x784c)) * 0x18) << 1)
            + 0x50) != 0)
    
    ebp = eax_34 + 0x27b00
    char* ecx_32 = *(
        ((*(eax_34 + 0x7850) + (*(eax_34 + 0x24) << 2)) * 5 + *(eax_34 + 0x784c)) * 0x30 + eax_34
        + 0x64)
    char* esi_8 = ecx_32
    int32_t edx_25
    
    do
        edx_25.b = *ecx_32
        ecx_32 = &ecx_32[1]
    while (edx_25.b != 0)
    void* edx_26 = ecx_32 - esi_8
    void* edi_3 = ebp - 1
    void* ecx_33
    
    do
        ecx_33.b = *(edi_3 + 1)
        edi_3 += 1
    while (ecx_33.b != 0)
    int32_t esi_9
    int32_t edi_4
    edi_4, esi_9 = __builtin_memcpy(edi_3, esi_8, edx_26 u>> 2 << 2)
    __builtin_memcpy(edi_4, esi_9, edx_26 & 3)

uint32_t eax_35 = zx.d(*(eax_34 + 0x27d36))
*(eax_34 + 0x27d30) = ebp
sub_43c280(eax_34 + 0x27d30, 1, eax_35, 0x18)
void* eax_36 = data_a5d910
return sub_43bdf0(eax_36 + 0x283e4, eax_36 + 0x27d30, 0x1000)
