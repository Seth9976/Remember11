// 函数: sub_44fd70
// 地址: 0x44fd70
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ebx = *arg1[1]
int32_t* edi = arg1
int32_t* var_8 = edi
void* var_4 = ebx

while (true)
    int32_t ebp_1 = arg1[1]
    
    if (edi == 0 || edi != arg1)
        __invalid_parameter_noinfo()
    
    if (ebx == ebp_1)
        break
    
    if (edi == 0)
        __invalid_parameter_noinfo()
    
    if (ebx == edi[1])
        __invalid_parameter_noinfo()
    
    void* eax_1 = *(ebx + 0xc)
    *((sx.d(*(eax_1 + 0xae)) << 2) + &data_c77a38) = 0
    j_sub_4813df(eax_1)
    sub_450e20(&var_8)
    ebx = var_4
    edi = var_8

int32_t* eax_2 = arg1[1]
sub_44e060(arg1, &var_8, arg1, *eax_2, arg1, eax_2)
j_sub_4813df(arg1[1])
arg1[1] = 0
arg1[2] = 0
return 0
