// 函数: sub_47ece0
// 地址: 0x47ece0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49b0f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
CRITICAL_SECTION* edi = arg2

if (edi == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0x80004003

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x14)
arg2 = lpCriticalSection
EnterCriticalSection(lpCriticalSection)
int32_t var_4 = 0

if (*(arg1 + 0xc) != 0)
    LeaveCriticalSection(lpCriticalSection)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0x80040204

if (*(*(arg1 + 0x1c) + 0x14) != 0 && *(arg1 + 0x19) == 0)
    LeaveCriticalSection(lpCriticalSection)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0x80040224

int32_t result = sub_47e580(arg1 - 0xc, edi, arg3)

if (result s>= 0)
    LeaveCriticalSection(lpCriticalSection)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

(*(*(arg1 - 0xc) + 0x2c))(eax_2)
LeaveCriticalSection(lpCriticalSection)
fsbase->NtTib.ExceptionList = ExceptionList
return result
