// 函数: sub_468ca0
// 地址: 0x468ca0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a664
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_10_1 = arg1
int32_t var_4 = 4
sub_49758d(arg1)

if (arg1[0x1c] u>= 0x10)
    j_sub_4813df(arg1[0x17])

arg1[0x1c] = 0xf
arg1[0x1b] = 0
arg1[0x17].b = 0

if (arg1[0x15] u>= 0x10)
    j_sub_4813df(arg1[0x10])

arg1[0x15] = 0xf
arg1[0x14] = 0
arg1[0x10].b = 0

if (arg1[0xe] u>= 0x10)
    j_sub_4813df(arg1[9])

arg1[0xe] = 0xf
arg1[0xd] = 0
arg1[9].b = 0

if (arg1[7] u>= 0x10)
    j_sub_4813df(arg1[2])

arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
int32_t var_4_1 = 0xffffffff
int32_t result = sub_497419(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
