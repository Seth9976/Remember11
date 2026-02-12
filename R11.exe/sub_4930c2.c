// 函数: sub_4930c2
// 地址: 0x4930c2
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_90
int32_t eax_1 = __security_cookie ^ &var_90
double arg_14
int32_t eax_2 = sub_492d9b(arg1, &arg_14, arg3.b)
double arg_c

if (eax_2 == 0)
    int32_t var_50
    int32_t var_50_1 = var_50 & 0xfffffffe
    sub_492ac1(&var_90, &arg3, arg1.b, arg2, &arg_c, &arg_14, eax_2)
    noreturn

void* eax_3 = sub_492fa4(arg1.b)
long double result

if (data_4cc950 != 0 || eax_3 == 0)
    sub_492f7c(eax_3)
    int16_t x87control
    sub_4932d8(x87control, arg3.w, 0xffff)
    result = fconvert.t(arg_14)
else
    int32_t var_9c
    var_9c.q = fconvert.d(fconvert.t(arg_14))
    int32_t var_a4
    var_a4.q = fconvert.d(float.t(0))
    int32_t var_ac
    var_ac.q = fconvert.d(fconvert.t(arg_c))
    int32_t var_a8
    int32_t var_a0
    result = sub_492fd1(eax_3, arg2, var_ac, var_a8, var_a4, var_a0, var_9c, arg3.w)

sub_480cd2(eax_1 ^ &var_90)
return result
