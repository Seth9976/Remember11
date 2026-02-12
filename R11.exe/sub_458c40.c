// 函数: sub_458c40
// 地址: 0x458c40
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* ebx = arg2
int32_t var_20 = arg5
int32_t* var_2c = nullptr

if (ebx == 0)
    __invalid_parameter_noinfo()

var_2c = ebx
int32_t eax = sub_458b10(arg1, var_2c, arg3, arg4)
int32_t edi = arg1[2]

if (edi u> arg1[3])
    __invalid_parameter_noinfo()

arg3 = edi
arg4 = 0

if (arg1 == 0)
    __invalid_parameter_noinfo()

int32_t edi_1 = arg1[2]
bool cond:3 = edi_1 u<= arg1[3]
arg2 = arg1

if (not(cond:3))
    __invalid_parameter_noinfo()

int32_t var_8 = edi_1
int32_t var_4 = 0

if (arg1 == 0)
    __invalid_parameter_noinfo()

void arg_14
void* var_20_1 = &arg_14
int32_t* var_34 = &var_2c
int32_t* var_c = arg1
sub_453320(&arg2, var_34, eax + arg5)
int32_t var_38
sub_453320(&var_c, &var_38, eax)
return sub_457ee0(var_38)
