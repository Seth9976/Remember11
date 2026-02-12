// 函数: sub_478720
// 地址: 0x478720
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* ecx = arg4
int32_t i = 0
bool cond:0 = ecx[1] s<= 0
int32_t var_18
__builtin_memcpy(&var_18, 
    "\x15\x00\x00\x00\x16\x00\x00\x00\x23\x00\x00\x00\x17\x00\x00\x00\x19\x00\x00\x00\x18\x00\x00\x00", 
    0x18)
int32_t i_1 = 0

if (not(cond:0))
    void* ebp_1 = arg3
    
    do
        int32_t edx_1 = *(*ecx + (i << 2))
        int32_t j = 0
        int32_t j_1 = 0
        
        do
            int32_t eax = (&var_18)[j]
            void* k = nullptr
            arg3 = nullptr
            
            do
                if (k != 0 || arg2[0x195] != 0)
                    int32_t* eax_1 = *arg1
                    int32_t eax_2
                    int32_t edx_4
                    eax_2, edx_4 = (*(*eax_1 + 0x24))(eax_1, *arg2, *(ebp_1 + 4), edx_1, eax, k)
                    
                    if (eax_2 s>= 0)
                        int32_t eax_5
                        
                        if (arg1[3].b != 0)
                            int32_t* eax_3 = *arg1
                            eax_5, edx_4 = (*(*eax_3 + 0x28))(eax_3, *arg2, *(ebp_1 + 4), edx_1, 
                                0x80000, 3, eax)
                        
                        if (arg1[3].b == 0 || eax_5 s>= 0)
                            int32_t eax_6 = arg1[1]
                            char eax_7
                            
                            if (eax_6 != 0)
                                edx_4.b = k != 0
                                eax_7 = eax_6(ebp_1 + 8, edx_1, eax, edx_4, arg1[2])
                            
                            if (eax_6 == 0 || eax_7 != 0)
                                void* eax_8 = sub_481fef(0x58)
                                
                                if (eax_8 == 0)
                                    return 0x8007000e
                                
                                __builtin_memset(eax_8 + 0x14, 0, 0x3c)
                                *eax_8 = *arg2
                                *(eax_8 + 4) = *(ebp_1 + 4)
                                int32_t ecx_11
                                ecx_11.b = arg3 != 0
                                *(eax_8 + 8) = edx_1
                                *(eax_8 + 0xc) = eax
                                *(eax_8 + 0x10) = ecx_11
                                sub_477e70(arg1, eax_8)
                                sub_477f10(arg1, eax_8)
                                
                                if (*(eax_8 + 0x24) != 0)
                                    sub_477fd0(arg1, eax_8)
                                    sub_478080(arg1, ebp_1, eax_8)
                                    *(eax_8 + 0x50) = arg2
                                    *(eax_8 + 0x54) = ebp_1
                                    
                                    if (sub_477bd0(ebp_1 + 0x138, *(ebp_1 + 0x13c) + 1) s>= 0)
                                        *(*(ebp_1 + 0x138) + (*(ebp_1 + 0x13c) << 2)) = eax_8
                                        *(ebp_1 + 0x13c) += 1
                                else
                                    sub_4785c0(eax_8)
                                    j_sub_4813df(eax_8)
                                
                                k = arg3
                
                k += 1
                arg3 = k
            while (k s< 2)
            
            j = j_1 + 1
            j_1 = j
        while (j u< 6)
        
        ecx = arg4
        i = i_1 + 1
        i_1 = i
    while (i s< ecx[1])

return 0
