// 函数: sub_47bd60
// 地址: 0x47bd60
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49ae48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
CRITICAL_SECTION* var_10_1 = &arg1[0x1c]
EnterCriticalSection(&arg1[0x1c])
int32_t* eax_3 = arg1[2]
int32_t var_4 = 0
int32_t result

if (eax_3 == 2)
    LeaveCriticalSection(&arg1[0x1c])
    result = 0
else if (*(arg1[0x1b] + 0x18) != 0)
    SetEvent(arg1[0x14])
    int32_t result_1 = sub_47ddf0(arg1, arg2, arg3)
    
    if (result_1 s>= 0)
        (*(arg1[-3] + 0x28))(1)
        EnterCriticalSection(&arg1[0x22])
        arg1[0x29] = 0
        LeaveCriticalSection(&arg1[0x22])
        int32_t* eax_11 = *(arg1[0x1b] + 0x9c)
        
        if (eax_11 != 0)
            (*(*eax_11 + 0x14))(eax_11)
        
        if (eax_3 == 0)
            int32_t eax_13 = *(arg1[-3] + 0x70)
            arg1[0x15] = 0
            eax_13(eax_2)
        
        int32_t result_2 = (*(arg1[-3] + 0x7c))(eax_2)
        LeaveCriticalSection(&arg1[0x1c])
        result = result_2
    else
        LeaveCriticalSection(&arg1[0x1c])
        result = result_1
else
    int32_t eax_6 = neg.d(&arg1[-3])
    sub_47ccb0(&arg1[-3], 1, 0, sbb.d(eax_6, eax_6, arg1 != 0xc) & arg1)
    arg1[2] = 2
    LeaveCriticalSection(&arg1[0x1c])
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
