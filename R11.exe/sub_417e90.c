// 函数: sub_417e90
// 地址: 0x417e90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* result

for (int32_t i = 0; i s< 0x1248; i += 0x104)
    void* ecx_1 = data_e7e648
    result = i + ecx_1 + 0x1f5dc
    
    if (*(i + ecx_1 + 0x1f668) != 0)
        if (*(ecx_1 + 0x289c) == 0)
            int32_t ecx_2 = *(result + 0x90)
            int32_t edx_1 = 0xffffff60
            
            if (ecx_2 == 0)
                *(result + 0x94) += 0x40
                
                if (*(result + 0x94) s> 0xc00)
                    *(result + 0x94) = 0
                    *(result + 0x90) = 1
            else if (ecx_2 == 1)
                *(result + 0x94) += 0x40
                edx_1 = 0xffffff10
                
                if (*(result + 0x94) s> 0x800)
                    *(result + 0x8c) = 0
            
            *(result + 0x1c) = edx_1
        else
            *(result + 0x8c) = 0
            *(result + 0x1c) = 0xffffff60

return result
