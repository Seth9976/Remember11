// 函数: sub_416ea0
// 地址: 0x416ea0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edx = arg1
int32_t ecx

if (edx != 0xffffffff)
    ecx = edx + 1
else
    edx = 0
    ecx = 0x12

int32_t result = 0

if (edx s< ecx)
    int32_t i_1 = ecx - edx
    int32_t* esi_3 = edx * 0x104 + data_e7e648 + 0x1f64c
    int32_t i
    
    do
        if (esi_3[-0x1c].w != 0xffff)
            if (esi_3[-1] != 0)
                result = 1
            
            if (*esi_3 != 0)
                result = 1
        
        esi_3 = &esi_3[0x41]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
