// 函数: sub_455430
// 地址: 0x455430
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t* edi = arg6
uint32_t edx = zx.d(*edi)
int32_t eax = *(edi + 0x30)
int32_t var_10 = 0

if (edi[3] u> 0)
    int32_t esi_4 = ((arg1 & 0x3fff) - edx) << 8
    int32_t var_8_1 = esi_4
    arg6 = arg5
    
    while (true)
        uint32_t ecx_2 = zx.d(edi[2])
        char* esi_7 = ecx_2 * var_10 * 3 + esi_4 + eax
        int32_t i = 0
        
        if (ecx_2 s> 0)
            void* ecx_3 = &esi_7[2]
            void* eax_4 = arg6 + 1
            
            do
                *(eax_4 + 1) = *(ecx_3 - 2)
                *eax_4 = *(ecx_3 - 1)
                *(eax_4 - 1) = *ecx_3
                *(eax_4 + 2) = 0xff
                i += 1
                ecx_3 += 3
                eax_4 += 4
            while (i s< zx.d(edi[2]))
        
        uint32_t edx_5 = zx.d(edi[2])
        
        if (edx_5 s< arg2)
            void* eax_6 = arg6 + (edx_5 << 2) + 1
            int32_t i_3 = arg2 - edx_5
            int32_t i_1
            
            do
                *(eax_6 + 1) = *esi_7
                *eax_6 = esi_7[1]
                *(eax_6 - 1) = esi_7[2]
                *(eax_6 + 2) = 0xff
                eax_6 += 4
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        arg6 += arg4
        bool cond:1_1 = var_10 + 1 s< zx.d(edi[3])
        var_10 += 1
        
        if (not(cond:1_1))
            break
        
        esi_4 = var_8_1

uint32_t ecx_6 = zx.d(edi[3])

if (ecx_6 s>= arg3)
    *(arg7 + 0x48) = 1
    return arg3

void* edx_12 = ecx_6 * arg4 + arg5
char* ebx_4 = (((arg1 & 0x3fff) - edx) << 8) + eax
arg6 = arg3 - ecx_6
void* i_2

do
    int32_t j = 0
    
    if (edi[2] u> 0)
        void* ecx_7 = &ebx_4[2]
        void* eax_11 = edx_12 + 1
        
        do
            *(eax_11 + 1) = *(ecx_7 - 2)
            *eax_11 = *(ecx_7 - 1)
            *(eax_11 - 1) = *ecx_7
            *(eax_11 + 2) = 0xff
            j += 1
            ecx_7 += 3
            eax_11 += 4
        while (j s< zx.d(edi[2]))
    
    uint32_t esi_8 = zx.d(edi[2])
    
    if (esi_8 s< arg2)
        void* eax_12 = edx_12 + (esi_8 << 2) + 1
        int32_t j_2 = arg2 - esi_8
        int32_t j_1
        
        do
            *(eax_12 + 1) = *ebx_4
            *eax_12 = ebx_4[1]
            *(eax_12 - 1) = ebx_4[2]
            *(eax_12 + 2) = 0xff
            eax_12 += 4
            j_1 = j_2
            j_2 -= 1
        while (j_1 != 1)
    
    edx_12 += arg4
    i_2 = arg6
    arg6 -= 1
while (i_2 != 1)
*(arg7 + 0x48) = 1
return arg7
