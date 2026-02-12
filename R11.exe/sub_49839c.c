// 函数: sub_49839c
// 地址: 0x49839c
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 0x14
int32_t (* var_c)(void* arg1) =
    __ehhandler$?_wcrtomb_s_l@@YAHQAHQADI_WQAU_Mbstatet@@QAU__crt_locale_pointers@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
void* const var_38_4 = &data_4983a8
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void var_18
sub_4973f8(&var_18, 0)
void* result_2 = data_c7b5bc
int32_t var_8 = 0
void* result_1 = result_2
void* result = sub_468450(arg1, sub_468340(0xc7b64c))

if (result == 0)
    if (result_2 == 0)
        sub_498359(&result_1)
        result = result_1
        data_c7b5bc = result
        sub_468380(result)
        sub_497554(result)
    else
        result = result_2

int32_t var_8_1 = 0xffffffff
sub_497419(&var_18)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_498434
return result
