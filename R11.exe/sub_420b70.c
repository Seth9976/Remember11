// 函数: sub_420b70
// 地址: 0x420b70
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* esi = arg1
int32_t i = 0
char* result = sub_480cf0(esi, 0, 0x7800)
char* result_1 = nullptr

if (data_2b5a728 u> 0)
    while (true)
        void* edi_1 = *(data_2b5a724 + (result_1 << 2))
        int32_t var_4_1 = 0x14
        
        while (true)
            *(esi + 2) = *(edi_1 + 2)
            *(esi + 0x18) = *(edi_1 + 0x18)
            *(esi + 0x1c) = *(edi_1 + 0x1c)
            *(esi + 4) = *(edi_1 + 4)
            *(esi + 6) = *(edi_1 + 6)
            void* ebx_1 = &esi[4]
            *(esi + 8) = *(edi_1 + 8)
            *(esi + 0xa) = *(edi_1 + 0xa)
            *(esi + 0xc) = *(edi_1 + 0xc)
            *(esi + 0xe) = *(edi_1 + 0xe)
            *(esi + 0x10) = *(edi_1 + 0x10)
            *(esi + 0x12) = *(edi_1 + 0x12)
            *(esi + 0x14) = *(edi_1 + 0x14)
            *(esi + 0x16) = *(edi_1 + 0x16)
            int16_t eax_5 = *(edi_1 + 4)
            
            if (eax_5 == 0)
                __builtin_memset(&esi[2], 0, 0x16)
            else if (*edi_1 != 0 && sub_401ff0(zx.d(eax_5)) != 1)
                __builtin_memset(&esi[2], 0, 0x16)
            
            *esi = 0
            arg1 = nullptr
            
            do
                if (*ebx_1 != 0)
                    arg1 = &arg1[1]
                    esi[i + 0x20] = 0
                    int32_t eax_8 = sub_401ff0(sx.d(*ebx_1))
                    
                    if (eax_8 == 1)
                        *esi = eax_8.b
                        esi[i + 0x20] = eax_8.b
                
                i += 1
                ebx_1 += 2
            while (i s< 0xa)
            
            bool cond:1_1 = *esi == 0
            *(esi + 0x2c) = arg1
            esi[1] = 0
            
            if (not(cond:1_1))
                int16_t eax_9 = *(esi + 4)
                
                if (eax_9 != 0)
                    int32_t eax_11 = sub_4020c0(sx.d(eax_9))
                    
                    if (eax_11 == 1)
                        esi[1] = eax_11.b
            
            esi = &esi[0x30]
            edi_1 += 0x20
            int32_t temp0_1 = var_4_1
            var_4_1 -= 1
            
            if (temp0_1 == 1)
                break
            
            i = 0
        
        result = &result_1[1]
        result_1 = result
        
        if (result u>= data_2b5a728)
            break
        
        i = 0

return result
