// 函数: sub_40c510
// 地址: 0x40c510
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_4_1 = ecx
int32_t* edi = arg1
char* esi = *(edi[0x11] + 8)
void* var_4

if (*esi != 0x25)
    var_4 = &esi[6]
else
    var_4 = &esi[4]

int32_t eax_1 = sx.d(edi[4].w)
int32_t ebx = 0

if (eax_1 == 0)
    void* eax_17 = data_e7e648
    
    if (*(eax_17 + 0x28f4) == 0 && *(eax_17 + 0x28c1) == 0)
        sub_415550()
        eax_17 = data_e7e648
    
    *(eax_17 + 0x28f4) = 0
    *(data_e7e648 + 0x28d0) = 0
    sub_414db0(*(esi + 2), 0xffff)
    int32_t i = 0
    
    if (esi[1] u> 0)
        void* edi_2 = var_4 + 6
        ebx = 0
        
        do
            if (sub_414cf0(zx.d(*(edi_2 - 2))) != 0)
                int16_t eax_20 = *edi_2
                int16_t eax_22
                
                if (eax_20 == 0xffff)
                    eax_22 = 0
                else
                    eax_22 = sub_415230(zx.d(*(data_e7e648 + 0x30b0)), zx.d(eax_20))
                
                sub_41d400(0xffffffff, 0xffffffff, 1, *(edi_2 - 4), eax_22)
                sub_41d310(zx.d(*(edi_2 - 6)) + *(arg1[0x11] + 0xc))
                ebx += 1
            
            i += 1
            edi_2 += 8
        while (i s< zx.d(esi[1]))
        
        edi = arg1
    
    *(data_e7e648 + 0x28ac) = ebx
    
    if (ebx == 0)
        sub_414db0(*(esi + 2), zx.w(esi[1]))
        sub_41c7e0()
        sub_41c4d0()
        void* eax_25 = edi[0x11]
        uint32_t ecx_16 = zx.d(esi[1])
        
        if (*esi != 0x25)
            *(eax_25 + 8) += (ecx_16 << 3) + 6
            sub_40a8a0(edi)
            return 0
        
        *(eax_25 + 8) += (ecx_16 << 3) + 4
        sub_40a8a0(edi)
        return 0
    
    if (ebx != 1)
        if (*(data_e7e648 + 0x28c1) == 0)
            sub_415520()
            char eax_29 = data_2b5cf11
            
            if ((eax_29 == 1 || eax_29 == 3) && *(data_e7e648 + 0x28ac) != 1)
                sub_415a50()
        
        *(data_e7e648 + 0x1324c) = 0
        *(data_e7e648 + 0x13250) = 2
        *(data_e7e648 + 0x28f0) = 1
        sub_4095a0(5)
        sub_41d3c0(2)
        edi[4].w = 2
        goto label_40c82f
    
    *(data_e7e648 + 0x1d74a) = 0
    edi[4].w = 3
else if (eax_1 == 2)
label_40c82f:
    
    if (sub_41d1d0() == 0)
        *(data_e7e648 + 0x28f0) = 0
        edi[4].w = 3
else if (eax_1 == 3)
    void* ebp_1 = var_4
    int32_t i_1 = 0
    
    if (esi[1] u> 0)
        do
            if (sub_414cf0(zx.d(*(ebp_1 + 4))) != 0)
                if (ebx == sx.d(*(data_e7e648 + 0x1d74a)))
                    sub_414db0(*(esi + 2), i_1.w)
                    int16_t eax_8 = *(ebp_1 + 6)
                    
                    if (eax_8 != 0xffff)
                        void* ecx_4 = data_e7e648
                        
                        if (*(ecx_4 + 0x28ac) != 1)
                            sub_415270(zx.d(*(ecx_4 + 0x30b0)), zx.d(eax_8))
                    
                    break
                
                ebx += 1
            
            i_1 += 1
            ebp_1 += 8
        while (i_1 s< zx.d(esi[1]))
    
    sub_41c7e0()
    sub_41c4d0()
    
    if (*(data_e7e648 + 0x28ac) != 1)
        sub_41d330()
    
    sub_41d380()
    int16_t eax_10 = *(var_4 + (i_1 << 3) + 2)
    
    if (eax_10 != 0xffff)
        void* ecx_9 = arg1[0x11]
        *(ecx_9 + 8) = zx.d(eax_10) + *(ecx_9 + 0xc)
        sub_40a8a0(arg1)
        return 0
    
    uint32_t edx_5 = zx.d(esi[1])
    void* eax_11 = arg1[0x11]
    
    if (*esi != 0x25)
        *(eax_11 + 8) += (edx_5 << 3) + 6
        sub_40a8a0(arg1)
        return 0
    
    *(eax_11 + 8) += (edx_5 << 3) + 4
    sub_40a8a0(arg1)
    return 0

*(edi + 0xe) = 0
*(edi + 0xd) = 0
return 0
