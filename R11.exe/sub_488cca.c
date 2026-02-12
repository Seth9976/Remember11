// 函数: sub_488cca
// 地址: 0x488cca
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x4ac818
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4ac818 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_1 = &data_488cd6
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
HMODULE hModule
int32_t ecx
hModule, ecx = GetModuleHandleA("KERNEL32.DLL")
*(arg1 + 0x5c) = 0x4cc750
*(arg1 + 0x14) = 1

if (hModule != 0 && sub_488acd(ecx) != 0)
    *(arg1 + 0x1f8) = GetProcAddress(hModule, "EncodePointer")
    *(arg1 + 0x1fc) = GetProcAddress(hModule, "DecodePointer")

*(arg1 + 0x70) = 1
*(arg1 + 0xc8) = 0x43
*(arg1 + 0x14b) = 0x43
*(arg1 + 0x68) = 0x4cc130
InterlockedIncrement(0x4cc130)
sub_48677d(0xc)
int32_t var_8_1 = 0
*(arg1 + 0x6c) = arg2

if (arg2 == 0)
    *(arg1 + 0x6c) = data_4cc738

sub_487caf(*(arg1 + 0x6c))
int32_t var_8_2 = 0xfffffffe
int32_t result = sub_488d80()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_488d7f
return result
