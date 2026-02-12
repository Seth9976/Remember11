// 函数: sub_49905d
// 地址: 0x49905d
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg1 == 0)
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    return 0xffffffff

if (arg2 == 0)
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    return 0xffffffff

uint32_t eax_4
int32_t edx_1
eax_4, edx_1 = sub_499555(arg1)
*arg2 = eax_4
arg2[1] = edx_1

if ((eax_4 & edx_1) == 0xffffffff)
    return 0xffffffff

return 0
