// 函数: sub_4698b0
// 地址: 0x4698b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
void* var_14
void* ecx
void* eax_4 = sub_4696c0(sub_4684b0(ecx, &var_14))
void* edi = var_14
int32_t var_4_1 = 0xffffffff

if (edi != 0)
    void var_10
    sub_4973f8(&var_10, 0)
    int32_t eax_5 = *(edi + 4)
    
    if (eax_5 u> 0 && eax_5 u< 0xffffffff)
        *(edi + 4) = eax_5 - 1
    
    int32_t esi_1 = *(edi + 4)
    int32_t esi_2 = neg.d(esi_1)
    void* esi_5 = not.d(sbb.d(esi_2, esi_2, esi_1 != 0)) & edi
    sub_497419(&var_10)
    
    if (esi_5 != 0)
        (**esi_5)(1)

int32_t result = (*(*eax_4 + 0x18))(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
