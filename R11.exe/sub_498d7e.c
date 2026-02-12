// 函数: sub_498d7e
// 地址: 0x498d7e
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x4ace60
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4ace60 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_4 = &data_498d8a
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0
int32_t* esi = arg1
int32_t eax
eax.b = esi != 0
int32_t result

if (eax != 0)
    int32_t edi_1
    
    if (arg3 == 4)
    label_498dce:
        
        if (arg3 == 0 || arg3 == 0x40)
            goto label_498dd7
        
        edi_1 = arg4
    else
        if (arg3 != 0)
            if (arg3 != 0x40)
                goto label_498da2
            
            goto label_498dce
        
    label_498dd7:
        edi_1 = arg4
        
        if (edi_1 - 2 u> 0x7ffffffd)
            goto label_498da2
    
    uint32_t edi_2 = edi_1 & 0xfffffffe
    arg1 = esi
    sub_48395e(esi)
    int32_t var_8_1 = 0
    sub_4836ad(esi)
    sub_48db55(esi)
    esi[3] &= 0xffffc2f3
    int32_t ecx_2 = esi[3]
    void* eax_4
    int32_t ecx_3
    
    if ((arg3.b & 4) == 0)
        eax_4 = arg2
        
        if (eax_4 != 0)
            ecx_3 = ecx_2 | 0x500
            goto label_498e4f
        
        eax_4 = sub_48b27c(edi_2)
        
        if (eax_4 != 0)
            esi[3] |= 0x408
            goto label_498e52
        
        data_c7aa6c += 1
        result_1 = 0xffffffff
    else
        ecx_3 = ecx_2 | 4
        eax_4 = &esi[5]
        int32_t var_34_2 = 2
        edi_2 = 2
    label_498e4f:
        esi[3] = ecx_3
    label_498e52:
        esi[6] = edi_2
        esi[2] = eax_4
        *esi = eax_4
        esi[1] = 0
    int32_t var_8_2 = 0xfffffffe
    sub_498e72(&__saved_ebp)
    result = result_1
else
label_498da2:
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_498e71
return result
