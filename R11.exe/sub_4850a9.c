// 函数: sub_4850a9
// 地址: 0x4850a9
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (sub_48e2cc(sub_48d847(arg1)) != 0)
    int32_t eax_2
    
    if (arg1 == 0x4cbb00)
        eax_2 = 0
    label_4850df:
        data_c7aa6c += 1
        
        if ((arg1[3].w & 0x10c) == 0)
            void* eax_3
            
            if (*((eax_2 << 2) + &data_c7aa74) == 0)
                eax_3 = sub_48b27c(0x1000)
                *((eax_2 << 2) + &data_c7aa74) = eax_3
            
            if (*((eax_2 << 2) + &data_c7aa74) != 0 || eax_3 != 0)
                int32_t edi_1 = *((eax_2 << 2) + &data_c7aa74)
                arg1[2] = edi_1
                *arg1 = edi_1
                arg1[6] = 0x1000
                arg1[1] = 0x1000
            else
                arg1[2] = &arg1[5]
                *arg1 = &arg1[5]
                arg1[6] = 2
                arg1[1] = 2
            
            arg1[3] |= 0x1102
            return 1
    else if (arg1 == 0x4cbb20)
        eax_2 = 1
        goto label_4850df

return 0
