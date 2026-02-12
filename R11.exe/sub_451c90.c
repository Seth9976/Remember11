// 函数: sub_451c90
// 地址: 0x451c90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?shortsort@@YAXPAD0IP6AHPBX1@Z@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = &var_24
*arg1 = 0
int32_t var_8_1 = 0
void* eax_3 = sub_481fef(0x14)

if (eax_3 == 0)
    eax_3 = nullptr
else
    *(eax_3 + 4) = 1
    *(eax_3 + 8) = 1
    *eax_3 = &boost::detail::sp_counted_impl_pd<uint8_t*, struct boost::checked_array_deleter<uint8_t> >::`vftable'{for `boost::detail::sp_counted_base'}
    *(eax_3 + 0xc) = arg2

*arg1 = eax_3
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
