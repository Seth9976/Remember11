// 函数: sub_48ffc4
// 地址: 0x48ffc4
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
bool cond:0_1

if (arg1 != 0 && *arg1 != 0)
    cond:0_1 = sub_48a480(arg1, "ACP") == 0

int32_t result
uint32_t LCType
void* lpLCData
void var_10

if (arg1 == 0 || *arg1 == 0 || cond:0_1)
    int32_t var_18_2 = 8
    lpLCData = &var_10
    LCType = 0x1004
label_49001a:
    result = GetLocaleInfoA(*(arg2 + 0x1c), LCType, lpLCData, 8)
    
    if (result != 0)
        result = sub_4812c6(&var_10)
else
    if (sub_48a480(arg1, "OCP") == 0)
        int32_t var_18_1 = 8
        lpLCData = &var_10
        LCType = 0xb
        goto label_49001a
    
    result = sub_4812c6(arg1)
sub_480cd2(eax_1 ^ &__saved_ebp)
return result
