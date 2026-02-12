// 函数: sub_45ec90
// 地址: 0x45ec90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void** edx = *(arg1 + 4)
void** eax = edx[1]

while (*(eax + 0x15) == 0)
    if (eax[3] u>= *arg2)
        edx = eax
        eax = *eax
    else
        eax = eax[2]

void** edi = edx
void* esi_2 = arg1

if (edx == *(arg1 + 4) || *arg2 u< edx[3])
    int32_t var_10 = *arg2
    char var_c_1 = 0
    void* var_8
    void** eax_2 = sub_457bc0(arg1, &var_8, esi_2, edi, &var_10)
    esi_2 = *eax_2
    edi = eax_2[1]

if (esi_2 == 0)
    __invalid_parameter_noinfo()

if (edi == *(esi_2 + 4))
    __invalid_parameter_noinfo()

return &edi[4]
