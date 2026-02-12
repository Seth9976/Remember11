// 函数: sub_497345
// 地址: 0x497345
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*arg1 = *(sub_48ff3e() + 4)
arg1[1] = sub_48ff18()
void* eax_3 = sub_48b2bc(0x100, 2)
arg1[2] = eax_3

if (eax_3 == 0)
    int32_t eax_5 = sub_48efe9()
    arg1[3] = 0
    arg1[2] = eax_5
else
    int128_t* eax_4 = sub_48efe9()
    sub_480ea0(arg1[2], eax_4, 0x200)
    arg1[3] = 1

return arg1
