// 函数: sub_48e705
// 地址: 0x48e705
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void var_28
sub_481612(&var_28, arg3)
char* var_2c
void var_14
char eax_2 = sub_494e79(&var_14, &var_2c, arg2, 0, 0, 0, 0, &var_28)
int32_t eax_3 = sub_4938ed(&var_14, arg1)
int32_t result
void* var_20
char var_1c

if ((eax_2 & 3) == 0)
    if (eax_3 != 1)
        if (eax_3 != 2)
            goto label_48e791
        
        goto label_48e775
    
label_48e75f:
    
    if (var_1c != 0)
        *(var_20 + 0x70) &= 0xfffffffd
    
    result = 3
else if ((eax_2 & 1) != 0)
label_48e775:
    
    if (var_1c != 0)
        *(var_20 + 0x70) &= 0xfffffffd
    
    result = 4
else
    if ((eax_2 & 2) != 0)
        goto label_48e75f
    
label_48e791:
    
    if (var_1c != 0)
        *(var_20 + 0x70) &= 0xfffffffd
    
    result = 0
sub_480cd2(eax_1 ^ &__saved_ebp)
return result
