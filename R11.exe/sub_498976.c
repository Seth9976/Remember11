// 函数: sub_498976
// 地址: 0x498976
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (data_c7b238 != 0)
    sub_498943(arg1, 0xffffffff, nullptr)
    return arg1

if (arg1 == 0)
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    return 0

char* edx_1 = arg1

if (*arg1 == 0)
    return arg1

do
    char ecx = *edx_1
    
    if (ecx s>= 0x61 && ecx s<= 0x7a)
        *edx_1 = ecx - 0x20
    
    edx_1 = &edx_1[1]
while (*edx_1 != 0)

return arg1
