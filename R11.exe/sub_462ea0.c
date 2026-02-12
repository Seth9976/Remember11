// 函数: sub_462ea0
// 地址: 0x462ea0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebx = arg2
int32_t ebp_1 = ebx & 0x1ff

if (ebp_1 u<= 1)
    *arg3 = *(arg1 + 0x1cbc)
    return 0

int32_t edi = 0

while (true)
    int32_t ecx_1 = *(arg1 + 0x1ce8)
    int32_t eax_3
    
    if (ecx_1 != 0)
        eax_3 = (*(arg1 + 0x1cec) - ecx_1) s>> 2
    else
        eax_3 = 0
    
    if (edi == eax_3)
        break
    
    if (ecx_1 == 0 || edi u>= (*(arg1 + 0x1cec) - ecx_1) s>> 2)
        __invalid_parameter_noinfo()
    
    if (*(*(arg1 + 0x1ce8) + (edi << 2)) == ebp_1)
        break
    
    edi += 1

int32_t ecx_2 = *(arg1 + 0x1ce8)
int32_t eax_10

if (ecx_2 != 0)
    eax_10 = (*(arg1 + 0x1cec) - ecx_2) s>> 2
else
    eax_10 = 0

if (edi != eax_10)
    if (ecx_2 != 0 && (*(arg1 + 0x1cec) - ecx_2) s>> 2 != 0)
        sub_465480(".\render.cpp", 0x858)
    
    arg2 = ebx & 0x1ff
    sub_44e9b0(arg1 + 0x1ce4, &arg2)

if (ebp_1 != 0x1ff)
    (*(*data_c78664 + 0x20))((ebx & 0x1ff) << 5, 0x280, 0x1c0, 1)
    *arg3 = (*(*data_c78640 + 0x10))()
    return 0

(*(*data_c78664 + 0x20))((ebx & 0x1ff) << 5, 0x280, 0x1c0, 3)
*arg3 = (*(*data_c78648 + 0x10))()
return 0
