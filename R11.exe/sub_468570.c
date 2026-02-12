// 函数: sub_468570
// 地址: 0x468570
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = *arg1

if (eax != 0xfffffffe)
    if (eax == 0)
        __invalid_parameter_noinfo()
    
    void* eax_1 = *arg1
    void* ecx
    
    if (*(eax_1 + 0x18) u< 0x10)
        ecx = eax_1 + 4
    else
        ecx = *(eax_1 + 4)
    
    if (arg1[1] u>= *(eax_1 + 0x14) + ecx)
        __invalid_parameter_noinfo()

return arg1[1]
