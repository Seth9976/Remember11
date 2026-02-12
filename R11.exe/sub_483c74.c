// 函数: sub_483c74
// 地址: 0x483c74
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t* esi = arg1
void var_1c
sub_481612(&var_1c, arg3)

if (arg2 != 0)
    *arg2 = arg1

void* var_14
char var_10

if (arg1 == 0)
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    
    if (var_10 != arg1.b)
        *(var_14 + 0x70) &= 0xfffffffd
    
    return float.t(0)

void* var_44_1 = &var_1c
wchar16 eax_2 = *arg1

while (true)
    bool cond:0_1 = sub_48dd9d(eax_2, 8, var_44_1) != 0
    var_44_1 = &var_1c
    
    if (not(cond:0_1))
        break
    
    esi = &esi[1]
    eax_2 = *esi

int32_t var_48_1 = 0
int32_t var_4c_2 = 0
void var_34
int32_t* eax_5 = sub_48dce0(&var_34, esi, sub_48dd87(esi))

if (arg2 != 0)
    *arg2 = &esi[eax_5[1]]

int16_t eax_8 = (*eax_5).w
double var_c_1

if ((eax_8 & 0x240) != 0)
    var_c_1 = fconvert.d(float.t(0))
    
    if (arg2 != 0)
        *arg2 = arg1
else
    long double x87_r7_3
    
    if ((eax_8.b & 0x81) == 0)
        bool p_1
        
        if ((eax_8 & 0x100) != 0)
            x87_r7_3 = float.t(0)
            x87_r7_3 - fconvert.t(*(eax_5 + 0x10))
            p_1 = unimplemented  {test ah, 0x44}
        
        if ((eax_8 & 0x100) == 0 || p_1)
            var_c_1 = fconvert.d(fconvert.t(*(eax_5 + 0x10)))
        else
            var_c_1 = fconvert.d(x87_r7_3)
            *__errno() = 0x22
    else
        x87_r7_3 = fconvert.t(data_4cc860)
        
        if (*esi == 0x2d)
            x87_r7_3 = fneg(x87_r7_3)
        
        var_c_1 = fconvert.d(x87_r7_3)
        *__errno() = 0x22

if (var_10 != 0)
    *(var_14 + 0x70) &= 0xfffffffd

return fconvert.t(var_c_1)
