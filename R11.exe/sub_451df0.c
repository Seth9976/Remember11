// 函数: sub_451df0
// 地址: 0x451df0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_499b28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x58) == 1)
    int32_t* var_4c = nullptr
    int32_t* eax_3 = *(arg1 + 0x44)
    int32_t var_4 = 0
    (*(*eax_3 + 0x48))(eax_3, 0, &var_4c)
    (*(*data_c78668 + 0x28))(var_4c, 0)
    int32_t* eax_6 = data_c7866c
    void* ecx_2 = *eax_6
    void* var_64_2 = ecx_2
    (*(ecx_2 + 0xac))(eax_6, 0, 0, 1, 0, fconvert.s(float.t(0)), 0)
    int32_t* eax_7 = *(arg1 + 0x40)
    void var_2c
    (*(*eax_7 + 0x44))(eax_7, 0, &var_2c)
    int32_t var_14
    long double x87_r7_2 = float.t(var_14)
    
    if (var_14 s< 0)
        x87_r7_2 = x87_r7_2 + fconvert.t(4.2949673e+09f)
    
    float var_48_1 = fconvert.s(x87_r7_2 / float.t(*(arg1 + 0x18)))
    int32_t var_10
    long double x87_r7_4 = float.t(var_10)
    
    if (var_10 s< 0)
        x87_r7_4 = x87_r7_4 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_5 = x87_r7_4 / float.t(*(arg1 + 0x1c))
    int32_t edx_5 = *(arg1 + 0x40)
    int32_t var_30_1 = var_10
    int32_t* ecx_6 = data_c78668
    int32_t var_34_1 = var_14
    int32_t var_3c = 0
    int32_t var_38_1 = 0
    float var_44_3 = fconvert.s(x87_r7_5)
    (*(*ecx_6 + 0x5c))(&var_3c, edx_5)
    int32_t* eax_12 = *(*(arg1 + 0x5c) + 0x40)
    (*(*eax_12 + 0x44))(eax_12, 0, &var_2c)
    long double x87_r7_6 = float.t(var_14)
    
    if (var_14 s< 0)
        x87_r7_6 = x87_r7_6 + fconvert.t(4.2949673e+09f)
    
    void* eax_14 = *(arg1 + 0x5c)
    *(eax_14 + 0x10)
    long double x87_r5_1 = fconvert.t(var_48_1)
    long double x87_r4_2 = float.t(var_10)
    
    if (var_10 s< 0)
        x87_r4_2 = x87_r4_2 + fconvert.t(4.2949673e+09f)
    
    *(eax_14 + 0x14)
    long double x87_r2_1 = fconvert.t(var_44_3)
    (*(*data_c78668 + 0x60))(fconvert.s(x87_r5_1 * float.t(*(arg1 + 0x60))), 
        fconvert.s(x87_r2_1 * float.t(*(arg1 + 0x64))), fconvert.s(x87_r5_1 / x87_r5_1 * x87_r7_6), 
        fconvert.s(x87_r2_1 / x87_r2_1 * x87_r4_2), *(eax_14 + 0x40))
    int32_t* eax_17 = var_4c
    int32_t var_4_1 = 0xffffffff
    
    if (eax_17 != 0)
        (*(*eax_17 + 8))(eax_17)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
