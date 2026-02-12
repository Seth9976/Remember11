// 函数: sub_493212
// 地址: 0x493212
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

long double result = float.t(0)
result - fconvert.t(arg1)
bool p = unimplemented  {test ah, 0x44}
int32_t edx

if (not(p))
    edx = 0
else if ((arg1:6.w & 0x7ff0) != 0 || ((arg1:4.d & 0xfffff) == 0 && arg1.d == 0))
    int32_t var_c_2 = 0
    result = sub_49318d(0f, 0)
    edx = (arg1:6.d u>> 4 & 0x7ff) - 0x3fe
else
    long double temp1_1 = fconvert.t(arg1)
    result - temp1_1
    edx = 0xfffffc03
    int32_t eax_1
    
    if ((((result < temp1_1 ? 1 : 0) << 8 | (is_unordered.t(result, temp1_1) ? 1 : 0) << 0xa
            | (result == temp1_1 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
        eax_1 = 0
    else
        eax_1 = 1
    
    while ((arg1:6.b & 0x10) == 0)
        arg1:4.d <<= 1
        
        if ((arg1.d & 0x80000000) != 0)
            arg1:4.d |= 1
        
        arg1.d <<= 1
        edx -= 1
    
    arg1:6.w &= 0xffef
    
    if (eax_1 != 0)
        arg1:6.w |= 0x8000
    
    int32_t var_c_1 = 0
    result = sub_49318d(0f, 0)

*arg2 = edx
return result
