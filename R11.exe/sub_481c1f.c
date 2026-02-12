// 函数: sub_481c1f
// 地址: 0x481c1f
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t __security_cookie_1 = __security_cookie
void var_2ac
int32_t eax = __security_cookie_1 ^ &var_2ac
bool p = unimplemented  {xor eax, ebp}
bool a = undefined
int32_t var_8 = eax
int32_t esi
int32_t var_330 = esi
int32_t var_224 = eax
int32_t var_234 = esi
int16_t ss
int16_t var_20c = ss
int16_t cs
int16_t var_218 = cs
int16_t ds
int16_t var_23c = ds
int16_t es
int16_t var_240 = es
int16_t fs
int16_t var_244 = fs
int16_t gs
int16_t var_248 = gs
bool d
int32_t var_214 = (d ? 1 : 0) << 0xa | ((__security_cookie_1 ^ &var_2ac) s< 0 ? 1 : 0) << 7
    | (__security_cookie_1 == &var_2ac ? 1 : 0) << 6 | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2
int32_t var_2d4 = 0x10001
void* const __return_addr_2 = __return_addr
int32_t ebp
int32_t var_220 = ebp
int32_t var_32c
sub_480cf0(&var_32c, 0, 0x50)
EXCEPTION_POINTERS ExceptionInfo
ExceptionInfo.ExceptionRecord = &var_32c
var_32c = 0xc000000d
void* const __return_addr_1 = __return_addr
ExceptionInfo.ContextRecord = &var_2d4
BOOL eax_2 = IsDebuggerPresent()
SetUnhandledExceptionFilter(nullptr)

if (UnhandledExceptionFilter(&ExceptionInfo) == 0 && eax_2 == 0)
    sub_489fa4()

TerminateProcess(GetCurrentProcess(), 0xc000000d)
noreturn
