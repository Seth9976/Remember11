// 函数: sub_47d3f0
// 地址: 0x47d3f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49ad08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg2
int32_t result

if (esi != 0)
    CRITICAL_SECTION* lpCriticalSection = *(arg1 - 0x78)
    arg2 = lpCriticalSection
    EnterCriticalSection(lpCriticalSection)
    int32_t* ebx_1 = *(arg1 + 4)
    int32_t var_4 = 0
    (*(*esi + 4))(esi)
    *(arg1 + 4) = esi
    
    if (ebx_1 != 0)
        (*(*ebx_1 + 8))(ebx_1)
    
    *(arg1 + 8) = arg3
    LeaveCriticalSection(lpCriticalSection)
    result = 0
else
    result = 0x80004003

fsbase->NtTib.ExceptionList = ExceptionList
return result
