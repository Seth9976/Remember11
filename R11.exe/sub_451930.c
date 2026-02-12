// 函数: sub_451930
// 地址: 0x451930
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_64 = arg7
void var_50
sub_450a10(&var_50, arg1, arg2)
void* var_74 = &var_50
sub_467ea0(arg5, arg6 + 0x5c)
char edx_3 = 1

if (arg4 s<= 0)
    *(arg8 + 0x48) = 1
    return arg4

char* esi_2 = *(arg5 + 0x10) + 3
int32_t i_1 = arg4
int32_t i

do
    if (arg3 s> 0)
        char* eax_2 = esi_2
        int32_t j_1 = arg3
        int32_t j
        
        do
            if (*eax_2 u< 0x80)
                edx_3 = 0
            
            eax_2 = &eax_2[4]
            j = j_1
            j_1 -= 1
        while (j != 1)
    
    esi_2 = &esi_2[*(arg5 + 0x28)]
    i = i_1
    i_1 -= 1
while (i != 1)
*(arg8 + 0x48) = edx_3
return arg8
