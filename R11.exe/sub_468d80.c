// 函数: sub_468d80
// 地址: 0x468d80
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_49a680
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28

if (arg4 != 0xfffffffe && (arg4 == 0 || arg4 != arg2))
    __invalid_parameter_noinfo()

char* ebx = arg3
int32_t edi = *(arg1 + 0x14)
int32_t result = arg5 - ebx

if (edi u<= result && *(arg1 + 0x18) != result)
    result = sub_44b7b0(arg1, result, 1)
    
    if (result.b != 0)
        bool cond:1_1 = *(arg1 + 0x18) u< 0x10
        *(arg1 + 0x14) = edi
        
        if (cond:1_1)
            result = arg1 + 4
        else
            result = *(arg1 + 4)
        
        *(result + edi) = 0

int32_t var_8_1 = 0

while (true)
    if (arg2 != 0xfffffffe && (arg2 == 0 || arg2 != arg4))
        result = __invalid_parameter_noinfo()
    
    if (ebx == arg5)
        break
    
    if (arg2 != 0xfffffffe)
        if (arg2 == 0)
            __invalid_parameter_noinfo()
        
        void* eax_6
        
        if (*(arg2 + 0x18) u< 0x10)
            eax_6 = arg2 + 4
        else
            eax_6 = *(arg2 + 4)
        
        if (ebx u>= *(arg2 + 0x14) + eax_6)
            __invalid_parameter_noinfo()
    
    result = sub_468ba0(arg1, 1, *ebx)
    
    if (arg2 != 0xfffffffe)
        if (arg2 == 0)
            __invalid_parameter_noinfo()
        
        if (*(arg2 + 0x18) u< 0x10)
            result = arg2 + 4
        else
            result = *(arg2 + 4)
        
        if (ebx u>= *(arg2 + 0x14) + result)
            result = __invalid_parameter_noinfo()
    
    ebx = &ebx[1]

fsbase->NtTib.ExceptionList = ExceptionList
return result
