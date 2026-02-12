// 函数: sub_455bf0
// 地址: 0x455bf0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* ebp = arg1

if (ebp == arg2)
    return arg3

int32_t* edi = arg3

do
    *edi = *ebp
    void* ebx_1 = ebp[1]
    
    if (ebx_1 != edi[1])
        if (ebx_1 != 0)
            *(ebx_1 + 4)
            *(ebx_1 + 4) += 1
        
        int32_t* esi_1 = edi[1]
        
        if (esi_1 != 0)
            bool cond:0_1 = esi_1[1] != 1
            esi_1[1] -= 1
            
            if (not(cond:0_1))
                (*(*esi_1 + 4))()
                bool cond:1_1 = esi_1[2] != 1
                esi_1[2]
                esi_1[2] -= 1
                
                if (not(cond:1_1))
                    (*(*esi_1 + 8))()
        
        edi[1] = ebx_1
    
    ebp = &ebp[2]
    edi = &edi[2]
while (ebp != arg2)

return edi
