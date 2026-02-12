// 函数: sub_458650
// 地址: 0x458650
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_499ff6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int16_t* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t* var_10_1 = arg1
*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5] = arg2[5]
arg1[6] = arg2[6]
arg1[7] = arg2[7]
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x14) = *(arg2 + 0x14)
void* eax_7 = *(arg2 + 0x18)
*(arg1 + 0x18) = eax_7

if (eax_7 != 0)
    *(eax_7 + 4)
    *(eax_7 + 4) += 1

arg1[0xe].b = arg2[0xe].b
*(arg1 + 0x1d) = *(arg2 + 0x1d)
*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg1 + 0x24) = *(arg2 + 0x24)
*(arg1 + 0x28) = *(arg2 + 0x28)
*(arg1 + 0x2c) = *(arg2 + 0x2c)
*(arg1 + 0x30) = *(arg2 + 0x30)
int32_t var_4 = 0
*(arg1 + 0x34) = *(arg2 + 0x34)
sub_4577e0(&arg1[0x1c], &arg2[0x1c])
*(arg1 + 0x48) = *(arg2 + 0x48)
*(arg1 + 0x4c) = *(arg2 + 0x4c)
*(arg1 + 0x50) = *(arg2 + 0x50)
*(arg1 + 0x54) = *(arg2 + 0x54)
arg1[0x2c].b = arg2[0x2c].b
*(arg1 + 0x59) = *(arg2 + 0x59)
arg1[0x2d].b = arg2[0x2d].b
*(arg1 + 0x74) = 0xf
*(arg1 + 0x70) = 0
var_4.b = 1
arg1[0x30].b = 0
sub_44b8e0(&arg1[0x2e], &arg2[0x2e], nullptr, 0xffffffff)
*(arg1 + 0x78) = *(arg2 + 0x78)
arg1[0x3e].b = arg2[0x3e].b
*(arg1 + 0x80) = *(arg2 + 0x80)
*(arg1 + 0x84) = *(arg2 + 0x84)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
