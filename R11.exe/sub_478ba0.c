// 函数: sub_478ba0
// 地址: 0x478ba0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49ab5c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_10_1 = arg1
int32_t var_4 = 3
sub_478b50(arg1)
void* eax_3 = *(arg1 + 0x54)

if (eax_3 != 0)
    sub_4813df(eax_3)
    *(arg1 + 0x54) = 0

*(arg1 + 0x5c) = 0
*(arg1 + 0x58) = 0
void* eax_4 = *(arg1 + 0x28)

if (eax_4 != 0)
    sub_4813df(eax_4)
    *(arg1 + 0x28) = 0

*(arg1 + 0x30) = 0
*(arg1 + 0x2c) = 0
void* eax_5 = *(arg1 + 0x1c)

if (eax_5 != 0)
    sub_4813df(eax_5)
    *(arg1 + 0x1c) = 0

*(arg1 + 0x24) = 0
*(arg1 + 0x20) = 0
struct _EXCEPTION_REGISTRATION_RECORD** result = *(arg1 + 0x10)

if (result != 0)
    result = sub_4813df(result)
    *(arg1 + 0x10) = 0

*(arg1 + 0x14) = 0
*(arg1 + 0x18) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
