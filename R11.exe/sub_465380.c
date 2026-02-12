// 函数: sub_465380
// 地址: 0x465380
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_499abb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg3
int32_t var_14 = __security_cookie ^ &var_10
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_481fef(0x150)
var_10 = eax_3
int32_t var_4 = 0

if (eax_3 == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

struct ISoundM::CSoundM::VTable** result = sub_464e20(eax_3, arg4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
