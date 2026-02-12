// 函数: sub_454e60
// 地址: 0x454e60
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_499ea3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct ITextureManager::Texture::CTextureManager::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct ITextureManager::Texture::CTextureManager::VTable** var_10_1 = arg1
int32_t var_4 = 0
*arg1 = &Texture::CTextureManager::`vftable'{for `ITextureManager'}
void* eax_3 = sub_452170()
arg1[3] = eax_3
*(eax_3 + 0xa1) = 1
void* eax_4 = arg1[3]
*(eax_4 + 4) = eax_4
int32_t* eax_5 = arg1[3]
*eax_5 = eax_5
void* eax_6 = arg1[3]
*(eax_6 + 8) = eax_6
arg1[4] = 0
var_4.b = 1
void* eax_7 = sub_452130()
arg1[0x800a] = eax_7
*(eax_7 + 0x15) = 1
void* eax_8 = arg1[0x800a]
*(eax_8 + 4) = eax_8
int32_t* eax_9 = arg1[0x800a]
*eax_9 = eax_9
void* eax_10 = arg1[0x800a]
*(eax_10 + 8) = eax_10
arg1[0x800b] = 0
sub_480cf0(&arg1[5], 0, 0x10000)
sub_480cf0(&arg1[0x4005], 0, 0x10000)
arg1[0x8005] = 0
arg1[0x8006] = 0xf0f0f0f0
arg1[0x8007] = 0xf0f0f0f0
arg1[0x8008] = 0
InitializeCriticalSection(&data_c781dc)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
