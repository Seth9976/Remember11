// 函数: sub_477b80
// 地址: 0x477b80
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edx = *arg1
int32_t esi = *arg2

if (edx u<= esi)
    if (edx u< esi)
        return 0xffffffff
    
    int32_t edx_1 = arg1[1]
    int32_t esi_1 = arg2[1]
    
    if (edx_1 u<= esi_1)
        if (edx_1 u< esi_1)
            return 0xffffffff
        
        int32_t edx_2 = arg1[3]
        int32_t esi_2 = arg2[3]
        
        if (edx_2 s<= esi_2)
            if (edx_2 s< esi_2)
                return 0xffffffff
            
            int32_t eax_2 = arg1[2]
            int32_t ecx_1 = arg2[2]
            bool c_1 = eax_2 u< ecx_1
            
            if (eax_2 == ecx_1 || c_1)
                return sbb.d(eax_2, eax_2, c_1)

return 1
