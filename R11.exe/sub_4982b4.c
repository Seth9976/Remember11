// 函数: sub_4982b4
// 地址: 0x4982b4
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 0x7c
int32_t (* var_c)(void* arg1) = __ehhandler$?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MBE?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AAVios_base@2@AAHAA_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_3 = __security_cookie ^ &__saved_ebp
int32_t var_9c = eax_3
void* const var_a0 = &data_4982c0
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::codecvt_base::std::codecvt<char, char, int32_t>::VTable** var_8c = arg1
arg1[1] = arg2
int32_t var_8 = 0
*arg1 = &std::codecvt<char, char, int32_t>::`vftable'{for `std::codecvt_base'}
void var_88
sub_469030(&var_88, &(*U"XKYMC")[4])
sub_468ca0(&var_88)
sub_480cd2(eax_3 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_4982fa
return arg1
