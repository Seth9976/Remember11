// 函数: sub_453750
// 地址: 0x453750
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edi = *(arg1 + 8)

if (edi u> *(arg1 + 0xc))
    __invalid_parameter_noinfo()

int32_t var_14 = edi
int32_t var_10 = 0

if (arg1 == 0)
    __invalid_parameter_noinfo()

void* var_18 = arg1
int32_t var_c
int32_t* eax_1 = sub_453320(&var_18, &var_c, arg3)
bool cond:1 = *eax_1 != 0
int32_t edx = eax_1[1]
int32_t eax_2 = eax_1[2]
*arg2 = 0
arg2[1] = edx
arg2[2] = eax_2

if (not(cond:1))
    __invalid_parameter_noinfo()

*arg2 = *eax_1
return arg2
