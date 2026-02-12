// 函数: sub_452360
// 地址: 0x452360
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_499bf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_58 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct CPicture::VTable* var_44
sub_4521b0(&var_44)
void* esi = arg4
int32_t var_4 = 0
sub_4675b0(&var_44, *(esi + 0x74), *(esi + 0x78), 0x15, 0)
int32_t var_5c = 0
sub_467ea0(&var_44, esi + 0x7c)
int32_t i = 0

if (*(esi + 0x70) s> 0)
    do
        sub_480cf0(*(arg3 + 0x28) * i + *(arg3 + 0x10), 0, *(arg3 + 0x2c) * arg1)
        i += 1
    while (i s< *(esi + 0x70))

void* eax_7 = nullptr
arg4 = nullptr

if (*(esi + 0x78) s> 0)
    while (true)
        char* ebx_3 = (*(esi + 0x70) + eax_7) * *(arg3 + 0x28) + *(arg3 + 0x10)
        sub_480cf0(ebx_3, 0, *(esi + 0x6c) * *(arg3 + 0x2c))
        void* ebx_4 = &ebx_3[*(esi + 0x6c) << 2]
        int32_t var_34
        int32_t var_1c
        sub_480ea0(ebx_4, var_1c * eax_7 + var_34, *(esi + 0x74) * 4)
        int32_t eax_12 = *(esi + 0x74)
        sub_480cf0(ebx_4 + (eax_12 << 2), 0, (arg1 - *(esi + 0x6c) - eax_12) * *(arg3 + 0x2c))
        bool cond:2_1 = arg4 + 1 s< *(esi + 0x78)
        arg4 += 1
        
        if (not(cond:2_1))
            break
        
        eax_7 = arg4

int32_t ecx_8 = *(esi + 0x70)
int32_t eax_15 = *(esi + 0x78)
int32_t i_1 = 0

if (arg2 - ecx_8 - eax_15 s> 0)
    do
        sub_480cf0((eax_15 + ecx_8 + i_1) * *(arg3 + 0x28) + *(arg3 + 0x10), 0, 
            *(arg3 + 0x2c) * arg1)
        ecx_8 = *(esi + 0x70)
        eax_15 = *(esi + 0x78)
        i_1 += 1
    while (i_1 s< arg2 - ecx_8 - eax_15)

eax_15.b = *(esi + 0x68) == 0
*(arg5 + 0x48) = eax_15.b
int32_t var_4_1 = 0xffffffff
void* result = sub_452260(&var_44)
fsbase->NtTib.ExceptionList = ExceptionList
return result
