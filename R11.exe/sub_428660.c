// 函数: sub_428660
// 地址: 0x428660
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* result = data_a5dce4
int32_t i = 0
*(result + 0xa00) = 0

if (arg1 != 0 && data_2b5a728 u> 0)
    int32_t ebp
    int32_t var_c_1 = ebp
    void* ecx_1 = result + 0xa66
    
    do
        int32_t j_1 = 4
        int32_t j
        
        do
            bool cond:1_1
            
            if (arg1 != 1)
                if (*(ecx_1 - 2) == 1)
                    ebp.w = *ecx_1
                    *(result + (zx.d(*(result + 0xa00)) << 1) + 0x500) = ebp.w
                    *(result + 0xa00) += 1
                
                if (*(ecx_1 + 0x2e) == 1)
                    ebp.w = *(ecx_1 + 0x30)
                    *(result + (zx.d(*(result + 0xa00)) << 1) + 0x500) = ebp.w
                    *(result + 0xa00) += 1
                
                if (*(ecx_1 + 0x5e) == 1)
                    ebp.w = *(ecx_1 + 0x60)
                    *(result + (zx.d(*(result + 0xa00)) << 1) + 0x500) = ebp.w
                    *(result + 0xa00) += 1
                
                if (*(ecx_1 + 0x8e) == 1)
                    ebp.w = *(ecx_1 + 0x90)
                    *(result + (zx.d(*(result + 0xa00)) << 1) + 0x500) = ebp.w
                    *(result + 0xa00) += 1
                
                cond:1_1 = *(ecx_1 + 0xbe) != 1
            else
                if (*(ecx_1 - 1) == 1)
                    ebp.w = *ecx_1
                    *(result + (zx.d(*(result + 0xa00)) << 1) + 0x500) = ebp.w
                    *(result + 0xa00) += 1
                
                if (*(ecx_1 + 0x2f) == 1)
                    ebp.w = *(ecx_1 + 0x30)
                    *(result + (zx.d(*(result + 0xa00)) << 1) + 0x500) = ebp.w
                    *(result + 0xa00) += 1
                
                if (*(ecx_1 + 0x5f) == 1)
                    ebp.w = *(ecx_1 + 0x60)
                    *(result + (zx.d(*(result + 0xa00)) << 1) + 0x500) = ebp.w
                    *(result + 0xa00) += 1
                
                if (*(ecx_1 + 0x8f) == 1)
                    ebp.w = *(ecx_1 + 0x90)
                    *(result + (zx.d(*(result + 0xa00)) << 1) + 0x500) = ebp.w
                    *(result + 0xa00) += 1
                
                cond:1_1 = *(ecx_1 + 0xbf) != 1
            
            if (not(cond:1_1))
                ebp.w = *(ecx_1 + 0xc0)
                *(result + (zx.d(*(result + 0xa00)) << 1) + 0x500) = ebp.w
                *(result + 0xa00) += 1
            
            ecx_1 += 0xf0
            j = j_1
            j_1 -= 1
        while (j != 1)
        i += 1
    while (i u< data_2b5a728)

return result
