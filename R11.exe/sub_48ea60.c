// 函数: sub_48ea60
// 地址: 0x48ea60
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_1 = arg3 & 0xfff7ffff
int32_t mxcsr
int16_t x87control

if ((arg2 & eax_1 & 0xfcf0fce0) == 0)
    if (arg1 == 0)
        sub_495f2d(mxcsr, x87control, arg2, eax_1)
    else
        *arg1 = sub_495f2d(mxcsr, x87control, arg2, eax_1)
    
    return 0

if (arg1 != 0)
    *arg1 = sub_495f2d(mxcsr, x87control, 0, 0)

*__errno() = 0x16
sub_481d1b(0, 0, 0, 0, 0)
return 0x16
