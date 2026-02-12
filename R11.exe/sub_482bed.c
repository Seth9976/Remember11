// 函数: sub_482bed
// 地址: 0x482bed
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_2 = 0x10
int32_t var_8 = 0x4ac678
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4ac678 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_3 = &data_482bf9
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = sub_48677d(8)
int32_t var_8_1 = 0

if (data_c7aa68 != 1)
    data_c7aa64 = 1
    data_c7aa60 = arg3.b
    
    if (arg2 == 0)
        int32_t eax_1 = sub_488bb0(data_2b6b9ec)
        int32_t* eax_2
        int32_t edx_1
        eax_2, edx_1 = sub_488bb0(data_2b6b9e8)
        int32_t* esi_1 = eax_2
        int32_t* var_24_1 = esi_1
        
        if (eax_1 != 0)
            while (true)
                esi_1 -= 4
                int32_t* var_24_2 = esi_1
                
                if (esi_1 u< eax_1)
                    break
                
                if (*esi_1 != 0)
                    int32_t edi_1 = *esi_1
                    int32_t eax_3
                    eax_3, edx_1 = sub_488ba7()
                    
                    if (edi_1 != eax_3)
                        edx_1 = sub_488bb0(edi_1)()
        
        edx = sub_482ab0(0x49d4c8, edx_1)
    
    sub_482ab0(0x49d4d8, edx)

int32_t var_8_2 = 0xfffffffe
int32_t result = $LN17(&__saved_ebp)

if (arg3 != 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_1 = &data_482cce
    return result

data_c7aa68 = 1
__unlock(8)
sub_482a89(arg1)
noreturn
