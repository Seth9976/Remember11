// 函数: sub_418fb0
// 地址: 0x418fb0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* result = data_e7e648

if (*(result + 0x28a2) == 0)
    if (*(result + 0x28c3) == 0)
        result = sub_418e00()
        
        if (result != 1)
            void* eax = data_e7e648
            
            if (*(eax + 0x28c2) != 0)
                sub_415460()
                *(data_e7e648 + 0x289b) = 0
                eax = data_e7e648
            else if (*(eax + 0x28a1) == 0)
                sub_418be0()
                sub_418d30()
                eax = data_e7e648
            
            *(eax + 0x289c) = *(eax + 0x28a0) | *(eax + 0x289f) | *(eax + 0x289e)
            result = data_e7e648
            
            if (*(result + 0x28a4) != 0)
                if ((*(data_c7cc70 + 8) & 8) != 0)
                    *(result + 0x28a6) = 1
                
                return sub_415460() __tailcall
    else
        sub_415460()
        result = data_e7e648
        *(result + 0x289b) = 0
        *(data_e7e648 + 0x289d) = 0x40

return result
