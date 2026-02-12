// 函数: sub_486246
// 地址: 0x486246
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* edx = arg2

while ((edx & 3) != 0)
    char ecx = *edx
    edx = &edx[1]
    
    if (ecx == arg1.b)
        return &edx[0xffffffff]
    
    if (ecx == 0)
        return 0

int32_t ebx_1 = arg1 | arg1 << 8
int32_t ebx_3 = ebx_1 << 0x10 | ebx_1

while (true)
    int32_t ecx_1 = *edx
    int32_t ecx_2 = ecx_1 ^ ebx_3
    edx = &edx[4]
    
    if (((ecx_2 ^ 0xffffffff ^ (0x7efefeff + ecx_2)) & 0x81010100) != 0)
        int32_t eax_8 = *(edx - 4)
        
        if (eax_8.b == ebx_3.b)
            return &edx[0xfffffffc]
        
        if (eax_8.b == 0)
            break
        
        if (eax_8:1.b == ebx_3.b)
            return &edx[0xfffffffd]
        
        if (eax_8:1.b == 0)
            break
        
        uint16_t eax_9 = (eax_8 u>> 0x10).w
        
        if (eax_9.b == ebx_3.b)
            return &edx[0xfffffffe]
        
        if (eax_9.b == 0)
            break
        
        if (eax_9:1.b == ebx_3.b)
            return &edx[0xffffffff]
        
        if (eax_9:1.b == 0)
            break
    else
        int32_t eax_5 = (ecx_1 ^ 0xffffffff ^ (0x7efefeff + ecx_1)) & 0x81010100
        
        if (eax_5 != 0)
            if ((eax_5 & 0x1010100) != 0)
                break
            
            if (((0x7efefeff + ecx_1) & 0x80000000) == 0)
                break

return 0
