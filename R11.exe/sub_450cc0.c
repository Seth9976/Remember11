// 函数: sub_450cc0
// 地址: 0x450cc0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* result = arg1
void* result_2 = *(result + 8)

if (*(result_2 + 0x31) == 0)
    void* result_1 = result_2
    
    do
        result = result_1
        result_1 = *(result + 8)
    while (*(result_1 + 0x31) == 0)

return result
