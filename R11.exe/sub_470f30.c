// 函数: sub_470f30
// 地址: 0x470f30
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* result_1 = arg1

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

int32_t* esi = data_c79d94

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    LeaveCriticalSection(&data_c79d54)

int32_t eax_1 = (*(*esi + 0x48))(esi, 0, 0, 0, &result_1)

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        LeaveCriticalSection(&data_c79d54)

int32_t* result = nullptr
__builtin_memset(&data_c79da0, 0, 0x20)

if (eax_1 s>= 0)
    int32_t* result_2 = result_1
    (*(*result_2 + 0x30))(result_2, &data_c79da0)
    result = result_1
    
    if (result != 0)
        return (*(*result + 8))(result)

return result
