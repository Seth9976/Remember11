// 函数: sub_477d80
// 地址: 0x477d80
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t esi = *(arg1 + 0x58)
int32_t edx = 0

if (esi s> 0)
    int32_t* ecx = *(arg1 + 0x54)
    
    do
        int32_t* result = *ecx
        
        if (*result == arg2)
            return result
        
        edx += 1
        ecx = &ecx[1]
    while (edx s< esi)

return nullptr
