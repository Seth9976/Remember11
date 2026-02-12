// 函数: sub_4583c0
// 地址: 0x4583c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebp
int32_t var_4 = ebp
void* edi = **(arg1 + 0xc)
void* esi = arg1 + 8
void* var_18 = esi
void* var_14 = edi

while (true)
    int32_t ebp_1 = *(arg1 + 0xc)
    
    if (esi == 0 || esi != arg1 + 8)
        __invalid_parameter_noinfo()
    
    if (edi == ebp_1)
        break
    
    if (esi == 0)
        __invalid_parameter_noinfo()
    
    if (edi == *(esi + 4))
        __invalid_parameter_noinfo()
    
    if (*(edi + 0x72) != 1 && *(edi + 0x71) != 1)
        int32_t* edi_1 = *(edi + 0x58)
        
        if (*(edi + 0x54) u> edi_1)
            __invalid_parameter_noinfo()
        
        int32_t* ebp_2 = *(edi + 0x54)
        
        if (ebp_2 u> *(edi + 0x58))
            __invalid_parameter_noinfo()
        
        void var_10
        sub_456940(edi + 0x50, &var_10, edi + 0x50, ebp_2, edi + 0x50, edi_1)
    
    sub_450e90(&var_18)
    edi = var_14
    esi = var_18

var_4
return 0
