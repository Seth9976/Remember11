// 函数: sub_446ab0
// 地址: 0x446ab0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebx = data_c7b7a8
int32_t esi = data_c7b7a4
int32_t result = 0xffffffff
int32_t edi = data_c7bbac
int32_t j_1 = 0xffffffff

for (void* i = &data_c7b7ac; i s< &data_c7bbac; i += 4)
    int32_t j = *i
    
    if (j != 0xffffffff)
        if (result != 0xffffffff)
            void* edx
            
            if (j_1 s< 0)
                edx = edi * 0x4c + esi
            else if (j_1 s>= ebx)
                edx = nullptr
            else
                edx = j_1 * 0x4c + esi
            
            *(edx + 0xa) = j.w
            edi = data_c7bbac
            ebx = data_c7b7a8
            esi = data_c7b7a4
        else
            result = j
        
        do
            j_1 = j
            void* ecx_3
            
            if (j s< 0)
                ecx_3 = edi * 0x4c + esi
            else if (j s>= ebx)
                ecx_3 = nullptr
            else
                ecx_3 = j * 0x4c + esi
            
            j = sx.d(*(ecx_3 + 0xa))
        while (j != 0xffffffff)

return result
