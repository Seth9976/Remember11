// 函数: sub_48bea5
// 地址: 0x48bea5
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 0x20
int32_t var_8 = 0x4aca60
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp_4
int32_t __saved_ebp_2 = __saved_ebp_4
int32_t ebx
int32_t var_38 = ebx
int32_t esi
int32_t var_3c = esi
int32_t edi
int32_t var_40 = edi
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4aca60 ^ __security_cookie_1
int32_t __saved_ebp
void* var_44 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_44
void* const var_48 = &data_48beb1
int32_t var_8_4 = 0xfffffffe
int32_t var_c_1 = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
void* const* esp_1 = &var_44
void* edi_1 = nullptr
int32_t var_20 = 0
int32_t var_2c = 0
int32_t result
void* eax_6
int32_t eax_8
void* esi_1

if (arg1 s<= 0xb)
    if (arg1 != 0xb)
        var_48 = 2
        esp_1 = &var_44
        
        if (arg1 == 2)
            esi_1 = &data_c7b38c
            eax_6 = data_c7b38c
            goto label_48bf5a
        
        if (arg1 == 4)
            goto label_48bed8
        
        if (arg1 == 6)
            goto label_48bf38
        
        if (arg1 != 8)
            goto label_48bf21
        
        goto label_48bed8
    
label_48bed8:
    void* eax_5
    void* ecx_1
    eax_5, ecx_1 = sub_488d89()
    edi_1 = eax_5
    void* var_2c_1 = edi_1
    
    if (edi_1 != 0)
        var_48 = *(edi_1 + 0x5c)
        esi_1 = sub_48be64(eax_5, arg1, ecx_1) + 8
        eax_8 = *esi_1
        goto label_48bf6a
    
    result = 0xffffffff
else if (arg1 == 0xf)
    esi_1 = &data_c7b398
    eax_6 = data_c7b398
label_48bf5a:
    var_20 = 1
    var_48 = eax_6
    eax_8 = sub_488bb0(var_48)
label_48bf6a:
    esp_1 = &var_44
    result = 0
    
    if (eax_8 != 1)
        if (eax_8 == 0)
            var_48 = 3
            esp_1 = &var_48
            result = sub_482ce0(var_48)
        
        if (var_20 != result)
            *(esp_1 - 4) = result
            sub_48677d()
            *(esp_1 - 4)
        
        int32_t var_8_1 = 0
        
        if (arg1 != 8 && arg1 != 0xb && arg1 != 4)
            goto label_48bfbe
        
        int32_t var_30 = *(edi_1 + 0x60)
        *(edi_1 + 0x60) = 0
        int32_t var_34
        
        if (arg1 != 8)
            *esi_1 = sub_488ba7()
        else
            var_34 = *(edi_1 + 0x64)
            *(edi_1 + 0x64) = 0x8c
        label_48bfbe:
            
            if (arg1 != 8)
                *esi_1 = sub_488ba7()
            else
                for (int32_t i = data_4cc7c8; i s< data_4cc7cc + data_4cc7c8; i += 1)
                    *(i * 0xc + *(edi_1 + 0x5c) + 8) = 0
        
        int32_t var_8_2 = 0xfffffffe
        sub_48c019(&__saved_ebp)
        void* esp_6
        
        if (arg1 != 8)
            *(esp_1 - 4) = arg1
            eax_8()
            esp_6 = esp_1
        else
            *(esp_1 - 4) = *(edi_1 + 0x64)
            *(esp_1 - 8) = arg1
            eax_8()
            *(esp_1 - 4)
            esp_6 = esp_1
        
        *esp_6
        esp_1 = esp_6 + 4
        
        if (arg1 == 8 || arg1 == 0xb || arg1 == 4)
            *(edi_1 + 0x60) = var_30
            
            if (arg1 == 8)
                *(edi_1 + 0x64) = var_34
        
        result = 0
else
    if (arg1 == 0x15)
        esi_1 = &data_c7b390
        eax_6 = data_c7b390
        goto label_48bf5a
    
    if (arg1 == 0x16)
    label_48bf38:
        esi_1 = &data_c7b394
        eax_6 = data_c7b394
        goto label_48bf5a
    
label_48bf21:
    *__errno() = 0x16
    int32_t var_58
    __builtin_memset(&var_58, 0, 0x14)
    sub_481d1b(0, 0, 0, 0, var_48)
    esp_1 = &var_44
    result = 0xffffffff
*(esp_1 - 4) = &data_48c054
fsbase->NtTib.ExceptionList = ExceptionList
esp_1[1]
esp_1[2]
esp_1[3]
int32_t __saved_ebp_3 = *(esp_1 - 4)
return result
