// 函数: sub_456a80
// 地址: 0x456a80
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*(arg1 + 4) = 0
*(arg1 + 8) = 0
*(arg1 + 0xc) = 0

if (arg2 == 0)
    int32_t eax
    eax.b = 0
    return 0

if (arg2 u> 0x3fffffff)
    sub_44d6e0()
    noreturn

int32_t var_c = 0
void* eax_1 = sub_44d100(arg2)
*(arg1 + 4) = eax_1
*(arg1 + 8) = eax_1
*(arg1 + 0xc) = eax_1 + (arg2 << 2)
void* result
result.b = 1
return result
