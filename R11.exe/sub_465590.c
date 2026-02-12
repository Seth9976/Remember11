// 函数: sub_465590
// 地址: 0x465590
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* var_4 = arg1
int32_t eax_1 = (*(*arg1 + 0x30))(1)
var_4 = nullptr
void* eax_3 = j_sub_481fef(arg3 + 1)
(*(*arg1 + 8))(eax_3, arg3, &var_4)
int32_t* esi_1 = var_4

if (esi_1 == 0)
    j_sub_4813df(eax_3)
    return 0x80004005

char* edx_3 = arg2
char* i = nullptr
char ecx_1

if (esi_1 u> 0)
    do
        ecx_1 = *(i + eax_3)
        
        if (ecx_1 == 0xa)
            break
        
        if (ecx_1 == 0xd)
            break
        
        *edx_3 = ecx_1
        i = &i[1]
        edx_3 = &edx_3[1]
    while (i u< esi_1)

*edx_3 = 0

for (; i u< esi_1; i = &i[1])
    ecx_1 = *(i + eax_3)
    
    if (ecx_1 != 0xa && ecx_1 != 0xd)
        break

(*(*arg1 + 0x2c))(&i[eax_1], 0)
j_sub_4813df(eax_3)
return 0
