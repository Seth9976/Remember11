// 函数: sub_467870
// 地址: 0x467870
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_499bf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_58 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x30) != *(arg2 + 0x30))
    sub_465480(".\picture.cpp", 0x209)

if (arg3 == *(arg2 + 0x20))
    sub_466ee0(arg1, arg2, arg4, arg5)
else if (arg4 == *(arg2 + 0x24))
    sub_466970(arg1, arg2, arg3, arg5)
else
    struct CPicture::VTable* var_44
    sub_4521b0(&var_44)
    int32_t var_4 = 0
    sub_4675b0(&var_44, arg3, *(arg2 + 0x24), *(arg2 + 0x30), 0)
    sub_466970(&var_44, arg2, arg3, arg5)
    sub_466ee0(arg1, &var_44, arg4, arg5)
    int32_t var_4_1 = 0xffffffff
    sub_452260(&var_44)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
