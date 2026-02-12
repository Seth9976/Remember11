// 函数: sub_451110
// 地址: 0x451110
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_499a58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IRenderTexture::CRenderTexture::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IRenderTexture::CRenderTexture::VTable** var_10_1 = arg1
arg1[3] = arg3
*arg1 = &CRenderTexture::`vftable'{for `IRenderTexture'}
arg1[4] = arg4
int32_t var_4 = 0
(*(*arg2 + 0x5c))(arg2, arg3, arg4, 1, 1, arg5, 0, &arg1[1], 0)
int32_t* edi_1 = arg1[1]
(*(*edi_1 + 0x48))(edi_1, 0, &arg1[2])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
