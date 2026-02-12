// 函数: sub_47dd30
// 地址: 0x47dd30
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
void* ebx = arg1
CRITICAL_SECTION* lpCriticalSection = *(ebx + 0x2c)
EnterCriticalSection(lpCriticalSection)
int32_t edi = 0
int32_t var_4 = 0
int32_t eax_4
void* esi_1

if (*(ebx + 8) == 0)
    esi_1 = ebx - 0xc
    eax_4 = (*(*(ebx - 0xc) + 0x18))(eax_2)

int32_t result

if (*(ebx + 8) != 0 || eax_4 s<= 0)
label_47ddb4:
    *(ebx + 8) = 1
    LeaveCriticalSection(lpCriticalSection)
    result = 0
else
    while (true)
        int32_t* eax_6 = (*(*esi_1 + 0x1c))(edi)
        
        if (eax_6[6] != 0)
            int32_t result_1 = (*(*eax_6 + 0x14))()
            
            if (result_1 s< 0)
                LeaveCriticalSection(lpCriticalSection)
                result = result_1
                break
            
            ebx = arg1
        
        edi += 1
        
        if (edi s>= eax_4)
            goto label_47ddb4

fsbase->NtTib.ExceptionList = ExceptionList
return result
