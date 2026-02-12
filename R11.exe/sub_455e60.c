// 函数: sub_455e60
// 地址: 0x455e60
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_499f01
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_20 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct CPicture::VTable** var_10 = arg1
arg1[1] = data_c78fdc
data_c78fdc += 1
data_c78fd8 += 1
int32_t var_24 = 0.d
*arg1 = &CPicture::`vftable'
int32_t var_4 = 0
arg1[2] = 0
sub_451c90(&arg1[3], 0)
int32_t var_24_1 = 0.d
var_4.b = 1
arg1[5] = 0
sub_451d20(&arg1[6], 0)
var_4.b = 2
sub_4675b0(arg1, arg2, arg3, arg4, arg5)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
