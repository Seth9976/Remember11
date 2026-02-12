// 函数: sub_464d80
// 地址: 0x464d80
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void** esi = arg1 + 0xa0
int32_t i_1 = 0x21
int32_t i

do
    *esi = CreateEventW(nullptr, 0, 0, nullptr)
    esi = &esi[1]
    i = i_1
    i_1 -= 1
while (i != 1)
void* eax_2 = sub_46c130()
data_c78bc0 = eax_2

if (eax_2 != 0)
    bool cond:1_1 = (*(*eax_2 + 4))(arg2, 3) s>= 0
    int32_t* ecx_2 = data_c78bc0
    
    if (cond:1_1)
        (*(*ecx_2 + 8))(2, 0xac44, 0x10)
        *(arg1 + 0x1c) = sub_4833a6(sub_464d40, 0, arg1)
        return 0
    
    if (ecx_2 != 0)
        (**ecx_2)(1)
        data_c78bc0 = i_1

return 0x80004005
