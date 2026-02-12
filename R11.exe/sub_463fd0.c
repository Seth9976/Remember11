// 函数: sub_463fd0
// 地址: 0x463fd0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* ebp = arg1[0x741]

if (ebp u> arg1[0x742])
    __invalid_parameter_noinfo()

void* edi = &arg1[0x740]

while (true)
    int32_t eax_1 = arg1[0x742]
    
    if (arg1[0x741] u> eax_1)
        __invalid_parameter_noinfo()
    
    if (edi == 0 || edi != &arg1[0x740])
        __invalid_parameter_noinfo()
    
    if (ebp == eax_1)
        break
    
    if (edi == 0)
        __invalid_parameter_noinfo()
    
    if (ebp u>= *(edi + 8))
        __invalid_parameter_noinfo()
    
    if (*(ebp + 0xae) != 0)
        int32_t edx_1 = arg1[0x110749]
        int32_t edi_1 = arg1[0x110748]
        int32_t var_4_1 = arg1[0x11074b] + edx_1
        int32_t* ecx_4 = (&data_c7863c)[ebp[0x2c]]
        int32_t var_8 = arg1[0x11074a] + edi_1
        int32_t var_10_1 = edi_1
        int32_t var_c_1 = edx_1
        int32_t* edi_3 = *arg1[1] + 0x88
        int32_t eax_8 = (*(*data_c78668 + 0x2c))(&var_8, (*(*ecx_4 + 0x10))(0, 0))
        (*edi_3)(arg1[1], eax_8)
    else
        sub_463f40(arg1, ebp)
    
    edi = &arg1[0x740]
    
    if (ebp u>= *(edi + 8))
        __invalid_parameter_noinfo()
    
    ebp = &ebp[0x2e]

int32_t ebp_1 = arg1[0x742]
bool cond:1 = arg1[0x741] u<= ebp_1
arg1[0x110744] = &arg1[0x744]
arg1[0x110745] = &arg1[0x90744]

if (not(cond:1))
    __invalid_parameter_noinfo()

int32_t edi_4 = arg1[0x741]

if (edi_4 u> arg1[0x742])
    __invalid_parameter_noinfo()

if (edi_4 != ebp_1)
    int32_t var_28_4 = 0
    int32_t var_2c_3 = 0
    int32_t var_30_1 = 0
    arg1[0x742] = sub_462330(ebp_1, arg1[0x742], edi_4)

arg1[4].b = 0
sub_4602b0(&data_c788b8)
data_c78938 = arg1[0x110744]
data_c7893c = arg1[0x110745]
arg1[4].b = 0
return 0
