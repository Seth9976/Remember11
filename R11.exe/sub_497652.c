// 函数: sub_497652
// 地址: 0x497652
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 8
int32_t (* var_c)(void* arg1) = sub_49b3aa
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
void* const var_2c_3 = &data_49765e
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::locale::facet::std::locale::_Locimp::VTable** result_1 = data_c7b550
struct std::locale::facet::std::locale::_Locimp::VTable** result = result_1

if (result_1 == 0)
    void var_14
    sub_4973f8(&var_14, result_1)
    struct std::locale::facet::std::locale::_Locimp::VTable** result_2 = data_c7b550
    void* var_8 = var_8_2 & result
    result = result_2
    
    if (result_2 == 0)
        void* eax = sub_481fef(0x34)
        void* var_18_1 = eax
        var_8.b = 1
        
        if (eax == 0)
            result = nullptr
        else
            result = sub_4975b0(eax, result.b)
        
        var_8.b = 0
        sub_49748c(result)
        result[4] = 0x3f
        sub_44bad0(&(*U"XKYMC")[4])
        data_c7b554 = result
        sub_468380(result)
        data_c7b56c = data_c7b554
    
    int32_t var_8_1 = 0xffffffff
    sub_497419(&var_14)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_4976eb
return result
