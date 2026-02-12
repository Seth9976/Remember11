// 函数: sub_455de0
// 地址: 0x455de0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

for (int32_t* i = arg1; i != arg2; i = &i[2])
    *i = *arg3
    void* ebx_1 = arg3[1]
    
    if (ebx_1 != i[1])
        if (ebx_1 != 0)
            *(ebx_1 + 4)
            *(ebx_1 + 4) += 1
        
        int32_t* esi_1 = i[1]
        
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
        
        i[1] = ebx_1
