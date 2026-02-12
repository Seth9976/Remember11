// 函数: sub_4709d0
// 地址: 0x4709d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_4_1 = ecx

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

int32_t esi = data_c79fc4

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    LeaveCriticalSection(&data_c79d54)

int32_t eax
eax.b = arg1 != 0
int32_t var_4 = eax * 2 - 1 + esi

if (eax * 2 - 1 + esi s< 0)
    var_4 = 0

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

bool cond:4 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
data_c79fc4 = var_4

if (not(cond:4))
    LeaveCriticalSection(&data_c79d54)

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

int32_t esi_1 = data_c79fc0

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    LeaveCriticalSection(&data_c79d54)

int32_t edx
edx.b = arg2.b != 0
int32_t esi_2 = edx * 2 - 1 + esi_1

if (edx * 2 - 1 + esi_1 s< 0)
    esi_2 = 0

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

bool cond:7 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
data_c79fc0 = esi_2

if (not(cond:7))
    LeaveCriticalSection(&data_c79d54)

sub_46ab50()

if (var_4 s<= 0)
    sub_46a4e0(0xc79d28)
else
    sub_46a540(0xc79d28)

int32_t result = sub_45ef70(arg1.d, arg2)

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    result = sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    result = EnterCriticalSection(&data_c79d54)

bool cond:9 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
data_c79fbc = esi_2 s> 0

if (not(cond:9))
    result = LeaveCriticalSection(&data_c79d54)

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    result = sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    result = EnterCriticalSection(&data_c79d54)

bool cond:10 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
data_c79fbb = var_4 s> 0

if (cond:10)
    return result

return LeaveCriticalSection(&data_c79d54)
