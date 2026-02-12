// 函数: sub_426de0
// 地址: 0x426de0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(*(arg1 + 0x10))
void* esi = *(arg1 + 0x44)

if (eax == 0)
    void* var_c_3 = esi + 0x210
    int32_t eax_14 = sub_4502a0(1, esi + 0x20c)
    
    if (eax_14 == 0xffffffff || eax_14 == 1)
        *(arg1 + 0x10) = 1
else if (eax == 1)
    int32_t* var_c_1 = esi + 0x210
    int32_t eax_4 = sub_4502a0(1, esi + 0x20c)
    
    if (eax_4 == 0xffffffff)
        int32_t edx = *(esi + 8)
        *(esi + 0x220) = 0
        *(esi + 0x21c) = 0
        sub_450120(*(esi + 4), edx, esi + 0x218, esi + 0x21c, esi + 0x220)
        return 0
    
    if (eax_4 == 1)
        if (*(esi + 0x210) + 1 u> 1)
            if (*(esi + 0x218) != 3)
                return 2
            
            *(esi + 0x210) = 0xfffffffb
            return 2
        
        if (*(esi + 0x218) == 3)
            *(esi + 0x210) = 0xfffffffb
            return 2
        
        if (*(esi + 0x220) == 1)
            return 1
        
        *(esi + 0x210) = 0xfffffffe
        return 2

return 0
