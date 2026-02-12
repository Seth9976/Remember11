// 函数: sub_45ed10
// 地址: 0x45ed10
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a3f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInputManager2::InputSpace2::CInputManager::VTable** var_18 = arg1
*arg1 = &InputSpace2::CInputManager::`vftable'{for `IInputManager2'}
int32_t* eax_3 = arg1[5]
int32_t var_4 = 0
void* var_14
sub_44e060(&arg1[4], &var_14, &arg1[4], *eax_3, &arg1[4], eax_3)
struct _EXCEPTION_REGISTRATION_RECORD** result = j_sub_4813df(arg1[5])
arg1[5] = 0
arg1[6] = 0
*arg1 = &IInputManager2::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return result
