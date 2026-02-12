// 函数: sub_480610
// 地址: 0x480610
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* i_1 = *arg1
void* const i = i_1

while (i != 0)
    if (*(i + 8) == arg2)
        return i
    
    if (i != 0)
        i = *(i + 4)
    else
        i = i_1

return nullptr
