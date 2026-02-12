// 函数: sub_4073e0
// 地址: 0x4073e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

__builtin_memset(arg1 + 0x7e50, 0xff, 0x18)
void* const var_4c = &data_49df0c
void* const var_48 = &data_49df08
void* const var_44 = &data_49df04
void* const var_40 = &data_49df00
void* const var_3c = &data_49defc
void* const var_38 = &data_49def8
void* const var_34 = &data_49def4
void* const var_30 = &data_49def0
void* const var_2c = &data_49deec
void* const var_28 = &data_49dee8
void* const var_24 = &data_49dee4
void* const var_20 = &data_49dee0
void* const var_1c = &data_49dedc
void* const var_18 = &data_49ded8
void* const var_14 = &data_49ded4
void* const var_10 = &data_49ded0
void* const var_c = &data_49decc
void* const var_8 = &data_49dec8
void* const var_4 = &data_49dec4
char* result = sub_481240(arg1 + 0xc0, "Last-Modified:")

if (result != 0)
    for (int32_t i = 0; i u< 7; i += 1)
        if (sub_4812dc(&result[0xf], (&var_4c)[i], 3) == 0)
            *(arg1 + 0x7e68) = i
            break
    
    *(arg1 + 0x7e58) = j_sub_4812c6(&result[0x14])
    
    for (int32_t i_1 = 0; i_1 u< 0xc; )
        uint32_t eax_3 = sub_4812dc(&result[0x17], (&var_30)[i_1], 3)
        i_1 += 1
        
        if (eax_3 == 0)
            *(arg1 + 0x7e54) = i_1
            break
    
    *(arg1 + 0x7e50) = j_sub_4812c6(&result[0x1b])
    *(arg1 + 0x7e5c) = j_sub_4812c6(&result[0x20])
    *(arg1 + 0x7e60) = j_sub_4812c6(&result[0x23])
    result = j_sub_4812c6(&result[0x26])
    *(arg1 + 0x7e64) = result

return result
