// 函数: sub_44b740
// 地址: 0x44b740
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx = arg2
int32_t eax_4 = ((ecx - arg1) s>> 3) * 4

if (arg1 != ecx)
    int32_t* edx_1 = arg3 - ecx
    
    do
        int32_t edi_1 = *(ecx - 8)
        ecx -= 8
        *(edx_1 + ecx) = edi_1
        *(edx_1 + ecx + 4) = *(ecx + 4)
    while (ecx != arg1)

return arg3 - eax_4 * 2
