// 函数: sub_48abe2
// 地址: 0x48abe2
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* entry_ebx

if (arg7 != 0)
    sub_48ab51(arg3, arg1, entry_ebx, arg7)

int32_t* var_c_2

var_c_2 = arg9 != 0 ? arg9 : arg1

sub_4820da(var_c_2, arg3)
int32_t var_8_3 = *arg2
int32_t edx = sub_48a5d5(arg1, arg5, arg6)
int32_t eax_1 = arg2[1] + 1
arg1[2] = eax_1
int32_t result = sub_48a836(eax_1, edx, entry_ebx[3], arg3, arg1, arg4, arg6, arg8, 0x100)

if (result == 0)
    return result

return _JumpToContinuation(result, arg1)
