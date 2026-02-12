// 函数: sub_46bb30
// 地址: 0x46bb30
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* eax_1 = **(arg1 + 4)
int32_t var_8
int32_t result = (*(*eax_1 + 0x10))(eax_1, &var_8, 0)

if (result s>= 0)
    int32_t ecx_1 = *(arg1 + 0x24)
    int32_t eax_3 = var_8
    
    if (eax_3 u< ecx_1)
        eax_3 = *(arg1 + 8) + (eax_3 u>> 1 << 1)
    
    int32_t ebx_1 = *(arg1 + 0x28) + eax_3 - ecx_1
    int32_t* ecx_3 = *(arg1 + 0xc)
    *(arg1 + 0x1c) = ebx_1
    uint32_t ebp_1 = zx.d(*((*(*ecx_3 + 0x14))() + 0xe))
    uint32_t edi_1 = zx.d(*((*(**(arg1 + 0xc) + 0x14))() + 2))
    long double x87_r7_1 = float.t(ebx_1)
    
    if (ebx_1 s< 0)
        x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
    
    float var_4_2 = fconvert.s(x87_r7_1 * fconvert.t(8f))
    int32_t ecx_7 = *((*(**(arg1 + 0xc) + 0x14))() + 4) * edi_1 * ebp_1
    var_8 = ecx_7
    long double x87_r7_3 = float.t(var_8)
    
    if (ecx_7 s< 0)
        x87_r7_3 = x87_r7_3 + fconvert.t(4.2949673e+09f)
    
    result = 0
    *arg2 = fconvert.s(fconvert.t(var_4_2) / x87_r7_3)

return result
