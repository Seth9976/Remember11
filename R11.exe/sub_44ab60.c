// 函数: sub_44ab60
// 地址: 0x44ab60
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$??_U@YAPAXIW4align_val_t@std@@ABUnothrow_t@1@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* var_18 = arg1
void* esi_1 = arg2 | 0xf

if (esi_1 u<= 0xfffffffe)
    int32_t ebx_1 = *(arg1 + 0x18)
    uint32_t ecx_1 = ebx_1 u>> 1
    
    if (esi_1 u/ 3 u< ecx_1 && ebx_1 u<= 0xfffffffe - ecx_1)
        esi_1 = ecx_1 + ebx_1
else
    esi_1 = arg2

int32_t var_30 = 0
int32_t var_8_1 = 0
void* result_2 = sub_4487e0(esi_1 + 1)

if (arg3 u> 0)
    void* eax_6
    
    if (*(arg1 + 0x18) u< 0x10)
        eax_6 = arg1 + 4
    else
        eax_6 = *(arg1 + 4)
    
    sub_481d4f(result_2, esi_1 + 1, eax_6, arg3)

if (*(arg1 + 0x18) u>= 0x10)
    j_sub_4813df(*(arg1 + 4))

char* result_1 = result_2
char* result = arg1 + 4
*result = 0
*result = result_1
*(arg1 + 0x18) = esi_1
*(arg1 + 0x14) = arg3

if (esi_1 u>= 0x10)
    result = result_1

*(result + arg3) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
