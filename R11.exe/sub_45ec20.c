// 函数: sub_45ec20
// 地址: 0x45ec20
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void** edx = *(arg1 + 4)
void** eax = edx[1]

while (*(eax + 0x15) == 0)
    if (eax[3] u>= *arg3)
        edx = eax
        eax = *eax
    else
        eax = eax[2]

int32_t eax_1 = *(arg1 + 4)
void** var_c = edx
void* var_10 = arg1
void** ecx

if (edx == eax_1 || *arg3 u< edx[3])
    void* var_8 = arg1
    int32_t var_4_1 = eax_1
    ecx = &var_8
else
    ecx = &var_10

int32_t ecx_1 = ecx[1]
*arg2 = *ecx
arg2[1] = ecx_1
return arg2
