// 函数: sub_41ff00
// 地址: 0x41ff00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx_8 = data_e7e648
int32_t eax = *(ecx_8 + 0xbf02c)

if (eax == 0)
    if ((data_2b53608 & 0x4400) != 0)
    label_420137:
        sub_4095a0(1)
        
        if (*(data_e7e648 + 0xbf028) == 0)
            return 1
        
        sub_41fe50()
    else
        if (sub_45c4f0() != 0)
            goto label_420137
        
        if (sub_45c4f0() != 0)
            goto label_420137
        
        int32_t eax_13
        
        if ((data_2b53610 & 0x602360) == 0)
            eax_13 = sub_45c4e0()
        
        if ((data_2b53610 & 0x602360) != 0 || eax_13 != 0)
            void* eax_22 = data_e7e648
            
            if (*(eax_22 + 0xbf020) != *(eax_22 + 0xbf024) - 1)
                sub_4095a0(3)
                void* eax_23 = data_e7e648
                *(eax_23 + 0xbf020) += 1
                sub_441740(data_e7e648 + 0xbf030, 0x280, 8)
                sub_441760(data_e7e648 + 0xbf030, 0, 0)
                void* eax_26 = data_e7e648
                *(eax_26 + 0xbf01c)
                sub_41f8f0(*(eax_26 + 0xbf020))
        else if ((data_2b53610 & 0x900890) != 0)
            if (*(data_e7e648 + 0xbf020) != 0)
                sub_4095a0(3)
                void* eax_17 = data_e7e648
                *(eax_17 + 0xbf020) -= 1
                sub_441740(data_e7e648 + 0xbf030, 0xfffffd80, 8)
                sub_441760(data_e7e648 + 0xbf030, 0, 0)
                void* eax_20 = data_e7e648
                *(eax_20 + 0xbf01c)
                sub_41f8f0(*(eax_20 + 0xbf020))
        else if ((data_2b53608.b & 1) != 0)
            if (*(data_e7e648 + 0xbec74) == 0)
                sub_4095a0(2)
                return 0
            
            sub_4095a0(4)
            return 2
else if (eax == 1 && sub_4417d0(ecx_8 + 0xbf030) != 0)
    int32_t* var_10
    int32_t var_c
    
    if (sub_441790(data_e7e648 + 0xbf030) s<= 0)
        var_c = 0x280
        var_10 = data_e7e648 + 0xbf030
    else
        var_c = 0xfffffd80
        var_10 = data_e7e648 + 0xbf030
    
    sub_441740(var_10, var_c, 8)
    sub_441760(data_e7e648 + 0xbf030, 0, 0)
    void* eax_9 = data_e7e648
    *(eax_9 + 0xbf01c)
    sub_41f8f0(*(eax_9 + 0xbf020))
    *(data_e7e648 + 0xbf02c) = 0

return 0
