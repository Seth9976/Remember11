// 函数: sub_459a50
// 地址: 0x459a50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a0f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg1[1]
int32_t edi = 0
int32_t var_4 = 0
int32_t eax_3

if (ecx != 0)
    int32_t eax_4
    int32_t edx_3
    edx_3:eax_4 = muls.dp.d(0x66666667, arg1[2] - ecx)
    int32_t edx_4 = edx_3 s>> 3
    eax_3 = (edx_4 u>> 0x1f) + edx_4
else
    eax_3 = 0

int32_t arg_8

if (eax_3 u< arg2)
    if (ecx != 0)
        int32_t eax_7
        int32_t edx_7
        edx_7:eax_7 = muls.dp.d(0x66666667, arg1[2] - ecx)
        int32_t edx_8 = edx_7 s>> 3
        edi = (edx_8 u>> 0x1f) + edx_8
    
    void* ebp_1 = arg1[2]
    
    if (ecx u> ebp_1)
        __invalid_parameter_noinfo()
    
    int32_t* var_2c_1 = &arg_8
    sub_459700(arg1, arg1, ebp_1, arg2 - edi)
else if (ecx != 0)
    int32_t* edi_3 = arg1[2]
    
    if (arg2 u< (edi_3 - ecx) s/ 0x14)
        if (ecx u> edi_3)
            __invalid_parameter_noinfo()
        
        int32_t ebp_2 = arg1[1]
        
        if (ebp_2 u> arg1[2])
            __invalid_parameter_noinfo()
        
        int32_t* ebx_2 = ebp_2 + arg2 * 0x14
        int32_t var_10_1 = ebp_2
        
        if (ebx_2 u> arg1[2] || ebx_2 u< arg1[1])
            __invalid_parameter_noinfo()
        
        void var_14
        sub_458d10(arg1, &var_14, arg1, ebx_2, arg1, edi_3)

struct _EXCEPTION_REGISTRATION_RECORD** result = arg3
arg_8 = 0

if (result != 0)
    result = j_sub_4813df(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
