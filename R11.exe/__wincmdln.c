// 函数: __wincmdln
// 地址: 0x4897ca
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edi = 0

if (data_2b6b9f0 == 0)
    ___initmbctable()

void* const result = data_2b6b9f8

if (result == 0)
    result = &data_49e15e

while (true)
    int32_t eax
    eax.b = *result
    
    if (eax.b u<= 0x20)
        if (eax.b == 0)
            return result
        
        if (edi == 0)
            while (true)
                eax.b = *result
                
                if (eax.b == 0)
                    break
                
                if (eax.b u> 0x20)
                    break
                
                result += 1
            
            return result
    
    if (eax.b == 0x22)
        int32_t ecx_1
        ecx_1.b = edi == 0
        edi = ecx_1
    
    if (sub_49200d(eax.b) != 0)
        result += 1
    
    result += 1
