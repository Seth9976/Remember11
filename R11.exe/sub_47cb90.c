// 函数: sub_47cb90
// 地址: 0x47cb90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49b008
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
CRITICAL_SECTION* lpCriticalSection = arg1->__offset(0x2c).d
EnterCriticalSection(lpCriticalSection)
int32_t var_4 = 0
arg1->__offset(0x34).d = arg2

if (arg2 == 0)
    arg1->__offset(0x38).d = 0
else if ((**arg2)(arg2, 0x4a5ca4, arg1 + 0x38) s>= 0)
    int32_t* esi_2 = *(arg1 + 0x38)
    (*(*esi_2 + 8))(esi_2)

void* eax_6 = arg1->__offset(0x30).d

if (eax_6 != 0)
    j_sub_4813df(eax_6)
    arg1->__offset(0x30).d = 0

if (arg3 != 0)
    void* esi_4 = lstrlenW(arg3) + 1
    int32_t ecx_3
    ecx_3.b = mulu.dp.d(esi_4, 2) u>> 0x20 != 0
    void* eax_10 = j_sub_481fef(neg.d(ecx_3) | (esi_4 * 2))
    arg1->__offset(0x30).d = eax_10
    
    if (eax_10 != 0)
        sub_480ea0(eax_10, arg3, esi_4 * 2, eax_2)

LeaveCriticalSection(lpCriticalSection)
fsbase->NtTib.ExceptionList = ExceptionList
return 0
