// 函数: sub_419330
// 地址: 0x419330
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = data_2b603a4 - arg1[2]
int32_t result = 0
bool cond:0 = arg1[1] s> eax
*arg1 = eax

if (not(cond:0))
    result = 1

if (eax s< 0)
    result = 1

if (arg2 == 0)
    if (*(data_e7e648 + 0x289c) == 1)
        result = 1
    
    if ((data_2b53608 & 0x2100) != 0)
        return 1
    
    if (sub_45c4e0() != 0)
        return 1
else if (arg2 == 1 && *(data_e7e648 + 0x289c) == 1)
    return 1

return result
