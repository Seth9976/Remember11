// 函数: sub_4716f0
// 地址: 0x4716f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

int32_t esi = data_c79d9c

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    LeaveCriticalSection(&data_c79d54)

if (esi != 0 && *(esi + 0x30) != 0)
    return ClipCursor(nullptr)

uint32_t eax_2 = GetClassLongW(sub_471160(), 0xfffffff4)

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

int32_t* esi_1 = data_c79d94

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    LeaveCriticalSection(&data_c79d54)

sub_46ec80(esi_1, eax_2, 0)

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

int32_t* esi_2 = data_c79d94

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    LeaveCriticalSection(&data_c79d54)

(*(*esi_2 + 0x30))(esi_2, 1)
RECT rect
GetWindowRect(sub_471160(), &rect)
return ClipCursor(&rect)
