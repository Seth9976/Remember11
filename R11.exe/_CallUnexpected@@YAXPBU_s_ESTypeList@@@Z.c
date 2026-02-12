// 函数: ?CallUnexpected@@YAXPBU_s_ESTypeList@@@Z
// 地址: 0x48a7ed
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4 = 4
int32_t (* var_c)(void* arg1) = sub_49b2e6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
int32_t var_24 = __security_cookie ^ &var_4
int32_t* var_14 = &var_24
void* const var_28 = &data_48a7f9
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(__getptd() + 0x94) != 0)
    sub_48b1de()
    noreturn

int32_t var_8 = 0
unexpected()
noreturn
