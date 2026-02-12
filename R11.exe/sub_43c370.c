// 函数: sub_43c370
// 地址: 0x43c370
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* result = arg2
int32_t edx = result[1]
int32_t ebx = 0
bool cond:0 = *(arg1 + 5) u<= 0
uint32_t edi = zx.d(*(arg1 + 6))
int32_t var_8 = *result
int32_t var_4 = edx

if (not(cond:0))
    uint32_t edx_4
    
    do
        result = sub_43b9c0(sx.d(*(arg1 + 4)) << 0x10 | zx.d(edi.w), &var_8, arg3, arg4)
        edx_4 = zx.d(*(arg1 + 5))
        var_8 += zx.d(*(arg1 + 8))
        ebx += 1
        edi += 1
    while (ebx s< edx_4)

return result
