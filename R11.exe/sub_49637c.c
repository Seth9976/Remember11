// 函数: sub_49637c
// 地址: 0x49637c
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* var_8 = arg1

if (arg1 == 0)
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    return 0x16

int32_t result
void* eax_2

if (arg3 u> 0)
    *arg1 = 0
    int32_t ecx
    ecx.b = arg5 != 0
    
    if (arg3 u<= ecx + 1)
        eax_2 = __errno()
        result = 0x22
    else if (arg4 - 2 u> 0x22)
        eax_2 = __errno()
        result = 0x16
    else
        int32_t var_8_1 = 0
        void* ecx_4 = arg1
        
        if (arg5 != 0)
            *arg1 = 0x2d
            ecx_4 = &arg1[1]
            var_8_1 = 1
            arg2 = neg.d(arg2)
        
        void* edi_1 = ecx_4
        uint32_t edx_2
        
        do
            int32_t edx_1 = 0
            uint32_t temp1_1 = modu.dp.d(edx_1:arg2, arg4)
            arg2 = divu.dp.d(edx_1:arg2, arg4)
            
            if (temp1_1 u<= 9)
                edx_2.b = temp1_1.b + 0x30
            else
                edx_2.b = temp1_1.b + 0x57
            
            *ecx_4 = edx_2.b
            ecx_4 += 1
            var_8_1 += 1
            
            if (arg2 u<= 0)
                break
        while (var_8_1 u< arg3)
        
        if (var_8_1 u< arg3)
            *ecx_4 = 0
            void* ecx_5 = ecx_4 - 1
            
            do
                edx_2.b = *edi_1
                int32_t eax_3
                eax_3.b = *ecx_5
                *ecx_5 = edx_2.b
                ecx_5 -= 1
                *edi_1 = eax_3.b
                edi_1 += 1
            while (edi_1 u< ecx_5)
            
            return 0
        
        *arg1 = 0
        eax_2 = __errno()
        result = 0x22
else
    eax_2 = __errno()
    result = 0x16

*eax_2 = result
sub_481d1b(0, 0, 0, 0, 0)
return result
