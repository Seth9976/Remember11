// 函数: sub_458460
// 地址: 0x458460
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

sub_4653f0("DeleteTexID\n")
int32_t* result = *(arg1 + 0xc)
void* ebx = arg1 + 8
void* esi_1 = *result
void* edi = ebx
void* var_24 = ebx
void* var_20 = edi
void* var_1c = esi_1

while (true)
    int32_t ecx = *(ebx + 4)
    
    if (edi == 0 || edi != ebx)
        result = __invalid_parameter_noinfo()
    
    if (esi_1 == ecx)
        break
    
    if (edi == 0)
        __invalid_parameter_noinfo()
    
    if (esi_1 == *(edi + 4))
        __invalid_parameter_noinfo()
    
    if (*(esi_1 + 0x72) == 0 && *(esi_1 + 0x71) == 0 && *(esi_1 + 0x60) == arg2
            && *(esi_1 + 0x64) == arg3)
        int32_t* edi_1 = *(esi_1 + 0x58)
        
        if (*(esi_1 + 0x54) u> edi_1)
            __invalid_parameter_noinfo()
        
        int32_t* ebx_1 = *(esi_1 + 0x54)
        
        if (ebx_1 u> *(esi_1 + 0x58))
            __invalid_parameter_noinfo()
        
        void var_10
        sub_456940(esi_1 + 0x50, &var_10, esi_1 + 0x50, ebx_1, esi_1 + 0x50, edi_1)
        sub_4653f0("Hit\n")
        ebx = var_24
    
    result = sub_450e90(&var_20)
    esi_1 = var_1c
    edi = var_20

return result
