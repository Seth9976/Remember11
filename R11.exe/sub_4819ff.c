// 函数: sub_4819ff
// 地址: 0x4819ff
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_2 = 0x60
int32_t var_8 = 0x4ac5f0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_78 = ebx
int32_t esi
int32_t var_7c = esi
int32_t edi
int32_t var_80 = edi
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_5 = 0x4ac5f0 ^ __security_cookie_1
int32_t __saved_ebp
void* var_84 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_84
void* const var_88 = &data_481a0b
int32_t var_8_6 = 0xfffffffe
int32_t var_c = var_8_5
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void var_74
var_88 = &var_74
GetStartupInfoA(var_88)
int32_t var_8_2 = 0xfffffffe
var_88 = 0x94
int32_t* eax_1 = HeapAlloc(GetProcessHeap(), HEAP_NONE, var_88)

if (eax_1 == 0)
    var_88 = 0x12
    sub_48199a(var_88)
    noreturn

*eax_1 = 0x94
var_88 = eax_1
BOOL eax_2 = GetVersionExA(var_88)
var_88 = eax_1
int32_t result
void* const* esp

if (eax_2 != 0)
    int32_t eax_4 = eax_1[4]
    int32_t eax_5 = eax_1[1]
    int32_t eax_6 = eax_1[2]
    int32_t edi_2 = eax_1[3] & 0x7fff
    HeapFree(GetProcessHeap(), HEAP_NONE, var_88)
    
    if (eax_4 != 2)
        edi_2 |= 0x8000
    
    data_c7aa28 = eax_4
    data_c7aa30 = (eax_5 << 8) + eax_6
    data_c7aa34 = eax_5
    data_c7aa38 = eax_6
    data_c7aa2c = edi_2
    int32_t var_24_2 = 0
    var_88 = 1
    
    if (sub_4865ad(var_88) == 0)
        var_88 = 0x1c
        sub_48199a(var_88)
        noreturn
    
    if (sub_488fa2() == 0)
        var_88 = 0x10
        sub_48199a(var_88)
        noreturn
    
    sub_489ec8()
    int32_t var_8_3 = 1
    
    if (sub_489c88() s< 0)
        var_88 = 0x1b
        sub_482a3f(var_88)
    
    data_2b6b9f8 = GetCommandLineA()
    data_c7aa04 = sub_489b53()
    
    if (sub_489a9a() s< 0)
        var_88 = 8
        sub_482a3f(var_88)
    
    if (sub_489827() s< 0)
        var_88 = 9
        sub_482a3f(var_88)
    
    var_88 = 1
    void* eax_18 = sub_482b5b(var_88)
    
    if (eax_18 != 0)
        var_88 = eax_18
        sub_482a3f(var_88)
    
    void* eax_19 = __wincmdln()
    char var_48
    void* ecx_8
    int16_t var_44
    
    if ((var_48 & 1) == 0)
        var_88 = 0xa
        ecx_8 = 0xa
    else
        ecx_8 = zx.d(var_44)
    var_88 = ecx_8
    void* var_8c_1 = eax_19
    int32_t var_90_3 = 0
    sub_45fdf0(&__dos_header)
    esp = &var_84
    int32_t result_1 = 0
    
    if (var_24_2 == 0)
        var_88 = nullptr
        esp = &var_88
        sub_482ccf(var_88)
    
    __cexit()
    int32_t var_8_4 = 0xfffffffe
    result = result_1
else
    HeapFree(GetProcessHeap(), HEAP_NONE, var_88)
    esp = &var_84
    result = 0xff

*(esp - 4) = &data_481bde
fsbase->NtTib.ExceptionList = ExceptionList
esp[1]
esp[2]
esp[3]
int32_t __saved_ebp_1 = *(esp - 4)
return result
