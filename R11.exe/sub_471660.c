// 函数: sub_471660
// 地址: 0x471660
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

char (* esi)[0x48] = data_c79d9c

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    LeaveCriticalSection(&data_c79d54)

if (esi == 0)
    char var_48[0x48]
    sub_480cf0(&var_48, esi.b, 0x48)
    esi = &var_48

__builtin_memcpy(arg1, esi, 0x48)
return arg1
