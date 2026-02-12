// 函数: sub_452260
// 地址: 0x452260
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_499bcd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct CPicture::VTable** var_10 = arg1
*arg1 = &CPicture::`vftable'
int32_t var_4 = 2
sub_452010(&arg1[2], 0)
void* result = sub_452080(&arg1[5], 0)
int32_t* edi_1 = arg1[6]
var_4.b = 1

if (edi_1 != 0)
    result = &edi_1[1]
    bool cond:2_1 = *result != 1
    *result -= 1
    
    if (not(cond:2_1))
        result = (*(*edi_1 + 4))(eax_2)
        bool cond:4_1 = edi_1[2] != 1
        edi_1[2]
        edi_1[2] -= 1
        
        if (not(cond:4_1))
            result = (*(*edi_1 + 8))()

int32_t* edi_2 = arg1[3]
var_4.b = 0

if (edi_2 != 0)
    result = &edi_2[1]
    bool cond:3_1 = *result != 1
    *result
    *result -= 1
    
    if (not(cond:3_1))
        result = (*(*edi_2 + 4))(eax_2)
        bool cond:5_1 = edi_2[2] != 1
        edi_2[2]
        edi_2[2] -= 1
        
        if (not(cond:5_1))
            result = (*(*edi_2 + 8))()

arg1[1] = 0
data_c78fd8 -= 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
