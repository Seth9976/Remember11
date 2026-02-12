// 函数: sub_450d60
// 地址: 0x450d60
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* result = arg1
void* result_2 = *(result + 8)

if (*(result_2 + 0x15) == 0)
    void* result_1 = result_2
    
    do
        result = result_1
        result_1 = *(result + 8)
    while (*(result_1 + 0x15) == 0)

return result
