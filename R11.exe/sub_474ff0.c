// 函数: sub_474ff0
// 地址: 0x474ff0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

int32_t ebx
ebx.b = data_c79f47

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    LeaveCriticalSection(&data_c79d54)

if (ebx.b != 0)
    return 

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

ebx.b = data_c79fb2

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    LeaveCriticalSection(&data_c79d54)

if (ebx.b == 0)
    return 

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

void* esi_1 = data_c79d9c

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    LeaveCriticalSection(&data_c79d54)

if (*(esi_1 + 0x30) == 0)
    return 

RECT rect
GetClientRect(sub_46f1f0(), &rect)
sub_46ff00()
void* eax_2 = sub_46d0e0(&data_c79d90)

if (rect.right != *(eax_2 + 0x10))
label_475143:
    int32_t var_b4_2 = 0
    void var_90
    void var_48
    __builtin_memcpy(&var_90, sub_471660(&var_48), 0x48)
    int32_t var_80_1 = 0
    int32_t var_7c_1 = 0
    sub_4744d0(&var_90, nullptr, 0, var_b4_2)
else
    sub_46ff00()
    void* eax = sub_46d0e0(&data_c79d90)
    
    if (rect.bottom != *(eax + 0x14))
        goto label_475143
