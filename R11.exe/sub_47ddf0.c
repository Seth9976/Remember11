// 函数: sub_47ddf0
// 地址: 0x47ddf0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49b038
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
CRITICAL_SECTION* lpCriticalSection = esi[0xb]
arg1 = lpCriticalSection
EnterCriticalSection(lpCriticalSection)
int32_t ebp = 0
esi[5] = arg2
esi[6] = arg3
int32_t var_4 = 0
int32_t result_1

if (esi[2] == 0)
    result_1 = (*(*esi + 0x14))(esi)

int32_t result

if (esi[2] != 0 || result_1 s>= 0)
    if (esi[2] == 2)
        goto label_47deaf
    
    int32_t ebx_2 = (*(esi[-3] + 0x18))(eax_2)
    int32_t var_10_1 = ebx_2
    
    if (ebx_2 s<= 0)
    label_47deaa:
        lpCriticalSection = arg1
    label_47deaf:
        esi[2] = 2
        LeaveCriticalSection(lpCriticalSection)
        result = 0
    else
        while (true)
            int32_t* eax_8 = (*(esi[-3] + 0x1c))(ebp)
            
            if (eax_8[6] != 0)
                int32_t result_2 = (*(*eax_8 + 0x1c))(arg2, arg3)
                
                if (result_2 s< 0)
                    LeaveCriticalSection(arg1)
                    result = result_2
                    break
                
                ebx_2 = var_10_1
            
            ebp += 1
            
            if (ebp s>= ebx_2)
                goto label_47deaa
else
    LeaveCriticalSection(lpCriticalSection)
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
return result
