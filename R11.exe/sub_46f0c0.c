// 函数: sub_46f0c0
// 地址: 0x46f0c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx = arg1
int32_t edi = 0
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_14 = 0

if (*(ecx + 0x10) != 0)
    *arg6 = arg2
    arg6[1] = arg3
    arg6[2] = arg4
    arg6[3] = arg5
    return 0

void* eax_2 = *(ecx + 0x50)
int32_t edx_2 = *(eax_2 + 0x654)
int32_t ebx = 0x186a0
arg1 = nullptr
int32_t var_24 = edx_2

if (edx_2 s> 0)
    int32_t* ecx_4 = *(eax_2 + 0x650)
    bool cond:3_1
    
    do
        int32_t ebp_1 = *ecx_4
        int32_t var_8_1 = ecx_4[2]
        
        if (ecx_4[3] == *(ecx + 8))
            int32_t eax_6
            int32_t edx_3
            edx_3:eax_6 = sx.q(ecx_4[1] - arg3)
            int32_t eax_9
            int32_t edx_4
            edx_4:eax_9 = sx.q(ebp_1 - arg2)
            int32_t esi_6 = (eax_6 ^ edx_3) - edx_3 + (eax_9 ^ edx_4) - edx_4
            
            if (esi_6 s< ebx)
                var_1c = ecx_4[1]
                edi = ebp_1
                var_18 = ecx_4[2]
                var_14 = ecx_4[3]
                ebx = esi_6
                
                if (esi_6 == 0)
                    break
            
            edx_2 = var_24
        
        ecx_4 = &ecx_4[4]
        cond:3_1 = arg1 + 1 s< edx_2
        arg1 += 1
    while (cond:3_1)

if (edi != 0)
    *arg6 = edi
    arg6[1] = var_1c
    arg6[2] = var_18
    arg6[3] = var_14
    return 0

*arg6 = arg2
arg6[1] = arg3
arg6[2] = arg4
arg6[3] = arg5
return 0x80004005
