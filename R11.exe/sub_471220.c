// 函数: sub_471220
// 地址: 0x471220
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

long double result = fconvert.t(data_c79f48)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0)
    return result

LeaveCriticalSection(&data_c79d54)
return fconvert.t(fconvert.d(result))
