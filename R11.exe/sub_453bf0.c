// 函数: sub_453bf0
// 地址: 0x453bf0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_499d5b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x14) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x3c) = 0
*(arg1 + 0x40) = 0
*(arg1 + 0x44) = 0
*(arg1 + 0x74) = 0xf
*(arg1 + 0x70) = 0
*(arg1 + 0x60) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x24) = 0
*(arg1 + 0x7c) = 0
*(arg1 + 0x1c) = 0
*(arg1 + 0x1d) = 0
*(arg1 + 0x58) = 0
*(arg1 + 0x59) = 0
*(arg1 + 0x5a) = 0
*(arg1 + 0x78) = 0
*(arg1 + 8) = 0
*(arg1 + 0xa) = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x28) = 0
*(arg1 + 0x2c) = 0
*(arg1 + 0x80) = data_c781f8
*(arg1 + 0x84) = data_c781fc
int32_t temp0 = data_c781f8
data_c781f8 += 1
int32_t edx_2 = data_c78630
data_c781fc = adc.d(data_c781fc, 0, temp0 u>= 0xffffffff)
*(arg1 + 0x50) = edx_2
*(arg1 + 0x54) = data_c78634
*(arg1 + 0x7c) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
