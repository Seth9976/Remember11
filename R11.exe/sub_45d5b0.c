// 函数: sub_45d5b0
// 地址: 0x45d5b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a36b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct CFile::VTable* var_248
int32_t eax_2 = __security_cookie ^ &var_248
int32_t __saved_esi
int32_t var_250 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void var_218
sub_45c100(&var_218, u"key.conf")
var_248 = &CFile::`vftable'
int32_t var_21c = 0
int32_t var_244 = 0
int32_t var_240 = 0
int32_t var_254 = 0
int32_t var_4 = 0
sub_465b80(&var_248, &var_218, 1, 1)
sub_465750(&var_248, &data_c784d8, 0xb4, nullptr)
int32_t var_4_1 = 0xffffffff
BOOL result = sub_465a70(&var_248)
fsbase->NtTib.ExceptionList = ExceptionList
sub_480cd2(eax_2 ^ &var_248)
return result
