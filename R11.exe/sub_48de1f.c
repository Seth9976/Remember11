// 函数: sub_48de1f
// 地址: 0x48de1f
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_1c
sub_481612(&var_1c, arg1)
int16_t* edi = arg2

if (arg3 != 0)
    *arg3 = edi

void* var_14
char var_10

if (edi != 0)
    if (arg4 == 0)
    label_48de81:
        uint32_t esi_1 = zx.d(*edi)
        int32_t result = 0
        void* edi_1 = &edi[1]
        
        while (sub_48dd9d(esi_1.w, 8, &var_1c) != 0)
            esi_1 = zx.d(*edi_1)
            edi_1 += 2
        
        if (esi_1.w == 0x2d)
            arg5 |= 2
            esi_1 = zx.d(*edi_1)
            edi_1 += 2
        else if (esi_1.w == 0x2b)
            esi_1 = zx.d(*edi_1)
            edi_1 += 2
        
        if (arg4 != 0)
            goto label_48def3
        
        if (sub_494cf7(esi_1.w) == 0)
            int16_t eax_5 = *edi_1
            
            if (eax_5 == 0x78 || eax_5 == 0x58)
                arg4 = 0x10
            label_48def3:
                
                if (arg4 == 0x10 && sub_494cf7(esi_1.w) == 0)
                    int16_t eax_7 = *edi_1
                    
                    if (eax_7 == 0x78 || eax_7 == 0x58)
                        esi_1 = zx.d(*(edi_1 + 2))
                        edi_1 += 4
            else
                arg4 = 8
        else
            arg4 = 0xa
        
        int32_t eax_8 = 0xffffffff
        int32_t edx_1 = 0
        uint32_t temp0_1 = divu.dp.d(edx_1:eax_8, arg4)
        
        while (true)
            int32_t eax_10 = sub_494cf7(esi_1.w)
            
            if (eax_10 == 0xffffffff)
                if ((esi_1.w u< 0x41 || esi_1.w u> 0x5a) && esi_1.w - 0x61 u> 0x19)
                    break
                
                uint32_t eax_13 = zx.d(esi_1.w)
                
                if (esi_1.w - 0x61 u<= 0x19)
                    eax_13 -= 0x20
                
                eax_10 = eax_13 - 0x37
            
            if (eax_10 u>= arg4)
                break
            
            arg5 |= 8
            
            if (result u< temp0_1 || (result == temp0_1 && eax_10 u<= modu.dp.d(edx_1:eax_8, arg4)))
                result = result * arg4 + eax_10
            else
                arg5 |= 4
                
                if (arg3 == 0)
                    break
            
            esi_1 = zx.d(*edi_1)
            edi_1 += 2
        
        void* edi_8 = edi_1 - 2
        
        if ((arg5.b & 8) == 0)
            if (arg3 != 0)
                edi_8 = arg2
            
            result = 0
        else if ((arg5.b & 4) != 0)
        label_48dfd1:
            *__errno() = 0x22
            
            if ((arg5.b & 1) == 0)
                void* eax_16
                eax_16.b = arg5.b
                eax_16.b &= 2
                char temp4_1 = eax_16.b
                eax_16.b = neg.b(eax_16.b)
                result = neg.d(sbb.d(eax_16, eax_16, temp4_1 != 0)) + 0x7fffffff
            else
                result = 0xffffffff
        else if ((arg5.b & 1) == 0)
            int32_t eax_15 = arg5 & 2
            
            if (eax_15 != 0 && result u> 0x80000000)
                goto label_48dfd1
            
            if (eax_15 == 0 && result u> 0x7fffffff)
                goto label_48dfd1
        
        if (arg3 != 0)
            *arg3 = edi_8
        
        if ((arg5.b & 2) != 0)
            result = neg.d(result)
        
        if (var_10 != 0)
            *(var_14 + 0x70) &= 0xfffffffd
        
        return result
    
    if (arg4 s>= 2 && arg4 s<= 0x24)
        goto label_48de81

*__errno() = 0x16
sub_481d1b(0, 0, 0, 0, 0)

if (var_10 != 0)
    *(var_14 + 0x70) &= 0xfffffffd

return 0
