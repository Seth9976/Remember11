// 函数: sub_469180
// 地址: 0x469180
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a73b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct std::ctype_base::std::ctype<char>::VTable** var_98
int32_t eax_2 = __security_cookie ^ &var_98
int32_t __saved_edi
int32_t var_a4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_98 = arg1
arg1[1] = arg4
int32_t var_4 = 0
*arg1 = &std::ctype<char>::`vftable'{for `std::ctype_base'}
void var_84
sub_469030(&var_84, &(*U"XKYMC")[4])
void var_94
int32_t* eax_6 = sub_497345(&var_94)
arg1[2] = *eax_6
arg1[3] = eax_6[1]
arg1[4] = eax_6[2]
arg1[5] = eax_6[3]
sub_468ca0(&var_84)

if (arg2 != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_8 = arg1[5]
    
    if (eax_8 s> 0)
        sub_4813df(arg1[4])
    else if (eax_8 s< 0)
        j_sub_4813df(arg1[4])
    
    eax_8.b = arg3
    char temp2_1 = eax_8.b
    eax_8.b = neg.b(eax_8.b)
    arg1[4] = arg2
    arg1[5] = sbb.d(eax_8, eax_8, temp2_1 != 0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_480cd2(eax_2 ^ &var_98)
return arg1
