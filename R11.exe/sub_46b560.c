// 函数: sub_46b560
// 地址: 0x46b560
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* var_40
int32_t eax_1 = __security_cookie ^ &var_40
bool cond:0 = *(arg1 + 4) != 0
var_40 = nullptr

if (not(cond:0))
    sub_480cd2(eax_1 ^ &var_40)
    return 0x800401f0

int32_t var_20 = 0
int32_t var_18 = 0
int32_t var_28
__builtin_memset(&var_28, 0, 0x24)
int32_t* eax_3 = *(arg1 + 4)
var_28 = 0x24
int32_t var_24 = 1
int32_t result = (*(*eax_3 + 0xc))(eax_3, &var_28, &var_40, 0)

if (result s>= 0)
    int32_t var_3c
    __builtin_memset(&var_3c, 0, 0x12)
    int32_t var_30
    var_30:2.w = arg4
    uint16_t eax_5 = (arg4 u>> 3) * arg2
    var_3c:2.w = arg2
    var_30.w = eax_5
    int32_t* eax_6 = var_40
    int32_t var_34_1 = zx.d(eax_5) * arg3
    int32_t var_38_1 = arg3
    var_3c.w = 1
    result = (*(*eax_6 + 0x38))(eax_6, &var_3c)
    
    if (result s>= 0)
        int32_t* eax_7 = var_40
        
        if (eax_7 != 0)
            (*(*eax_7 + 8))(eax_7)
        
        result = 0

sub_480cd2(eax_1 ^ &var_40)
return result
