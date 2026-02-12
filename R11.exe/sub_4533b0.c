// 函数: sub_4533b0
// 地址: 0x4533b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_499cc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[1] = arg3
*arg1 = arg2
arg1[2] = arg4
arg1[9] = 0xf
arg1[8] = 0
arg2 = &arg1[3]
arg1[4].b = 0
sub_44b8e0(&arg1[3], arg5, nullptr, 0xffffffff)
int32_t* eax_4 = *(arg5 + 0x1c)
int32_t var_4 = 0
arg1[0xa] = eax_4

if (eax_4 != 0)
    (*(*eax_4 + 4))(eax_4)

eax_4.b = *(arg5 + 0x20)
arg1[0xb].b = eax_4.b
arg1[0xc].b = arg6
*(arg1 + 0x31) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
