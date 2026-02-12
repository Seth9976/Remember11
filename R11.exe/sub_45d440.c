// 函数: sub_45d440
// 地址: 0x45d440
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a338
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_44 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct CFile::VTable* var_3c = &CFile::`vftable'
int32_t var_10 = 0
int32_t var_38 = 0
int32_t var_34 = 0
int32_t var_48 = 0
int32_t var_4 = 0
sub_465b80(&var_3c, u"key.conf", 0, 1)
sub_465560(&var_3c, &data_c784d8, 0xb4, nullptr)
int32_t var_4_1 = 0xffffffff
BOOL result = sub_465a70(&var_3c)
fsbase->NtTib.ExceptionList = ExceptionList
return result
