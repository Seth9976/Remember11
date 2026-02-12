// 函数: sub_453200
// 地址: 0x453200
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

for (void* i = arg1; i != arg2; i += 8)
    int32_t* esi_1 = *(i + 4)
    
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
