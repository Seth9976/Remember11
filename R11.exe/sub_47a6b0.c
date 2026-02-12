// 函数: sub_47a6b0
// 地址: 0x47a6b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49aca8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
CRITICAL_SECTION* var_10_1 = &arg1[0x25]
EnterCriticalSection(&arg1[0x25])
bool cond:0 = arg1[0x19] != 1
int32_t var_4 = 0
arg1[0x1d] = 0

if (not(cond:0))
    arg1[0x19] = 0
    (*(*arg1 + 0x44))(eax_2)
    timeEndPeriod(1)

LeaveCriticalSection(&arg1[0x25])
fsbase->NtTib.ExceptionList = ExceptionList
return 0
