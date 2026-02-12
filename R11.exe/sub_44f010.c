// 函数: sub_44f010
// 地址: 0x44f010
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_4999c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_34 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
char* eax_3 = arg2
int32_t var_10 = 0xf
int32_t var_14 = 0
char var_24 = 0

do
    arg1.b = *eax_3
    eax_3 = &eax_3[1]
while (arg1.b != 0)

void var_28
sub_44b9c0(&var_28, arg2, eax_3 - &eax_3[1])
int32_t var_4 = 0
void** result = sub_44ef60(esi + 0x14, &var_28)

if (var_10 u>= 0x10)
    result = j_sub_4813df(var_24.d)

fsbase->NtTib.ExceptionList = ExceptionList
return result
