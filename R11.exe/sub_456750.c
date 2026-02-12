// 函数: sub_456750
// 地址: 0x456750
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebx = arg1[2]

if (ebx u> arg1[3])
    __invalid_parameter_noinfo()

*arg2 = nullptr
arg2[1] = ebx
arg2[2] = 0

if (arg1 == 0)
    __invalid_parameter_noinfo()

*arg2 = arg1
int32_t edi_1 = *arg1

if (edi_1 u> 0)
    sub_453130(arg2, edi_1)

return arg2
