// 函数: sub_47dae0
// 地址: 0x47dae0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49afd8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_10_1 = arg1
int32_t var_4 = 0
j_sub_4813df(*(arg1 + 0x3c))
int32_t* eax_4 = *(arg1 + 0x18)

if (eax_4 != 0)
    (*(*eax_4 + 8))(eax_4)
    *(arg1 + 0x18) = 0

int32_t var_4_1 = 0xffffffff
int32_t result = sub_47c960()
fsbase->NtTib.ExceptionList = ExceptionList
return result
