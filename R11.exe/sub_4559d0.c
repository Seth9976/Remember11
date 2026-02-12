// 函数: sub_4559d0
// 地址: 0x4559d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebx = *arg2

if (ebx != *arg1)
    if (ebx != 0)
        *(ebx + 4)
        *(ebx + 4) += 1
    
    int32_t* esi_1 = *arg1
    
    if (esi_1 != 0)
        bool cond:0_1 = esi_1[1] != 1
        esi_1[1]
        esi_1[1] -= 1
        
        if (not(cond:0_1))
            (*(*esi_1 + 4))()
            bool cond:1_1 = esi_1[2] != 1
            esi_1[2]
            esi_1[2] -= 1
            
            if (not(cond:1_1))
                (*(*esi_1 + 8))()
    
    *arg1 = ebx

return arg1
