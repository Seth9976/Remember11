// 函数: sub_47a860
// 地址: 0x47a860
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
CRITICAL_SECTION* esi = arg1
CRITICAL_SECTION* lpCriticalSection_1 = esi->__offset(0xcc).d + 0x7c
arg1 = lpCriticalSection_1
EnterCriticalSection(lpCriticalSection_1)
CRITICAL_SECTION* lpCriticalSection = esi->__offset(0xcc).d + 0x94
int32_t var_4 = 0
CRITICAL_SECTION* lpCriticalSection_2 = lpCriticalSection
EnterCriticalSection(lpCriticalSection)
var_4.b = 1
sub_47d770(esi)
(*(*esi->__offset(0xcc).d + 0x84))(eax_2)
var_4.b = 0
LeaveCriticalSection(lpCriticalSection)
int32_t result = (*(*esi->__offset(0xcc).d + 0x64))()
LeaveCriticalSection(lpCriticalSection_1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
