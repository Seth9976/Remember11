// 函数: sub_452080
// 地址: 0x452080
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_14 = 0
void* result_1
sub_451d20(&result_1, arg2)
void* result = result_1
*arg1 = arg2
int32_t* esi = arg1[1]
arg1[1] = result

if (esi != 0)
    bool cond:1_1 = esi[1] != 1
    esi[1]
    esi[1] -= 1
    
    if (not(cond:1_1))
        (*(*esi + 4))()
        result = &esi[2]
        bool cond:2_1 = *result != 1
        *result
        *result -= 1
        
        if (not(cond:2_1))
            return (*(*esi + 8))()

return result
