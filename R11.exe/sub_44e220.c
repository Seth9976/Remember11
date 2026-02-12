// 函数: sub_44e220
// 地址: 0x44e220
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Init@?$_Mpunct@G@std@@IAEXABV_Locinfo@2@_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_64
void* result = arg3
void* edi = arg1
void* result_4 = result
void* result_3 = result
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
int32_t var_8_1 = 0
var_8_1.b = 1

while (edi != arg2)
    void* result_2 = result
    void* result_1 = result
    var_8_1.b = 2
    
    if (result != 0)
        *(result + 0x14) = 0
        *(result + 0x18) = 0xf
        *(result + 4) = 0
        void var_34
        sub_44b8e0(result, &var_34, nullptr, 0xffffffff)
    
    int32_t ebx_1 = *(result + 0x10)
    int32_t eax_3 = *(result + 4)
    int32_t ecx_2 = *(result + 8)
    int32_t edx_1 = *(result + 0xc)
    *(result + 4) = *(edi + 4)
    *(result + 8) = *(edi + 8)
    *(result + 0xc) = *(edi + 0xc)
    *(result + 0x10) = *(edi + 0x10)
    *(edi + 4) = eax_3
    *(edi + 8) = ecx_2
    *(edi + 0xc) = edx_1
    int32_t edx_2 = *(edi + 0x14)
    *(edi + 0x10) = ebx_1
    int32_t eax_4 = *(result + 0x14)
    *(result + 0x14) = edx_2
    int32_t ecx_4 = *(edi + 0x18)
    *(edi + 0x14) = eax_4
    int32_t eax_5 = *(result + 0x18)
    *(result + 0x18) = ecx_4
    *(edi + 0x18) = eax_5
    result += 0x1c
    edi += 0x1c
    var_8_1.b = 1
    void* result_5 = result

if (var_1c u>= 0x10)
    j_sub_4813df(var_30.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_480cd2(eax_2 ^ &__saved_ebp)
return result
