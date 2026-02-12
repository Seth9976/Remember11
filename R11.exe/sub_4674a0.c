// 函数: sub_4674a0
// 地址: 0x4674a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a538
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x20) = arg2
*(arg1 + 0x24) = arg3
*(arg1 + 0x30) = arg4
*(arg1 + 0x2c) = sub_4661c0(arg4)
int32_t var_24_1 = 0
int32_t* var_10
sub_466810(&var_10, arg5)
int32_t var_4 = 0
*(arg1 + 8) = arg5
sub_4559d0(arg1 + 0xc, &var_10)
int32_t* edi = var_10
int32_t var_4_1 = 0xffffffff

if (edi != 0)
    bool cond:1_1 = edi[1] != 1
    edi[1]
    edi[1] -= 1
    
    if (not(cond:1_1))
        (*(*edi + 4))(eax_2)
        bool cond:2_1 = edi[2] != 1
        edi[2]
        edi[2] -= 1
        
        if (not(cond:2_1))
            (*(*edi + 8))()

int32_t result = *(arg1 + 8)
*(arg1 + 0x10) = result
*(arg1 + 0x28) = arg6
fsbase->NtTib.ExceptionList = ExceptionList
return result
