// 函数: sub_496230
// 地址: 0x496230
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg3 == 0)
    return 0

void* var_14
sub_481612(&var_14, arg4)
void* var_c
char var_8

if (arg1 != 0)
    char* edi_1 = arg2
    
    if (edi_1 != 0)
        if (arg3 u> 0x7fffffff)
            *__errno() = 0x16
            sub_481d1b(0, 0, 0, 0, 0)
            
            if (var_8 != 0)
                *(var_c + 0x70) &= 0xfffffffd
            
            return 0x7fffffff
        
        uint32_t result
        
        if (*(var_14 + 0x14) != 0)
            uint32_t eax_7
            uint32_t eax_9
            
            do
                eax_7 = sub_481694(zx.d(*arg1), &var_14)
                arg1 = &arg1[1]
                eax_9 = sub_481694(zx.d(*edi_1), &var_14)
                edi_1 = &edi_1[1]
                int32_t temp0_1 = arg3
                arg3 -= 1
                
                if (temp0_1 == 1)
                    break
                
                if (eax_7 == 0)
                    break
            while (eax_7 == eax_9)
            
            result = eax_7 - eax_9
        else
            result = ___ascii_strnicmp(arg1, edi_1, arg3)
        
        if (var_8 != 0)
            *(var_c + 0x70) &= 0xfffffffd
        
        return result

*__errno() = 0x16
sub_481d1b(0, 0, 0, 0, 0)

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd

return 0x7fffffff
