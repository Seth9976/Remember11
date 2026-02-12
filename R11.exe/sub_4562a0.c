// 函数: sub_4562a0
// 地址: 0x4562a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4
sub_455b60(&var_4, arg2)
int32_t var_14_1 = arg2
int32_t* result = &var_4
int32_t var_18 = arg2
int32_t* var_1c = &var_4
int32_t edx = var_4
*arg1 = arg2
int32_t* esi_1 = arg1[1]
arg1[1] = edx

if (esi_1 != 0)
    result = &esi_1[1]
    bool cond:1_1 = *result != 1
    *result
    *result -= 1
    
    if (not(cond:1_1))
        result = (*(*esi_1 + 4))()
        bool cond:2_1 = esi_1[2] != 1
        esi_1[2]
        esi_1[2] -= 1
        
        if (not(cond:2_1))
            return (*(*esi_1 + 8))()

return result
