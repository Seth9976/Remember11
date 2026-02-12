// 函数: sub_453cc0
// 地址: 0x453cc0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_499d5b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0

if (*(arg1 + 0x74) u>= 0x10)
    j_sub_4813df(*(arg1 + 0x60))

*(arg1 + 0x74) = 0xf
*(arg1 + 0x70) = 0
*(arg1 + 0x60) = 0
void* result = *(arg1 + 0x3c)

if (result != 0)
    void* var_24_2 = arg1
    void* var_28_1 = arg1 + 0x38
    sub_453200(result, *(arg1 + 0x40))
    result = j_sub_4813df(*(arg1 + 0x3c))

*(arg1 + 0x3c) = 0
*(arg1 + 0x40) = 0
*(arg1 + 0x44) = 0
int32_t* edi_1 = *(arg1 + 0x18)
int32_t var_4_1 = 0xffffffff

if (edi_1 != 0)
    result = &edi_1[1]
    bool cond:2_1 = *result != 1
    *result
    *result -= 1
    
    if (not(cond:2_1))
        result = (*(*edi_1 + 4))(eax_2)
        bool cond:3_1 = edi_1[2] != 1
        edi_1[2]
        edi_1[2] -= 1
        
        if (not(cond:3_1))
            result = (*(*edi_1 + 8))()

fsbase->NtTib.ExceptionList = ExceptionList
return result
