// 函数: sub_498261
// 地址: 0x498261
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_49b454
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28 = &data_49826d
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::streambuf::std::filebuf::VTable** esi = arg1
struct std::streambuf::std::filebuf::VTable** var_14 = esi
*esi = &std::filebuf::`vftable'{for `std::streambuf'}
int32_t var_8 = 0

if (esi[0x12].b != 0)
    sub_498218(arg1)

int32_t var_8_1 = 0xffffffff
int32_t result = sub_4686d0(esi)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_498297
return result
