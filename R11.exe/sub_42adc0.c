// 函数: sub_42adc0
// 地址: 0x42adc0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*(data_4bf344 + 0xb23c) = 0
int32_t result

for (void* i = nullptr; i u< 0xb4; i += 0xc)
    int32_t edi_1 = 0
    int16_t* esi_1 = i + 0x4be84c
    int32_t j_1 = 3
    int32_t j
    
    do
        uint32_t ecx_1 = zx.d(*esi_1)
        uint32_t result_1 = zx.d(ecx_1.w)
        result = result_1
        
        if (result_1 != 0)
            int32_t result_2 = result
            result -= 1
            
            if (result_2 == 1)
                edi_1 |= 1
            else
                result = sub_401e00(ecx_1)
                edi_1 |= result
        
        esi_1 = &esi_1[1]
        j = j_1
        j_1 -= 1
    while (j != 1)
    
    if (edi_1 != 0)
        result = data_4bf344
        *(result + (*(result + 0xb23c) << 2) + 0xb240) = *(i + &data_4be848)
        *(result + 0xb23c) += 1

return result
