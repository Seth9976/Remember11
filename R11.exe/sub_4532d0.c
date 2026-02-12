// 函数: sub_4532d0
// 地址: 0x4532d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (*arg1 == 0 || arg1[1] == 0)
    __invalid_parameter_noinfo()

int32_t ebx = arg1[2]
void* eax_1 = *arg1 + 4
int32_t edi = *(eax_1 + 4)

if (edi u> *(eax_1 + 8))
    __invalid_parameter_noinfo()

if (((arg1[1] - edi) s>> 2 << 5) + ebx u>= **arg1)
    __invalid_parameter_noinfo()

return arg1[1]
