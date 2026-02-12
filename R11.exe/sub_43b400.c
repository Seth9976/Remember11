// 函数: sub_43b400
// 地址: 0x43b400
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ebp = arg3

if (ebp == 0)
    ebp = &data_4bfa44

uint32_t esi = zx.d(arg4)
sub_43ac40(arg1, arg2, ebp, esi)
int32_t ecx_1 = *(arg2 + 4) + 2
int32_t var_8 = *arg2 + 2
int32_t var_4 = ecx_1
sub_43ac40(arg1, &var_8, ebp + 8, esi)
return sub_43aa80(arg1, 0, esi)
