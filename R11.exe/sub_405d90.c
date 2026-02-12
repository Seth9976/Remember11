// 函数: sub_405d90
// 地址: 0x405d90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t i = arg1
int32_t ebp

if (i != 0xffffffff)
    ebp = i + 1
else
    i = 0
    ebp = 0xa

if (i s< ebp)
    char* edi_1 = i * 0x16c + 0x2b696bc
    int32_t i_1 = i
    
    do
        int32_t ecx_1
        i, ecx_1 = sub_405bd0(i_1)
        
        for (; i == 0; i = sub_405bd0(i_1))
            *edi_1 = 1
            
            for (void* j = &data_2b697c4; j s< 0x2b6a5fc; j += 0x16c)
                int32_t eax_2 = *j
                
                if (eax_2 != 0)
                    int16_t eax_3 = eax_2(j)
                    *(j + 0x12) = eax_3
                    
                    if (eax_3 != 0)
                        *j = 0
        
        i_1 += 1
        edi_1 = &edi_1[0x16c]
    while (i_1 s< ebp)

return i
