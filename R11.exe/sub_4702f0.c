// 函数: sub_4702f0
// 地址: 0x4702f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

bool cond:2 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
int32_t result = arg1
data_c7a010 = result

if (not(cond:2))
    result = LeaveCriticalSection(&data_c79d54)

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    result = sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    result = EnterCriticalSection(&data_c79d54)

bool cond:3 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
data_c7a040 = arg2

if (cond:3)
    return result

return LeaveCriticalSection(&data_c79d54)
