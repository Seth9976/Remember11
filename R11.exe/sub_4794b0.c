// 函数: sub_4794b0
// 地址: 0x4794b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*arg1 = &Movie::CMovieManager::`vftable'{for `IMovieManager'}
__builtin_memset(&arg1[1], 0, 0x18)

if (data_c7a9e8 == 0)
    InitializeCriticalSection(&data_c7a9cc)
    data_c7a9e8 = 1

arg1[7] = arg2
arg1[8] = 0
arg1[9] = 0
arg1[0xf] = 0
arg1[0x10].b = 0
arg1[0x12].b = 0
arg1[0x11] = CreateEventW(nullptr, 0, 0, nullptr)
return arg1
