// 函数: sub_462a70
// 地址: 0x462a70
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* var_4 = arg1
int32_t esi = *(arg1 + 4)
int32_t edx_3
int32_t ebx_1

if (esi != 0)
    ebx_1 = *(arg1 + 8)
    int32_t ecx_1 = ebx_1 - esi
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0xb21642c9, ecx_1)
    edx_3 = (edx_1 + ecx_1) s>> 7

int32_t ebx_2
int32_t esi_1

if (esi != 0 && edx_3 u>> 0x1f != neg.d(edx_3))
    if (esi u> ebx_1)
        __invalid_parameter_noinfo()
    
    ebx_2 = arg3
    
    if (ebx_2 == 0 || ebx_2 != arg1)
        __invalid_parameter_noinfo()
    
    esi_1 = (arg4 - esi) s/ 0xb8
else
    ebx_2 = arg3
    esi_1 = 0

int32_t var_18 = arg5
sub_462790(arg1, ebx_2, arg4, 1)
int32_t ebx_3 = *(arg1 + 4)

if (ebx_3 u> *(arg1 + 8))
    __invalid_parameter_noinfo()

int32_t esi_5 = esi_1 * 0xb8 + ebx_3
arg4 = ebx_3

if (esi_5 u> *(arg1 + 8) || esi_5 u< *(arg1 + 4))
    __invalid_parameter_noinfo()

*arg2 = arg1
arg2[1] = esi_5
return arg2
