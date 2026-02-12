// 函数: sub_404250
// 地址: 0x404250
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edx = *(arg2 + 4)
int32_t var_34 = *(arg2 + 0x15)
var_34:3.b = 0x80 - arg1.b
sub_4437c0(&data_4cd170, &var_34, edx)
sub_442e20()
data_c7bbe4 = 0x80
int32_t eax_1 = 0x80 - arg1
data_c7bbf0 = 1
data_c7bbe0 = 3
int32_t var_30 = eax_1
int32_t var_38 = 3

while (true)
    int32_t var_3c_1 = eax_1
    
    if (eax_1 s<= 0)
        var_3c_1 = 0
    
    int32_t esi_2 = data_4cd178 << 4
    long double x87_r7_1 = float.t(esi_2 s/ 3 * var_38)
    int32_t eax_3 = sub_480df0((x87_r7_1 + x87_r7_1) / float.t(var_3c_1))
    int32_t var_3c_2 = eax_3
    
    if (eax_3 s> esi_2)
        var_3c_2 = esi_2
        eax_3 = esi_2
    
    if (eax_3 s< 0)
        var_3c_2 = 0
        eax_3 = 0
    
    int32_t var_10_1 = eax_3
    int32_t* eax_4 = data_c7bbc0
    int32_t var_4c_1 = *(arg2 + 4)
    int32_t var_20_1 = esi_2
    int32_t var_1c_1 = data_4cd17c << 4
    int32_t var_28 = 0
    int32_t var_24_1 = 0
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0
    int32_t var_c_1 = 0x1c00
    int16_t* esi_4 = *eax_4 + 0x58
    sub_4454d0(esi_4, &var_28, 0)
    int32_t eax_6 = var_3c_2 s>> 4
    var_28 = 0
    int32_t var_24_2 = 0
    int32_t var_20_2 = eax_6 - 1
    
    if (eax_6 - 1 s< 0)
        int32_t var_20_3 = 0
    
    int32_t var_1c_2 = *(esi_4 + 0x28) - 1
    sub_442d50(&var_28, *(arg2 + 4))
    sub_442d00(esi_4, *(arg2 + 4))
    sub_409c70(0xffffffff, *(arg2 + 4))
    int32_t esi_5 = data_2b603b0
    int32_t edx_6 = data_c7bbc0
    int32_t var_20_4 = var_3c_2
    int32_t eax_10 = data_4cd17c << 4
    int32_t esi_6 = neg.d(esi_5)
    int32_t var_1c_3 = eax_10
    int32_t var_c_2 = eax_10
    int32_t var_64_1 = *(arg2 + 4)
    int32_t var_10_2 = data_4cd178 << 4
    var_28 = 0
    int32_t var_24_3 = 0
    int32_t var_18_2 = 0
    int32_t var_14_2 = 0
    int16_t* esi_10 = (sbb.d(esi_6, esi_6, esi_5 != 0) + 1) * 0x2c + *edx_6
    sub_4454d0(esi_10, &var_28, 0)
    int32_t ecx_11 = *(arg2 + 4)
    int32_t eax_12 = data_4cd17c
    int32_t var_20_5 = data_4cd178 - 1
    var_28 = 0
    int32_t var_24_4 = 0
    int32_t var_1c_4 = eax_12
    sub_442d50(&var_28, ecx_11)
    sub_442d00(esi_10, *(arg2 + 4))
    sub_409c70(0x90000, *(arg2 + 4))
    bool cond:3_1 = var_38 - 1 s> 0
    var_38 -= 1
    
    if (not(cond:3_1))
        break
    
    eax_1 = var_30

return sub_442f40()
