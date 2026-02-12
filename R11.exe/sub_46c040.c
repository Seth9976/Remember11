// 函数: sub_46c040
// 地址: 0x46c040
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* var_4 = arg3
int32_t esi
int32_t var_8 = esi
int32_t* eax_1 = **(arg3 + 4)
int32_t result = (*(*eax_1 + 0x10))(eax_1, &var_4, 0)
int32_t* esp = &var_8

if (result s>= 0)
    int32_t ecx_1 = *(arg3 + 0x24)
    void* eax_3 = var_4
    int32_t ebx
    int32_t var_c_1 = ebx
    int32_t ebp
    int32_t var_10_1 = ebp
    int32_t edi
    int32_t var_14_1 = edi
    void* edi_2
    
    if (eax_3 u>= ecx_1)
        edi_2 = eax_3 - ecx_1
    else
        edi_2 = *(arg3 + 8) + (eax_3 u>> 1 << 1) - ecx_1
    
    int32_t ebx_1 = *(arg3 + 8)
    int32_t eax_8
    int32_t edx_2
    edx_2:eax_8 = mulu.dp.d(0x88888889, *((*(**(arg3 + 0xc) + 0x14))() + 8) * 0x19)
    uint32_t temp1_1 = modu.dp.d(0:((edx_2 u>> 5) + *(arg3 + 0x28) + edi_2), ebx_1)
    int128_t* eax_14 = *(arg3 + 0x38) + temp1_1
    
    if (ebx_1 - temp1_1 u< arg6)
        sub_480ea0(arg5, eax_14, *(arg3 + 8) - temp1_1)
        int32_t eax_15 = *(arg3 + 8)
        sub_480ea0(eax_15 - temp1_1 + arg5, *(arg3 + 0x38), temp1_1 - eax_15 + arg6)
        return 0
    
    sub_480ea0(arg5, eax_14, arg6)
    result = 0
    int32_t arg_4
    esp = &arg_4

*esp
esp[1]
return result
