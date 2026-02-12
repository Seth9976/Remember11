// 函数: sub_4646d0
// 地址: 0x4646d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (*arg1 == 0)
    __invalid_parameter_noinfo()

void* eax = arg1[1]

if (*(eax + 0x2d) != 0)
    return __invalid_parameter_noinfo() __tailcall

int32_t* ecx_1 = *(eax + 8)

if (*(ecx_1 + 0x2d) == 0)
    int32_t* eax_2 = *ecx_1
    
    while (*(eax_2 + 0x2d) == 0)
        ecx_1 = eax_2
        eax_2 = *ecx_1
    
    arg1[1] = ecx_1
    return eax_2

void* eax_3 = *(eax + 4)

if (*(eax_3 + 0x2d) == 0)
    while (arg1[1] == *(eax_3 + 8))
        arg1[1] = eax_3
        eax_3 = *(eax_3 + 4)
        
        if (*(eax_3 + 0x2d) != 0)
            break

arg1[1] = eax_3
return eax_3
