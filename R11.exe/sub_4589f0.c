// 函数: sub_4589f0
// 地址: 0x4589f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebx = arg1[2]

if (ebx u> arg1[3])
    __invalid_parameter_noinfo()

if (arg1 == 0)
    __invalid_parameter_noinfo()

int32_t* arg_8
int32_t* ebp = arg_8
int32_t edi_4 = ((arg3 - ebx) s>> 2 << 5) + arg4
int32_t* var_1c = nullptr

if (ebp == 0)
    __invalid_parameter_noinfo()

int32_t* ebp_1 = arg1[2]

if (ebp_1 u> arg1[3])
    __invalid_parameter_noinfo()

int32_t* var_28 = nullptr
int32_t var_20 = 0

if (arg1 == 0)
    __invalid_parameter_noinfo()

var_28 = arg1
int32_t eax_1 = *arg1

if (eax_1 u> 0)
    sub_453130(&var_28, eax_1)

int32_t* var_34 = nullptr

if (arg5 == 0)
    __invalid_parameter_noinfo()

sub_4587e0(&arg_8, arg5, arg6, arg7, var_28, ebp_1, var_20, ebp, arg3, arg4)
int32_t ebx_1 = arg1[2]

if (ebx_1 u> arg1[3])
    __invalid_parameter_noinfo()

sub_4569c0(arg1, ((arg3 - ebx_1) s>> 2 << 5) + arg4)
int32_t ebx_2 = arg1[2]

if (ebx_2 u> arg1[3])
    __invalid_parameter_noinfo()

arg_8 = arg1
arg3 = ebx_2
arg4 = 0
sub_453320(&arg_8, arg2, edi_4)
return arg2
