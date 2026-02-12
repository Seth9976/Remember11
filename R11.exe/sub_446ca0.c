// 函数: sub_446ca0
// 地址: 0x446ca0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t result = sub_446c50(arg1, arg2, arg3, arg4)

if (result != 0xffffffff)
    int32_t edx_3
    
    if (result s< 0)
        edx_3 = data_c7bbac * 0x4c + data_c7b7a4
    else if (result s>= data_c7b7a8)
        edx_3 = 0
    else
        edx_3 = result * 0x4c + data_c7b7a4
    
    char* ecx_1 = arg5
    char* esi_2 = edx_3 + 0x14 - ecx_1
    
    do
        edx_3.b = *ecx_1
        *(esi_2 + ecx_1) = edx_3.b
        ecx_1 = &ecx_1[1]
    while (edx_3.b != 0)

return result
