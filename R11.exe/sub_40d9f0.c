// 函数: sub_40d9f0
// 地址: 0x40d9f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* ecx_5 = arg1
char* esi = *(ecx_5[0x11] + 8)
int32_t eax_1 = sx.d(ecx_5[4].w)
int32_t i_3 = 0

if (eax_1 == 0)
    *(data_e7e648 + 0x303c) = 1
    *(data_e7e648 + 0x3038) = zx.d(esi[1])
    *(data_e7e648 + 0x3034) = 0
    *(data_e7e648 + 0x3028) = 0
    *(data_e7e648 + 0x3030) = 0
    *(data_e7e648 + 0x3040) = 0
    void* eax_10
    eax_10.b = *esi
    
    if (eax_10.b == 0x33)
        uint32_t edi_2 = zx.d(esi[1])
        int32_t i = edi_2 - 1
        
        if (edi_2 - 1 s>= 0)
            void* ebp_3 = (i << 2) + 0x2fe0
            void* ebx_4 = &esi[i * 0xc + 2]
            
            do
                int32_t eax_19
                eax_19.b = esi[2] != 0
                *(data_e7e648 + ebp_3) = sub_446d10(&(&data_4b0920)[eax_19 * 3], ebx_4, 0, 2)
                i -= 1
                ebp_3 -= 4
                ebx_4 -= 0xc
            while (i s>= 0)
            
            ecx_5 = arg1
    else if (eax_10.b == 0x69)
        *(data_e7e648 + 0x3030) = 1
        uint32_t edi_1 = zx.d(esi[1])
        int32_t i_1 = edi_1 - 1
        
        if (edi_1 - 1 s>= 0)
            void* ebx_3 = (i_1 << 2) + 0x2fe0
            void* ebp_2 = &esi[i_1 * 0x14 + 2]
            
            do
                int32_t eax_16
                eax_16.b = esi[2] != 0
                *(ebx_3 + data_e7e648) = sub_446d10(&(&data_4b0920)[eax_16 * 3], ebp_2, 0, 2)
                i_1 -= 1
                ebx_3 -= 4
                ebp_2 -= 0x14
            while (i_1 s>= 0)
            
            ecx_5 = arg1
    else if (eax_10.b == 0x72)
        *(data_e7e648 + 0x3040) = 1
        uint32_t edi = zx.d(esi[1])
        int32_t i_2 = edi - 1
        
        if (edi - 1 s>= 0)
            void* ebx_2 = (i_2 << 2) + 0x2fe0
            void* ebp_1 = &esi[i_2 * 0xc + 2]
            
            do
                int32_t eax_12
                eax_12.b = esi[2] != 0
                *(ebx_2 + data_e7e648) = sub_446d10(&(&data_4b0920)[eax_12 * 3], ebp_1, 0, 2)
                i_2 -= 1
                ebx_2 -= 4
                ebp_1 -= 0xc
            while (i_2 s>= 0)
            
            ecx_5 = arg1
    
    ecx_5[4].w = 1
    i_3 = 0
else if (eax_1 != 1)
    *(ecx_5 + 0xe) = 0
    *(ecx_5 + 0xd) = 0
    return 0

if (esi[1] u> 0)
    int32_t* ebx_5 = 0x2fe0
    
    do
        if (sub_446f90(*(ebx_5 + data_e7e648)) == 0)
            break
        
        i_3 += 1
        ebx_5 = &ebx_5[1]
    while (i_3 s< zx.d(esi[1]))
    
    ecx_5 = arg1

if (i_3 != zx.d(esi[1]))
    *(ecx_5 + 0xe) = 0
    *(ecx_5 + 0xd) = 0
    return 0

*(data_e7e648 + 0x303c) = 0
uint32_t eax_24
eax_24.b = *esi
uint32_t edx_8

if (eax_24.b == 0x33 || eax_24.b == 0x72)
    edx_8 = zx.d(esi[1]) * 3
else
    edx_8 = zx.d(esi[1]) * 5

void* eax_25 = ecx_5[0x11]
*(eax_25 + 8) += (edx_8 << 2) + 2
sub_40a8a0(ecx_5)
return 0
