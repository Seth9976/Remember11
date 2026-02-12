// 函数: sub_48b1de
// 地址: 0x48b1de
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4 = 8
int32_t var_8 = 0x4aca00
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4aca00 ^ __security_cookie_1
int32_t var_2c = __security_cookie_1 ^ &var_4
int32_t* var_1c = &var_2c
void* const var_30_1 = &data_48b1ea
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax = sub_488bb0(data_c7b384)

if (eax != 0)
    int32_t var_8_1 = 0
    eax()
    int32_t var_8_2 = 0xfffffffe

noreturn terminate() __tailcall
