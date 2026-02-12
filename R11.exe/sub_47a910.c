// 函数: sub_47a910
// 地址: 0x47a910
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49ace0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
CRITICAL_SECTION* ebx = arg1
CRITICAL_SECTION* lpCriticalSection = ebx->__offset(0xcc).d + 0x7c
arg1 = lpCriticalSection
EnterCriticalSection(lpCriticalSection)
CRITICAL_SECTION* lpCriticalSection_1 = ebx->__offset(0xcc).d + 0x94
int32_t var_4 = 0
CRITICAL_SECTION* lpCriticalSection_2 = lpCriticalSection_1
EnterCriticalSection(lpCriticalSection_1)
var_4.b = 1
int32_t result = (*(*ebx->__offset(0xcc).d + 0x88))(eax_2)

if (result s>= 0)
    sub_47d7a0(ebx)
    result = 0

LeaveCriticalSection(lpCriticalSection_1)
LeaveCriticalSection(lpCriticalSection)
fsbase->NtTib.ExceptionList = ExceptionList
return result
