// 函数: sub_4714a0
// 地址: 0x4714a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

int32_t ebx
ebx.b = data_c79fe9

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    LeaveCriticalSection(&data_c79d54)

if (ebx.b == 0)
    ebx.b = arg1
else
    if ((data_c7a960 & 1) == 0)
        data_c7a960.d |= 1
        sub_46d000(&data_c79d90)
        sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    ebx.b = data_c79fe9
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        LeaveCriticalSection(&data_c79d54)
    
    if ((data_c7a960 & 1) == 0)
        data_c7a960.d |= 1
        sub_46d000(&data_c79d90)
        sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    arg1.d = fconvert.s(fconvert.t(data_c79fec))
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        LeaveCriticalSection(&data_c79d54)
    
    arg2 = fconvert.s(fconvert.t(arg1.d))

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

bool cond:3 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
data_c79fa0 = ebx.b

if (not(cond:3))
    LeaveCriticalSection(&data_c79d54)

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

bool cond:5 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
data_c79fa4 = fconvert.s(fconvert.t(arg2))

if (not(cond:5))
    LeaveCriticalSection(&data_c79d54)
