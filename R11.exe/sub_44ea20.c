// 函数: sub_44ea20
// 地址: 0x44ea20
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void** edx = *(arg1 + 4)
void** eax = edx[1]

while (*(eax + 0x15) == 0)
    if (eax[3] s>= *arg2)
        edx = eax
        eax = *eax
    else
        eax = eax[2]

void** edi = edx
void* esi_2 = arg1

if (edx == *(arg1 + 4) || *arg2 s< edx[3])
    int32_t var_10 = *arg2
    int32_t var_c_1 = 0
    void* var_8
    void** eax_2 = sub_44e770(arg1, &var_8, esi_2, edi, &var_10)
    esi_2 = *eax_2
    edi = eax_2[1]

if (esi_2 == 0)
    __invalid_parameter_noinfo()

if (edi == *(esi_2 + 4))
    __invalid_parameter_noinfo()

return &edi[4]
