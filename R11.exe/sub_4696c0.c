// 函数: sub_4696c0
// 地址: 0x4696c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a7e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_34 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void var_1c
sub_4973f8(&var_1c, 0)
bool cond:0 = data_c7b55c != 0
void* result_2 = data_c78fe8
int32_t var_4 = 0
void* result_1 = result_2

if (not(cond:0))
    void var_20
    sub_4973f8(&var_20, 0)
    
    if (data_c7b55c == 0)
        int32_t eax_4 = data_c7b558 + 1
        data_c7b558 = eax_4
        data_c7b55c = eax_4
    
    sub_497419(&var_20)

int32_t edi = data_c7b55c
void* eax_6 = *arg1
void* const result

if (edi u>= *(eax_6 + 0xc))
    result = nullptr
label_469756:
    
    if (*(eax_6 + 0x14) == 0)
        goto label_46976c
    
    void* eax_7 = sub_497486()
    
    if (edi u>= *(eax_7 + 0xc))
    label_469770:
        
        if (result_2 == 0)
            sub_469470(&result_1)
            result = result_1
            data_c78fe8 = result
            sub_468380(result)
            sub_497554(result)
        else
            result = result_2
    else
        result = *(*(eax_7 + 8) + (edi << 2))
    label_46976c:
        
        if (result == 0)
            goto label_469770
else
    result = *(*(eax_6 + 8) + (edi << 2))
    
    if (result == 0)
        goto label_469756

int32_t var_4_1 = 0xffffffff
sub_497419(&var_1c)
fsbase->NtTib.ExceptionList = ExceptionList
return result
