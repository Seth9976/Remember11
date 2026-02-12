// 函数: sub_43f850
// 地址: 0x43f850
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_4 = data_c7bbd0
int32_t ecx = data_c7bbd4
int32_t edx = *arg1
int32_t edx_1

if (edx s> eax_4 && edx s< eax_4 + 0x2800)
    edx_1 = arg1[1]

if (edx s<= eax_4 || edx s>= eax_4 + 0x2800 || edx_1 s<= ecx || edx_1 s>= ecx + 0x1e00)
    int32_t edx_2 = *arg2
    int32_t edx_3
    
    if (edx_2 s> eax_4 && edx_2 s< eax_4 + 0x2800)
        edx_3 = arg2[1]
    
    if (edx_2 s<= eax_4 || edx_2 s>= eax_4 + 0x2800 || edx_3 s<= ecx || edx_3 s>= ecx + 0x1e00)
        int32_t edx_4 = *arg3
        int32_t edx_5
        
        if (edx_4 s> eax_4 && edx_4 s< eax_4 + 0x2800)
            edx_5 = arg3[1]
        
        if (edx_4 s<= eax_4 || edx_4 s>= eax_4 + 0x2800 || edx_5 s<= ecx || edx_5 s>= ecx + 0x1e00)
            int32_t edx_6 = *arg4
            int32_t eax_2
            
            if (edx_6 s> eax_4 && edx_6 s< eax_4 + 0x2800)
                eax_2 = arg4[1]
            
            if (edx_6 s<= eax_4 || edx_6 s>= eax_4 + 0x2800 || eax_2 s<= ecx
                    || eax_2 s>= ecx + 0x1e00)
                return 1

return 0
