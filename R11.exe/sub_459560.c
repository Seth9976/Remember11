// 函数: sub_459560
// 地址: 0x459560
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t var_24 = zx.d(arg2)
int16_t result = sub_4653f0("---------------Clear2 (%x)")
void* esi = **(arg1 + 0xc)
void* ebx = arg1 + 8
void* var_8 = ebx
void* var_4 = esi

while (true)
    int32_t ebp_1 = *(arg1 + 0xc)
    
    if (ebx == 0 || ebx != arg1 + 8)
        result = __invalid_parameter_noinfo()
    
    if (esi == ebp_1)
        break
    
    if (ebx == 0)
        __invalid_parameter_noinfo()
    
    if (esi == *(ebx + 4))
        __invalid_parameter_noinfo()
    
    if (*(esi + 0x18) == arg2)
        if (esi == *(ebx + 4))
            __invalid_parameter_noinfo()
        
        uint32_t ebx_1 = zx.d(*(esi + 0x18))
        int32_t* ebp_2 = arg1 + (ebx_1 << 2) + 0x14
        
        while (true)
            if (esi == *(var_8 + 4))
                __invalid_parameter_noinfo()
            
            if (ebx_1 s>= zx.d(*(esi + 0x1a)))
                break
            
            *ebp_2 = 0
            ebx_1 += 1
            ebp_2 = &ebp_2[1]
        
        void* var_24_1 = esi
        result = sub_4549f0(arg1 + 8, &var_8, var_8)
        break
    
    result = sub_450e90(&var_8)
    esi = var_4
    ebx = var_8

void* ebx_2 = **(arg1 + 0xc)
int32_t* ebp_3 = arg1 + 8
var_8 = ebp_3
void* var_4_1 = ebx_2

while (true)
    int32_t esi_1 = *(arg1 + 0xc)
    
    if (ebp_3 == 0 || ebp_3 != arg1 + 8)
        result = __invalid_parameter_noinfo()
    
    if (ebx_2 == esi_1)
        return result
    
    if (ebp_3 == 0)
        __invalid_parameter_noinfo()
    
    if (ebx_2 == ebp_3[1])
        __invalid_parameter_noinfo()
    
    if (*(ebx_2 + 0x18) == arg2)
        break
    
    result = sub_450e90(&var_8)
    ebx_2 = var_4_1
    ebp_3 = var_8

if (ebx_2 == ebp_3[1])
    __invalid_parameter_noinfo()

uint32_t esi_2 = zx.d(*(ebx_2 + 0x18))
void* edi_2 = arg1 + (esi_2 << 2) + 0x14

while (true)
    if (ebx_2 == ebp_3[1])
        __invalid_parameter_noinfo()
    
    if (esi_2 s>= zx.d(*(ebx_2 + 0x1a)))
        break
    
    *edi_2 = 0
    esi_2 += 1
    edi_2 += 4

void* var_24_2 = ebx_2
return sub_4549f0(arg1 + 8, &var_8, ebp_3)
