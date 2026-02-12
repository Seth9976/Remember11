// 函数: sub_42b230
// 地址: 0x42b230
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_1c
int32_t eax_1 = __security_cookie ^ &var_1c
int32_t edi = arg3
int32_t* result_1 = arg4
char var_10[0xc]
char (* esi)[0xc] = &var_10
char var_19

if (edi == 0)
    var_19 = arg3.b
else if (edi s<= 0)
    edi = neg.d(edi)
    var_19 = 2
else
    var_19 = 1

for (int32_t i = 1; i s< 0x2710; )
    int32_t temp0_1 = divs.dp.d(sx.q(edi), i)
    
    if (i != 1 && temp0_1 == 0)
        *esi = 0xff
        break
    
    int32_t ebx_1
    ebx_1.b = temp0_1.b - muls.dp.b((temp0_1 s/ 0xa).b, 0xa)
    *esi = ebx_1.b
    i *= 0xa
    esi = &(*esi)[1]

int32_t* result = result_1
int32_t edx_4 = result[1]
result_1 = *result
int32_t var_14 = edx_4
int32_t esi_1 = 0

while (true)
    result.b = var_10[esi_1]
    
    if (result.b == 0xff)
        break
    
    result = sub_43c570(0x4be9d0, sx.w(result.b), &result_1, arg5, arg6)
    result_1 -= 0x1a
    esi_1 += 1
    
    if (esi_1 s>= 0xa)
        sub_480cd2(eax_1 ^ &var_1c)
        return result

if (arg7 == 0)
    result.b = var_19
    
    if (result.b != 1)
        result = sub_43c570(0x4be9d0, sx.w(result.b) + 0xa, &result_1, arg5, arg6)

sub_480cd2(eax_1 ^ &var_1c)
return result
