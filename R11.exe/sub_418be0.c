// 函数: sub_418be0
// 地址: 0x418be0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* result = data_e7e648

if (*(result + 0x289a) == 1 || data_2b5cf0f == 1)
    int32_t esi_1 = 0
    bool cond:0_1
    
    if (data_2b5cf1a != 0)
        cond:0_1 = (*(data_c7cc70 + 8) & 8) == 0
    else
        cond:0_1 = (*(data_c7cc70 + 8) & 0x8000) == 0
    
    if (not(cond:0_1))
        esi_1 = 1
    
    int32_t eax
    
    if (*(result + 0x289e) != 0)
        eax = sub_45c510()
    else
        eax = sub_45c520()
    
    result = data_e7e648
    
    if ((esi_1 | eax) != 1)
        if (*(result + 0x289e) == 1)
            bool cond:2_1
            
            if (*(result + 0x1d748) == 1)
                cond:2_1 = (*(data_c7cc70 + 8) & 0x4000) == 0
            else
                cond:2_1 = data_2b53608 == 0
            
            if (not(cond:2_1))
                goto label_418c90
    else if (*(result + 0x289e) != 0)
    label_418c90:
        sub_4095a0(1)
        *(data_e7e648 + 0x289e) = 0
        *(data_e7e648 + 0x289d) = 0x40
        result = data_e7e648
    else
        sub_4095a0(0xa)
        *(data_e7e648 + 0x289e) = 1
        result = data_e7e648
    
    if ((*(data_c7cc70 + 4) & 0x800) == 0)
        *(result + 0x289f) = 0
        result = data_e7e648
    else if (*(result + 0x1d748) != 1)
        *(result + 0x289f) = 1
        result = data_e7e648

if ((*(data_c7cc70 + 4) & 0x200) == 0)
    *(result + 0x28a0) = 0
    result = data_e7e648
else if (*(result + 0x1d748) != 1)
    *(result + 0x28a0) = 1
    result = data_e7e648

void* ecx
ecx.b = *(result + 0x28a0)
ecx.b |= *(result + 0x289f)
ecx.b |= *(result + 0x289e)
*(result + 0x289c) = ecx.b
return result
