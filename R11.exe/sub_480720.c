// 函数: sub_480720
// 地址: 0x480720
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49b2cb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_10_1 = arg1
int32_t var_4 = 0
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_4805d0(arg1)
void* i = arg1[5]
int32_t var_4_1 = 0xffffffff

while (i != 0)
    void* i_1 = i
    i = *(i + 4)
    result = j_sub_4813df(i_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
