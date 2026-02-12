// 函数: sub_418e00
// 地址: 0x418e00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax_17 = data_e7e648
char ecx = *(eax_17 + 0x1d748)

if ((ecx != 1 && *(eax_17 + 0x289c) == 1) || *(eax_17 + 0x28f0) == 0
        || (*(eax_17 + 0x13250) s> 1 && ecx != 1))
    return 0

if (*(eax_17 + 0x28a1) != 0)
    int32_t eax_1
    
    if ((data_2b53608 & 0x4400) == 0)
        eax_1 = sub_45c4f0()
    
    if ((data_2b53608 & 0x4400) != 0 || eax_1 != 0)
        sub_4095a0(1)
        *(data_e7e648 + 0x28a1) = 0
    
    return 1

int32_t result = 0
bool cond:0

if (data_2b5cf1a != 0)
    cond:0 = (*(data_c7cc70 + 8) & 0x8000) == 0
else
    cond:0 = (*(data_c7cc70 + 8) & 8) == 0

if (not(cond:0))
    result = 1

if (sub_45c4f0() != 0)
    result = 1

int32_t eax_5 = data_2b53608

if ((eax_5 & 0x4400) != 0)
    void* eax_6 = data_e7e648
    
    if (*(eax_6 + 0x289b) == 0 && *(eax_6 + 0x289e) == 0)
        sub_4095a0(1)
        *(data_e7e648 + 0x28a1) = 1
else if ((eax_5.b & 4) == 0)
    int32_t eax_10
    
    if ((eax_5 & 0x1002) == 0)
        eax_10 = sub_45c510()
    
    if ((eax_5 & 0x1002) != 0 || eax_10 != 0)
        if (sub_41e2c0() == 1 && *(data_e7e648 + 0x28c0) != 2)
            sub_4095a0(0)
            *(data_e7e648 + 0x2899) = 1
            return 1
        
        sub_4095a0(2)
    else if (result == 1)
        if (*(data_e7e648 + 0x28c0) != 2)
            sub_4095a0(6)
            *(data_e7e648 + 0x2899) = 2
            return result
        
        sub_4095a0(2)
else
    if (*(data_e7e648 + 0x28c0) != 2)
        sub_4095a0(0)
        *(data_e7e648 + 0x28b0) = 0x78
        sub_415a50()
        return 0
    
    sub_4095a0(2)

return 0
