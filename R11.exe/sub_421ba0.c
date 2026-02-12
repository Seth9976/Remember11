// 函数: sub_421ba0
// 地址: 0x421ba0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* eax = data_a5d910
int32_t ebp = 0
void* ebx = &eax[0xa445]
int32_t var_10 = 0x1cf
int32_t var_c = 0x54
char var_22 = 0x80
char var_23 = 0x80
char var_24 = 0x80
void* edi = &data_4b1b7c
int32_t* esi = 0x14

while (true)
    int32_t ecx_1 = *eax
    
    if (ecx_1 == 1 || ecx_1 == 0)
        int32_t ecx_4 = *(esi + eax)
        bool cond:1_1
        
        if (eax[4] != ebp)
            if (ecx_4 s> 0x40)
                *(esi + eax) = ecx_4 - 2
            
            ecx_4 = *(esi + eax)
            cond:1_1 = ecx_4 s>= 0x40
        else
            cond:1_1 = ecx_4 s>= 0x80
        
        if (not(cond:1_1))
            *(esi + eax) = ecx_4 + 2
    else
        int32_t ecx_2 = *(esi + eax)
        
        if (ecx_2 s> 0)
            *(esi + eax) = ecx_2 - 2
    
    eax.b = *(esi + eax)
    int32_t ecx_6 = *(edi + 8)
    int32_t edx_2 = *edi * 0x54
    char var_21_1 = eax.b
    char var_22_1 = eax.b
    char var_23_1 = eax.b
    var_24 = eax.b
    int32_t var_20 = *(edi + 4)
    int32_t var_1c_1 = ecx_6
    int32_t var_18_1 = 0
    int32_t var_14_1 = edx_2
    sub_445470(ebx, &var_20, &var_24, 1)
    esi = &esi[1]
    ebp += 1
    edi += 0xc
    
    if (esi s>= 0x20)
        break
    
    eax = data_a5d910

return sub_442c30(ebx, 1)
