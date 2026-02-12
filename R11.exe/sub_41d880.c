// 函数: sub_41d880
// 地址: 0x41d880
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx = data_e7e648
void* esi = ecx + arg1 * 0xa + 0x20974
int32_t eax_1 = sx.d(*(esi + 5))

if (eax_1 == 2)
    if (*(ecx + 0x289c) != 0)
        if (*(esi + 6) == 0)
            int32_t var_10_6
            char __saved_ebx_5
            
            if ((zx.d(*esi) & 0xfff)[data_2b55f00] != 2)
                __saved_ebx_5 = 1
                int32_t __saved_ebp_7 = 5
                var_10_6 = *((arg1 << 2) + &data_4b17e0)
            else
                __saved_ebx_5 = 0
                int32_t __saved_ebp_6 = 5
                var_10_6 = *((arg1 << 2) + &data_4b17e0)
            
            sub_408ff0(var_10_6, 5, __saved_ebx_5)
            sub_409100(*((arg1 << 2) + &data_4b17e0), zx.d(*esi) & 0xfff)
        
        ecx.w = zx.w(*(esi + 2))
        int32_t eax_35 = sub_409010(*((arg1 << 2) + &data_4b17e0), ecx.w)
        *(esi + 5) = 1
        return eax_35
    
    int16_t edx_9 = *(esi + 6)
    
    if (edx_9 == 0)
        int32_t var_10_5
        char __saved_ebx_1
        
        if ((zx.d(*esi) & 0xfff)[data_2b55f00] != 2)
            __saved_ebx_1 = 1
            int32_t __saved_ebp_2 = 5
            var_10_5 = *((arg1 << 2) + &data_4b17e0)
        else
            __saved_ebx_1 = 0
            int32_t __saved_ebp_1 = 5
            var_10_5 = *((arg1 << 2) + &data_4b17e0)
        
        sub_408ff0(var_10_5, 5, __saved_ebx_1)
        sub_409100(*((arg1 << 2) + &data_4b17e0), zx.d(*esi) & 0xfff)
        int32_t eax_24 = sub_409010(*((arg1 << 2) + &data_4b17e0), 0)
        *(esi + 6) += 1
        return eax_24
    
    uint16_t eax_25 = *(esi + 8)
    
    if (edx_9 u>= eax_25)
        int32_t eax_26 = sub_409010(*((arg1 << 2) + &data_4b17e0), zx.w(*(esi + 2)))
        *(esi + 5) = 1
        return eax_26
    
    uint32_t ecx_7 = zx.d(eax_25)
    
    if (ecx_7 s<= 0)
        ecx_7 = 1
    
    int32_t eax_32 = sub_409010(*((arg1 << 2) + &data_4b17e0), 
        (divs.dp.d(sx.q(zx.d(*(esi + 2)) * zx.d(edx_9)), ecx_7)).w)
    *(esi + 6) += 1
    return eax_32

if (eax_1 == 3)
    if (*(ecx + 0x289c) == 0)
        int16_t eax_13 = *(esi + 6)
        uint16_t ecx_2 = *(esi + 8)
        
        if (eax_13 u< ecx_2)
            uint32_t ebp_1 = zx.d(ecx_2)
            
            if (ebp_1 s<= 0)
                ebp_1 = 1
            
            ecx_2.b = *(esi + 2)
            int32_t eax_20 = sub_409010(*((arg1 << 2) + &data_4b17e0), 
                zx.w(ecx_2.b) - (divs.dp.d(sx.q(zx.d(eax_13) * zx.d(ecx_2.b)), ebp_1)).w)
            *(esi + 6) += 1
            return eax_20
    
    sub_409010(*((arg1 << 2) + &data_4b17e0), 0)
    int32_t eax_15 = sub_4090d0(*((arg1 << 2) + &data_4b17e0))
    *(esi + 5) = 0
    return eax_15

int32_t eax_4 = eax_1 - 4

if (eax_1 == 4)
    if (*(ecx + 0x289c) == 1)
        ecx.w = zx.w(*(esi + 2))
        int32_t eax_5 = sub_409010(*((arg1 << 2) + &data_4b17e0), ecx.w)
        *(esi + 5) = 1
        return eax_5
    
    int16_t edx_2 = *(esi + 6)
    uint16_t eax_6 = *(esi + 8)
    
    if (edx_2 u< eax_6)
        uint32_t ebp = zx.d(eax_6)
        
        if (ebp s<= 0)
            ebp = 1
        
        ecx.b = *(esi + 3)
        int32_t eax_10
        int32_t edx_4
        edx_4:eax_10 = sx.q((zx.d(*(esi + 2)) - zx.d(ecx.b)) * zx.d(edx_2))
        ecx.w = zx.w(ecx.b)
        int32_t eax_12 =
            sub_409010(*((arg1 << 2) + &data_4b17e0), (divs.dp.d(edx_4:eax_10, ebp)).w + ecx.w)
        *(esi + 6) += 1
        return eax_12
    
    eax_4 = sub_409010(*((arg1 << 2) + &data_4b17e0), zx.w(*(esi + 2)))
    *(esi + 6) += 1
    *(esi + 5) = 1

return eax_4
