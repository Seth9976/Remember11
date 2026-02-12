// 函数: sub_41deb0
// 地址: 0x41deb0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(*(arg1 + 0x10))

if (eax == 0)
    sub_41d6b0()
    *(arg1 + 0x10) = 1
else if (eax != 1)
    return 0

void* eax_23 = data_e7e648
int32_t ecx = sx.d(*(eax_23 + 0x20950))
uint16_t __saved_edi_2

if (ecx == 2)
    int16_t edx_10 = *(eax_23 + 0x20952)
    
    if (edx_10 == 0)
        int32_t __saved_edi_3 = 1
        sub_4095f0()
        sub_408f30(0)
        void* eax_21 = data_e7e648
        *(eax_21 + 0x20952) += 1
        return 0
    
    int16_t ecx_6 = *(eax_23 + 0x20954)
    
    if (edx_10 u< ecx_6)
        uint32_t ecx_8 = zx.d(ecx_6)
        
        if (ecx_8 s<= 0)
            ecx_8 = 1
        
        __saved_edi_2 = (divs.dp.d(sx.q(zx.d(*(eax_23 + 0x2094d)) * zx.d(edx_10)), ecx_8)).w
    label_41e093:
        sub_408f30(__saved_edi_2)
        void* eax_29 = data_e7e648
        *(eax_29 + 0x20952) += 1
        return 0
else
    if (ecx == 3)
        if (*(eax_23 + 0x2094c) == 0xff || *(eax_23 + 0x289c) != 0)
            sub_408f30(0)
            sub_408ef0()
            *(data_e7e648 + 0x20950) = 0
            return 0
        
        int16_t edx_6 = *(eax_23 + 0x20952)
        uint16_t ecx_5 = *(eax_23 + 0x20954)
        
        if (edx_6 u>= ecx_5)
            sub_408f30(0)
            sub_408ef0()
            *(data_e7e648 + 0x20950) = 0
            return 0
        
        uint32_t esi_2 = zx.d(ecx_5)
        
        if (esi_2 s<= 0)
            esi_2 = 1
        
        ecx_5.b = *(eax_23 + 0x2094d)
        __saved_edi_2 = zx.w(ecx_5.b) - (divs.dp.d(sx.q(zx.d(ecx_5.b) * zx.d(edx_6)), esi_2)).w
        goto label_41e093
    
    if (ecx != 4)
        return 0
    
    if (*(eax_23 + 0x289c) != 1)
        uint16_t edx_1 = *(eax_23 + 0x20952)
        uint16_t ecx_4 = *(eax_23 + 0x20954)
        
        if (edx_1 u>= ecx_4)
            sub_408f30(zx.w(*(eax_23 + 0x2094d)))
            *(data_e7e648 + 0x20950) = 1
            void* eax_5 = data_e7e648
            *(eax_5 + 0x20952) += 1
            return 0
        
        uint32_t esi_1 = zx.d(ecx_4)
        
        if (esi_1 s<= 0)
            esi_1 = 1
        
        ecx_4.b = *(eax_23 + 0x2094e)
        sub_408f30(
            (divs.dp.d(sx.q((zx.d(*(eax_23 + 0x2094d)) - zx.d(ecx_4.b)) * zx.d(edx_1)), esi_1)).w
            + zx.w(ecx_4.b))
        void* eax_12 = data_e7e648
        *(eax_12 + 0x20952) += 1
        return 0
eax_23.w = zx.w(*(eax_23 + 0x2094d))
sub_408f30(eax_23.w)
*(data_e7e648 + 0x20950) = 1
return 0
