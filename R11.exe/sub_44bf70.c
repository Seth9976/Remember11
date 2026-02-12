// 函数: sub_44bf70
// 地址: 0x44bf70
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* var_4 = arg1
int32_t edi = *(arg1 + 4)
int32_t eax_1

if (edi != 0)
    eax_1 = *(arg1 + 8)

int32_t ebx

if (edi != 0 && (eax_1 - edi) s>> 3 != 0)
    if (edi u> eax_1)
        __invalid_parameter_noinfo()
    
    if (arg3 == 0 || arg3 != arg1)
        __invalid_parameter_noinfo()
    
    ebx = (arg4 - edi) s>> 3
else
    ebx = 0

int32_t var_18 = arg5
sub_44bd10(arg1, arg3, arg4, 1)
void* edi_1 = *(arg1 + 4)

if (edi_1 u> *(arg1 + 8))
    __invalid_parameter_noinfo()

arg4 = edi_1
void* edi_2 = edi_1 + (ebx << 3)

if (edi_2 u> *(arg1 + 8) || edi_2 u< *(arg1 + 4))
    __invalid_parameter_noinfo()

arg2[1] = edi_2
*arg2 = arg1
return arg2
