// 函数: sub_401940
// 地址: 0x401940
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* i = nullptr
int32_t edi = data_2b5a73c

if (data_2b5a740 u<= 0)
    return 

do
    int32_t* eax = *(edi + (i << 2))
    int32_t j
    
    for (j = 0; j s< 0x10000; )
        int32_t esi_1 = *eax
        
        if (esi_1 == 0)
            break
        
        *eax = esi_1 + 0x22166a0
        j += 1
        eax = &eax[1]
    
    *(i + 0x2b5a74c) = j.b
    i += 1
while (i u< data_2b5a740)
