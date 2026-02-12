// 函数: sub_4543f0
// 地址: 0x4543f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_499e0b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_10_1 = arg1
void* ecx = *(arg1 + 0x4c)
int32_t var_4 = 0

if (ecx != 0)
    result = sub_454360(ecx, arg1)

int32_t* esi_1 = *(arg1 + 0x40)
data_c781d4 -= 1
int32_t var_4_1 = 0xffffffff

if (esi_1 != 0)
    result = (*(*esi_1 + 8))(esi_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
