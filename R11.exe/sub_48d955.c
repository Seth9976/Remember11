// 函数: sub_48d955
// 地址: 0x48d955
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0x4acae0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4acae0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_4 = &data_48d961
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = 0
sub_48677d(1)
int32_t var_8_1 = 0
int32_t var_38 = 3
int32_t edi = 3

while (true)
    int32_t var_24_1 = edi
    
    if (edi s>= data_2b6b9e0)
        break
    
    int32_t esi_2 = edi << 2
    int32_t* eax_1 = data_2b6a9c4 + esi_2
    
    if (*eax_1 != 0)
        int32_t* eax_2 = *eax_1
        
        if ((eax_2[3].b & 0x83) != 0 && sub_483a9a(eax_2) != 0xffffffff)
            result += 1
        
        if (edi s>= 0x14)
            DeleteCriticalSection(*(esi_2 + data_2b6a9c4) + 0x20)
            sub_4813df(*(esi_2 + data_2b6a9c4))
            *(esi_2 + data_2b6a9c4) = 0
    
    edi += 1

int32_t var_8_2 = 0xfffffffe
sub_48d9eb()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_48d9ea
return result
