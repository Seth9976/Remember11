// 函数: sub_484150
// 地址: 0x484150
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* ebx = arg1

if (ebx == 0 && arg2 != 0)
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    return 

int32_t i_5 = arg3

if (i_5 u<= 0 || arg4 == 0)
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    return 

if (arg2 u< 2)
    return 

char* esi_3 = (arg2 - 1) * i_5 + ebx
int32_t var_f4_1 = 0
char* var_100_1 = ebx
char* var_fc_1 = esi_3

while (true)
    int32_t var_f0[0x1e]
    int32_t var_78[0x1e]
    
    if (divu.dp.d(0:(esi_3 - ebx), i_5) + 1 u> 8)
        char* edi_1 = ((divu.dp.d(0:(esi_3 - ebx), i_5) + 1) u>> 1) * i_5 + ebx
        
        if (arg4(ebx, edi_1) s> 0)
            sub_484090(ebx, i_5, edi_1)
        
        if (arg4(ebx, esi_3) s> 0)
            sub_484090(ebx, i_5, esi_3)
        
        if (arg4(edi_1, esi_3) s> 0)
            sub_484090(edi_1, i_5, esi_3)
        
        while (true)
            if (edi_1 u<= ebx)
            label_4842d6:
                int32_t i
                
                do
                    ebx = &ebx[i_5]
                    
                    if (ebx u> var_fc_1)
                        break
                    
                    i = arg4(ebx, edi_1)
                while (i s<= 0)
            else
                int32_t i_1
                
                do
                    ebx = &ebx[i_5]
                    
                    if (ebx u>= edi_1)
                        goto label_4842d6
                    
                    i_1 = arg4(ebx, edi_1)
                while (i_1 s<= 0)
                
                if (edi_1 u<= ebx)
                    goto label_4842d6
            
            int32_t i_2
            
            do
                esi_3 -= i_5
                
                if (esi_3 u<= edi_1)
                    break
                
                i_2 = arg4(esi_3, edi_1)
            while (i_2 s> 0)
            
            if (ebx u> esi_3)
                break
            
            int32_t i_3 = i_5
            char* eax_21 = esi_3
            
            if (ebx != esi_3)
                int32_t ebp_1 = ebx - esi_3
                
                do
                    char edx_7 = eax_21[ebp_1]
                    eax_21[ebp_1] = *eax_21
                    i_3 -= 1
                    *eax_21 = edx_7
                    eax_21 = &eax_21[1]
                while (i_3 != 0)
                
                i_5 = arg3
            
            if (edi_1 == esi_3)
                edi_1 = ebx
        
        esi_3 = &esi_3[i_5]
        char* eax_23
        
        if (edi_1 u>= esi_3)
        label_484360:
            
            while (true)
                eax_23 = var_100_1
                esi_3 -= i_5
                
                if (esi_3 u<= eax_23)
                    break
                
                if (arg4(esi_3, edi_1) != 0)
                    goto label_48437a
        else
            int32_t i_4
            
            do
                esi_3 -= i_5
                
                if (esi_3 u<= edi_1)
                    goto label_484360
                
                i_4 = arg4(esi_3, edi_1)
            while (i_4 == 0)
            
            if (edi_1 u>= esi_3)
                goto label_484360
            
        label_48437a:
            eax_23 = var_100_1
        
        if (esi_3 - eax_23 s< var_fc_1 - ebx)
            if (ebx u< var_fc_1)
                var_f0[var_f4_1] = ebx
                var_78[var_f4_1] = var_fc_1
                var_f4_1 += 1
            
            if (eax_23 u< esi_3)
                ebx = var_100_1
                var_fc_1 = esi_3
                continue
        else
            if (eax_23 u< esi_3)
                var_f0[var_f4_1] = eax_23
                var_78[var_f4_1] = esi_3
                var_f4_1 += 1
            
            if (ebx u< var_fc_1)
                esi_3 = var_fc_1
                var_100_1 = ebx
                continue
    else
        sub_4840c0(ebx, esi_3, i_5, arg4)
    
    int32_t eax = var_f4_1 - 1
    bool cond:2_1 = var_f4_1 - 1 s< 0
    var_f4_1 = eax
    
    if (cond:2_1)
        break
    
    char* edx_3 = var_f0[eax]
    char* eax_11 = var_78[eax]
    var_100_1 = edx_3
    var_fc_1 = eax_11
    esi_3 = eax_11
    ebx = edx_3
