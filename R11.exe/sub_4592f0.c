// 函数: sub_4592f0
// 地址: 0x4592f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void** edx = *(arg1 + 4)
void** eax = edx[1]
bool cond:0 = *(eax + 0xa1) != 0
void** esi = edx
char var_8 = 1

if (not(cond:0))
    int16_t edi_1 = *arg3
    
    do
        esi = eax
        edx.b = edi_1 u< eax[4].w
        var_8 = edx.b
        
        if (edx.b == 0)
            eax = eax[2]
        else
            eax = *eax
    while (*(eax + 0xa1) == 0)

void** eax_2 = sub_4590e0(arg1, &var_8, (var_8.d).b, esi, arg3)
int32_t ecx_1 = eax_2[1]
*arg2 = *eax_2
arg2[1] = ecx_1
arg2[2].b = 1
return arg2
