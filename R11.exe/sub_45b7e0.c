// 函数: sub_45b7e0
// 地址: 0x45b7e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a2e3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct ITextureManager::Texture::CTextureManager::VTable** var_18 = arg1
*arg1 = &Texture::CTextureManager::`vftable'{for `ITextureManager'}
int32_t var_4 = 1
DeleteCriticalSection(&data_c781dc)
int32_t* eax_3 = arg1[0x800a]
void* var_14
sub_44e060(&arg1[0x8009], &var_14, &arg1[0x8009], *eax_3, &arg1[0x8009], eax_3)
j_sub_4813df(arg1[0x800a])
arg1[0x800a] = 0
arg1[0x800b] = 0
int32_t* eax_5 = arg1[3]
var_4.b = 0
sub_454d50(&arg1[2], &var_14, &arg1[2], *eax_5, &arg1[2], eax_5)
struct _EXCEPTION_REGISTRATION_RECORD** result = j_sub_4813df(arg1[3])
arg1[3] = 0
arg1[4] = 0
*arg1 = &CD3DResource::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return result
