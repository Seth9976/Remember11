// 函数: sub_409d90
// 地址: 0x409d90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (*(arg1 + 0x54) == 0 || *(data_e7e648 + 0x28c5) != 0)
    return 

if (arg2 == 2)
label_409dcf:
    int32_t esi_1 = 0
    void* eax_4 = arg1 + 4
    
    while (*eax_4 != 0)
        esi_1 += 1
        eax_4 += 4
        
        if (esi_1 s>= 0xa)
            return 
    
    int32_t ecx_1
    ecx_1.b = *(arg1 + 0x54) != 2
    int32_t eax_6 = sub_448760() & 0x80000003
    
    if (eax_6 s< 0)
        eax_6 = ((eax_6 - 1) | 0xfffffffc) + 1
    
    int32_t eax_9 = *(((eax_6 + (ecx_1 << 2)) << 2) + &data_4aff64)
    *(arg1 + (esi_1 << 2) + 0x2c) = eax_9
    *(arg1 + (esi_1 << 2) + 4) = **((eax_9 << 2) + &data_4aff2c)
else if (arg2 == 1)
    int32_t* eax = sub_448760() & 0x80000001
    bool cond:1_1 = eax == 0
    
    if (eax s< 0)
        cond:1_1 = ((eax - 1) | 0xfffffffe) == 0xffffffff
    
    if (not(cond:1_1))
        goto label_409dcf
