// 函数: sub_446ba0
// 地址: 0x446ba0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edx = arg2
int32_t* result = nullptr
int32_t edi = arg1
data_c7b7a0 = (&data_4ca00c)[arg3]
int32_t ecx_1 = 0
data_c7b7a4 = edi
data_c7b7a8 = edx
data_c7bbac = 0
data_c7bbb0 = 0

if (edx s> 0)
    void* esi_1 = nullptr
    
    while (true)
        if (ecx_1 s< 0)
            result = result * 0x4c + edi
        else if (ecx_1 s>= edx)
            result = nullptr
        else
            result = esi_1 + edi
        
        __builtin_strncpy(&result[5], "NO ENTRY", 9)
        *result = 0
        result[1].w = 0xffff
        *(result + 6) = 0xffff
        result[2].w = 0xffff
        edx = data_c7b7a8
        ecx_1 += 1
        esi_1 += 0x4c
        
        if (ecx_1 s>= edx)
            break
        
        result = data_c7bbac
        edi = data_c7b7a4

return result
