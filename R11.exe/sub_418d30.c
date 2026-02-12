// 函数: sub_418d30
// 地址: 0x418d30
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* const eax = data_e7e648

if (*(eax + 0x289c) == 0)
    if (*(eax + 0x289b) != 0)
        int32_t esi_1 = 0
        
        if (data_2b53660 s> 0x3c)
            esi_1 = 1
        
        if (data_2b5364c s> 0x3c)
            esi_1 = 1
        
        if ((data_2b53608 & 0x4400) == 0)
            eax = sub_45c4f0()
        
        if ((data_2b53608 & 0x4400) != 0 || eax != 0 || esi_1 == 1)
            data_2b53660 = 0
            data_2b5364c = 0
            eax = sub_4095a0(1)
            *(data_e7e648 + 0x289b) = 0
            *(data_e7e648 + 0x289d) = 0x40
    else
        eax = nullptr
        
        if (data_2b53660 s> 0x3c)
            eax = 1
        
        if (data_2b5364c s> 0x3c || eax == 1)
            data_2b53660 = 0
            data_2b5364c = 0
            sub_4095a0(9)
            void* eax_1 = data_e7e648
            *(eax_1 + 0x289b) = 1
            return eax_1

return eax
