// 函数: sub_47dc80
// 地址: 0x47dc80
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
void* esi = arg1
CRITICAL_SECTION* lpCriticalSection = *(esi + 0x2c)
EnterCriticalSection(lpCriticalSection)
int32_t edi = 0
int32_t result = 0
int32_t var_4 = 0

if (*(esi + 8) != 0)
    int32_t eax_4 = (*(*(esi - 0xc) + 0x18))(eax_2)
    
    if (eax_4 s> 0)
        do
            int32_t* eax_6 = (*(*(esi - 0xc) + 0x1c))(edi)
            
            if (eax_6[6] != 0)
                int32_t result_1 = (*(*eax_6 + 0x18))()
                
                if (result_1 s< 0 && result s>= 0)
                    result = result_1
            
            edi += 1
        while (edi s< eax_4)
    
    esi = arg1

*(esi + 8) = 0
LeaveCriticalSection(lpCriticalSection)
fsbase->NtTib.ExceptionList = ExceptionList
return result
