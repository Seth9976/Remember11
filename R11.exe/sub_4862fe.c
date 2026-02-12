// 函数: sub_4862fe
// 地址: 0x4862fe
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* var_18
sub_481612(&var_18, arg1)
char* esi = arg2

if (arg3 != 0)
    *arg3 = esi

void* var_10
char var_c

if (esi != 0)
    if (arg4 == 0)
    label_486360:
        void* ecx_1 = var_18
        int32_t ebx
        ebx.b = *esi
        int32_t result = 0
        void* edi_1 = &esi[1]
        
        while (true)
            int32_t eax_4
            
            if (*(ecx_1 + 0xac) s<= 1)
                eax_4 = zx.d(*(*(ecx_1 + 0xc8) + (zx.d(ebx.b) << 1))) & 8
            else
                eax_4 = sub_48956a(zx.d(ebx.b), 8, &var_18)
                ecx_1 = var_18
            
            if (eax_4 == 0)
                break
            
            ebx.b = *edi_1
            edi_1 += 1
        
        if (ebx.b == 0x2d)
            arg5 |= 2
            ebx.b = *edi_1
            edi_1 += 1
        else if (ebx.b == 0x2b)
            ebx.b = *edi_1
            edi_1 += 1
        
        if (arg4 s< 0 || arg4 == 1 || arg4 s> 0x24)
            if (arg3 != 0)
                *arg3 = esi
            
            if (var_c != 0)
                *(var_10 + 0x70) &= 0xfffffffd
            
            return 0
        
        if (arg4 != 0)
            if (arg4 == 0x10 && ebx.b == 0x30)
                goto label_48640d
        else if (ebx.b == 0x30)
            int32_t eax_7
            eax_7.b = *edi_1
            
            if (eax_7.b == 0x78 || eax_7.b == 0x58)
                arg4 = 0x10
            label_48640d:
                eax_7.b = *edi_1
                
                if (eax_7.b == 0x78 || eax_7.b == 0x58)
                    ebx.b = *(edi_1 + 1)
                    edi_1 += 2
            else
                arg4 = 8
        else
            arg4 = 0xa
        
        int32_t eax_8 = 0xffffffff
        int32_t edx_2 = 0
        uint32_t temp0_1 = divu.dp.d(edx_2:eax_8, arg4)
        
        while (true)
            int16_t ecx_3 = *(*(ecx_1 + 0xc8) + (zx.d(ebx.b) << 1))
            int32_t ecx_5
            
            if ((ecx_3.b & 4) == 0)
                if ((ecx_3 & 0x103) == 0)
                    break
                
                ecx_3.b = ebx.b
                ecx_3.b -= 0x61
                int32_t ecx_6 = sx.d(ebx.b)
                
                if (ecx_3.b u<= 0x19)
                    ecx_6 -= 0x20
                
                ecx_5 = ecx_6 - 0x37
            else
                ecx_5 = sx.d(ebx.b) - 0x30
            
            if (ecx_5 u>= arg4)
                break
            
            arg5 |= 8
            
            if (result u< temp0_1 || (result == temp0_1 && ecx_5 u<= modu.dp.d(edx_2:eax_8, arg4)))
                result = result * arg4 + ecx_5
            else
                arg5 |= 4
                
                if (arg3 == 0)
                    break
            
            ebx.b = *edi_1
            edi_1 += 1
        
        void* edi_3 = edi_1 - 1
        
        if ((arg5.b & 8) == 0)
            if (arg3 != 0)
                edi_3 = arg2
            
            result = 0
        else if ((arg5.b & 4) != 0)
        label_4864ca:
            *__errno() = 0x22
            
            if ((arg5.b & 1) == 0)
                void* eax_12
                eax_12.b = arg5.b
                eax_12.b &= 2
                char temp4_1 = eax_12.b
                eax_12.b = neg.b(eax_12.b)
                result = neg.d(sbb.d(eax_12, eax_12, temp4_1 != 0)) + 0x7fffffff
            else
                result = 0xffffffff
        else if ((arg5.b & 1) == 0)
            int32_t eax_11 = arg5 & 2
            
            if (eax_11 != 0 && result u> 0x80000000)
                goto label_4864ca
            
            if (eax_11 == 0 && result u> 0x7fffffff)
                goto label_4864ca
        
        if (arg3 != 0)
            *arg3 = edi_3
        
        if ((arg5.b & 2) != 0)
            result = neg.d(result)
        
        if (var_c != 0)
            *(var_10 + 0x70) &= 0xfffffffd
        
        return result
    
    if (arg4 s>= 2 && arg4 s<= 0x24)
        goto label_486360

*__errno() = 0x16
sub_481d1b(0, 0, 0, 0, 0)

if (var_c != 0)
    *(var_10 + 0x70) &= 0xfffffffd

return 0
