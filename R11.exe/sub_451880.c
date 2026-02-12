// 函数: sub_451880
// 地址: 0x451880
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebx
int32_t var_418 = ebx
int32_t esi
int32_t var_41c = esi
int32_t edi
int32_t var_420 = edi
int32_t var_424 = arg7
void var_410
sub_450ab0(&var_410, arg1, arg2)
char var_405
uint32_t var_434 = zx.d(var_405)
sub_4653f0("@ %x\n")
void arg_cf4
void* arg_cc8 = &arg_cf4
sub_467ea0(arg5, arg6 + 0x5c)
char edx_1 = 1

if (arg4 s<= 0)
    *(arg8 + 0x48) = 1
    return arg4

int32_t esi_2 = *(arg5 + 0x10)
int32_t i_1 = arg4
int32_t i

do
    int32_t eax_4 = 0
    
    if (arg3 s> 0)
        do
            if ((*(esi_2 + (eax_4 << 2)) & 0xff000000) u< 0x80000000)
                edx_1 = 0
            
            eax_4 += 1
        while (eax_4 s< arg3)
    
    esi_2 += *(arg5 + 0x28)
    i = i_1
    i_1 -= 1
while (i != 1)
*(arg8 + 0x48) = edx_1
return arg8
