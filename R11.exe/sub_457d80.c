// 函数: sub_457d80
// 地址: 0x457d80
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = *(arg2 + 4)
int32_t esi

if (eax != 0)
    esi = (*(arg2 + 8) - eax) s>> 2
else
    esi = 0

*(arg1 + 4) = 0
*(arg1 + 8) = 0
*(arg1 + 0xc) = 0

if (esi != 0)
    if (esi u> 0x3fffffff)
        sub_44d6e0()
        noreturn
    
    int32_t __saved_ebp_1 = 0
    void* eax_1 = sub_44d100(esi)
    *(arg1 + 4) = eax_1
    *(arg1 + 8) = eax_1
    *(arg1 + 0xc) = eax_1 + (esi << 2)
    int32_t esi_3 = *(arg2 + 8)
    
    if (*(arg2 + 4) u> esi_3)
        __invalid_parameter_noinfo()
    
    int128_t* ebp_1 = *(arg2 + 4)
    
    if (ebp_1 u> *(arg2 + 8))
        __invalid_parameter_noinfo()
    
    int128_t* ecx = *(arg1 + 4)
    int32_t esi_5 = (esi_3 - ebp_1) s>> 2
    int32_t eax_3 = esi_5 << 2
    
    if (esi_5 != 0)
        sub_481dca(ecx, eax_3, ebp_1, eax_3)
    
    *(arg1 + 8) = eax_3 + ecx

return arg1
