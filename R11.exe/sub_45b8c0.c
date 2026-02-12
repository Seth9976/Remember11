// 函数: sub_45b8c0
// 地址: 0x45b8c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_499abb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t var_14 = __security_cookie ^ &var_10
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_481fef(0x20038)
var_10 = eax_3
int32_t var_4 = 0

if (eax_3 == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

struct ITextureManager::Texture::CTextureManager::VTable** result = sub_454e60(eax_3)
fsbase->NtTib.ExceptionList = ExceptionList
return result
