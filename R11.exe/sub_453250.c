// 函数: sub_453250
// 地址: 0x453250
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void** eax = sub_4527e0(arg1, arg3)
void** var_c = eax

if (arg1 == 0)
    __invalid_parameter_noinfo()

bool cond:1 = eax == *(arg1 + 4)
void* var_10 = arg1
int32_t eax_3

if (not(cond:1))
    void* edi_1
    
    if (eax[9] u< 0x10)
        edi_1 = &eax[4]
    else
        edi_1 = eax[4]
    
    eax_3 = sub_451c20(arg3, 0, *(arg3 + 0x14), edi_1, eax[8])

int32_t* ecx_1

if (cond:1 || eax_3 s< 0)
    int32_t var_4_1 = *(arg1 + 4)
    void* var_8 = arg1
    ecx_1 = &var_8
else
    ecx_1 = &var_10

int32_t ecx_3 = ecx_1[1]
*arg2 = *ecx_1
arg2[1] = ecx_3
return arg2
