// 函数: sub_421f30
// 地址: 0x421f30
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* result = data_a5d910
*(result + 0x7adc) = 0
int32_t esi_1 = *(result + 0x7ad8) + 1
int16_t ecx_5 = *(result + ((esi_1
    + ((*(result + 0x7850) + (*(result + 0x24) << 2)) * 5 + *(result + 0x784c)) * 0x18) << 1) + 0x50)

if (ecx_5 != 0)
    while (true)
        bool cond:1_1 = sub_401ff0(sx.d(ecx_5)) != 0
        result = data_a5d910
        
        if (cond:1_1)
            *(result + 0x7adc) += 1
            break
        
        esi_1 += 1
        ecx_5 = *(result + ((esi_1
            + ((*(result + 0x7850) + (*(result + 0x24) << 2)) * 5 + *(result + 0x784c)) * 0x18) << 1)
            + 0x50)
        
        if (ecx_5 == 0)
            int32_t ecx_11
            ecx_11.b = *(result + 0x7adc) == 0
            data_4b1c00 = ecx_11
            return result

int32_t ecx_12
ecx_12.b = *(result + 0x7adc) == 0
data_4b1c00 = ecx_12
return result
