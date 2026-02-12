// 函数: sub_415a50
// 地址: 0x415a50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char eax = data_2b5cf1b
void* ebx_3

if (eax != 0x1e)
    ebx_3 = zx.d(eax) * 0x1bc + 0x2b5cf1c
    __builtin_memcpy(ebx_3, &data_2b5a860, 0x1bc)
    sub_4015a0(zx.d(data_2b5cf1b), 0)
    data_2b5cf1b += 1
else
    for (int32_t i = 0; i s< 0x1e; i += 1)
        if (sub_4015f0(i) == 0)
            int32_t ebp_1 = i + 1
            
            if (ebp_1 s< 0x1e)
                int32_t j = ebp_1 * 0x1bc + 0x2b5cd60
                
                do
                    __builtin_memcpy(j, j + 0x1bc, 0x1bc)
                    sub_4015a0(ebp_1 - 1, sub_4015f0(ebp_1))
                    j += 0x1bc
                    ebp_1 += 1
                while (j s< &data_2b60168)
            
            break
    
    ebx_3 = &data_2b60168
    __builtin_memcpy(&data_2b60168, &data_2b5a860, 0x1bc)
    sub_4015a0(0x1d, 0)

sub_4013b0()
char ecx_2 = data_2b6035c.b
int16_t edx_1 = (data_2b60364).w - 0x7d0
*(ebx_3 + 0xe9) = data_2b60360.b
char result = data_2b60354.b
*(ebx_3 + 0xe8) = ecx_2
char ecx_3 = data_2b60350.b
*(ebx_3 + 0xea) = edx_1
edx_1.b = data_2b60358.b
*(ebx_3 + 0xe7) = edx_1.b
*(ebx_3 + 0xe6) = result
*(ebx_3 + 0xe5) = ecx_3
return result
