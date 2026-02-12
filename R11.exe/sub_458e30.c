// 函数: sub_458e30
// 地址: 0x458e30
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_49a061
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* esi = arg1
void* i = arg2
int32_t* var_18 = esi
int32_t var_8_1 = 0

while (i u> 0)
    arg2 = esi
    int32_t* var_1c_1 = esi
    var_8_1.b = 1
    
    if (esi != 0)
        *esi = *arg3
        result = sub_457d80(&esi[1], &arg3[1])
    
    i -= 1
    esi = &esi[5]
    var_8_1.b = 0
    arg1 = esi

fsbase->NtTib.ExceptionList = ExceptionList
return result
