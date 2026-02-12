// 函数: sub_43be40
// 地址: 0x43be40
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t result = 0

if (arg3 s> 0)
    int32_t** esi_1 = arg1
    int32_t* edi_1 = arg2
    int32_t i
    
    do
        if (*edi_1 != 0)
            *esi_1 = edi_1
            esi_1[0x85] = 0
            esi_1[2] = 0
            char* ecx_1 = *edi_1
            data_a5dd1c = 0
            sub_43bb20(esi_1, edi_1, ecx_1, arg4, 0xffffffff)
            int32_t eax_2 = data_a5dd1c + 1
            edi_1[3] = esi_1
            esi_1[1] = eax_2
            esi_1 = &esi_1[eax_2 * 0x87]
            result += eax_2
        
        edi_1 = &edi_1[4]
        i = arg3
        arg3 -= 1
    while (i != 1)

return result
