// 函数: sub_46b7b0
// 地址: 0x46b7b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a95b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct CSound::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct CSound::VTable** var_10_1 = arg1
*arg1 = &CSound::`vftable'
int32_t var_4 = 0

if (arg1[4] u> 0)
    int32_t i = 0
    
    do
        int32_t eax_3 = arg1[1]
        
        if (*(eax_3 + (i << 2)) != 0)
            int32_t* eax_5 = *(eax_3 + (i << 2))
            (*(*eax_5 + 8))(eax_5)
            *(arg1[1] + (i << 2)) = 0
        
        i += 1
    while (i u< arg1[4])

void* eax_7 = arg1[1]

if (eax_7 != 0)
    j_sub_4813df(eax_7)
    arg1[1] = 0

int32_t* ecx_1 = arg1[3]

if (ecx_1 != 0)
    (**ecx_1)(1)
    arg1[3] = 0

struct _EXCEPTION_REGISTRATION_RECORD** result = j_sub_4813df(arg1[0xe])
fsbase->NtTib.ExceptionList = ExceptionList
return result
