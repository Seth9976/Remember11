// 函数: sub_44dd20
// 地址: 0x44dd20
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* edi = arg1
void** esi = *(edi + 4)
void** eax = esi[1]
arg1.b = 1
char var_c = 1

while (*(eax + 0x15) == 0)
    esi = eax
    arg1.b = *arg3 u< eax[3]
    var_c = arg1.b
    
    if (arg1.b == 0)
        eax = eax[2]
    else
        eax = *eax

int32_t var_8 = edi

if (arg1.b == 0)
    goto label_44ddac

void** var_28
char var_24
void** var_20
int32_t* var_1c

if (esi != **(edi + 4))
    sub_44cf60(&var_8)
label_44ddac:
    
    if (esi[3] u>= *arg3)
        *arg2 = var_8
        arg2[1] = esi
        arg2[2].b = 0
        return arg2
    
    var_1c = arg3
    var_20 = esi
    var_24 = var_c
    var_28 = &var_8
else
    var_1c = arg3
    var_20 = esi
    var_24 = 1
    var_28 = &var_8

void** eax_2 = sub_44d760(edi, var_28, var_24, var_20, var_1c)
void** eax_3 = arg2
int32_t ecx_3 = eax_2[1]
*eax_3 = *eax_2
eax_3[1] = ecx_3
eax_3[2].b = 1
return eax_3
