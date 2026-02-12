// 函数: sub_47fd00
// 地址: 0x47fd00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49b297
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_1c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_10 = arg1
int32_t* eax_3 = *(arg1 + 0x10)
int32_t var_4 = 0

if (eax_3 != 0)
    (*(*eax_3 + 8))(eax_3)

int32_t var_4_1 = 0xffffffff
int32_t result = sub_47c960()
fsbase->NtTib.ExceptionList = ExceptionList
return result
