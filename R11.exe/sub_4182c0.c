// 函数: sub_4182c0
// 地址: 0x4182c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*(data_e7e648 + 0xb417c) = data_2b5aa18
void* ecx_1 = data_e7e648
int16_t edx = *(ecx_1 + 0xb417c) & 0xfff
char var_c
char var_8
char var_4

if (edx == 0xfff)
    var_4 = -1
    var_8 = -1
    var_c = -1
else
    uint32_t eax_1 = zx.d(edx)
    var_4 = ((eax_1 & 0xf) << 4).b
    var_8 = ((eax_1 u>> 4 & 0xf) << 4).b
    var_c = ((eax_1 u>> 8 & 0xf) << 4).b

sub_402450(ecx_1 + 0xb4180, var_c, var_8, var_4)
sub_402490(data_e7e648 + 0xb4180, 1)
*(data_e7e648 + 0xb417e) = data_2b5aa1a
char* result = data_e7e648

if ((result[0xb417e] & 0x80) == 0)
    return result

return sub_4023e0(&result[0xb4180], 0x13, 1)
