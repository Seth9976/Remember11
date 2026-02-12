// 函数: sub_483085
// 地址: 0x483085
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_8 = ecx

if (arg4 == 0)
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    return 0xffffffff

if (arg3 != 0)
    if (arg1 == 0 || arg2 u<= 0)
        *__errno() = 0x16
        sub_481d1b(0, 0, 0, 0, 0)
    else
    label_4830e6:
        void* eax_2 = __errno()
        int32_t result
        
        if (arg2 u<= arg3)
            int32_t eax_7 = *eax_2
            result = sub_482f67(sub_48c44c, arg1, arg2, arg4, arg5, arg6)
            *(arg1 + (arg2 << 1) - 2) = 0
            
            if (result != 0xfffffffe)
            label_483160:
                
                if (result s>= 0)
                    return result
                
                goto label_483167
            
            if (arg3 != 0xffffffff)
            label_483167:
                *arg1 = 0
                
                if (result == 0xfffffffe)
                    *__errno() = 0x22
                    sub_481d1b(0, 0, 0, 0, 0)
            else if (*__errno() == 0x22)
                *__errno() = eax_7
        else
            int32_t edi_2 = *eax_2
            result = sub_482f67(sub_48c44c, arg1, arg3 + 1, arg4, arg5, arg6)
            
            if (result != 0xfffffffe)
                goto label_483160
            
            if (*__errno() == 0x22)
                *__errno() = edi_2
else if (arg1 != 0)
    if (arg2 u> 0)
        goto label_4830e6
    
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
else
    if (arg2 == 0)
        return 0
    
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)

return 0xffffffff
