// 函数: sub_48a315
// 地址: 0x48a315
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t result

if (arg1 == 0)
    result = 0x16
    *__errno() = 0x16
else
    int32_t i_1 = arg2
    
    if (i_1 u> 0)
        char* esi_1 = arg3
        
        if (esi_1 != 0)
            char* edx_1 = arg1
            int32_t i
            
            do
                char eax = *esi_1
                *edx_1 = eax
                edx_1 = &edx_1[1]
                esi_1 = &esi_1[1]
                
                if (eax == 0)
                    break
                
                i = i_1
                i_1 -= 1
            while (i != 1)
            
            if (i_1 != 0)
                return 0
            
            *arg1 = 0
            *__errno() = 0x22
            result = 0x22
        else
            *arg1 = 0
            result = 0x16
            *__errno() = 0x16
    else
        result = 0x16
        *__errno() = 0x16

sub_481d1b(0, 0, 0, 0, 0)
return result
