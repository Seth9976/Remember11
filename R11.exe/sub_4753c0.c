// 函数: sub_4753c0
// 地址: 0x4753c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_90
int32_t var_48[0x4]
__builtin_memcpy(&var_48, sub_471660(&var_90), 0x48)
int32_t var_18
int32_t eax_1
eax_1.b = var_18 == 0
var_90 = 1
int32_t var_8c = 2
int32_t var_88 = 1
int32_t var_84 = 0
int32_t var_80 = 2
int32_t var_78 = 0
int32_t var_74
__builtin_memcpy(&var_74, 
    "\x02\x00\x00\x00\x02\x00\x00\x00\x02\x00\x00\x00\x02\x00\x00\x00\x02\x00\x00\x00\x02\x00\x00\x00", 
    0x18)
int32_t var_5c = 0
int32_t var_58 = 0
int32_t ebx
int32_t esi_2

if (eax_1 == 0)
    if ((data_c7a960 & 1) == 0)
        data_c7a960.d |= 1
        sub_46d000(&data_c79d90)
        sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    int32_t esi_3 = data_c79f04
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        LeaveCriticalSection(&data_c79d54)
    
    ebx = esi_3
    
    if ((data_c7a960 & 1) == 0)
        data_c7a960.d |= 1
        sub_46d000(&data_c79d90)
        sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    esi_2 = data_c79f08
else
    if ((data_c7a960 & 1) == 0)
        data_c7a960.d |= 1
        sub_46d000(&data_c79d90)
        sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    int32_t esi_1 = data_c79f0c
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        LeaveCriticalSection(&data_c79d54)
    
    ebx = esi_1
    
    if ((data_c7a960 & 1) == 0)
        data_c7a960.d |= 1
        sub_46d000(&data_c79d90)
        sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    esi_2 = data_c79f10

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    LeaveCriticalSection(&data_c79d54)

if (ebx u<= 0 || esi_2 u<= 0)
    int32_t var_7c_1 = 0
else
    int32_t var_7c = 2
    int32_t var_38_1 = ebx
    int32_t var_34_1 = esi_2

void* eax_3
int80_t st0
st0, eax_3 = sub_473e20(&var_48, &var_48, &var_90)

if (eax_3 s< 0)
    return eax_3

void* eax_4 = sub_4744d0(&var_48, nullptr, 0, 0)

if (eax_4 s< 0 && eax_4 != 0x80004004)
    int32_t eax_5
    eax_5.b = eax_1 == 0
    int32_t var_18_2 = eax_5
    int32_t eax_7
    int32_t esi_4
    
    if (eax_5 == 0)
        sub_46ff00()
        esi_4 = sub_46d360(&data_c79d90)
        sub_46ff00()
        eax_7 = sub_46d3e0(&data_c79d90)
    else
        sub_46ff00()
        esi_4 = sub_46d460(&data_c79d90)
        sub_46ff00()
        eax_7 = sub_46d4e0(&data_c79d90)
    
    if (esi_4 u<= 0 || eax_7 u<= 0)
        int32_t var_7c_3 = 0
    else
        int32_t var_7c_2 = 2
        int32_t var_38_2 = esi_4
        int32_t var_34_2 = eax_7
    
    sub_473e20(&var_48, &var_48, &var_90)
    
    if (sub_4744d0(&var_48, nullptr, 0, 0) s< 0)
        sub_46fe20(0)

return eax_4
