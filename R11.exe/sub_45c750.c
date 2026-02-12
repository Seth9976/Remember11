// 函数: sub_45c750
// 地址: 0x45c750
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

arg1[1] = arg3
*arg1 = arg2
arg1[0x99] = arg5
arg1[0x9a] = arg6
HRESULT result = DirectInput8Create(GetModuleHandleW(nullptr), 0x800, 0x4a8454, &arg1[2], 0)

if (result s< 0)
    return result

sub_45c660(arg1, arg4, 1)
return 0
