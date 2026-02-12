// 函数: sub_47d480
// 地址: 0x47d480
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* eax = *(arg1 + 0x9c)

if (eax != 0)
    int32_t result = (*(*eax + 0x18))(eax)
    
    if (result s< 0)
        return result
    
    int32_t* eax_1 = *(arg1 + 0x9c)
    (*(*eax_1 + 8))(eax_1)
    *(arg1 + 0x9c) = 0

return 0
