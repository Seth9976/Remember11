// 函数: sub_4990c8
// 地址: 0x4990c8
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = arg1[3]

if ((eax.b & 0x83) == 0)
    *__errno() = 0x16
    return 0xffffffff

arg1[3] = eax & 0xffffffef

if (arg3 == FILE_CURRENT)
    arg2 += sub_49959f(arg1)
    arg3 = FILE_BEGIN

sub_4836ad(arg1)
int32_t eax_5 = arg1[3]

if (eax_5.b s< 0)
    arg1[3] = eax_5 & 0xfffffffc
else if ((eax_5.b & 1) != 0 && (eax_5.b & 8) != 0 && (eax_5.w & 0x400) == 0)
    arg1[6] = 0x200

int32_t ecx_4
ecx_4.b = sub_496d6b(sub_48d847(arg1), arg2, arg3) != 0xffffffff
return ecx_4 - 1
