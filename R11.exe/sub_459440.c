// 函数: sub_459440
// 地址: 0x459440
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg2 == 0xf0f0f0f0 && arg3 == arg2)
    return arg2

int32_t var_2c_1 = arg3
void* var_30_1 = arg2
sub_4653f0("clear %x\n")
void* edi_1 = **(arg1 + 0xc)
void* esi_1 = arg1 + 8

while (true)
    void* var_14_1 = edi_1
    void* var_18 = esi_1
    
    while (true)
        int32_t ebx_1 = *(arg1 + 0xc)
        void* eax = arg1 + 8
        
        if (esi_1 == 0 || esi_1 != eax)
            eax = __invalid_parameter_noinfo()
        
        if (edi_1 == ebx_1)
            return eax
        
        if (esi_1 == 0)
            __invalid_parameter_noinfo()
        
        if (edi_1 == *(esi_1 + 4))
            __invalid_parameter_noinfo()
        
        if (*(edi_1 + 0x60) == arg2 && *(edi_1 + 0x64) == arg3)
            break
        
        sub_450e90(&var_18)
        edi_1 = var_14_1
        esi_1 = var_18
    
    if (edi_1 == *(esi_1 + 4))
        __invalid_parameter_noinfo()
    
    if (edi_1 + 0x18 == *(arg1 + (zx.d(*(edi_1 + 0x18)) << 2) + 0x14))
        if (edi_1 == *(esi_1 + 4))
            __invalid_parameter_noinfo()
        
        *(arg1 + (zx.d(*(edi_1 + 0x18)) << 2) + 0x14) = 0
    
    int32_t var_2c_2 = arg3
    void* var_30_2 = arg2
    sub_4653f0("clear Hit %x\n")
    void* var_2c_3 = edi_1
    int32_t var_10
    int32_t* eax_5 = sub_4549f0(arg1 + 8, &var_10, esi_1)
    esi_1 = *eax_5
    edi_1 = eax_5[1]
