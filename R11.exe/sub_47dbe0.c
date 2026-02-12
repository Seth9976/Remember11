// 函数: sub_47dbe0
// 地址: 0x47dbe0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49b0f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
CRITICAL_SECTION* ebx = arg2

if (ebx == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0x80004003

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x2c)
arg2 = lpCriticalSection
EnterCriticalSection(lpCriticalSection)
int32_t var_4 = 0

if (*(arg1 + 0xc) != 0)
    int32_t* eax_4 = *(arg1 + 0xc)
    (*(*eax_4 + 4))(eax_4)

ebx->DebugInfo = *(arg1 + 0xc)
LeaveCriticalSection(lpCriticalSection)
fsbase->NtTib.ExceptionList = ExceptionList
return 0
