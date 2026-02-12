// 函数: sub_463db0
// 地址: 0x463db0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (data_c78629 == 1)
    return 0x80004005

int32_t var_b8
sub_460330(&var_b8, 0)
int32_t var_a8
int32_t var_a4
int32_t ebx_2 = (var_a8 u>> 4 | var_a4 << 0x1c) & 1
int32_t var_10

if (ebx_2 != 0)
    int32_t __saved_edi_6
    int32_t __saved_edi_1 = __saved_edi_6
    int32_t var_78
    sub_463000(arg1, var_78)
    int32_t var_b4
    var_10 = (*(*data_c78664 + 0x1c))(var_b8, var_b4)

if (*(arg1 + 0x10) == 1)
    if (sub_461940(&var_b8, &data_c788b8) == 0 || data_c78948 != 1)
        sub_462e00(arg1, &data_c788b8)
    else
        *(arg1 + 0x1cd0) += 1

if (*(arg1 + 0x10) == 0)
    __builtin_memcpy(&data_c788b8, &var_b8, 0xb8)
    data_c78938 = *(arg1 + 0x441d10)
    int32_t eax_6 = 0x10
    int32_t ecx_8 = data_c788c8 & 0x10
    int32_t var_c0_1 = ecx_8
    data_c7893c = *(arg1 + 0x441d14)
    
    if (ecx_8 == 0)
        data_c78958 = 0x42
    else
        eax_6 = 0x18
        data_c78958 = 0x142
    
    data_c78920 = eax_6
    data_c78948 = 1
    data_c78924 = 1
    *(arg1 + 0x10) = 1

if (ebx_2 == 1)
    data_c78960 = var_10

int32_t eax_7 = data_c788c8
int32_t ecx_9 = data_c78798
data_c788cc = data_c788cc
data_c788c8 = eax_7 ^ ((ecx_9 ^ eax_7) & 7)
sub_460c30(arg1, &data_c788b8, arg3, arg2)
return 0
