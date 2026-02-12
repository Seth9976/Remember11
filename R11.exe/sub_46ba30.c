// 函数: sub_46ba30
// 地址: 0x46ba30
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char var_5 = 0
int32_t* eax

if (arg1[0xd].b == 1)
    eax.b = *(arg1 + 0x35)
    return eax

if (arg1[1] == 0)
    eax.b = 0
    return eax

int32_t i = 0

if (arg1[4] u> 0)
    int32_t var_4
    
    do
        int32_t eax_1 = arg1[1]
        
        if (*(eax_1 + (i << 2)) != 0)
            var_4 = 0
            int32_t* eax_2 = *(eax_1 + (i << 2))
            (*(*eax_2 + 0x24))(eax_2, &var_4)
            var_5 |= var_4.b & 1
        
        i += 1
    while (i u< arg1[4])
    
    if (var_5 == 1)
        char eax_7 = (*(*(*(*arg1 + 0x40))() + 0x1c))()
        
        if (eax_7 == 1)
            return eax_7
        
        int32_t* eax_8 = *arg1[1]
        
        if ((*(*eax_8 + 0x10))(eax_8, &var_4, 0) s< 0)
            eax.b = 0
            return eax
        
        int32_t edx_5 = arg1[9]
        int32_t ecx_5 = var_4
        int32_t eax_11
        
        if (ecx_5 u>= edx_5)
            eax_11 = ecx_5 - edx_5
        else
            eax_11 = arg1[2] - edx_5 + ecx_5
        
        arg1[7] = arg1[0xa] + eax_11
        
        if ((*(*arg1[3] + 0xc))() != 0)
            eax = (*(*arg1[3] + 0xc))()
            
            if (arg1[7] u> eax)
                eax.b = 0
                return eax

eax.b = var_5
return eax
