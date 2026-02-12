// 函数: sub_4814bc
// 地址: 0x4814bc
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg1 u> 0xffffffe0)
    sub_487490(arg1)
    *__errno() = 0xc
    return 0

void* result

while (true)
    uint32_t edi_1 = arg1
    
    if (data_c7ada4 == 0)
        sub_48744d()
        sub_4872ad(0x1e)
        sub_482a89(0xff)
        noreturn
    
    int32_t eax_1 = data_2b6a9b8
    
    if (eax_1 != 1)
        if (eax_1 == 3)
            result = sub_48146d(arg1)
        
        if (eax_1 != 3 || result == 0)
            if (arg1 == 0)
                edi_1 = 1
            
            result = HeapAlloc(data_c7ada4, HEAP_NONE, (edi_1 + 0xf) & 0xfffffff0)
    else
        uint32_t dwBytes
        
        dwBytes = arg1 == 0 ? 1 : arg1
        
        result = HeapAlloc(data_c7ada4, HEAP_NONE, dwBytes)
    
    if (result != 0)
        break
    
    if (data_c7b218 == result)
        *__errno() = 0xc
    else if (sub_487490(arg1) != 0)
        continue
    
    *__errno() = 0xc
    break

return result
