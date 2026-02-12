// 函数: sub_453ef0
// 地址: 0x453ef0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (*(arg1 + 8) == 0)
    sub_4539f0(arg1, arg2, 1, *(arg1 + 4), arg5)
    return arg2

int32_t edi_1 = **(arg1 + 4)
int32_t ebp = arg3

if (ebp == 0 || ebp != arg1)
    __invalid_parameter_noinfo()

void* var_c
void** edi_2

if (arg4 != edi_1)
    int32_t edi_4 = *(arg1 + 4)
    
    if (ebp == 0 || ebp != arg1)
        __invalid_parameter_noinfo()
    
    edi_2 = arg5
    
    if (arg4 != edi_4)
        if (sub_452770(edi_2, &arg4[3]) != 0)
            arg3 = ebp
            sub_450f80(&arg3)
            
            if (sub_452770(&arg4[3], edi_2) != 0)
                if (*(arg4[2] + 0x31) == 0)
                    sub_4539f0(arg1, arg2, 1, arg4, edi_2)
                    return arg2
                
                sub_4539f0(arg1, arg2, 0, arg4, edi_2)
                return arg2
        
        if (sub_452770(&arg4[3], edi_2) != 0)
            int32_t eax_18 = *(arg1 + 4)
            arg3 = ebp
            int32_t var_8_1 = eax_18
            var_c = arg1
            sub_450f10(&arg3)
            bool cond:3_1 = sub_45c550(&arg3, &var_c) != 0
            char eax_20
            
            if (not(cond:3_1))
                eax_20 = sub_452770(edi_2, &arg4[3])
            
            if (cond:3_1 || eax_20 != 0)
                if (*(arg4[2] + 0x31) == 0)
                    sub_4539f0(arg1, arg2, 1, arg4, edi_2)
                    return arg2
                
                sub_4539f0(arg1, arg2, 0, arg4, edi_2)
                return arg2
    else if (sub_452770(*(*(arg1 + 4) + 8) + 0xc, edi_2) != 0)
        sub_4539f0(arg1, arg2, 0, *(*(arg1 + 4) + 8), edi_2)
        return arg2
else
    edi_2 = arg5
    
    if (sub_452770(edi_2, &arg4[3]) != 0)
        sub_4539f0(arg1, arg2, 1, arg4, edi_2)
        return arg2

void** eax_24 = sub_453da0(arg1, &var_c, edi_2)
*arg2 = *eax_24
arg2[1] = eax_24[1]
return arg2
