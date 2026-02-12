// 函数: sub_475180
// 地址: 0x475180
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if ((data_c7a960 & 1) == 0)
    data_c7a960.d |= 1
    sub_46d000(&data_c79d90)
    sub_48258e(sub_49cb00)

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    EnterCriticalSection(&data_c79d54)

int32_t ebx
ebx.b = data_c79fa9

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

sub_46ff00()

if (*(sub_46d0e0(&data_c79d90) + 0x30) == 0)
    return 

int32_t eax_2 = sub_46ce70(sub_46f1f0(), 1)
sub_46ff00()
int32_t var_94

if (eax_2 == sub_46d260(&data_c79d90) || sub_473980(eax_2, &var_94) s< 0)
    return 

int32_t var_90
int32_t eax_3 = sub_471660(&var_90)
int32_t edx_1 = var_94
int32_t var_48[0x12]
__builtin_memcpy(&var_48, eax_3, 0x48)
var_48[0] = edx_1
__builtin_memcpy(&var_90, 
    "\x01\x00\x00\x00\x02\x00\x00\x00\x02\x00\x00\x00\x02\x00\x00\x00\x02\x00\x00\x00\x02\x00\x00\x00\x"
"02\x00\x00\x00\x02\x00\x00\x00\x02\x00\x00\x00\x02\x00\x00\x00\x02\x00\x00\x00\x02\x00\x00\x00\x02"
"00\x00\x00\x02\x00\x00\x00\x02\x00\x00\x00", 
    0x3c)
void* eax
int80_t st0_1
st0_1, eax = sub_473e20(&var_48, &var_48, &var_90)

if (eax s< 0)
    return 

eax = sub_4744d0(&var_48, nullptr, 0, 0)

if (eax == 0x80004004)
    sub_46ff00()
    sub_46db80(&data_c79d90, 0)
    return 

if (eax s< 0)
    sub_46fe20(0)
    sub_4709d0(0, 0)
