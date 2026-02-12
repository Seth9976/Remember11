// 函数: sub_40abe0
// 地址: 0x40abe0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_4 = ecx
int32_t* ebp = arg1
void* edi = *(ebp[0x11] + 8)
int16_t* esi = edi + 4
arg1.b = 0
var_4:3.b = 7
int32_t eax_4

while (true)
    int32_t eax_1 = sub_414cf0(zx.d(*esi))
    int32_t eax_2 = sub_414cf0(zx.d(esi[1]))
    char ecx_2 = 0
    int32_t ebx_1
    
    switch (zx.d(esi[2].b))
        case 0
            if (eax_1 == eax_2)
                ecx_2 = 1
        case 1
            if (eax_1 != eax_2)
                ecx_2 = 1
        case 2
            if (eax_1 s<= eax_2)
                ecx_2 = 1
        case 3
            if (eax_1 s>= eax_2)
                ecx_2 = 1
        case 4
            if (eax_1 s< eax_2)
                ecx_2 = 1
        case 5
            if (eax_1 s> eax_2)
                ecx_2 = 1
        case 6
            ebx_1.b = eax_1.b & eax_2.b
            ecx_2 = ebx_1.b
        case 7
            ebx_1.b = eax_1.b | eax_2.b
            ecx_2 = ebx_1.b
    
    uint32_t eax_3 = zx.d(var_4:3.b)
    
    if (eax_3 == 0)
        arg1.b |= ecx_2
    else if (eax_3 == 6)
        arg1.b &= ecx_2
    else if (eax_3 == 7)
        arg1.b |= ecx_2
    
    eax_4.b = *(esi + 5)
    
    if (eax_4.b == 0)
        break
    
    var_4:3.b = eax_4.b
    esi = &esi[3]

eax_4.b = *(edi + 1)

if (eax_4.b == 0xff)
    if (arg1.b == 1)
        *(ebp[0x11] + 8) = &esi[3]
        sub_40a8a0(ebp)
        return 0
    
    void* eax_8 = zx.d(*(edi + 2)) + *(ebp[0x11] + 0xc)
    int32_t ecx_4
    ecx_4.b = *(eax_8 + 1)
    void* eax_9 = eax_8 + 4
    
    while (*(eax_9 + 1) != ecx_4.b)
        eax_9 += 4
    
    void* ecx_5 = ebp[0x11]
    *(ecx_5 + 8) = zx.d(*(eax_9 + 2)) + *(ecx_5 + 0xc)
    sub_40a8a0(ebp)
    return 0

if (eax_4.b != 0xfe)
    bool cond:1
    
    if (eax_4.b != 0)
        cond:1 = arg1.b != 0
    else
        cond:1 = arg1.b != 1
    
    if (cond:1)
        *(ebp[0x11] + 8) = &esi[3]
        sub_40a8a0(ebp)
        return 0
    
    void* eax_16 = ebp[0x11]
    *(eax_16 + 8) = zx.d(*(edi + 2)) + *(eax_16 + 0xc)
    sub_40a8a0(ebp)
    return 0

char* eax_12 = zx.d(*(edi + 2)) + *(ebp[0x11] + 0xc)

while (true)
    uint32_t edx_2
    edx_2.w = zx.w(eax_12[1])
    
    if (edx_2.w == *esi && *eax_12 == 3)
        void* ecx_9 = ebp[0x11]
        *(ecx_9 + 8) = zx.d(*(eax_12 + 2)) + *(ecx_9 + 0xc)
        sub_40a8a0(ebp)
        return 0
    
    eax_12 = &eax_12[4]
