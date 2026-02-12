// 函数: sub_428350
// 地址: 0x428350
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* edi = data_a5dce4
int32_t esi_1 = *(edi + 0xa2c) + *(edi + 0xa28)
int32_t eax_2 = *((esi_1 << 5) + edi + 0x827c)

if (eax_2 == 0xffffffff)
    *(((esi_1 + 0x414) << 5) + edi) = 0
    return eax_2

int32_t ebp = data_2b5a734
int32_t edx = eax_2 * 2
int32_t eax_3 = *(ebp + (edx << 2))
int32_t ecx = 0
int32_t var_8 = eax_3

if (*(ebp + (edx << 2) + 4) u> 0)
    void* ebx_1 = edi + 0x407e4
    void* var_c_1 = edi + 0x63094
    void* edi_1 = edi + 0x926c
    
    while (true)
        char* edx_2 = *(eax_3 + (ecx << 3))
        *edi_1 = edx_2
        eax_3.w = *(eax_3 + (ecx << 3) + 4)
        *(edi_1 - 8) = eax_3.w
        void* esi_4 = ebx_1
        
        do
            eax_3.b = *edx_2
            *esi_4 = eax_3.b
            edx_2 = &edx_2[1]
            esi_4 += 1
        while (eax_3.b != 0)
        
        void** eax_4 = var_c_1
        *eax_4 = ebx_1
        ecx += 1
        edi_1 += 0xc
        ebx_1 += 0x80
        var_c_1 = &eax_4[4]
        
        if (ecx u>= *(ebp + (edx << 2) + 4))
            break
        
        eax_3 = var_8
    
    edi = data_a5dce4

sub_43c320(edi + 0x63094, *(ebp + (edx << 2) + 4), 1, zx.d(*(edi + 0x6309a)), 0x12)
void* eax_7 = data_a5dce4
sub_43be40(eax_7 + 0xbcdc8, eax_7 + 0x63094, *(ebp + (edx << 2) + 4), 0x1000)
int32_t eax_9 = data_a5dce4
*(((esi_1 + 0x414) << 5) + eax_9) = *(ebp + (edx << 2) + 4)
return eax_9
