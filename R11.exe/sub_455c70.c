// 函数: sub_455c70
// 地址: 0x455c70
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ebp = arg2

if (arg1 == ebp)
    return arg3

int32_t* edi = arg3

do
    int32_t eax_1 = *(ebp - 8)
    ebp -= 8
    edi -= 8
    *edi = eax_1
    void* ebx_1 = *(ebp + 4)
    
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
while (ebp != arg1)

return edi
