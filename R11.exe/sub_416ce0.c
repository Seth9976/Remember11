// 函数: sub_416ce0
// 地址: 0x416ce0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* result

for (int32_t i = 0; i s< 0x1248; i += 0x30c)
    void* ecx_1 = data_e7e648
    
    if (*(i + ecx_1 + 0x1f5dc) != 0xffff)
        if (*(ecx_1 + 0x289c) != 0)
            if (*(i + ecx_1 + 0x1f648) != 0)
                *(i + ecx_1 + 0x1f5f8) = *(i + ecx_1 + 0x1f610)
                *(i + ecx_1 + 0x1f648) = 0
            
            if (*(i + ecx_1 + 0x1f64c) != 0)
                *(i + ecx_1 + 0x1f5fc) = *(i + ecx_1 + 0x1f614)
                *(i + ecx_1 + 0x1f64c) = 0
        
        int32_t ecx_3 = *(i + ecx_1 + 0x1f648)
        
        if (ecx_3 != 0)
            *(i + ecx_1 + 0x1f5f8) += ecx_3
            int32_t edx_2 = *(i + ecx_1 + 0x1f5f8)
            int32_t ecx_4 = *(i + ecx_1 + 0x1f610)
            
            if (ecx_3 s<= 0)
                if (edx_2 s< ecx_4)
                    *(i + ecx_1 + 0x1f648) = 0
                    *(i + ecx_1 + 0x1f5f8) = ecx_4
            else if (edx_2 s> ecx_4)
                *(i + ecx_1 + 0x1f648) = 0
                *(i + ecx_1 + 0x1f5f8) = ecx_4
        
        int32_t ecx_5 = *(i + ecx_1 + 0x1f64c)
        
        if (ecx_5 != 0)
            *(i + ecx_1 + 0x1f5fc) += ecx_5
            int32_t edx_3 = *(i + ecx_1 + 0x1f5fc)
            int32_t ecx_6 = *(i + ecx_1 + 0x1f614)
            
            if (ecx_5 s<= 0)
                if (edx_3 s< ecx_6)
                    *(i + ecx_1 + 0x1f64c) = 0
                    *(i + ecx_1 + 0x1f5fc) = ecx_6
            else if (edx_3 s> ecx_6)
                *(i + ecx_1 + 0x1f64c) = 0
                *(i + ecx_1 + 0x1f5fc) = ecx_6
    
    void* ecx_7 = data_e7e648
    
    if (*(i + ecx_7 + 0x1f6e0) != 0xffff)
        if (*(ecx_7 + 0x289c) != 0)
            if (*(i + ecx_7 + 0x1f74c) != 0)
                *(i + ecx_7 + 0x1f6fc) = *(i + ecx_7 + 0x1f714)
                *(i + ecx_7 + 0x1f74c) = 0
            
            if (*(i + ecx_7 + 0x1f750) != 0)
                *(i + ecx_7 + 0x1f700) = *(i + ecx_7 + 0x1f718)
                *(i + ecx_7 + 0x1f750) = 0
        
        int32_t ecx_9 = *(i + ecx_7 + 0x1f74c)
        
        if (ecx_9 != 0)
            *(i + ecx_7 + 0x1f6fc) += ecx_9
            int32_t edx_5 = *(i + ecx_7 + 0x1f6fc)
            int32_t ecx_10 = *(i + ecx_7 + 0x1f714)
            
            if (*(i + ecx_7 + 0x1f74c) s<= 0)
                if (edx_5 s< ecx_10)
                    *(i + ecx_7 + 0x1f6fc) = ecx_10
                    *(i + ecx_7 + 0x1f74c) = 0
            else if (edx_5 s> ecx_10)
                *(i + ecx_7 + 0x1f6fc) = ecx_10
                *(i + ecx_7 + 0x1f74c) = 0
        
        int32_t ecx_11 = *(i + ecx_7 + 0x1f750)
        
        if (ecx_11 != 0)
            *(i + ecx_7 + 0x1f700) += ecx_11
            int32_t edx_6 = *(i + ecx_7 + 0x1f700)
            int32_t ecx_12 = *(i + ecx_7 + 0x1f718)
            
            if (*(i + ecx_7 + 0x1f750) s<= 0)
                if (edx_6 s< ecx_12)
                    *(i + ecx_7 + 0x1f700) = ecx_12
                    *(i + ecx_7 + 0x1f750) = 0
            else if (edx_6 s> ecx_12)
                *(i + ecx_7 + 0x1f700) = ecx_12
                *(i + ecx_7 + 0x1f750) = 0
    
    void* ecx_13 = data_e7e648
    result = i + ecx_13 + 0x1f7e4
    
    if (*(i + ecx_13 + 0x1f7e4) != 0xffff)
        if (*(ecx_13 + 0x289c) != 0)
            if (*(result + 0x6c) != 0)
                *(result + 0x1c) = *(result + 0x34)
                *(result + 0x6c) = 0
            
            if (*(result + 0x70) != 0)
                *(result + 0x20) = *(result + 0x38)
                *(result + 0x70) = 0
        
        int32_t ecx_15 = *(result + 0x6c)
        
        if (ecx_15 != 0)
            *(result + 0x1c) += ecx_15
            int32_t edx_8 = *(result + 0x1c)
            int32_t ecx_16 = *(result + 0x34)
            
            if (*(result + 0x6c) s<= 0)
                if (edx_8 s< ecx_16)
                    *(result + 0x1c) = ecx_16
                    *(result + 0x6c) = 0
            else if (edx_8 s> ecx_16)
                *(result + 0x1c) = ecx_16
                *(result + 0x6c) = 0
        
        int32_t ecx_17 = *(result + 0x70)
        
        if (ecx_17 != 0)
            *(result + 0x20) += ecx_17
            int32_t edx_9 = *(result + 0x20)
            int32_t ecx_18 = *(result + 0x38)
            
            if (*(result + 0x70) s<= 0)
                if (edx_9 s< ecx_18)
                    *(result + 0x20) = ecx_18
                    *(result + 0x70) = 0
            else if (edx_9 s> ecx_18)
                *(result + 0x20) = ecx_18
                *(result + 0x70) = 0

return result
