// 函数: sub_469030
// 地址: 0x469030
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a70c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_60 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_54 = arg1
sub_4973f8(arg1, 0)
arg1[7] = 0xf
arg1[6] = 0
int32_t var_4 = 0
arg1[2].b = 0
arg1[0xe] = 0xf
arg1[0xd] = 0
arg1[9].b = 0
arg1[0x15] = 0xf
arg1[0x14] = 0
arg1[0x10].b = 0
arg1[0x1c] = 0xf
arg1[0x1b] = 0
arg1[0x17].b = 0
var_4.b = 4

if (arg2 != 0)
    sub_4976ec(arg1, arg2)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

int32_t var_38 = 0xf
int32_t var_3c = 0
char var_4c = 0
void var_50
sub_44b9c0(&var_50, "bad locale name", 0xf)
var_4.b = 5
struct std::exception::VTable* var_34
sub_468ee0(&var_34, &var_50)
sub_482059(&var_34, 0x4ab9d4)
noreturn
