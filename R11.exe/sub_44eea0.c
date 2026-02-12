// 函数: sub_44eea0
// 地址: 0x44eea0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* var_4 = arg1
int32_t edi = *(arg1 + 4)
int32_t edx_3
int32_t ebx_1

if (edi != 0)
    ebx_1 = *(arg1 + 8)
    int32_t ecx_1 = ebx_1 - edi
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x92492493, ecx_1)
    edx_3 = (edx_1 + ecx_1) s>> 4

void* ebx_2
int32_t edi_1

if (edi != 0 && edx_3 u>> 0x1f != neg.d(edx_3))
    if (edi u> ebx_1)
        __invalid_parameter_noinfo()
    
    ebx_2 = arg3
    
    if (ebx_2 == 0 || ebx_2 != arg1)
        __invalid_parameter_noinfo()
    
    edi_1 = (arg4 - edi) s/ 0x1c
else
    ebx_2 = arg3
    edi_1 = 0

int32_t var_18 = arg5
sub_44eb40(arg1, ebx_2, arg4, 1)
void* ebx_3 = *(arg1 + 4)

if (ebx_3 u> *(arg1 + 8))
    __invalid_parameter_noinfo()

void* edi_4 = ebx_3 + edi_1 * 0x1c
arg4 = ebx_3

if (edi_4 u> *(arg1 + 8) || edi_4 u< *(arg1 + 4))
    __invalid_parameter_noinfo()

arg2[1] = edi_4
*arg2 = arg1
return arg2
