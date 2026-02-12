// 函数: sub_48370f
// 地址: 0x48370f
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg1 == 0)
    return sub_483751(arg1)

if (sub_4836ad(arg1) != 0)
    return 0xffffffff

if ((arg1[3].w & 0x4000) == 0)
    return 0

enum WIN32_ERROR eax_4 = sub_48d874(sub_48d847(arg1))
int32_t eax_5 = neg.d(eax_4)
return sbb.d(eax_5, eax_5, eax_4 != NO_ERROR)
