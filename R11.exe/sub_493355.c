// 函数: sub_493355
// 地址: 0x493355
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x4acb60
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4acb60 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30 = &data_493361
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_2b6a9c0 != 0)
    if ((arg1 & 0x40) == 0 || data_4cca80 == 0)
        arg1.d &= 0xffffffbf
    else
        int32_t var_8_1 = 0
        int32_t var_8_2 = 0xfffffffe

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_4933c6
return 0
