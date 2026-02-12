// 函数: sub_421910
// 地址: 0x421910
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebp
int32_t var_4 = ebp
void* ecx = data_a5d910
int32_t edi = 0
int32_t var_18 = 0x212
int32_t var_14 = 0x10
int32_t esi = 1
int32_t edx_5

do
    int32_t temp1_1 = mods.dp.d(sx.q(divs.dp.d(sx.q(*(ecx + 0x24) + 1), esi)), 0xa)
    
    if (temp1_1 != 0)
        edi = 1
    
    if (esi == 1)
        edi = esi
        sub_43c570(ecx + 0x27d00, temp1_1.w, &var_18, nullptr, 1)
        ecx = data_a5d910
    else if (edi == 1)
        sub_43c570(ecx + 0x27d00, temp1_1.w, &var_18, nullptr, 1)
        ecx = data_a5d910
    
    var_18 += 0x16
    int32_t eax_7
    int32_t edx_4
    edx_4:eax_7 = muls.dp.d(0x66666667, esi)
    edx_5 = edx_4 s>> 2
    esi s/= 0xa
while (edx_5 u>> 0x1f != neg.d(edx_5))
sub_43c570(ecx + 0x27d00, 0xd, &var_18, nullptr, 1)
var_18 += 0x16
int32_t result_2 = 0
int32_t result_1 = 1
int32_t result
int32_t edx_10

do
    uint32_t temp1_2 = modu.dp.d(0:(divu.dp.d(0:data_2b5a728, result_1)), 0xa)
    
    if (temp1_2 != 0)
        result_2 = 1
    
    if (result_1 == 1)
        result_2 = result_1
        sub_43c570(data_a5d910 + 0x27d00, temp1_2.w, &var_18, nullptr, 1)
    else if (result_2 == 1)
        sub_43c570(data_a5d910 + 0x27d00, temp1_2.w, &var_18, nullptr, 1)
    
    var_18 += 0x16
    int32_t eax_14
    int32_t edx_9
    edx_9:eax_14 = muls.dp.d(0x66666667, result_1)
    edx_10 = edx_9 s>> 2
    result = result_1 s/ 0xa
    result_1 = result
while (edx_10 u>> 0x1f != neg.d(edx_10))
var_4
return result
