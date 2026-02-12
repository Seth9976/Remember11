// 函数: sub_47db60
// 地址: 0x47db60
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49b008
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
CRITICAL_SECTION* esi = arg1
CRITICAL_SECTION* lpCriticalSection = esi->__offset(0x2c).d
arg1 = lpCriticalSection
EnterCriticalSection(lpCriticalSection)
int32_t var_4 = 0

if (arg2 != 0)
    (*(*arg2 + 4))(arg2)

int32_t* OwningThread = esi->OwningThread

if (OwningThread != 0)
    (*(*OwningThread + 8))(OwningThread)

esi->OwningThread = arg2
LeaveCriticalSection(lpCriticalSection)
fsbase->NtTib.ExceptionList = ExceptionList
return 0
