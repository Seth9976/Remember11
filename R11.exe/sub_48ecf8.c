// 函数: sub_48ecf8
// 地址: 0x48ecf8
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg4 != 0)
    if (arg1 == 0)
        goto label_48ed2a
    
label_48ed1c:
    int32_t i_2 = arg2
    
    if (i_2 u<= 0)
        goto label_48ed2a
    
    if (arg4 != 0)
        char* edx_1 = arg3
        
        if (edx_1 == 0)
            *arg1 = 0
        label_48ed2a:
            *__errno() = 0x16
            sub_481d1b(0, 0, 0, 0, 0)
            return 0x16
        
        char* eax_3 = arg1
        char ecx
        
        if (arg4 != 0xffffffff)
            int32_t i
            
            do
                ecx = *edx_1
                *eax_3 = ecx
                eax_3 = &eax_3[1]
                edx_1 = &edx_1[1]
                
                if (ecx == 0)
                    break
                
                int32_t i_3 = i_2
                i_2 -= 1
                
                if (i_3 == 1)
                    break
                
                i = arg4
                arg4 -= 1
            while (i != 1)
            
            if (arg4 == 0)
                *eax_3 = 0
        else
            int32_t i_1
            
            do
                ecx = *edx_1
                *eax_3 = ecx
                eax_3 = &eax_3[1]
                edx_1 = &edx_1[1]
                
                if (ecx == 0)
                    break
                
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
        
        if (i_2 == 0)
            if (arg4 == 0xffffffff)
                arg1[arg2 - 1] = 0
                return 0x50
            
            *arg1 = 0
            *__errno() = 0x22
            sub_481d1b(0, 0, 0, 0, 0)
            return 0x22
    else
        *arg1 = 0
else
    if (arg1 != 0)
        goto label_48ed1c
    
    if (arg2 != 0)
        goto label_48ed2a

return 0
