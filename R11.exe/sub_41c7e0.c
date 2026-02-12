// 函数: sub_41c7e0
// 地址: 0x41c7e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ebp = data_a5d8f8
int32_t edi = 0
void* esi = sx.d(*(ebp + 0x5c2c)) * 0x5c10 + ebp + 0x1c

if (data_a5d904 != 0)
    sub_41e250(&data_49ea48, 1, 0, 0xffff, 0)
    data_a5d904 = 0
    ebp = data_a5d8f8
else
    int32_t ecx_1
    ecx_1.b = *(esi + 0xc) == 0
    int32_t edx_1
    edx_1.b = *(esi + 8) == 0
    
    if (ecx_1 != edx_1)
        sub_41e250(&data_49ea48, 1, 0, 0xffff, 0)
        ebp = data_a5d8f8

void* ecx_3 = *(esi + 0x74) + 1
void* result = ebp + 0x5c2e
int16_t ebx = 0
void* result_1 = result
int16_t var_14 = -1

if (ecx_3 s> 0)
    uint32_t esi_1 = esi + 0x59e4
    uint32_t var_c_1 = esi_1
    void* ecx_4 = ecx_3
    
    do
        int16_t eax_2 = *(ebp + (edi << 2) + 0x5f9e)
        int16_t var_10
        
        if (var_14 != eax_2)
            ebx = *(ebp + (edi << 2) + 0x5fa0)
            int32_t eax_3 = edi + 1
            var_14 = *(ebp + (edi << 2) + 0x5f9e)
            
            if (eax_3 s< ecx_4)
                void* edx_3 = ebp + (eax_3 << 2) + 0x5fa0
                
                do
                    esi_1.w = var_14
                    
                    if (esi_1.w != *(edx_3 - 2))
                        break
                    
                    esi_1 = zx.d(*edx_3)
                    
                    if (ebx u< esi_1.w)
                        ebx = esi_1.w
                    
                    eax_3 += 1
                    edx_3 += 4
                while (eax_3 s< ecx_4)
                
                esi_1 = var_c_1
            
            var_10 = var_14
        else if (eax_2 == 0xffff)
            var_10 = -1
            ebx = 0
        
        bool eax_6
        
        if (*(ebp + (edi << 2) + 0x5f9e) != 0xffff)
            eax_6 = (*(data_e7e648 + 0x289a) != 0) + 2
        else
            eax_6 = *(data_e7e648 + 0x289a) != 0
        
        if (edi != 0)
            if (*(edi + ebp + 0x5fee) == 0)
                sub_41e110(result_1 + (*esi_1 << 1), *(esi_1 + 4), eax_6, var_10, ebx, data_a5d8fc)
                ebp = data_a5d8f8
        else if (*(esi + 8) != edi && *(ebp + 0x5fee) == 0)
            sub_41e110(result_1 + (*esi_1 << 1), *(esi_1 + 4), eax_6, var_10, ebx, data_a5d8fc)
            ebp = data_a5d8f8
        
        result = *(esi + 0x74)
        esi_1 += 0x1c
        edi += 1
        ecx_4 = result + 1
        var_c_1 = esi_1
    while (edi s< ecx_4)

data_a5d8fc += 1
return result
