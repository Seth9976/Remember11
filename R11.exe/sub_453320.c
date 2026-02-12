// 函数: sub_453320
// 地址: 0x453320
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = arg1[1]
int32_t ecx = arg1[2]

if (*arg1 == 0)
    __invalid_parameter_noinfo()

int32_t var_c = *arg1
sub_453130(&var_c, arg3)
int32_t edi = var_c
*arg2 = 0
arg2[1] = eax
arg2[2] = ecx

if (edi == 0)
    __invalid_parameter_noinfo()

*arg2 = edi
return arg2
