// 函数: sub_478960
// 地址: 0x478960
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49ab0c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_10_1 = arg1
int32_t i = 0
int32_t var_4 = 1

if (*(arg1 + 0x660) s> 0)
    do
        void* ebx_1 = *(*(arg1 + 0x65c) + (i << 2))
        
        if (ebx_1 != 0)
            sub_478650(ebx_1)
            j_sub_4813df(ebx_1)
        
        i += 1
    while (i s< *(arg1 + 0x660))

void* eax_4 = *(arg1 + 0x65c)

if (eax_4 != 0)
    sub_4813df(eax_4)
    *(arg1 + 0x65c) = 0

*(arg1 + 0x664) = 0
*(arg1 + 0x660) = 0
void* eax_5 = *(arg1 + 0x65c)

if (eax_5 != 0)
    sub_4813df(eax_5)
    *(arg1 + 0x65c) = 0

*(arg1 + 0x664) = 0
*(arg1 + 0x660) = 0
struct _EXCEPTION_REGISTRATION_RECORD** result = *(arg1 + 0x650)

if (result != 0)
    result = sub_4813df(result)
    *(arg1 + 0x650) = 0

*(arg1 + 0x654) = 0
*(arg1 + 0x658) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
