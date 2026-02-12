// 函数: sub_472200
// 地址: 0x472200
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

void* result_1 = data_c79d98

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    LeaveCriticalSection(&data_c79d54)

void* result = result_1

if (result_1 == 0)
    sub_479130()
    result = &data_c7a968
    
    if ((data_c7a960 & 1) == 0)
        data_c7a960.d |= 1
        sub_46d000(&data_c79d90)
        sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    bool cond:5_1 = class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b == 0
    data_c79d98 = &data_c7a968
    
    if (not(cond:5_1))
        LeaveCriticalSection(&data_c79d54)
    
    goto label_4722c6

if (arg1 != 0)
label_4722c6:
    int32_t* eax_1 = sub_471040()
    
    if ((data_c7a960 & 1) == 0)
        data_c7a960.d |= 1
        sub_46d000(&data_c79d90)
        sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    int32_t edi_1 = data_c7a020
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        LeaveCriticalSection(&data_c79d54)
    
    if ((data_c7a960 & 1) == 0)
        data_c7a960.d |= 1
        sub_46d000(&data_c79d90)
        sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    int32_t esi = data_c79ff4
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        LeaveCriticalSection(&data_c79d54)
    
    sub_478c50(result, eax_1, esi, edi_1)

return result
