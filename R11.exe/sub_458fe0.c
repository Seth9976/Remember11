// 函数: sub_458fe0
// 地址: 0x458fe0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* result = arg3
void* esi = arg2

if (arg1 != esi)
    void* edx_1 = result + 0xc
    void* ecx_1 = esi + 0xc
    
    do
        int32_t edi_1 = *(result - 0x14)
        *(result - 0x14) = *(esi - 0x14)
        *(esi - 0x14) = edi_1
        int32_t ebp_2 = *(ecx_1 - 0x18)
        int32_t edi_2 = *(edx_1 - 0x18)
        esi -= 0x14
        ecx_1 -= 0x14
        result -= 0x14
        edx_1 -= 0x14
        *(edx_1 - 4) = ebp_2
        *(ecx_1 - 4) = edi_2
        int32_t edi_3 = *edx_1
        *edx_1 = *ecx_1
        *ecx_1 = edi_3
        int32_t edi_4 = *(edx_1 + 4)
        *(edx_1 + 4) = *(ecx_1 + 4)
        *(ecx_1 + 4) = edi_4
    while (esi != arg1)

return result
