// 函数: sub_47d340
// 地址: 0x47d340
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49ad08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebp = arg2
HRESULT result

if (ebp != 0)
    CRITICAL_SECTION* lpCriticalSection = *(arg1 - 0x78)
    arg2 = lpCriticalSection
    EnterCriticalSection(lpCriticalSection)
    int32_t var_4 = 0
    
    if (*(arg1 + 4) != 0)
    label_47d3bd:
        *ebp = *(arg1 + 4)
        int32_t* esi_3 = *(arg1 + 4)
        (*(*esi_3 + 4))(esi_3)
        LeaveCriticalSection(lpCriticalSection)
        result = 0
    else
        HRESULT result_1 =
            CoCreateInstance(&data_4a5dc4, 0, CLSCTX_INPROC_SERVER, &data_4a5d04, arg1 + 4)
        
        if (result_1 s>= 0)
            goto label_47d3bd
        
        LeaveCriticalSection(lpCriticalSection)
        result = result_1
else
    result = E_POINTER

fsbase->NtTib.ExceptionList = ExceptionList
return result
