// 函数: sub_46c150
// 地址: 0x46c150
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a988
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct CWaveFile::CWaveFileOGG::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct CWaveFile::CWaveFileOGG::VTable** var_10_1 = arg1
*arg1 = &CWaveFileOGG::`vftable'{for `CWaveFile'}
struct _EXCEPTION_REGISTRATION_RECORD** result = arg1[1]
int32_t var_4 = 0

if (result != 0)
    result = j_sub_4813df(result)
    arg1[1] = 0

if (arg1[0xc2].b != 0)
    if (arg1[3] == 1)
        result = ov_clear(&arg1[0xe], eax_2)
    
    int32_t* ecx = arg1[0xc]
    
    if (ecx != 0)
        result = (**ecx)(1)
        arg1[0xc] = 0

*arg1 = &IWaveFile::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return result
