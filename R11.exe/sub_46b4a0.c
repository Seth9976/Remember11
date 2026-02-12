// 函数: sub_46b4a0
// 地址: 0x46b4a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a928
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct ISoundManager::CSoundManager::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct ISoundManager::CSoundManager::VTable** var_10_1 = arg1
*arg1 = &CSoundManager::`vftable'{for `ISoundManager'}
int32_t* result = arg1[1]
int32_t var_4 = 0

if (result != 0)
    result = (*(*result + 8))(result)
    arg1[1] = 0

*arg1 = &ISoundManager::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return result
