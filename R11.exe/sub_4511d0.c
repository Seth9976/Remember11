// 函数: sub_4511d0
// 地址: 0x4511d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_499a88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IRenderTexture::CRenderTexture::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IRenderTexture::CRenderTexture::VTable** var_10_1 = arg1
*arg1 = &CRenderTexture::`vftable'{for `IRenderTexture'}
int32_t* eax_3 = arg1[2]
int32_t var_4 = 0

if (eax_3 != 0)
    (*(*eax_3 + 8))(eax_3)
    arg1[2] = 0

int32_t* result = arg1[1]

if (result != 0)
    result = (*(*result + 8))(result)
    arg1[1] = 0

*arg1 = &IRenderTexture::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return result
