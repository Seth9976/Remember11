// 函数: sub_43c4c0
// 地址: 0x43c4c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* result = arg2
int32_t edx = result[1]
int32_t var_10 = *result
int32_t ecx_1 = result[2]
int32_t var_c = edx
int32_t ebx = 0
uint32_t edi = zx.d(*(arg1 + 6))
int32_t var_4 = result[3]

if (*(arg1 + 5) u> 0)
    do
        sub_43bab0(sx.d(*(arg1 + 4)) << 0x10 | zx.d(edi.w), &var_10, arg3, arg4)
        int32_t eax_5
        int32_t edx_5
        edx_5:eax_5 = sx.q((zx.d(*(arg1 + 8)) * ecx_1) << 0xc)
        result = zx.d(*(arg1 + 5))
        ebx += 1
        edi += 1
        var_10 = var_10 + ((((eax_5 + (edx_5 & 0xfff)) s>> 0xc) + 0xfff) s>> 0xc) + 4
    while (ebx s< result)

return result
