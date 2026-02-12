// 函数: sub_454260
// 地址: 0x454260
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_499dd6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_28 = arg1[1]
int32_t var_4 = 1
int32_t var_14
sub_44d960(&data_c7820c, &var_14, *arg1)
int32_t* result = arg1[0xc]

if (result != 0)
    int32_t* var_28_1 = arg1
    void* var_2c_1 = &arg1[0xb]
    sub_4538e0(result, arg1[0xd])
    result = j_sub_4813df(arg1[0xc])

arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = 0
int32_t* edi_1 = arg1[2]
int32_t var_4_1 = 0xffffffff

if (edi_1 != 0)
    result = (*(*edi_1 + 8))(edi_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
