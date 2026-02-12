// 函数: sub_456940
// 地址: 0x456940
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* var_4 = arg1
int32_t esi = arg3

if (esi == 0 || esi != arg5)
    __invalid_parameter_noinfo()

if (arg4 != arg6)
    int32_t esi_1 = *(arg1 + 8)
    int32_t var_18_1 = 0
    var_4.b = 0
    void* var_1c_1 = var_4
    int32_t* var_20_1 = arg2
    sub_455bf0(arg6, esi_1, arg4)
    int32_t* var_30_1 = arg2
    void* var_34_1 = arg1
    void* esi_4 = &arg4[((esi_1 - arg6) s>> 3) * 2]
    sub_453200(esi_4, *(arg1 + 8))
    *(arg1 + 8) = esi_4
    esi = arg3

*arg2 = esi
arg2[1] = arg4
return arg2
