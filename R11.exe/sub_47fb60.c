// 函数: sub_47fb60
// 地址: 0x47fb60
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49b248
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
CRITICAL_SECTION* var_10_1 = &arg1[7]
EnterCriticalSection(&arg1[7])
int32_t var_4 = 0

if (arg1[0x12] == 1)
    LeaveCriticalSection(&arg1[7])
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0x80004005

int32_t result = (*(*arg1 + 0x34))(arg1, arg2, 0, arg1[0xe], arg1[0xf], "tUx{")

if (arg3 != 0 && result s>= 0)
    result = (*(*arg1 + 0x34))(arg1, arg3, 0, arg1[0x10], arg1[0x11], "tUx{")

LeaveCriticalSection(&arg1[7])
fsbase->NtTib.ExceptionList = ExceptionList
return result
