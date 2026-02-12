// 函数: sub_4997d0
// 地址: 0x4997d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x4acee0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4acee0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_2 = &data_4997dc
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
sub_48395e(arg1)
int32_t var_8_1 = 0
int32_t result = sub_499737(arg1, arg2, arg3, arg4)
int32_t var_8_2 = 0xfffffffe
sub_499815(&__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_499814
return result
