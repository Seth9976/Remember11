// 函数: sub_41ca70
// 地址: 0x41ca70
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ebp = data_e7e648

if (*(ebp + 0x28a2) != 0)
    return 

void* esi_1 = data_a5d8f8

if (*(esi_1 + 0x20) == 0 || *(esi_1 + 0x18) s>= 2 || *(ebp + 0x2899) != 0 || *(esi_1 + 0xa4cc) != 0)
    return 

if (*(ebp + 0x28c3) == 0)
    int32_t* eax = sub_41b560()
    
    if (eax != 0)
        int32_t edi_1 = 0
        bool cond:1_1
        
        if ((data_2b53608 & 0x2100) == 0)
            cond:1_1 = sub_45c4e0() == 0
            ebp = data_e7e648
            esi_1 = data_a5d8f8
        
        if ((data_2b53608 & 0x2100) != 0 || not(cond:1_1))
            edi_1 = 1
        
        bool cond:3_1
        
        if (data_2b5cf1a != 0)
            cond:3_1 = (*(data_c7cc70 + 8) & 0x8000) == 0
        else
            cond:3_1 = (*(data_c7cc70 + 8) & 8) == 0
        
        if (not(cond:3_1))
            edi_1 = 1
        
        eax = data_2b53608
        
        if ((eax & 0x1002) != 0)
            edi_1 = 1
        
        if ((1 & eax.b) != 0)
            edi_1 = 1
        
        if (*(ebp + 0x289c) == 1 || edi_1 == 1)
            int32_t var_14_2
            
            if (*(ebp + 0x28cc) == 0xffff)
                var_14_2 = *((zx.d(data_2b5cf0d) << 2) + &data_4b170c)
            else
                var_14_2 = *((zx.d(data_2b5cf0d) << 2) + &data_4b16fc)
            
            sub_419310(esi_1 + 0xa500, var_14_2)
            data_a5d8f8[6] = 1
    else
        if ((data_2b53608.b & 1) != 0)
            if (*(esi_1 + 0xa4d4) != eax)
                sub_4095a0(4)
                void* ecx_1 = data_a5d8f8
                *(data_e7e648 + 0x28a2) = 1
                *(ecx_1 + 0xa4cc) = 1
                return 
            
            sub_4095a0(2)
            ebp = data_e7e648
            esi_1 = data_a5d8f8
        
        if (*(esi_1 + 0x18) == 0)
            int32_t var_14_1
            
            if (*(ebp + 0x28cc) == 0xffff)
                var_14_1 = *((zx.d(data_2b5cf0d) << 2) + &data_4b170c)
            else
                var_14_1 = *((zx.d(data_2b5cf0d) << 2) + &data_4b16fc)
            
            sub_419310(esi_1 + 0xa500, var_14_1)
            esi_1 = data_a5d8f8
        
        bool cond:2_1 = *(esi_1 + 0x14) != 0
        *(esi_1 + 0x18) = 1
        
        if (not(cond:2_1))
            if (data_e7e648[0xa27].b == 1)
                *(esi_1 + 0x18) = 2
            
            bool cond:4_1
            
            if ((data_2b53608 & 0x2100) == 0)
                cond:4_1 = sub_45c4e0() == 0
                esi_1 = data_a5d8f8
            
            if ((data_2b53608 & 0x2100) != 0 || not(cond:4_1))
                *(esi_1 + 0x18) = 2
            
            if (*(data_e7e648 + 0x289b) == 1 && sub_419330(esi_1 + 0xa500, 2) == 1)
                *(data_a5d8f8 + 0x18) = 3
else if (sub_41b560() == 0)
    *(esi_1 + 0x18) = 1
