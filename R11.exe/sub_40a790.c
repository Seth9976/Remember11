// 函数: sub_40a790
// 地址: 0x40a790
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* edx_3 = data_e7e648
int32_t result = arg1

if (result == 0xffffffff)
    result = 0
    int32_t* eax_1 = edx_3 + 0x30bc
    
    while (*eax_1 != 0xffffffff)
        result += 1
        eax_1 = &eax_1[0x12]
        
        if (result s>= 5)
            break

char* eax_3 = arg3 + arg2
int32_t esi_3 = result * 0x48
*(esi_3 + edx_3 + 0x30c4) = arg2
*(esi_3 + data_e7e648 + 0x30c0) = eax_3
*(esi_3 + data_e7e648 + 0x30bc) = result
*(esi_3 + data_e7e648 + 0x30b8) =
    sub_446d10(&(&data_4b00f8)[zx.d(*eax_3) * 3], esi_3 + data_e7e648 + 0x30b8, 0x48, 2)
*(esi_3 + data_e7e648 + 0x30c8) = 0
return result
