// 函数: sub_477fd0
// 地址: 0x477fd0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* esi = arg2
int32_t i = 0
int32_t i_1 = 0

if (esi[6] s<= 0)
    return 

int32_t edi
int32_t var_18_1 = edi

do
    int32_t ebp_1 = *(esi[5] + (i << 2))
    void* j = nullptr
    arg2 = nullptr
    
    if (esi[9] s> 0)
        do
            int32_t ebx_1 = *(esi[8] + (j << 2))
            int32_t* eax_1 = *arg1
            
            if ((*(*eax_1 + 0x2c))(eax_1, *esi, esi[1], ebp_1, esi[4], ebx_1, 0) s< 0
                    && sub_477cf0(&esi[0x11], esi[0x12] + 1) s>= 0)
                int32_t ecx_5 = esi[0x12]
                int32_t eax_5 = esi[0x11]
                *(eax_5 + (ecx_5 << 3)) = ebp_1
                *(eax_5 + (ecx_5 << 3) + 4) = ebx_1
                esi[0x12] += 1
            
            j = arg2 + 1
            arg2 = j
        while (j s< esi[9])
        
        i = i_1
    
    i += 1
    i_1 = i
while (i s< esi[6])
