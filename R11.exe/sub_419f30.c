// 函数: sub_419f30
// 地址: 0x419f30
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char eax_2 = sub_441790(data_e7e648 + 0xb3dcc)
sub_4193d0()
sub_43c280(&data_a59b60, 0x11, zx.d(data_a59b66), 0x18)
sub_43c280(&data_a59b70, 0x11, zx.d(data_a59b76), 0x18)
char var_11 = eax_2 - 0x80
char var_12 = 0x80
char var_13 = 0x80
char var_14 = 0x80
void* esi = &data_4b1408
int32_t edi = 0x184
int32_t i_1 = 6
int32_t* result
int32_t i

do
    int32_t eax_3 = *(esi - 4)
    int32_t var_c_1 = edi
    int32_t var_10
    
    if (*esi != 0)
        var_10 = 0x260 - zx.d(*((eax_3 << 4) + 0xa59b45)) * 0x18
        result = sub_43c370(&(&data_a59b40)[eax_3 * 4], &var_10, &var_14, 9)
    else
        void* eax_4 = eax_3 * 0x21c
        var_10 = 0x260 - *(eax_4 + 0xa59df0)
        result = sub_43bec0(eax_4 + 0xa59be0, &var_10, &var_14, 9)
    edi -= 0x1c
    esi += 8
    i = i_1
    i_1 -= 1
while (i != 1)
return result
