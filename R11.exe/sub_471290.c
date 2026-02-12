// 函数: sub_471290
// 地址: 0x471290
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_4_1 = ecx

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

long double result = fconvert.t(data_c79f50)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0)
    return result

LeaveCriticalSection(&data_c79d54)
return fconvert.t(fconvert.s(result))
