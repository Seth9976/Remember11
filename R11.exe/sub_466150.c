// 函数: sub_466150
// 地址: 0x466150
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx = *(arg1 + 0x44)
void* eax_1 = *(arg1 + 0x48) + arg3

if (ecx u> eax_1)
    eax_1 = ecx

int32_t var_10 = 0
*(arg1 + 0x44) = eax_1
sub_466050(arg1 + 0x34, eax_1)
int32_t eax_2 = *(arg1 + 0x38)

if (eax_2 == 0 || *(arg1 + 0x3c) == eax_2)
    __invalid_parameter_noinfo()

int32_t edi_1 = *(arg1 + 0x38)
*(arg1 + 0x30) = edi_1

if (arg3 != 0)
    sub_480ea0(*(arg1 + 0x48) + edi_1, arg2, arg3)

if (arg4 != 0)
    *arg4 = arg3

*(arg1 + 0x48) += arg3
return arg4
