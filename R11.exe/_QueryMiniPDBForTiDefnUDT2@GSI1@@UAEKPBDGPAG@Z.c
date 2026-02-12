// 函数: ?QueryMiniPDBForTiDefnUDT2@GSI1@@UAEKPBDGPAG@Z
// 地址: 0x458ee0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_49a099
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_40
int32_t* result = arg3
int32_t* result_2 = result
int32_t var_30 = 0
void* var_28 = nullptr
int32_t var_24 = 0
int32_t var_20 = 0
int32_t* edi = arg1
int32_t var_8_1 = 0

while (true)
    var_8_1.b = 1
    
    if (edi == arg2)
        break
    
    arg1 = result
    int32_t* result_1 = result
    var_8_1.b = 2
    
    if (result != 0)
        *result = var_30
        void var_2c
        sub_457d80(&result[1], &var_2c)
    
    int32_t eax_4 = *result
    *result = *edi
    *edi = eax_4
    int32_t eax_5 = result[2]
    result[2] = edi[2]
    edi[2] = eax_5
    int32_t eax_6 = result[3]
    result[3] = edi[3]
    edi[3] = eax_6
    int32_t eax_7 = result[4]
    result[4] = edi[4]
    result = &result[5]
    edi[4] = eax_7
    arg3 = result
    edi = &edi[5]

int32_t var_30_1 = 0

if (var_28 != 0)
    j_sub_4813df(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
return result
