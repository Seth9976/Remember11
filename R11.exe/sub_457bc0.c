// 函数: sub_457bc0
// 地址: 0x457bc0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (*(arg1 + 8) == 0)
    sub_44d760(arg1, arg2, 1, *(arg1 + 4), arg5)
    return arg2

int32_t edi_1 = **(arg1 + 4)
int32_t ebp = arg3

if (ebp == 0 || ebp != arg1)
    __invalid_parameter_noinfo()

int32_t var_c
int32_t* edi_2

if (arg4 != edi_1)
    int32_t edi_4 = *(arg1 + 4)
    
    if (ebp == 0 || ebp != arg1)
        __invalid_parameter_noinfo()
    
    edi_2 = arg5
    
    if (arg4 != edi_4)
        int32_t eax_6 = *edi_2
        int32_t temp1_1 = arg4[3]
        bool cond:3_1 = temp1_1 u>= eax_6
        
        if (temp1_1 u> eax_6)
            arg3 = ebp
            sub_44cf60(&arg3)
            int32_t eax_7 = *edi_2
            
            if (arg4[3] u< eax_7)
                if (*(arg4[2] + 0x15) == 0)
                    sub_44d760(arg1, arg2, 1, arg4, edi_2)
                    return arg2
                
                sub_44d760(arg1, arg2, 0, arg4, edi_2)
                return arg2
            
            cond:3_1 = arg4[3] u>= eax_7
        
        if (not(cond:3_1))
            int32_t var_8_1 = *(arg1 + 4)
            arg3 = ebp
            var_c = arg1
            sub_450e20(&arg3)
            
            if (sub_45c550(&arg3, &var_c) != 0 || *edi_2 u< arg4[3])
                if (*(arg4[2] + 0x15) == 0)
                    sub_44d760(arg1, arg2, 1, arg4, edi_2)
                    return arg2
                
                sub_44d760(arg1, arg2, 0, arg4, edi_2)
                return arg2
    else
        void** eax_4 = *(*(arg1 + 4) + 8)
        
        if (eax_4[3] u< *edi_2)
            sub_44d760(arg1, arg2, 0, eax_4, edi_2)
            return arg2
else
    edi_2 = arg5
    
    if (*edi_2 u< arg4[3])
        sub_44d760(arg1, arg2, 1, arg4, edi_2)
        return arg2

int32_t* eax_15 = sub_44dd20(arg1, &var_c, edi_2)
*arg2 = *eax_15
arg2[1] = eax_15[1]
return arg2
