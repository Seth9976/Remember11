// 函数: sub_4625a0
// 地址: 0x4625a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebx = *(arg1 + 8)
bool cond:0 = *(arg1 + 4) u<= ebx
*(arg1 + 0x440010) = arg1 + 0x10
*(arg1 + 0x440014) = arg1 + 0x240010

if (not(cond:0))
    __invalid_parameter_noinfo()

int32_t edi = *(arg1 + 4)

if (edi u> *(arg1 + 8))
    __invalid_parameter_noinfo()

void var_8
sub_4624d0(arg1, &var_8, arg1, edi, arg1, ebx)
return 0
