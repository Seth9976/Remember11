// 函数: sub_4528a0
// 地址: 0x4528a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_499c58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_10_1 = arg1 + 0xc
int32_t* result = *(arg1 + 0x28)
int32_t var_4 = 0

if (result != 0)
    result = (*(*result + 8))(result)

if (*(arg1 + 0x24) u>= 0x10)
    result = j_sub_4813df(*(arg1 + 0x10))

*(arg1 + 0x24) = 0xf
*(arg1 + 0x20) = 0
*(arg1 + 0x10) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
