// 函数: sub_409b90
// 地址: 0x409b90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* result = arg1
*result += (data_c7bbd0 - 0x6c00) s>> 4
int32_t edx = *result
int32_t var_10 = edx

if (edx s< 0)
    edx = 0
    var_10 = 0

result[1] += (data_c7bbd4 - 0x7200) s>> 4
int32_t esi = result[1]
int32_t var_c = esi

if (esi s< 0)
    esi = 0
    int32_t var_c_1 = 0

int32_t ecx_5 = result[2]
int32_t edx_1 = edx + ecx_5

if (edx_1 s>= 0x280)
    int32_t var_8_1 = ecx_5 - edx_1 + 0x280
    
    if (ecx_5 - edx_1 + 0x280 s> 0)
        goto label_409bfc
else
    int32_t var_8 = ecx_5
label_409bfc:
    int32_t eax_1 = result[3]
    int32_t ecx_8 = eax_1 + esi
    
    if (ecx_8 s< 0x1c0)
        int32_t var_4_1 = eax_1
        return sub_442670(&var_10, arg2)
    
    result = eax_1 - ecx_8 + 0x1c0
    int32_t* result_1 = result
    
    if (result s> 0)
        return sub_442670(&var_10, arg2)

return result
