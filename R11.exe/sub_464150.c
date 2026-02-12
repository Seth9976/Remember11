// 函数: sub_464150
// 地址: 0x464150
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg1[4].b == 1)
    sub_462bd0(&arg1[0x740], &data_c788b8)
    arg1[4].b = 0
    sub_4602b0(&data_c788b8)
    data_c78938 = arg1[0x110744]
    data_c7893c = arg1[0x110745]

sub_463fd0(arg1)
int32_t* eax_2 = arg1[1]
(*(*eax_2 + 0x9c))(eax_2, 0)
int32_t* eax_4 = arg1[1]
(*(*eax_4 + 0x94))(eax_4, 0, arg1[0x72f])
int32_t* eax_6 = arg1[1]
(*(*eax_6 + 0x9c))(eax_6, arg1[0x731])
int32_t edx_3 = arg1[0x110749]
int32_t edi_2 = arg1[0x110748]
int32_t var_4 = arg1[0x11074b] + edx_3
int32_t* ecx_7 = arg1[1]
int32_t var_8 = arg1[0x11074a] + edi_2
int32_t var_10 = edi_2
int32_t var_c = edx_3
void* edi_3 = *ecx_7
int32_t eax_11 = (*(*data_c7864c + 0x10))(0, 0)
(*(edi_3 + 0x88))(arg1[1], arg1[0x72f], &var_8, eax_11)
int32_t* eax_13 = arg1[0x72f]

if (eax_13 != 0)
    (*(*eax_13 + 8))(eax_13)
    arg1[0x72f] = 0

int32_t* eax_15 = arg1[0x731]

if (eax_15 != 0)
    (*(*eax_15 + 8))(eax_15)
    arg1[0x731] = 0

int32_t* eax_16 = arg1[0x730]

if (eax_16 != 0)
    (*(*eax_16 + 8))(eax_16)
    arg1[0x730] = 0

return 0
