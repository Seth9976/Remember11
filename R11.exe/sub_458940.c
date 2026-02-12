// 函数: sub_458940
// 地址: 0x458940
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edx = arg1[1]
int32_t ecx

if (edx != 0)
    ecx = (arg1[2] - edx) s>> 3
else
    ecx = 0

char var_8

if (edx == 0 || ecx u>= (arg1[3] - edx) s>> 3)
    int32_t* edi_2 = arg1[2]
    
    if (edx u> edi_2)
        __invalid_parameter_noinfo()
    
    return sub_458540(arg1, &var_8, arg1, edi_2, arg2)

int32_t* edi = arg1[2]
var_8 = 0
int32_t var_14 = var_8.d
int32_t* var_18 = arg2
int32_t* var_1c = arg1
int32_t result = sub_456710(edi, 1, arg2)
arg1[2] = &edi[2]
return result
