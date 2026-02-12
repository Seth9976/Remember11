// 函数: sub_48a95c
// 地址: 0x48a95c
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*(arg3 - 4) = *(arg1 - 0x24)
sub_4823c0(*(arg1 - 0x28))
void* eax = __getptd()
*(eax + 0x88) = *(arg1 - 0x2c)
void* result = __getptd()
*(result + 0x8c) = *(arg1 - 0x30)

if (*arg2 == 0xe06d7363 && arg2[4] == 3)
    result = arg2[5]
    
    if ((result == 0x19930520 || result == 0x19930521 || result == 0x19930522)
            && *(arg1 - 0x34) == 0 && *(arg1 - 0x1c) != 0)
        result = sub_48239f(arg2[6])
        
        if (result != 0)
            int32_t var_4_2 = *(arg1 + 0x10)
            result = sub_48a6fb(arg2)

return result
