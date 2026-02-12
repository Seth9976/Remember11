// 函数: sub_4540f0
// 地址: 0x4540f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_499da0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void** esi = sub_4527e0(arg1, arg2)

if (edi == 0)
    __invalid_parameter_noinfo()

int32_t eax_7

if (esi != *(edi + 4))
    int32_t* eax_5
    
    if (esi[9] u< 0x10)
        eax_5 = &esi[4]
    else
        eax_5 = esi[4]
    
    eax_7 = sub_451c20(arg2, 0, *(arg2 + 0x14), eax_5, esi[8])

if (esi == *(edi + 4) || eax_7 s< 0)
    int32_t var_40_1 = 0
    int32_t var_4 = 0
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c_1 = 0
    void* var_30
    sub_44b8e0(&var_30, arg2, nullptr, 0xffffffff)
    int32_t* var_14_1 = nullptr
    char var_3c
    char var_10_1 = var_3c
    var_4.b = 2
    void* var_38
    void** eax_8 = sub_453ef0(edi, &var_38, edi, esi, &var_30)
    edi = *eax_8
    esi = eax_8[1]
    var_4.b = 3
    
    if (var_14_1 != 0)
        (*(*var_14_1 + 8))(var_14_1)
    
    if (var_18_1 u>= 0x10)
        j_sub_4813df(var_2c_1.d)
    
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    char var_2c_2 = 0

if (edi == 0)
    __invalid_parameter_noinfo()

if (esi == *(edi + 4))
    __invalid_parameter_noinfo()

fsbase->NtTib.ExceptionList = ExceptionList
return &esi[0xa]
