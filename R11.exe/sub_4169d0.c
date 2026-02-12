// 函数: sub_4169d0
// 地址: 0x4169d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t result = 0

for (void* i = nullptr; i s< 0x1248; i += 0x104)
    int32_t eax_3 = data_e7e648
    void* edx_1 = i + eax_3
    
    if (*(i + eax_3 + 0x1f5dc) != 0xffff && *(edx_1 + 0x1f5e2) == 1)
        *(edx_1 + 0x1f650) = 0
        *(i + data_e7e648 + 0x1f654) = 0
        *(i + data_e7e648 + 0x1f658) = 0
        
        if (*(edx_1 + 0x1f5de) == 3)
            uint32_t edx_4 = zx.d(*(((zx.d(*(edx_1 + 0x1f5dc)) & 0xfff) << 1) + &data_2b56718))
            
            if ((arg1 & 0x1f) == edx_4)
                *(i + data_e7e648 + 0x1f650) = 2
                *(i + data_e7e648 + 0x1f654) = 0
                *(i + data_e7e648 + 0x1f658) = 0
                result += 1
            
            if ((arg1 u>> 6 & 0x1f) == edx_4)
                *(i + data_e7e648 + 0x1f650) = 2
                *(i + data_e7e648 + 0x1f654) = 0
                *(i + data_e7e648 + 0x1f658) = 0
                result += 1
            
            if ((arg1 u>> 0xc & 0x1f) == edx_4)
                *(i + data_e7e648 + 0x1f650) = 2
                *(i + data_e7e648 + 0x1f654) = 0
                *(i + data_e7e648 + 0x1f658) = 0
                result += 1

return result
