// 函数: sub_47be90
// 地址: 0x47be90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49ae83
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
CRITICAL_SECTION* var_14 = arg1 + 0xc4
EnterCriticalSection(arg1 + 0xc4)
int32_t var_4 = 0
int32_t arg_4

if (arg_4 == 0)
    if (*(arg1 + 0x78) != 0)
    label_47bf4b:
        int32_t result = *(arg1 + 0x78)
        LeaveCriticalSection(arg1 + 0xc4)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    arg_4 = 0
    void* eax_3 = sub_481fef(0xe0)
    void* var_10_1 = eax_3
    var_4.b = 1
    struct CBaseInputPin::CRendererInputPin::VTable** eax_4
    
    if (eax_3 == 0)
        eax_4 = nullptr
    else
        eax_4 = sub_47a760(eax_3, arg1, &arg_4, &data_4a58f4)
    
    var_4.b = 0
    *(arg1 + 0x78) = eax_4
    
    if (eax_4 != 0)
        if (arg_4 s>= 0)
            goto label_47bf4b
        
        (*eax_4)->vFunc_3(1)
        *(arg1 + 0x78) = 0

LeaveCriticalSection(arg1 + 0xc4)
fsbase->NtTib.ExceptionList = ExceptionList
return 0
