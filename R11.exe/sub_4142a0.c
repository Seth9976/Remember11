// 函数: sub_4142a0
// 地址: 0x4142a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx = data_e7e648
void* ebx = *(ecx + 0x20834)
int32_t eax = sx.d(*(arg1 + 0x10))

if (eax == 0)
    int32_t __saved_ebp_1 = 9
    int32_t __saved_edi_1 = 0xc
    int32_t var_b4_1 = 0x40
    int32_t var_b8_1 = 0x40
    sub_480c0d("%d,%d,%d,%d\n")
    *(arg1 + 0x10) = 1
    ecx = data_e7e648
else if (eax != 1)
    return 0

int16_t eax_4 = *(ecx + 0x2082a)

if (eax_4 != 0)
    *(ecx + 0x2082e) += eax_4

int32_t ecx_1 = 0
int32_t var_a0 = 0
int32_t var_9c = 0
char* ebx_1 = ebx + 4
int32_t ebp = 0xf0

while (true)
    for (int32_t i = 0; i s< 0x300; )
        uint32_t eax_9 = sub_441360(ecx_1 s/ 0x168)
        int32_t eax_20
        int32_t edx_12
        edx_12:eax_20 = sx.q(divs.dp.d(
            sx.q((sub_441360(((zx.d(*(data_e7e648 + 0x2082e)) + eax_9 + i) << 0x10) s/ 0x168) s>> 7)
                + 0x3f), 
            ebp s/ 0x78 + 1))
        int32_t eax_22 = (eax_20 - edx_12) s>> 1
        
        if (eax_22 s< 0)
            eax_22 = 0
        else if (eax_22 s> 0x80)
            eax_22 = 0x80
        
        *(ebx_1 - 4) = i.w
        *(ebx_1 - 2) = var_a0.w
        *ebx_1 = eax_22.b
        i += 0x40
        ebx_1 = &ebx_1[6]
    
    var_a0 += 0x40
    var_9c += 0xc00000
    ebp -= 0x40
    
    if (ebp s<= 0xfffffeb0)
        break
    
    ecx_1 = var_9c

void* esi_4 = ebx
void* edi_1 = esi_4 + 6
void* ebx_2 = esi_4 + 0x48
void* ebp_1 = esi_4 + 0x4e
sub_442e20()
data_c7bbe0 = 0xa
int32_t var_88 = 0x80
int32_t var_8c = 0x80
int32_t var_90 = 0x80
int32_t var_64 = 0x80
int32_t var_68 = 0x80
int32_t var_6c = 0x80
int32_t var_40 = 0x80
int32_t var_44 = 0x80
int32_t var_48 = 0x80
int32_t var_1c = 0x80
int32_t var_20 = 0x80
int32_t var_24 = 0x80
int32_t i_2 = 8
int32_t i_1

do
    int32_t j_1 = 0xb
    int32_t j
    
    do
        uint32_t var_84_1 = zx.d(*(esi_4 + 4))
        uint32_t var_80_1 = zx.d(*esi_4)
        uint32_t var_7c_1 = zx.d(*(esi_4 + 2))
        uint32_t var_3c_1 = zx.d(*(edi_1 + 4))
        uint32_t var_38_1 = zx.d(*edi_1)
        uint32_t var_34_1 = zx.d(*(edi_1 + 2))
        uint32_t var_60_1 = zx.d(*(ebx_2 + 4))
        uint32_t var_5c_1 = zx.d(*ebx_2)
        uint32_t var_58_1 = zx.d(*(ebx_2 + 2))
        uint32_t var_18_1 = zx.d(*(ebp_1 + 4))
        uint32_t var_14_1 = zx.d(*ebp_1)
        uint32_t var_10_1 = zx.d(*(ebp_1 + 2))
        sub_443570(&var_90, 3)
        esi_4 += 6
        edi_1 += 6
        ebx_2 += 6
        ebp_1 += 6
        j = j_1
        j_1 -= 1
    while (j != 1)
    esi_4 += 6
    edi_1 += 6
    ebx_2 += 6
    ebp_1 += 6
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
sub_442f40()
return 0
