// 函数: sub_477f10
// 地址: 0x477f10
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* var_4 = arg1
int32_t i = 0
int32_t i_1 = 0

if (arg1[8] s> 0)
    int32_t* edi_1 = arg2
    
    do
        int32_t ebp_1 = *(arg1[7] + (i << 2))
        int32_t* eax = *arg1
        
        if ((*(*eax + 0x2c))(eax, *edi_1, edi_1[1], edi_1[3], edi_1[4], ebp_1, &arg2) s>= 0)
            if (sub_477bd0(&edi_1[8], edi_1[9] + 1) s>= 0)
                *(edi_1[8] + (edi_1[9] << 2)) = ebp_1
                edi_1[9] += 1
            
            int32_t* eax_6 = arg1[0x14] + 1
            
            if (arg2 u> eax_6)
                arg2 = eax_6
            
            if (sub_477bd0(&edi_1[0xb], edi_1[0xc] + 1) s>= 0)
                *(edi_1[0xb] + (edi_1[0xc] << 2)) = arg2
                edi_1[0xc] += 1
        
        i = i_1 + 1
        i_1 = i
    while (i s< arg1[8])

return i
