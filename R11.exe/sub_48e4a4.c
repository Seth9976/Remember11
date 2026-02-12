// 函数: sub_48e4a4
// 地址: 0x48e4a4
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4 = 0xc
int32_t var_8 = 0x4acb40
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_2 = 0x4acb40 ^ __security_cookie_1
int32_t var_30 = __security_cookie_1 ^ &var_4
int32_t* var_1c = &var_30
void* const var_34 = &data_48e4b0
int32_t var_8_3 = 0xfffffffe
int32_t var_c = var_8_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t var_20 = 1
int32_t entry_ebx
return sub_48e4e4(&var_4, arg2, arg1, entry_ebx) __tailcall
