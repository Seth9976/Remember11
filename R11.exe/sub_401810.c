// 函数: sub_401810
// 地址: 0x401810
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edi = data_2b5a724
void* result
int32_t i

for (i = 0; i s< 0x10000; i += 1)
    result = *(edi + (i << 2))
    
    if (result == 0)
        break
    
    void* eax_1 = result + arg1
    *(edi + (i << 2)) = eax_1
    result = eax_1 + 0x1c
    int32_t j_1 = 0x14
    int32_t j
    
    do
        *(result - 4) += arg1
        *result += arg1
        result += 0x20
        j = j_1
        j_1 -= 1
    while (j != 1)

data_2b5a728 = i
return result
