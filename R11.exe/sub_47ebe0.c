// 函数: sub_47ebe0
// 地址: 0x47ebe0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49b193
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_10_1 = arg1
int32_t var_28 = 0
sub_47c9e0(arg1, arg2)
*(arg1 + 0x1c) = arg6
int32_t var_4 = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = arg4
*(arg1 + 0x24) = 0
*(arg1 + 0x25) = 0
*(arg1 + 0x26) = 0
*(arg1 + 0x28) = arg3
*(arg1 + 0x2c) = 0
*(arg1 + 0x30) = 1
sub_4809c0(arg1 + 0x34)
*(arg1 + 0x80) = 0
*(arg1 + 0x84) = 0
*(arg1 + 0x88) = 0xffffffff
*(arg1 + 0x8c) = 0x7fffffff
*(arg1 + 0x90) = fconvert.d(float.t(1))
var_4.b = 1

if (arg5 != 0)
    void* edi_2 = lstrlenW(arg5) + 1
    int32_t ecx_2
    ecx_2.b = mulu.dp.d(edi_2, 2) u>> 0x20 != 0
    void* eax_8 = j_sub_481fef(neg.d(ecx_2) | (edi_2 * 2))
    *(arg1 + 0x14) = eax_8
    
    if (eax_8 != 0)
        sub_480ea0(eax_8, arg5, edi_2 * 2, eax_2)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
